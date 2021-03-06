/********************************************************************/
/* Kamui function test program subroutine                           */
/* string display routine for KAMUI                                 */
/********************************************************************/
/*   COPYRIGHT (C) NEC Corporation 1997 - 1999                      */
/*   All rights reserved by NEC Corporation. This program must be   */
/*   used solely for the purpose for which it was furnished by NEC  */
/*   Corporation. No part of this program may be reproduced or      */
/*   disclosed to others, in any form, without the prior written    */
/*   permission of NEC Corporation.                                 */
/*   Use of copyright notice does not evidence publication of this  */
/*   program.                                                       */
/*                                                                  */
/*   Author   : Takeshi Muto / NEC Software, Ltd.                   */
/*   Created  : October 19 1997 by NEC Software, Ltd.               */
/*   Modified : April   09 1998 for SET5                            */
/*              Janualy 08 1999 for Kamui2                          */
/********************************************************************/

/****************************************************************************/
/** Set String **************************************************************/
/****************************************************************************/
#define		PRINTOUT(x)		txt_DispString x;

/****************************************************************************/
/** Set Cursor **************************************************************/
/****************************************************************************/
void 
txt_SetCursor( KMUINT32 x, KMUINT32 y );

/****************************************************************************/
/** Set Scale ***************************************************************/
/****************************************************************************/
void 
txt_SetScale( float x, float y );

/****************************************************************************/
/** Set Color ***************************************************************/
/****************************************************************************/
void 
txt_SetColor( float R, float G, float B );

/****************************************************************************/
/** Set Reverce *************************************************************/
/****************************************************************************/
void 
txt_SetReverce( int flag );

/****************************************************************************/
/** Set Blink ***************************************************************/
/****************************************************************************/
void 
txt_SetBlink( int flag );

/****************************************************************************/
/** Set Blink speed *********************************************************/
/****************************************************************************/
void 
txt_SetBlinkSpeed( int speed );

/****************************************************************************/
/** Clear screen ************************************************************/
/****************************************************************************/
void 
txt_ClearScreen( void );

/****************************************************************************/
/** Init Display String *****************************************************/
/****************************************************************************/
void 
txt_InitDisplayString( void );

/****************************************************************************/
/** Display String **********************************************************/
/****************************************************************************/
void 
txt_DispString( char * string, ... );

/****************************************************************************/
/** Display Screen **********************************************************/
/****************************************************************************/
void 
txt_DispScreen( PKMVERTEXBUFFDESC pBufferDesc );
