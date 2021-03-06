/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "BMSMessage.pb-c.h"
void   bms_message__status_message__init
                     (BmsMessage__StatusMessage         *message)
{
  static BmsMessage__StatusMessage init_value = BMS_MESSAGE__STATUS_MESSAGE__INIT;
  *message = init_value;
}
void   bms_message__alarm_message__init
                     (BmsMessage__AlarmMessage         *message)
{
  static BmsMessage__AlarmMessage init_value = BMS_MESSAGE__ALARM_MESSAGE__INIT;
  *message = init_value;
}
void   bms_message__init
                     (BmsMessage         *message)
{
  static BmsMessage init_value = BMS_MESSAGE__INIT;
  *message = init_value;
}
size_t bms_message__get_packed_size
                     (const BmsMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bms_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t bms_message__pack
                     (const BmsMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bms_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t bms_message__pack_to_buffer
                     (const BmsMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bms_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BmsMessage *
       bms_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BmsMessage *)
     protobuf_c_message_unpack (&bms_message__descriptor,
                                allocator, len, data);
}
void   bms_message__free_unpacked
                     (BmsMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &bms_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor bms_message__status_message__field_descriptors[8] =
{
  {
    "BMS_status_Charge_Touch",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_charge_touch),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_charge_touch),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_Charge_Connect",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_charge_connect),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_charge_connect),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_Emergency_Status",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_emergency_status),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_emergency_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_Switch_Status",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_switch_status),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_switch_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_Motor24_Status",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_motor24_status),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_motor24_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_SYS24_Status",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_sys24_status),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_sys24_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_Heat_Status",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_heat_status),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_heat_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_status_Fan_Status",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, has_bms_status_fan_status),
    PROTOBUF_C_OFFSETOF(BmsMessage__StatusMessage, bms_status_fan_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned bms_message__status_message__field_indices_by_name[] = {
  1,   /* field[1] = BMS_status_Charge_Connect */
  0,   /* field[0] = BMS_status_Charge_Touch */
  2,   /* field[2] = BMS_status_Emergency_Status */
  7,   /* field[7] = BMS_status_Fan_Status */
  6,   /* field[6] = BMS_status_Heat_Status */
  4,   /* field[4] = BMS_status_Motor24_Status */
  5,   /* field[5] = BMS_status_SYS24_Status */
  3,   /* field[3] = BMS_status_Switch_Status */
};
static const ProtobufCIntRange bms_message__status_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor bms_message__status_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "BmsMessage.statusMessage",
  "StatusMessage",
  "BmsMessage__StatusMessage",
  "",
  sizeof(BmsMessage__StatusMessage),
  8,
  bms_message__status_message__field_descriptors,
  bms_message__status_message__field_indices_by_name,
  1,  bms_message__status_message__number_ranges,
  (ProtobufCMessageInit) bms_message__status_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor bms_message__alarm_message__field_descriptors[8] =
{
  {
    "BMS_error_Voltage_Alarm",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_voltage_alarm),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_voltage_alarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_Voltage_Error",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_voltage_error),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_voltage_error),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_Current_Alarm",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_current_alarm),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_current_alarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_Current_Error",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_current_error),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_current_error),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_Temperature_Alarm",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_temperature_alarm),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_temperature_alarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_Temperature_Error",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_temperature_error),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_temperature_error),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_SOC_Alarm",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_soc_alarm),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_soc_alarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_error_SOC_Error",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, has_bms_error_soc_error),
    PROTOBUF_C_OFFSETOF(BmsMessage__AlarmMessage, bms_error_soc_error),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned bms_message__alarm_message__field_indices_by_name[] = {
  2,   /* field[2] = BMS_error_Current_Alarm */
  3,   /* field[3] = BMS_error_Current_Error */
  6,   /* field[6] = BMS_error_SOC_Alarm */
  7,   /* field[7] = BMS_error_SOC_Error */
  4,   /* field[4] = BMS_error_Temperature_Alarm */
  5,   /* field[5] = BMS_error_Temperature_Error */
  0,   /* field[0] = BMS_error_Voltage_Alarm */
  1,   /* field[1] = BMS_error_Voltage_Error */
};
static const ProtobufCIntRange bms_message__alarm_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor bms_message__alarm_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "BmsMessage.alarmMessage",
  "AlarmMessage",
  "BmsMessage__AlarmMessage",
  "",
  sizeof(BmsMessage__AlarmMessage),
  8,
  bms_message__alarm_message__field_descriptors,
  bms_message__alarm_message__field_indices_by_name,
  1,  bms_message__alarm_message__number_ranges,
  (ProtobufCMessageInit) bms_message__alarm_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor bms_message__field_descriptors[12] =
{
  {
    "Stat",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_stat),
    PROTOBUF_C_OFFSETOF(BmsMessage, stat),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_SOC",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_soc),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_soc),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_FULL_SOC",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_full_soc),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_full_soc),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_Voltage",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_voltage),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_voltage),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_sys_Current",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_sys_current),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_sys_current),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_motor_Current",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_motor_current),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_motor_current),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_charg_Current",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_charg_current),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_charg_current),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_board_temp",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_board_temp),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_board_temp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_battery_tempA",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_battery_tempa),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_battery_tempa),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMS_battery_tempB",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(BmsMessage, has_bms_battery_tempb),
    PROTOBUF_C_OFFSETOF(BmsMessage, bms_battery_tempb),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "statusMsg",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(BmsMessage, statusmsg),
    &bms_message__status_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "alarmMsg",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(BmsMessage, alarmmsg),
    &bms_message__alarm_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned bms_message__field_indices_by_name[] = {
  2,   /* field[2] = BMS_FULL_SOC */
  1,   /* field[1] = BMS_SOC */
  3,   /* field[3] = BMS_Voltage */
  8,   /* field[8] = BMS_battery_tempA */
  9,   /* field[9] = BMS_battery_tempB */
  7,   /* field[7] = BMS_board_temp */
  6,   /* field[6] = BMS_charg_Current */
  5,   /* field[5] = BMS_motor_Current */
  4,   /* field[4] = BMS_sys_Current */
  0,   /* field[0] = Stat */
  11,   /* field[11] = alarmMsg */
  10,   /* field[10] = statusMsg */
};
static const ProtobufCIntRange bms_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 12 }
};
const ProtobufCMessageDescriptor bms_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "BmsMessage",
  "BmsMessage",
  "BmsMessage",
  "",
  sizeof(BmsMessage),
  12,
  bms_message__field_descriptors,
  bms_message__field_indices_by_name,
  1,  bms_message__number_ranges,
  (ProtobufCMessageInit) bms_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
