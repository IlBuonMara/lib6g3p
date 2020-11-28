/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16F1847
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "lib6g3p.h"
#define Display PORTB

/*
                         Main application
 */

void main(void)
{
    Display=0b00000000;

    // initialize the device
    SYSTEM_Initialize();

    while (1)
    {
        if(IO_RA2_GetValue()==1 && IO_RA3_GetValue()==1 && IO_RA4_GetValue()==1)
        {
            Display=0b00000000;  
        }
        else if(IO_RA2_GetValue()==1 && IO_RA3_GetValue()==0 && IO_RA4_GetValue()==0){
            PalleR();
        }
        else if(IO_RA2_GetValue()==0 && IO_RA3_GetValue()==1 && IO_RA4_GetValue()==0){
            Supercar();
        }
        else if(IO_RA2_GetValue()==0 && IO_RA3_GetValue()==0 && IO_RA4_GetValue()==1){
            PariDispari();
        }
        else if(IO_RA2_GetValue()==1 && IO_RA3_GetValue()==1 && IO_RA4_GetValue()==0){
            LampSfas ();
        }
        else if(IO_RA2_GetValue()==1 && IO_RA3_GetValue()==0 && IO_RA4_GetValue()==1){
            QuattroQuarti();
        }
        else if(IO_RA2_GetValue()==0 && IO_RA3_GetValue()==1 && IO_RA4_GetValue()==1){
            Caricamento();
        }
        
    }
}
/**
 End of File
*/