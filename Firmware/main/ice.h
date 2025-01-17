/*
 * ICE.c - interface routines  ICE FPGA
 * 04-04-22 E. Brombaugh
 */
 
#ifndef __ICE__
#define __ICE__

#include "main.h"
#include "esp_event.h"

extern xSemaphoreHandle ice_mutex;

void ICE_Init(void);
uint8_t ICE_FPGA_Config(uint8_t *bitmap, uint32_t size);
void ICE_FPGA_Serial_Write(uint8_t Reg, uint32_t Data);
void ICE_FPGA_Serial_Read(uint8_t Reg, uint32_t *Data);
void ICE_PSRAM_Write(uint32_t Addr, uint8_t *Data, uint32_t size);
void ICE_PSRAM_Read(uint32_t Addr, uint8_t *Data, uint32_t size);

#endif
