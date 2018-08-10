/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "ph3airmsg.pb-c.h"
void   ph3airmsg__init
                     (Ph3airmsg         *message)
{
  static Ph3airmsg init_value = PH3AIRMSG__INIT;
  *message = init_value;
}
size_t ph3airmsg__get_packed_size
                     (const Ph3airmsg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ph3airmsg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ph3airmsg__pack
                     (const Ph3airmsg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ph3airmsg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ph3airmsg__pack_to_buffer
                     (const Ph3airmsg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ph3airmsg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ph3airmsg *
       ph3airmsg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ph3airmsg *)
     protobuf_c_message_unpack (&ph3airmsg__descriptor,
                                allocator, len, data);
}
void   ph3airmsg__free_unpacked
                     (Ph3airmsg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ph3airmsg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ph3airmsg__field_descriptors[2] =
{
  {
    "online",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Ph3airmsg, has_online),
    PROTOBUF_C_OFFSETOF(Ph3airmsg, online),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ph3_ppm",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Ph3airmsg, has_ph3_ppm),
    PROTOBUF_C_OFFSETOF(Ph3airmsg, ph3_ppm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ph3airmsg__field_indices_by_name[] = {
  0,   /* field[0] = online */
  1,   /* field[1] = ph3_ppm */
};
static const ProtobufCIntRange ph3airmsg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ph3airmsg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ph3airmsg",
  "Ph3airmsg",
  "Ph3airmsg",
  "",
  sizeof(Ph3airmsg),
  2,
  ph3airmsg__field_descriptors,
  ph3airmsg__field_indices_by_name,
  1,  ph3airmsg__number_ranges,
  (ProtobufCMessageInit) ph3airmsg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
