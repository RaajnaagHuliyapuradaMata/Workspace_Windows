/******************************************************************************/
/* File   : McalWdg.cpp                                                       */
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
#include "McalWdg.hpp"
#include "infMcalWdg_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALWDG_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALWDG_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALWDG_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALWDG_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALWDG_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALWDG_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalWdg, MCALWDG_VAR) McalWdg;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALWDG_CODE) module_McalWdg::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALWDG_CONST,       MCALWDG_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALWDG_CONFIG_DATA, MCALWDG_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalWdg_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalWdg_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalWdg_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalWdg_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalWdg_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALWDG_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALWDG_CODE) module_McalWdg::DeInitFunction(
   void
){
#if(STD_ON == McalWdg_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalWdg_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalWdg_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALWDG_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALWDG_CODE) module_McalWdg::MainFunction(
   void
){
#if(STD_ON == McalWdg_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalWdg_InitCheck)
   }
   else{
#if(STD_ON == McalWdg_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALWDG_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALWDG_CODE) module_McalWdg::SetMode(
   void
){
}

FUNC(void, MCALWDG_CODE) module_McalWdg::SetTriggerCondition(
   void
){
}

FUNC(void, MCALWDG_CODE) module_McalWdg::Cbk_McalGptNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

