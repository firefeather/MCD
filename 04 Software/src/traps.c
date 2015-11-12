/******************************************************************************/
/* 
 *                             	CPU TRAPS
 *       
*/
/******************************************************************************/

/*----------------------------------------------------------------------------*/
/* Body Identification                                                        */
/*----------------------------------------------------------------------------*/
#ifdef TRAPS_C
    #error "!!! FileName ID. It should be Unique !!!"
#else
    #define TRAPS_C
#endif
/*----------------------------------------------------------------------------*/
/* Included files to resolve specific definitions in this file                */
/*----------------------------------------------------------------------------*/
#include "includes.h"


/*----------------------------------------------------------------------------*/
/* Local constants                                                            */
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/* Local macros                                                               */
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/* Local types                                                                */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Local data                                                                 */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Constant local data                                                        */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Exported data                                                              */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Constant exported data                                                     */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* Local function prototypes                                                  */
/*----------------------------------------------------------------------------*/
void __attribute__((__interrupt__)) _OscillatorFail(void);
void __attribute__((__interrupt__)) _AddressError(void);
void __attribute__((__interrupt__)) _StackError(void);
void __attribute__((__interrupt__)) _MathError(void);

/******************************************************************************/
/*                                                                            */
/*                  		 T R A P    H A N D L E R S         	          */
/*                                                                            */
/******************************************************************************/
/******************************************************************************/
/*
* Purpose: 
* Input: 
* Output:  
*/
/******************************************************************************/
void __attribute__((interrupt, no_auto_psv)) _OscillatorFail(void)
{
        INTCON1bits.OSCFAIL = 0;        //Clear the trap flag

        while (1);
}
/******************************************************************************/
/*
* Purpose: 
* Input: 
* Output:  
*/
/******************************************************************************/
void __attribute__((interrupt, no_auto_psv)) _AddressError(void)
{
        INTCON1bits.ADDRERR = 0;        //Clear the trap flag

        while (1);
}

/******************************************************************************/
/*
* Purpose: 
* Input: 
* Output:  
*/
/******************************************************************************/
void __attribute__((interrupt, no_auto_psv)) _StackError(void)
{

        INTCON1bits.STKERR = 0;         //Clear the trap flag
		
        while (1);
}
/******************************************************************************/
/*
* Purpose: 
* Input: 
* Output:  
*/
/******************************************************************************/
void __attribute__((interrupt, no_auto_psv)) _MathError(void)
{
        INTCON1bits.MATHERR = 0;        //Clear the trap flag

        while(1);
}

/******************************************************************************/
/*                                                                            */
/*                       L O C A L   F U N C T I O N S                        */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*
 * Name:      
 * Purpose:   
 * 
*/
/******************************************************************************/

