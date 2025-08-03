#ifndef __CRC_H
#define __CRC_H

#include "py32f07x_hal.h"

// void crc_calculate(void);
uint32_t crc_calculate(uint8_t *raw_data, uint16_t u8_len);

#endif /* __CRC_H */
