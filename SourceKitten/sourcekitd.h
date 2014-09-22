//
//  sourcekitd.h
//  SourceKitten
//
//  Created by JP Simard on 9/22/14.
//  Copyright (c) 2014 Realm. All rights reserved.
//

// SourceKit function declarations
// Taken from dissassembling sourcekitd and SourceKitService
// /Applications/Xcode6.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/sourcekitd.framework

/**
 Cancel request
 */
// sourcekitd_cancel_request

/**
 Initialize the SourceKit XPC service. This should only be done once per session (as Xcode does).
 */
int sourcekitd_initialize();

/**
 Create XPC array
 */
// sourcekitd_request_array_create

/**
 Set int64 value in array
 */
// sourcekitd_request_array_set_int64

/**
 Set string value in array
 */
// sourcekitd_request_array_set_string

/**
 Set string value in array from string buffer
 */
// sourcekitd_request_array_set_stringbuf

/**
 Set uid value in array
 */
// sourcekitd_request_array_set_uid

/**
 Set xpc_object_t value in array
 */
// sourcekitd_request_array_set_value

/**
 Create XPC request from YAML c-string
 Interesting...
 */
// sourcekitd_request_create_from_yaml

/**
 Copy string description of XPC request
 Interesting...
 */
// sourcekitd_request_description_copy

/**
 Print string description of XPC request to STDOUT
 */
void sourcekitd_request_description_dump(xpc_object_t);

/**
 Create XPC dictionary
 */
// sourcekitd_request_dictionary_create

/**
 Set int64 value in dictionary
 */
// sourcekitd_request_dictionary_set_int64

/**
 Set string value in dictionary
 */
// sourcekitd_request_dictionary_set_string

/**
 Set string value in dictionary from string buffer
 */
// sourcekitd_request_dictionary_set_stringbuf

/**
 Set uid value in dictionary
 */
// sourcekitd_request_dictionary_set_uid

/**
 Set xpc_object_t value in dictionary
 */
// sourcekitd_request_dictionary_set_value

/**
 Create int64 XPC value
 */
// sourcekitd_request_int64_create

/**
 Decrement the XPC request's retain count by one
 */
// sourcekitd_request_release

/**
 Increment the XPC request's retain count by one
 */
// sourcekitd_request_retain

/**
 Create string XPC value
 */
// sourcekitd_request_string_create

/**
 Create uid XPC value
 */
// sourcekitd_request_uid_create

/**
 Copy string description of XPC response
 Interesting...
 */
// sourcekitd_response_description_copy

/**
 Print string description of XPC response to STDOUT
 */
void sourcekitd_response_description_dump(xpc_object_t);

/**
 Print string description of XPC response and its file description to STDOUT
 NOTE: This does not work, instead simply causing a fatal I/O error
 */
void sourcekitd_response_description_dump_filedesc(xpc_object_t);

/**
 ?? Perhaps forcibly deallocates the response ??
 */
// sourcekitd_response_dispose

/**
 Returns description of the error as c string
 Interesting...
 */
// sourcekitd_response_error_get_description

/**
 ?? Returns type of the error as... something... ??
 */
// sourcekitd_response_error_get_kind

/**
 Returns xpc_object_t value of the response at the given key in the underlying XPC dictionary
 */
// sourcekitd_response_get_value

/**
 Returns whether or not XPC response is an error
 NOTE: I've never seen this return true, despite SourceKit requests failing with an error message
 */
bool sourcekitd_response_is_error(xpc_object_t);

/**
 Send an asynchronous request to SourceKit. Must set a response callback.
 */
// sourcekitd_send_request

/**
 Send a synchronous request to SourceKit. Response is returned as an xpc_object_t. Typically an XPC dictionary.
 */
xpc_object_t sourcekitd_send_request_sync(xpc_object_t);

/**
 ?? Called if the XPC connection to SourceKit is lost ??
 */
// sourcekitd_set_interrupted_connection_handler

/**
 ?? Set the notification callback to be called when asynchronous requests return ??
 */
// sourcekitd_set_notification_handler

/**
 Gracefully shut down the XPC connection to SourceKit (presumably)
 */
// sourcekitd_shutdown

/**
 Get uid from its c string representation.
 */
uint64_t sourcekitd_uid_get_from_cstr(const char *);

/**
 ?? Get uid from a buffer somewhere, somehow ??
 */
// sourcekitd_uid_get_from_buf

/**
 ?? Get length of uid, presumably. But is this the length of the uint64_t the string. ??
 */
// sourcekitd_uid_get_length

/**
 Get c string representation of a uid
 */
const char *sourcekitd_uid_get_string_ptr(uint64_t uid);

/**
 ?? WTF is a sourcekitd variant ??
 */

// sourcekitd_variant_array_apply
// sourcekitd_variant_array_apply_f
// sourcekitd_variant_array_get_bool
// sourcekitd_variant_array_get_count
// sourcekitd_variant_array_get_int64
// sourcekitd_variant_array_get_string
// sourcekitd_variant_array_get_uid
// sourcekitd_variant_array_get_value
// sourcekitd_variant_bool_get_value
// sourcekitd_variant_description_copy
// sourcekitd_variant_description_dump
// sourcekitd_variant_description_dump_filedesc
// sourcekitd_variant_dictionary_apply
// sourcekitd_variant_dictionary_apply_f
// sourcekitd_variant_dictionary_get_bool
// sourcekitd_variant_dictionary_get_int64
// sourcekitd_variant_dictionary_get_string
// sourcekitd_variant_dictionary_get_uid
// sourcekitd_variant_dictionary_get_value
// sourcekitd_variant_get_type
// sourcekitd_variant_int64_get_value
// sourcekitd_variant_string_get_length
// sourcekitd_variant_string_get_ptr
// sourcekitd_variant_uid_get_value
