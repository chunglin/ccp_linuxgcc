/*******************************************************************************

  File Name   : boot_can.h
  Date        : 14.08.2001
  Version     : 1.0
  Desciption  : header for boot_can.c
                CCP Driver Example

*******************************************************************************/


// -----------------------------------------------------------------------------
// DEFINITION
// -----------------------------------------------------------------------------
#ifndef __BOOT_CAN_H_
#define __BOOT_CAN_H_
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// CAN Transmit / Receive functions
// -----------------------------------------------------------------------------

void ccpBootInit (int, int);
int ccpBootTransmitCrmPossible( void );
void ccpBootTransmitCrm (unsigned char *msg);
int ccpBootReceiveCro (unsigned char *msg);

// -----------------------------------------------------------------------------
#endif
