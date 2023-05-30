#pragma once
/******************************************************************************/
/* File   : CfgEcuabCanIf.hpp                                                 */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabCanIf.hpp"
#include "CanTypes.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CfgEcuabCanIf_NumMaxRxPdu                                              3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef void (*CfgEcuabCanIf_fptrRxIndicationUpperLayer)(uint8 lu8IndexBufferRx);

typedef struct{
   McalCan_teIdFrameExtended                 IdCan;
   CfgEcuabCanIf_fptrRxIndicationUpperLayer fptrRxIndicationUpperLayer;
}CfgEcuabCanIf_tstPduInfo;

typedef struct{
   uint8                                    u8NumMaxRxPdu;
   CfgEcuabCanIf_tstPduInfo                 astPduInfoTable[CfgEcuabCanIf_NumMaxRxPdu];
}CfgEcuabCanIf_tst;


/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const CfgEcuabCanIf_tst CfgEcuabCanIf;

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

