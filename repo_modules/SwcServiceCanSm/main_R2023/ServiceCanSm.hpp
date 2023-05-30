#pragma once
/******************************************************************************/
/* File   : ServiceCanSm.hpp                                                  */
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
#include "infServiceCanSm_ServiceNvM_Types.hpp"
#include "CfgServiceCanSm.hpp"
#include "ServiceCanSm_core.hpp"
#include "infServiceCanSm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCanSm:
      INTERFACES_EXPORTED_SERVICECANSM
      public abstract_module
   ,  public class_ServiceCanSm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceCanSm;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECANSM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECANSM_CONST,       SERVICECANSM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECANSM_CONFIG_DATA, SERVICECANSM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECANSM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECANSM_CODE) MainFunction   (void);
      SERVICECANSM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceCanSm, SERVICECANSM_VAR) ServiceCanSm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

