/* Copyright (c) 2018, EmbeddedCentric.com
All rights reserved.
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

//////////////////////////////////////////////////////////////////////////////////
// Company: EmbeddedCentric.com
// Author:  Ali Aljaani
// Create Date:    19 May 2018
// Title: Nordic BLE Training - LabA_6_1 
// Description: A simple program that toggles GPIO number 13 ( P0.13) which is on the nRF52840-DK is connected to LED1
//////////////////////////////////////////////////////////////////////////////////


#include "nrf_gpio.h"     //The GPIO Hardware Abstraction Layer (HAL)
#include "nrf_delay.h"   //For basic delaying functions
#include "pca10056.h"    //GPIO definitions for the nRF52840-DK (aka pca10056)

int main(void)
{
    /* Configure pin 13 as standard output. */
    nrf_gpio_cfg_output(BSP_LED_0); //BSP_LED_0 is pin 13 in the nRF52840-DK

    /* Toggle LED1. */
    while (true)
    {
            
            nrf_gpio_pin_write(BSP_LED_0,1); 
            nrf_delay_ms(500); // On time 
            nrf_gpio_pin_write(BSP_LED_0,0);
            nrf_delay_ms(500);// Off time 
    }
}

