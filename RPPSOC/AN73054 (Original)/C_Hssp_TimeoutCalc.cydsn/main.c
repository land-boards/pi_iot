/*******************************************************************************
* File Name: main.c
* Version 3.0
*
* Description:
*  This file has the main function that calls the functions used to calculate
*  the timeout parameters used in the HSSP application.
*
* Note:
*  To calculate each timeout parameter, the corresponding function needs to be 
*  uncommented in the for loop of the main function, and the procedure given
*  in the TimeoutCalc.h under each timeout parameter should be used to
*  calculate the timeout parameter.
*  The calculated values should then be used in the main HSSP project in the
*  file Timeout.h.
*******************************************************************************/

#include <project.h>  /* Remove this header file for non PSoC 5LP host programmer */

/* This header file has the function declarations, macros used to arrive at the timeout 
   parameter values */
#include "TimeoutCalc.h"

int main()
{
    TESTPIN_DRIVEMODE_CMOSOUT; /* Set TEST pin for Strong drive mode */
    TESTPIN_OUTPUT_HIGH;       /* Drive the pin high */
    
    for(;;)
    {
        /* Uncomment ONLY ONE of the functions below at a time. Then, calculate the 
           corresponding timeout parameter using the explanation provided for the
           timeout parameter in the file TimeoutCalc.h */
    
        TestDelayHundredUs(); /* Uncomment this line to calculate the timeout parameter XRES_PULSE_100US */
//        TestSwdck();          /* Uncomment this line to calculate the timeout parameter TIME_WINDOW_68US */  
//        TestAcquirePacket();  /* Uncomment this line to calculate the timeout parameter DEVICE_ACQUIRE_TIMEOUT */         
//        TestSwdReadPacket();  /* Uncomment this line to calculate the timeout parameter SPC_POLLING_TIMEOUT */
    

    }
}

/* [] END OF FILE */
