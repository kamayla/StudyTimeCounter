//
//  ViewController.swift
//  StudyTimeCount
//
//  Created by 上村一平 on 2018/04/09.
//  Copyright © 2018年 上村一平. All rights reserved.
//

import UIKit
import Firebase


class ViewController: UIViewController {
    
    var btnFlag = true
    var startTime: Date!
    var ref: DatabaseReference!
    var goToTime = 36000000.0
    var sumTimeValue = 0.0
    var todayTime: Double!
    var timer: Timer = Timer()
    var count: Double = 0.0
    
    @IBOutlet weak var todayStudyTime: UILabel!
    
    @IBOutlet weak var timeLeft: UILabel!
    @IBOutlet weak var sumTime: UILabel!
    @IBOutlet weak var toTime: UILabel!
    @IBOutlet weak var btn: UIButton!
    @IBOutlet weak var elapsedTime: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        ref = Database.database().reference()
        toTime.text = timeCustum(goToTime)
        ref.child("timedata").observe(.value) { (DataSnap) in
            self.sumTimeValue = 0.0
            for child in DataSnap.children {
                let now = Date()
                let item = child as! DataSnapshot
                let dic = item.value as! NSDictionary
                print(dic["span"] as! Double)
                print(item.key)
                if item.key == self.dateCustum(now) {
                    self.todayTime = dic["span"] as! Double
                    self.todayStudyTime.text = self.timeCustum(self.todayTime)
                }
                self.sumTimeValue = self.sumTimeValue + (dic["span"] as! Double)
            }
            self.sumTime.text = self.timeCustum(self.sumTimeValue)
            self.timeLeft.text = self.timeCustum(self.goToTime - self.sumTimeValue)
            
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func tappedButton(_ sender: Any) {
        
        if btnFlag == true {
            timer = Timer.scheduledTimer(timeInterval: 1, target: self, selector: #selector(updateElapsedTime), userInfo: nil, repeats: true)
            btn.setTitle("STOP", for: .normal)
            print("aaa")
            let now = Date()
            startTime = now
            let formatter = DateFormatter()
            formatter.dateFormat = "yyyy/MM/dd HH:mm:ss"
            
            let string = formatter.string(from: now as Date)
            
            print(string)
        } else if btnFlag == false {
            timer.invalidate()
            count = 0
            elapsedTime.text = "00:00:00"
            btn.setTitle("START", for: .normal)
            print("bbb")
            let now = Date()
            var difference = now.timeIntervalSince(startTime)
            if self.todayTime != nil {
                difference = difference + self.todayTime
            }
            
            
            let formatter = DateFormatter()
            formatter.dateFormat = "yyyy-MM-dd"
            
            let string = dateCustum(now)
            
            print(string)
            print("時差\(difference)")
            
            let data = ["span": difference]
            ref.child("timedata").child(string).setValue(data)
        }
        btnFlag = !btnFlag
    }
    
    //日付を文字列にする関数
    func dateCustum(_ date: Date) -> String {
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy-MM-dd"
        let string = formatter.string(from: date)
        
        return string
    }
    
    
    func timeCustum(_ seccond: Double) -> String {
        
        let time = seccond
        let hh = Int(time / 3600)
        let mm = Int((time - Double(hh * 3600)) / 60)
        let ss = Int(time - Double(hh * 3600 + mm * 60))
        let date_String = String(format: "%02d:%02d:%02d", hh, mm, ss)
        
        print(date_String)
        return date_String
    }
    
    @objc func updateElapsedTime() {
        count += 1
        elapsedTime.text = timeCustum(count)
    }
   
    
    
}

