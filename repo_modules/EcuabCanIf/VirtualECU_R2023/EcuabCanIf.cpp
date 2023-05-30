/******************************************************************************/
/* File   : EcuabCanIf.cpp                                                    */
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
#include "Std_Types.hpp"

#include "EcuabCanIf.hpp"

#include "infEcuabCanIfMcalCan.hpp"
#include "infEcuabCanIfSwcServiceEcuM.hpp"

#include "CfgEcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
const CfgEcuabCanIf_tst* EcuabCanIf_pstConfig;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABCANIF_CODE) infEcuabCanIfSwcServiceEcuM_InitFunction(const CfgEcuabCanIf_tst* pstConfig){
   EcuabCanIf_pstConfig = pstConfig;
}

FUNC(void, ECUABCANIF_CODE) infEcuabCanIfSwcServiceEcuM_DeInitFunction (void){}
FUNC(void, ECUABCANIF_CODE) infEcuabCanIfSwcServiceSchM_MainFunction   (void){}

FUNC(void, ECUABCANIF_CODE) infEcuabCanIfMcalCan_RxIndication(uint8 lu8IndexBufferRx){
   for(
      uint8 lu8IndexRxPdu = 0;
            lu8IndexRxPdu < EcuabCanIf_pstConfig->u8NumMaxRxPdu;
            lu8IndexRxPdu ++
   ){
      if(
            EcuabCanIf_pstConfig->astPduInfoTable[lu8IndexRxPdu].IdCan
         == McalCan_astRxFifio[lu8IndexBufferRx].McalCan_stFrameExtended.IdCan
      ){
         (EcuabCanIf_pstConfig->astPduInfoTable[lu8IndexRxPdu].fptrRxIndicationUpperLayer)(lu8IndexBufferRx);
         break;
      }
   }
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

