/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

// DSHOT will work for motor 1-6.

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {

    DEF_TIM(TIM4, CH3,  PB8,  TIM_USE_PPM,                 TIMER_INPUT_ENABLED,                           0), // PPM   -DMA1_ST7

    DEF_TIM(TIM2, CH4,  PA3,  TIM_USE_MOTOR,               TIMER_OUTPUT_ENABLED,                          1), // PWM1  - DMA1_ST6
    DEF_TIM(TIM8, CH3,  PC8,  TIM_USE_MOTOR,               TIMER_OUTPUT_ENABLED,                          1), // PWM2  - DMA2_ST2
    DEF_TIM(TIM2, CH3,  PA2,  TIM_USE_MOTOR,               TIMER_OUTPUT_ENABLED,                          0), // PWM3  - DMA1_ST1
    DEF_TIM(TIM3, CH4,  PC9,  TIM_USE_MOTOR,               TIMER_OUTPUT_ENABLED,                          0), // PWM4  - DMA1_ST2
    DEF_TIM(TIM1, CH1,  PA8,  TIM_USE_MOTOR,               TIMER_OUTPUT_ENABLED,                          2), // PWM5  - DMA2_ST3
    DEF_TIM(TIM4, CH1,  PB6,  TIM_USE_MOTOR,               TIMER_OUTPUT_ENABLED,                          0), // PWM6  - DMA1_ST0

    DEF_TIM(TIM1,  CH3N, PB1,  TIM_USE_MOTOR | TIM_USE_LED, TIMER_OUTPUT_ENABLED | TIMER_OUTPUT_INVERTED, 0), // S5_OUT - DMA2_ST6


};
