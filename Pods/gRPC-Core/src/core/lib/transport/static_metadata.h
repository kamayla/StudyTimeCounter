/*
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * WARNING: Auto-generated code.
 *
 * To make changes to this file, change
 * tools/codegen/core/gen_static_metadata.py, and then re-run it.
 *
 * See metadata.h for an explanation of the interface here, and metadata.cc for
 * an explanation of what's going on.
 */

#ifndef GRPC_CORE_LIB_TRANSPORT_STATIC_METADATA_H
#define GRPC_CORE_LIB_TRANSPORT_STATIC_METADATA_H

#include "src/core/lib/transport/metadata.h"

#define GRPC_STATIC_MDSTR_COUNT 101
extern const grpc_slice grpc_static_slice_table[GRPC_STATIC_MDSTR_COUNT];
/* ":path" */
#define GRPC_MDSTR_PATH (grpc_static_slice_table[0])
/* ":method" */
#define GRPC_MDSTR_METHOD (grpc_static_slice_table[1])
/* ":status" */
#define GRPC_MDSTR_STATUS (grpc_static_slice_table[2])
/* ":authority" */
#define GRPC_MDSTR_AUTHORITY (grpc_static_slice_table[3])
/* ":scheme" */
#define GRPC_MDSTR_SCHEME (grpc_static_slice_table[4])
/* "te" */
#define GRPC_MDSTR_TE (grpc_static_slice_table[5])
/* "grpc-message" */
#define GRPC_MDSTR_GRPC_MESSAGE (grpc_static_slice_table[6])
/* "grpc-status" */
#define GRPC_MDSTR_GRPC_STATUS (grpc_static_slice_table[7])
/* "grpc-payload-bin" */
#define GRPC_MDSTR_GRPC_PAYLOAD_BIN (grpc_static_slice_table[8])
/* "grpc-encoding" */
#define GRPC_MDSTR_GRPC_ENCODING (grpc_static_slice_table[9])
/* "grpc-accept-encoding" */
#define GRPC_MDSTR_GRPC_ACCEPT_ENCODING (grpc_static_slice_table[10])
/* "grpc-server-stats-bin" */
#define GRPC_MDSTR_GRPC_SERVER_STATS_BIN (grpc_static_slice_table[11])
/* "grpc-tags-bin" */
#define GRPC_MDSTR_GRPC_TAGS_BIN (grpc_static_slice_table[12])
/* "grpc-trace-bin" */
#define GRPC_MDSTR_GRPC_TRACE_BIN (grpc_static_slice_table[13])
/* "content-type" */
#define GRPC_MDSTR_CONTENT_TYPE (grpc_static_slice_table[14])
/* "content-encoding" */
#define GRPC_MDSTR_CONTENT_ENCODING (grpc_static_slice_table[15])
/* "accept-encoding" */
#define GRPC_MDSTR_ACCEPT_ENCODING (grpc_static_slice_table[16])
/* "grpc-internal-encoding-request" */
#define GRPC_MDSTR_GRPC_INTERNAL_ENCODING_REQUEST (grpc_static_slice_table[17])
/* "grpc-internal-stream-encoding-request" */
#define GRPC_MDSTR_GRPC_INTERNAL_STREAM_ENCODING_REQUEST \
  (grpc_static_slice_table[18])
/* "user-agent" */
#define GRPC_MDSTR_USER_AGENT (grpc_static_slice_table[19])
/* "host" */
#define GRPC_MDSTR_HOST (grpc_static_slice_table[20])
/* "lb-token" */
#define GRPC_MDSTR_LB_TOKEN (grpc_static_slice_table[21])
/* "grpc-timeout" */
#define GRPC_MDSTR_GRPC_TIMEOUT (grpc_static_slice_table[22])
/* "" */
#define GRPC_MDSTR_EMPTY (grpc_static_slice_table[23])
/* "grpc.wait_for_ready" */
#define GRPC_MDSTR_GRPC_DOT_WAIT_FOR_READY (grpc_static_slice_table[24])
/* "grpc.timeout" */
#define GRPC_MDSTR_GRPC_DOT_TIMEOUT (grpc_static_slice_table[25])
/* "grpc.max_request_message_bytes" */
#define GRPC_MDSTR_GRPC_DOT_MAX_REQUEST_MESSAGE_BYTES \
  (grpc_static_slice_table[26])
/* "grpc.max_response_message_bytes" */
#define GRPC_MDSTR_GRPC_DOT_MAX_RESPONSE_MESSAGE_BYTES \
  (grpc_static_slice_table[27])
/* "/grpc.lb.v1.LoadBalancer/BalanceLoad" */
#define GRPC_MDSTR_SLASH_GRPC_DOT_LB_DOT_V1_DOT_LOADBALANCER_SLASH_BALANCELOAD \
  (grpc_static_slice_table[28])
/* "deflate" */
#define GRPC_MDSTR_DEFLATE (grpc_static_slice_table[29])
/* "gzip" */
#define GRPC_MDSTR_GZIP (grpc_static_slice_table[30])
/* "stream/gzip" */
#define GRPC_MDSTR_STREAM_SLASH_GZIP (grpc_static_slice_table[31])
/* "0" */
#define GRPC_MDSTR_0 (grpc_static_slice_table[32])
/* "1" */
#define GRPC_MDSTR_1 (grpc_static_slice_table[33])
/* "2" */
#define GRPC_MDSTR_2 (grpc_static_slice_table[34])
/* "identity" */
#define GRPC_MDSTR_IDENTITY (grpc_static_slice_table[35])
/* "trailers" */
#define GRPC_MDSTR_TRAILERS (grpc_static_slice_table[36])
/* "application/grpc" */
#define GRPC_MDSTR_APPLICATION_SLASH_GRPC (grpc_static_slice_table[37])
/* "POST" */
#define GRPC_MDSTR_POST (grpc_static_slice_table[38])
/* "200" */
#define GRPC_MDSTR_200 (grpc_static_slice_table[39])
/* "404" */
#define GRPC_MDSTR_404 (grpc_static_slice_table[40])
/* "http" */
#define GRPC_MDSTR_HTTP (grpc_static_slice_table[41])
/* "https" */
#define GRPC_MDSTR_HTTPS (grpc_static_slice_table[42])
/* "grpc" */
#define GRPC_MDSTR_GRPC (grpc_static_slice_table[43])
/* "GET" */
#define GRPC_MDSTR_GET (grpc_static_slice_table[44])
/* "PUT" */
#define GRPC_MDSTR_PUT (grpc_static_slice_table[45])
/* "/" */
#define GRPC_MDSTR_SLASH (grpc_static_slice_table[46])
/* "/index.html" */
#define GRPC_MDSTR_SLASH_INDEX_DOT_HTML (grpc_static_slice_table[47])
/* "204" */
#define GRPC_MDSTR_204 (grpc_static_slice_table[48])
/* "206" */
#define GRPC_MDSTR_206 (grpc_static_slice_table[49])
/* "304" */
#define GRPC_MDSTR_304 (grpc_static_slice_table[50])
/* "400" */
#define GRPC_MDSTR_400 (grpc_static_slice_table[51])
/* "500" */
#define GRPC_MDSTR_500 (grpc_static_slice_table[52])
/* "accept-charset" */
#define GRPC_MDSTR_ACCEPT_CHARSET (grpc_static_slice_table[53])
/* "gzip, deflate" */
#define GRPC_MDSTR_GZIP_COMMA_DEFLATE (grpc_static_slice_table[54])
/* "accept-language" */
#define GRPC_MDSTR_ACCEPT_LANGUAGE (grpc_static_slice_table[55])
/* "accept-ranges" */
#define GRPC_MDSTR_ACCEPT_RANGES (grpc_static_slice_table[56])
/* "accept" */
#define GRPC_MDSTR_ACCEPT (grpc_static_slice_table[57])
/* "access-control-allow-origin" */
#define GRPC_MDSTR_ACCESS_CONTROL_ALLOW_ORIGIN (grpc_static_slice_table[58])
/* "age" */
#define GRPC_MDSTR_AGE (grpc_static_slice_table[59])
/* "allow" */
#define GRPC_MDSTR_ALLOW (grpc_static_slice_table[60])
/* "authorization" */
#define GRPC_MDSTR_AUTHORIZATION (grpc_static_slice_table[61])
/* "cache-control" */
#define GRPC_MDSTR_CACHE_CONTROL (grpc_static_slice_table[62])
/* "content-disposition" */
#define GRPC_MDSTR_CONTENT_DISPOSITION (grpc_static_slice_table[63])
/* "content-language" */
#define GRPC_MDSTR_CONTENT_LANGUAGE (grpc_static_slice_table[64])
/* "content-length" */
#define GRPC_MDSTR_CONTENT_LENGTH (grpc_static_slice_table[65])
/* "content-location" */
#define GRPC_MDSTR_CONTENT_LOCATION (grpc_static_slice_table[66])
/* "content-range" */
#define GRPC_MDSTR_CONTENT_RANGE (grpc_static_slice_table[67])
/* "cookie" */
#define GRPC_MDSTR_COOKIE (grpc_static_slice_table[68])
/* "date" */
#define GRPC_MDSTR_DATE (grpc_static_slice_table[69])
/* "etag" */
#define GRPC_MDSTR_ETAG (grpc_static_slice_table[70])
/* "expect" */
#define GRPC_MDSTR_EXPECT (grpc_static_slice_table[71])
/* "expires" */
#define GRPC_MDSTR_EXPIRES (grpc_static_slice_table[72])
/* "from" */
#define GRPC_MDSTR_FROM (grpc_static_slice_table[73])
/* "if-match" */
#define GRPC_MDSTR_IF_MATCH (grpc_static_slice_table[74])
/* "if-modified-since" */
#define GRPC_MDSTR_IF_MODIFIED_SINCE (grpc_static_slice_table[75])
/* "if-none-match" */
#define GRPC_MDSTR_IF_NONE_MATCH (grpc_static_slice_table[76])
/* "if-range" */
#define GRPC_MDSTR_IF_RANGE (grpc_static_slice_table[77])
/* "if-unmodified-since" */
#define GRPC_MDSTR_IF_UNMODIFIED_SINCE (grpc_static_slice_table[78])
/* "last-modified" */
#define GRPC_MDSTR_LAST_MODIFIED (grpc_static_slice_table[79])
/* "lb-cost-bin" */
#define GRPC_MDSTR_LB_COST_BIN (grpc_static_slice_table[80])
/* "link" */
#define GRPC_MDSTR_LINK (grpc_static_slice_table[81])
/* "location" */
#define GRPC_MDSTR_LOCATION (grpc_static_slice_table[82])
/* "max-forwards" */
#define GRPC_MDSTR_MAX_FORWARDS (grpc_static_slice_table[83])
/* "proxy-authenticate" */
#define GRPC_MDSTR_PROXY_AUTHENTICATE (grpc_static_slice_table[84])
/* "proxy-authorization" */
#define GRPC_MDSTR_PROXY_AUTHORIZATION (grpc_static_slice_table[85])
/* "range" */
#define GRPC_MDSTR_RANGE (grpc_static_slice_table[86])
/* "referer" */
#define GRPC_MDSTR_REFERER (grpc_static_slice_table[87])
/* "refresh" */
#define GRPC_MDSTR_REFRESH (grpc_static_slice_table[88])
/* "retry-after" */
#define GRPC_MDSTR_RETRY_AFTER (grpc_static_slice_table[89])
/* "server" */
#define GRPC_MDSTR_SERVER (grpc_static_slice_table[90])
/* "set-cookie" */
#define GRPC_MDSTR_SET_COOKIE (grpc_static_slice_table[91])
/* "strict-transport-security" */
#define GRPC_MDSTR_STRICT_TRANSPORT_SECURITY (grpc_static_slice_table[92])
/* "transfer-encoding" */
#define GRPC_MDSTR_TRANSFER_ENCODING (grpc_static_slice_table[93])
/* "vary" */
#define GRPC_MDSTR_VARY (grpc_static_slice_table[94])
/* "via" */
#define GRPC_MDSTR_VIA (grpc_static_slice_table[95])
/* "www-authenticate" */
#define GRPC_MDSTR_WWW_AUTHENTICATE (grpc_static_slice_table[96])
/* "identity,deflate" */
#define GRPC_MDSTR_IDENTITY_COMMA_DEFLATE (grpc_static_slice_table[97])
/* "identity,gzip" */
#define GRPC_MDSTR_IDENTITY_COMMA_GZIP (grpc_static_slice_table[98])
/* "deflate,gzip" */
#define GRPC_MDSTR_DEFLATE_COMMA_GZIP (grpc_static_slice_table[99])
/* "identity,deflate,gzip" */
#define GRPC_MDSTR_IDENTITY_COMMA_DEFLATE_COMMA_GZIP \
  (grpc_static_slice_table[100])

extern const grpc_slice_refcount_vtable grpc_static_metadata_vtable;
extern grpc_slice_refcount
    grpc_static_metadata_refcounts[GRPC_STATIC_MDSTR_COUNT];
#define GRPC_IS_STATIC_METADATA_STRING(slice) \
  ((slice).refcount != NULL &&                \
   (slice).refcount->vtable == &grpc_static_metadata_vtable)

#define GRPC_STATIC_METADATA_INDEX(static_slice) \
  ((int)((static_slice).refcount - grpc_static_metadata_refcounts))

#define GRPC_STATIC_MDELEM_COUNT 86
extern grpc_mdelem_data grpc_static_mdelem_table[GRPC_STATIC_MDELEM_COUNT];
extern uintptr_t grpc_static_mdelem_user_data[GRPC_STATIC_MDELEM_COUNT];
/* "grpc-status": "0" */
#define GRPC_MDELEM_GRPC_STATUS_0 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[0], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-status": "1" */
#define GRPC_MDELEM_GRPC_STATUS_1 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[1], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-status": "2" */
#define GRPC_MDELEM_GRPC_STATUS_2 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[2], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-encoding": "identity" */
#define GRPC_MDELEM_GRPC_ENCODING_IDENTITY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[3], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-encoding": "gzip" */
#define GRPC_MDELEM_GRPC_ENCODING_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[4], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-encoding": "deflate" */
#define GRPC_MDELEM_GRPC_ENCODING_DEFLATE \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[5], GRPC_MDELEM_STORAGE_STATIC))
/* "te": "trailers" */
#define GRPC_MDELEM_TE_TRAILERS \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[6], GRPC_MDELEM_STORAGE_STATIC))
/* "content-type": "application/grpc" */
#define GRPC_MDELEM_CONTENT_TYPE_APPLICATION_SLASH_GRPC \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[7], GRPC_MDELEM_STORAGE_STATIC))
/* ":method": "POST" */
#define GRPC_MDELEM_METHOD_POST \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[8], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "200" */
#define GRPC_MDELEM_STATUS_200 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[9], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "404" */
#define GRPC_MDELEM_STATUS_404 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[10], GRPC_MDELEM_STORAGE_STATIC))
/* ":scheme": "http" */
#define GRPC_MDELEM_SCHEME_HTTP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[11], GRPC_MDELEM_STORAGE_STATIC))
/* ":scheme": "https" */
#define GRPC_MDELEM_SCHEME_HTTPS \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[12], GRPC_MDELEM_STORAGE_STATIC))
/* ":scheme": "grpc" */
#define GRPC_MDELEM_SCHEME_GRPC \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[13], GRPC_MDELEM_STORAGE_STATIC))
/* ":authority": "" */
#define GRPC_MDELEM_AUTHORITY_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[14], GRPC_MDELEM_STORAGE_STATIC))
/* ":method": "GET" */
#define GRPC_MDELEM_METHOD_GET \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[15], GRPC_MDELEM_STORAGE_STATIC))
/* ":method": "PUT" */
#define GRPC_MDELEM_METHOD_PUT \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[16], GRPC_MDELEM_STORAGE_STATIC))
/* ":path": "/" */
#define GRPC_MDELEM_PATH_SLASH \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[17], GRPC_MDELEM_STORAGE_STATIC))
/* ":path": "/index.html" */
#define GRPC_MDELEM_PATH_SLASH_INDEX_DOT_HTML \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[18], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "204" */
#define GRPC_MDELEM_STATUS_204 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[19], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "206" */
#define GRPC_MDELEM_STATUS_206 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[20], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "304" */
#define GRPC_MDELEM_STATUS_304 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[21], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "400" */
#define GRPC_MDELEM_STATUS_400 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[22], GRPC_MDELEM_STORAGE_STATIC))
/* ":status": "500" */
#define GRPC_MDELEM_STATUS_500 \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[23], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-charset": "" */
#define GRPC_MDELEM_ACCEPT_CHARSET_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[24], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-encoding": "" */
#define GRPC_MDELEM_ACCEPT_ENCODING_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[25], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-encoding": "gzip, deflate" */
#define GRPC_MDELEM_ACCEPT_ENCODING_GZIP_COMMA_DEFLATE \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[26], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-language": "" */
#define GRPC_MDELEM_ACCEPT_LANGUAGE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[27], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-ranges": "" */
#define GRPC_MDELEM_ACCEPT_RANGES_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[28], GRPC_MDELEM_STORAGE_STATIC))
/* "accept": "" */
#define GRPC_MDELEM_ACCEPT_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[29], GRPC_MDELEM_STORAGE_STATIC))
/* "access-control-allow-origin": "" */
#define GRPC_MDELEM_ACCESS_CONTROL_ALLOW_ORIGIN_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[30], GRPC_MDELEM_STORAGE_STATIC))
/* "age": "" */
#define GRPC_MDELEM_AGE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[31], GRPC_MDELEM_STORAGE_STATIC))
/* "allow": "" */
#define GRPC_MDELEM_ALLOW_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[32], GRPC_MDELEM_STORAGE_STATIC))
/* "authorization": "" */
#define GRPC_MDELEM_AUTHORIZATION_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[33], GRPC_MDELEM_STORAGE_STATIC))
/* "cache-control": "" */
#define GRPC_MDELEM_CACHE_CONTROL_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[34], GRPC_MDELEM_STORAGE_STATIC))
/* "content-disposition": "" */
#define GRPC_MDELEM_CONTENT_DISPOSITION_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[35], GRPC_MDELEM_STORAGE_STATIC))
/* "content-encoding": "identity" */
#define GRPC_MDELEM_CONTENT_ENCODING_IDENTITY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[36], GRPC_MDELEM_STORAGE_STATIC))
/* "content-encoding": "gzip" */
#define GRPC_MDELEM_CONTENT_ENCODING_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[37], GRPC_MDELEM_STORAGE_STATIC))
/* "content-encoding": "" */
#define GRPC_MDELEM_CONTENT_ENCODING_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[38], GRPC_MDELEM_STORAGE_STATIC))
/* "content-language": "" */
#define GRPC_MDELEM_CONTENT_LANGUAGE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[39], GRPC_MDELEM_STORAGE_STATIC))
/* "content-length": "" */
#define GRPC_MDELEM_CONTENT_LENGTH_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[40], GRPC_MDELEM_STORAGE_STATIC))
/* "content-location": "" */
#define GRPC_MDELEM_CONTENT_LOCATION_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[41], GRPC_MDELEM_STORAGE_STATIC))
/* "content-range": "" */
#define GRPC_MDELEM_CONTENT_RANGE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[42], GRPC_MDELEM_STORAGE_STATIC))
/* "content-type": "" */
#define GRPC_MDELEM_CONTENT_TYPE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[43], GRPC_MDELEM_STORAGE_STATIC))
/* "cookie": "" */
#define GRPC_MDELEM_COOKIE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[44], GRPC_MDELEM_STORAGE_STATIC))
/* "date": "" */
#define GRPC_MDELEM_DATE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[45], GRPC_MDELEM_STORAGE_STATIC))
/* "etag": "" */
#define GRPC_MDELEM_ETAG_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[46], GRPC_MDELEM_STORAGE_STATIC))
/* "expect": "" */
#define GRPC_MDELEM_EXPECT_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[47], GRPC_MDELEM_STORAGE_STATIC))
/* "expires": "" */
#define GRPC_MDELEM_EXPIRES_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[48], GRPC_MDELEM_STORAGE_STATIC))
/* "from": "" */
#define GRPC_MDELEM_FROM_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[49], GRPC_MDELEM_STORAGE_STATIC))
/* "host": "" */
#define GRPC_MDELEM_HOST_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[50], GRPC_MDELEM_STORAGE_STATIC))
/* "if-match": "" */
#define GRPC_MDELEM_IF_MATCH_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[51], GRPC_MDELEM_STORAGE_STATIC))
/* "if-modified-since": "" */
#define GRPC_MDELEM_IF_MODIFIED_SINCE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[52], GRPC_MDELEM_STORAGE_STATIC))
/* "if-none-match": "" */
#define GRPC_MDELEM_IF_NONE_MATCH_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[53], GRPC_MDELEM_STORAGE_STATIC))
/* "if-range": "" */
#define GRPC_MDELEM_IF_RANGE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[54], GRPC_MDELEM_STORAGE_STATIC))
/* "if-unmodified-since": "" */
#define GRPC_MDELEM_IF_UNMODIFIED_SINCE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[55], GRPC_MDELEM_STORAGE_STATIC))
/* "last-modified": "" */
#define GRPC_MDELEM_LAST_MODIFIED_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[56], GRPC_MDELEM_STORAGE_STATIC))
/* "lb-token": "" */
#define GRPC_MDELEM_LB_TOKEN_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[57], GRPC_MDELEM_STORAGE_STATIC))
/* "lb-cost-bin": "" */
#define GRPC_MDELEM_LB_COST_BIN_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[58], GRPC_MDELEM_STORAGE_STATIC))
/* "link": "" */
#define GRPC_MDELEM_LINK_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[59], GRPC_MDELEM_STORAGE_STATIC))
/* "location": "" */
#define GRPC_MDELEM_LOCATION_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[60], GRPC_MDELEM_STORAGE_STATIC))
/* "max-forwards": "" */
#define GRPC_MDELEM_MAX_FORWARDS_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[61], GRPC_MDELEM_STORAGE_STATIC))
/* "proxy-authenticate": "" */
#define GRPC_MDELEM_PROXY_AUTHENTICATE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[62], GRPC_MDELEM_STORAGE_STATIC))
/* "proxy-authorization": "" */
#define GRPC_MDELEM_PROXY_AUTHORIZATION_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[63], GRPC_MDELEM_STORAGE_STATIC))
/* "range": "" */
#define GRPC_MDELEM_RANGE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[64], GRPC_MDELEM_STORAGE_STATIC))
/* "referer": "" */
#define GRPC_MDELEM_REFERER_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[65], GRPC_MDELEM_STORAGE_STATIC))
/* "refresh": "" */
#define GRPC_MDELEM_REFRESH_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[66], GRPC_MDELEM_STORAGE_STATIC))
/* "retry-after": "" */
#define GRPC_MDELEM_RETRY_AFTER_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[67], GRPC_MDELEM_STORAGE_STATIC))
/* "server": "" */
#define GRPC_MDELEM_SERVER_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[68], GRPC_MDELEM_STORAGE_STATIC))
/* "set-cookie": "" */
#define GRPC_MDELEM_SET_COOKIE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[69], GRPC_MDELEM_STORAGE_STATIC))
/* "strict-transport-security": "" */
#define GRPC_MDELEM_STRICT_TRANSPORT_SECURITY_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[70], GRPC_MDELEM_STORAGE_STATIC))
/* "transfer-encoding": "" */
#define GRPC_MDELEM_TRANSFER_ENCODING_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[71], GRPC_MDELEM_STORAGE_STATIC))
/* "user-agent": "" */
#define GRPC_MDELEM_USER_AGENT_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[72], GRPC_MDELEM_STORAGE_STATIC))
/* "vary": "" */
#define GRPC_MDELEM_VARY_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[73], GRPC_MDELEM_STORAGE_STATIC))
/* "via": "" */
#define GRPC_MDELEM_VIA_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[74], GRPC_MDELEM_STORAGE_STATIC))
/* "www-authenticate": "" */
#define GRPC_MDELEM_WWW_AUTHENTICATE_EMPTY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[75], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "identity" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[76], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "deflate" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_DEFLATE \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[77], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "identity,deflate" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_DEFLATE \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[78], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "gzip" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[79], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "identity,gzip" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[80], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "deflate,gzip" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_DEFLATE_COMMA_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[81], GRPC_MDELEM_STORAGE_STATIC))
/* "grpc-accept-encoding": "identity,deflate,gzip" */
#define GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_DEFLATE_COMMA_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[82], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-encoding": "identity" */
#define GRPC_MDELEM_ACCEPT_ENCODING_IDENTITY \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[83], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-encoding": "gzip" */
#define GRPC_MDELEM_ACCEPT_ENCODING_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[84], GRPC_MDELEM_STORAGE_STATIC))
/* "accept-encoding": "identity,gzip" */
#define GRPC_MDELEM_ACCEPT_ENCODING_IDENTITY_COMMA_GZIP \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table[85], GRPC_MDELEM_STORAGE_STATIC))

grpc_mdelem grpc_static_mdelem_for_static_strings(int a, int b);
typedef enum {
  GRPC_BATCH_PATH,
  GRPC_BATCH_METHOD,
  GRPC_BATCH_STATUS,
  GRPC_BATCH_AUTHORITY,
  GRPC_BATCH_SCHEME,
  GRPC_BATCH_TE,
  GRPC_BATCH_GRPC_MESSAGE,
  GRPC_BATCH_GRPC_STATUS,
  GRPC_BATCH_GRPC_PAYLOAD_BIN,
  GRPC_BATCH_GRPC_ENCODING,
  GRPC_BATCH_GRPC_ACCEPT_ENCODING,
  GRPC_BATCH_GRPC_SERVER_STATS_BIN,
  GRPC_BATCH_GRPC_TAGS_BIN,
  GRPC_BATCH_GRPC_TRACE_BIN,
  GRPC_BATCH_CONTENT_TYPE,
  GRPC_BATCH_CONTENT_ENCODING,
  GRPC_BATCH_ACCEPT_ENCODING,
  GRPC_BATCH_GRPC_INTERNAL_ENCODING_REQUEST,
  GRPC_BATCH_GRPC_INTERNAL_STREAM_ENCODING_REQUEST,
  GRPC_BATCH_USER_AGENT,
  GRPC_BATCH_HOST,
  GRPC_BATCH_LB_TOKEN,
  GRPC_BATCH_CALLOUTS_COUNT
} grpc_metadata_batch_callouts_index;

typedef union {
  struct grpc_linked_mdelem* array[GRPC_BATCH_CALLOUTS_COUNT];
  struct {
    struct grpc_linked_mdelem* path;
    struct grpc_linked_mdelem* method;
    struct grpc_linked_mdelem* status;
    struct grpc_linked_mdelem* authority;
    struct grpc_linked_mdelem* scheme;
    struct grpc_linked_mdelem* te;
    struct grpc_linked_mdelem* grpc_message;
    struct grpc_linked_mdelem* grpc_status;
    struct grpc_linked_mdelem* grpc_payload_bin;
    struct grpc_linked_mdelem* grpc_encoding;
    struct grpc_linked_mdelem* grpc_accept_encoding;
    struct grpc_linked_mdelem* grpc_server_stats_bin;
    struct grpc_linked_mdelem* grpc_tags_bin;
    struct grpc_linked_mdelem* grpc_trace_bin;
    struct grpc_linked_mdelem* content_type;
    struct grpc_linked_mdelem* content_encoding;
    struct grpc_linked_mdelem* accept_encoding;
    struct grpc_linked_mdelem* grpc_internal_encoding_request;
    struct grpc_linked_mdelem* grpc_internal_stream_encoding_request;
    struct grpc_linked_mdelem* user_agent;
    struct grpc_linked_mdelem* host;
    struct grpc_linked_mdelem* lb_token;
  } named;
} grpc_metadata_batch_callouts;

#define GRPC_BATCH_INDEX_OF(slice)                      \
  (GRPC_IS_STATIC_METADATA_STRING((slice))              \
       ? (grpc_metadata_batch_callouts_index)GPR_CLAMP( \
             GRPC_STATIC_METADATA_INDEX((slice)), 0,    \
             GRPC_BATCH_CALLOUTS_COUNT)                 \
       : GRPC_BATCH_CALLOUTS_COUNT)

extern bool grpc_static_callout_is_default[GRPC_BATCH_CALLOUTS_COUNT];

extern const uint8_t grpc_static_accept_encoding_metadata[8];
#define GRPC_MDELEM_ACCEPT_ENCODING_FOR_ALGORITHMS(algs)                       \
  (GRPC_MAKE_MDELEM(                                                           \
      &grpc_static_mdelem_table[grpc_static_accept_encoding_metadata[(algs)]], \
      GRPC_MDELEM_STORAGE_STATIC))

extern const uint8_t grpc_static_accept_stream_encoding_metadata[4];
#define GRPC_MDELEM_ACCEPT_STREAM_ENCODING_FOR_ALGORITHMS(algs)                \
  (GRPC_MAKE_MDELEM(&grpc_static_mdelem_table                                  \
                        [grpc_static_accept_stream_encoding_metadata[(algs)]], \
                    GRPC_MDELEM_STORAGE_STATIC))
#endif /* GRPC_CORE_LIB_TRANSPORT_STATIC_METADATA_H */
