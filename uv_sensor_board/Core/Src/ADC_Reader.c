/*
 * ADC_Reader.c
 *
 *  Created on: Nov 14, 2024
 *      Author: koby
 */

#include "main.h"
#include <string.h>
#include <stdio.h>



//int ADC_Reader(ADC_HandleTypeDef *hadc, UART_HandleTypeDef *huart) {
////Start the ADC
//  HAL_ADC_Start(hadc);
//  //Declare variables to hold ADC data, and UART Transmit messages
//  uint32_t ADC_Value;
//  char msg[50];
//
//  // Wait for the ADC to finish conversion
//  HAL_ADC_PollForConversion(hadc, 100);
//  //Read ADC value
//  ADC_Value = HAL_ADC_GetValue(hadc);
//  ADC_Value = 1200;
//  float voltage = (ADC_Value / 4095.0f) * 3.3f;
//  //Write message to char array
//  sprintf(msg, "ADC Value: %u, Voltage: %.2fV\r\n", ADC_Value, voltage);
//  //Transmit message through UART
//  HAL_UART_Transmit(huart, (uint8_t*)msg, strlen(msg), 100);
//
//  return 1;
//
//}
