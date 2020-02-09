/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: debugger.proto */

#ifndef PROTOBUF_C_debugger_2eproto__INCLUDED
#define PROTOBUF_C_debugger_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include <Messaging/Rpc/rpc.pb-c.h>

typedef struct _DbgProcListRequest DbgProcListRequest;


/* --- enums --- */


/* --- messages --- */

struct  _DbgProcListRequest
{
  ProtobufCMessage base;
};
#define DBG_PROC_LIST_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dbg_proc_list_request__descriptor) \
     }


/* DbgProcListRequest methods */
void   dbg_proc_list_request__init
                     (DbgProcListRequest         *message);
size_t dbg_proc_list_request__get_packed_size
                     (const DbgProcListRequest   *message);
size_t dbg_proc_list_request__pack
                     (const DbgProcListRequest   *message,
                      uint8_t             *out);
size_t dbg_proc_list_request__pack_to_buffer
                     (const DbgProcListRequest   *message,
                      ProtobufCBuffer     *buffer);
DbgProcListRequest *
       dbg_proc_list_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dbg_proc_list_request__free_unpacked
                     (DbgProcListRequest *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DbgProcListRequest_Closure)
                 (const DbgProcListRequest *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor dbg_proc_list_request__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_debugger_2eproto__INCLUDED */
