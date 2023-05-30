/******************************************************************************/
/* File   : ServiceComM.cpp                                                   */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceComM.hpp"
#include "infServiceComM_Imp.hpp"

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
VAR(module_ServiceComM, SERVICECOMM_VAR) ServiceComM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICECOMM_CODE) module_ServiceComM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICECOMM_CONST,       SERVICECOMM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECOMM_CONFIG_DATA, SERVICECOMM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceComM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceComM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceComM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceComM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::DeInitFunction(
   void
){
#if(STD_ON == ServiceComM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceComM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceComM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::MainFunction(
   void
){
#if(STD_ON == ServiceComM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceComM_InitCheck)
   }
   else{
#if(STD_ON == ServiceComM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECOMM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetState(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetStatus(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetInhibitionStatus(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::RequestServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetMaxServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetRequestedServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::GetCurrentServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::PreventWakeUp(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::LimitChannelToNoServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::LimitECUToNoServiceComMode(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::ReadInhibitCounter(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::ResetInhibitCounter(
   void
){
}

FUNC(void, SERVICECOMM_CODE) module_ServiceComM::SetECUGroupClassification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

