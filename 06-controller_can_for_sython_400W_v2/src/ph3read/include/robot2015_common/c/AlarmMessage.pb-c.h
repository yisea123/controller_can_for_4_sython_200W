/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_AlarmMessage_2eproto__INCLUDED
#define PROTOBUF_C_AlarmMessage_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _AlarmMessage AlarmMessage;


/* --- enums --- */


/* --- messages --- */

struct  _AlarmMessage
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ctrolboxhightemalarm;
  protobuf_c_boolean ctrolboxhightemalarm;
  protobuf_c_boolean has_ctrolboxfrozentemalarm;
  protobuf_c_boolean ctrolboxfrozentemalarm;
  protobuf_c_boolean has_bmsmodcomlostalarm;
  protobuf_c_boolean bmsmodcomlostalarm;
  protobuf_c_boolean has_emergency_status_stop;
  protobuf_c_boolean emergency_status_stop;
  protobuf_c_boolean has_ecanexternsnsorndeoff;
  protobuf_c_boolean ecanexternsnsorndeoff;
  protobuf_c_boolean has_zmqtransnodeoff;
  protobuf_c_boolean zmqtransnodeoff;
  protobuf_c_boolean has_joytestnodeoff;
  protobuf_c_boolean joytestnodeoff;
  protobuf_c_boolean has_ph3readnodeoff;
  protobuf_c_boolean ph3readnodeoff;
  protobuf_c_boolean has_ph3readcomlost;
  protobuf_c_boolean ph3readcomlost;
  protobuf_c_boolean has_lasercomlost;
  protobuf_c_boolean lasercomlost;
  protobuf_c_boolean has_lasernodeoff;
  protobuf_c_boolean lasernodeoff;
};
#define ALARM_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&alarm_message__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/* AlarmMessage methods */
void   alarm_message__init
                     (AlarmMessage         *message);
size_t alarm_message__get_packed_size
                     (const AlarmMessage   *message);
size_t alarm_message__pack
                     (const AlarmMessage   *message,
                      uint8_t             *out);
size_t alarm_message__pack_to_buffer
                     (const AlarmMessage   *message,
                      ProtobufCBuffer     *buffer);
AlarmMessage *
       alarm_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   alarm_message__free_unpacked
                     (AlarmMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AlarmMessage_Closure)
                 (const AlarmMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor alarm_message__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_AlarmMessage_2eproto__INCLUDED */
