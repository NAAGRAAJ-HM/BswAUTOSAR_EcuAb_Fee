#pragma once
/******************************************************************************/
/* File   : infFee_Version.h                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Version.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FEE_AR_RELEASE_MAJOR_VERSION                                           4
#define FEE_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FEE_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible FEE_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(FEE_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible FEE_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

