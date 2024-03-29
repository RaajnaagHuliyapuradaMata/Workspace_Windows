/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2014 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  expdat_csum.h
 *        \brief  Implementation of the checksum calculation functions.
 *
 *      \details  This file contains the interface functions for the checksum calculations.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Armin Happel                  vishp         Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2014-12-18  vishp                 Creation
 *********************************************************************************************************************/

#if !defined (__EXPDAT_CSUMTABLES_H__)
#define __EXPDAT_CSUMTABLES_H__


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *********************************************************************************************************************/

/* Hella shift value */
#define B8              0x0008U



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
extern const WORD CRC16CCITTtab[256];
extern const DWORD crc32Table[256];
extern const unsigned short crc16Table[256]; /* CRC lookup table */
extern const int gCrc16X25Table[256];
/* The PREH specific X.25 table */
extern const WORD kausCrcTable16_cafe[256];

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/



#ifdef __cplusplus
}
#endif

#endif  /* __EXPDAT_CSUM_H__ */

/**********************************************************************************************************************
 *  END OF FILE: expdat_csum.h
 *********************************************************************************************************************/
