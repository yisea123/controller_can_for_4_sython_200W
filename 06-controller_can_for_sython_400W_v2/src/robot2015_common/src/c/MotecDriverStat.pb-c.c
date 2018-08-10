/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "MotecDriverStat.pb-c.h"
void   motec_driver_stat__init
                     (MotecDriverStat         *message)
{
  static MotecDriverStat init_value = MOTEC_DRIVER_STAT__INIT;
  *message = init_value;
}
size_t motec_driver_stat__get_packed_size
                     (const MotecDriverStat *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &motec_driver_stat__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t motec_driver_stat__pack
                     (const MotecDriverStat *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &motec_driver_stat__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t motec_driver_stat__pack_to_buffer
                     (const MotecDriverStat *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &motec_driver_stat__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MotecDriverStat *
       motec_driver_stat__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MotecDriverStat *)
     protobuf_c_message_unpack (&motec_driver_stat__descriptor,
                                allocator, len, data);
}
void   motec_driver_stat__free_unpacked
                     (MotecDriverStat *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &motec_driver_stat__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor motec_driver_stat__field_descriptors[35] =
{
  {
    "m_DrivStatus",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_m_drivstatus),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, m_drivstatus),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "m_SerialNo",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_m_serialno),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, m_serialno),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_RATED_VOLTAGE",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_rated_voltage),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_rated_voltage),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_RATED_CURRENT",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_rated_current),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_rated_current),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_ADDRESS",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_address),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_address),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_BAUDRATE",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_baudrate),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_baudrate),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_RATED_POWER",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_rated_power),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_rated_power),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_ENCODER_PPR_HI",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_encoder_ppr_hi),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_encoder_ppr_hi),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_ENCODER_PPR_LO",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_encoder_ppr_lo),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_encoder_ppr_lo),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_QUICK_SOFT_STOP",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_quick_soft_stop),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_quick_soft_stop),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_CLEAR_ERROR_FLAG",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_clear_error_flag),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_clear_error_flag),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_QUICKSTOP_DECELERATION",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_quickstop_deceleration),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_quickstop_deceleration),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_SOFTSTOP_DECELERATION",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_softstop_deceleration),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_softstop_deceleration),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_CURRENT_KP",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_current_kp),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_current_kp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_CURRENT_KI",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_current_ki),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_current_ki),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_POSITION_KP",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_position_kp),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_position_kp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_POSITION_KI",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_position_ki),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_position_ki),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_VELOCITY_KP",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_velocity_kp),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_velocity_kp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_VELOCITY_KI",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_velocity_ki),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_velocity_ki),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_VELOCITY_FEEDF",
    20,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_velocity_feedf),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_velocity_feedf),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_ACCELERATION_FEEDF",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_acceleration_feedf),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_acceleration_feedf),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_RESERVED_148",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_reserved_148),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_reserved_148),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_AXISQ_ACTUAL",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_axisq_actual),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_axisq_actual),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_HALL_STATUS",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_hall_status),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_hall_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_MOTOR_TEMPERATURE",
    25,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_motor_temperature),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_motor_temperature),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_DIGITAL_IN_STATUS",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_digital_in_status),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_digital_in_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_CONTPROT_CURRENT",
    27,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_contprot_current),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_contprot_current),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_MAXVELOCITY_LIMIT",
    28,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_maxvelocity_limit),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_maxvelocity_limit),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_MAX_CURRENT_LIMIT",
    29,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_max_current_limit),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_max_current_limit),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_I2T_TIME",
    30,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_i2t_time),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_i2t_time),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_IPM_TEMPERATURE_ALARM",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_ipm_temperature_alarm),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_ipm_temperature_alarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_IPM_TEMPERATURE_FAULT",
    32,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_ipm_temperature_fault),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_ipm_temperature_fault),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_I2T_ACTUAL",
    33,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_i2t_actual),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_i2t_actual),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_RESERVED299",
    34,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_reserved299),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_reserved299),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CTRL_CTRL_VEL_ACTUAL",
    35,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MotecDriverStat, has_ctrl_ctrl_vel_actual),
    PROTOBUF_C_OFFSETOF(MotecDriverStat, ctrl_ctrl_vel_actual),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned motec_driver_stat__field_indices_by_name[] = {
  20,   /* field[20] = CTRL_ACCELERATION_FEEDF */
  4,   /* field[4] = CTRL_ADDRESS */
  22,   /* field[22] = CTRL_AXISQ_ACTUAL */
  5,   /* field[5] = CTRL_BAUDRATE */
  10,   /* field[10] = CTRL_CLEAR_ERROR_FLAG */
  26,   /* field[26] = CTRL_CONTPROT_CURRENT */
  34,   /* field[34] = CTRL_CTRL_VEL_ACTUAL */
  14,   /* field[14] = CTRL_CURRENT_KI */
  13,   /* field[13] = CTRL_CURRENT_KP */
  25,   /* field[25] = CTRL_DIGITAL_IN_STATUS */
  7,   /* field[7] = CTRL_ENCODER_PPR_HI */
  8,   /* field[8] = CTRL_ENCODER_PPR_LO */
  23,   /* field[23] = CTRL_HALL_STATUS */
  32,   /* field[32] = CTRL_I2T_ACTUAL */
  29,   /* field[29] = CTRL_I2T_TIME */
  30,   /* field[30] = CTRL_IPM_TEMPERATURE_ALARM */
  31,   /* field[31] = CTRL_IPM_TEMPERATURE_FAULT */
  27,   /* field[27] = CTRL_MAXVELOCITY_LIMIT */
  28,   /* field[28] = CTRL_MAX_CURRENT_LIMIT */
  24,   /* field[24] = CTRL_MOTOR_TEMPERATURE */
  16,   /* field[16] = CTRL_POSITION_KI */
  15,   /* field[15] = CTRL_POSITION_KP */
  11,   /* field[11] = CTRL_QUICKSTOP_DECELERATION */
  9,   /* field[9] = CTRL_QUICK_SOFT_STOP */
  3,   /* field[3] = CTRL_RATED_CURRENT */
  6,   /* field[6] = CTRL_RATED_POWER */
  2,   /* field[2] = CTRL_RATED_VOLTAGE */
  33,   /* field[33] = CTRL_RESERVED299 */
  21,   /* field[21] = CTRL_RESERVED_148 */
  12,   /* field[12] = CTRL_SOFTSTOP_DECELERATION */
  19,   /* field[19] = CTRL_VELOCITY_FEEDF */
  18,   /* field[18] = CTRL_VELOCITY_KI */
  17,   /* field[17] = CTRL_VELOCITY_KP */
  0,   /* field[0] = m_DrivStatus */
  1,   /* field[1] = m_SerialNo */
};
static const ProtobufCIntRange motec_driver_stat__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 35 }
};
const ProtobufCMessageDescriptor motec_driver_stat__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "MotecDriverStat",
  "MotecDriverStat",
  "MotecDriverStat",
  "",
  sizeof(MotecDriverStat),
  35,
  motec_driver_stat__field_descriptors,
  motec_driver_stat__field_indices_by_name,
  1,  motec_driver_stat__number_ranges,
  (ProtobufCMessageInit) motec_driver_stat__init,
  NULL,NULL,NULL    /* reserved[123] */
};