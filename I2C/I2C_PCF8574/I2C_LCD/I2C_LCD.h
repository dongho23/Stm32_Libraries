/**
 * @author Medeossi Erik
 * @date 15/02/2023
 * @version 0.1.1
 * @details Derived from Mohamed Yaqoob's repository
 * @link Mohamed Yaqoob: https://github.com/MYaqoobEmbedded/STM32-Tutorials
 * @link https://github.com/mede-erik/Stm32_Libraries
 */

#ifndef I2C_LCD_H
#define I2C_LCD_H   

#include "main.h"

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>

static void lcd16x2_i2c_sendCommand(uint8_t command);
static void lcd16x2_i2c_sendData(uint8_t data);
bool lcd16x2_i2c_auto_init(I2C_HandleTypeDef *pI2cHandle);
bool lcd16x2_i2c_addr_init(I2C_HandleTypeDef *pI2cHandle, int addr);
void lcd16x2_i2c_setCursor(uint8_t row, uint8_t col);
void lcd16x2_i2c_1stLine(void);
void lcd16x2_i2c_2ndLine(void);
void lcd16x2_i2c_TwoLines(void);
void lcd16x2_i2c_OneLine(void);
void lcd16x2_i2c_cursorShow(bool state);
void lcd16x2_i2c_clear(void);
void lcd16x2_i2c_display(bool state);
void lcd16x2_i2c_shiftRight(uint8_t offset);
void lcd16x2_i2c_shiftLeft(uint8_t offset);
void lcd16x2_i2c_printf(const char *str, ...);

