#pragma once
/******************************************************************************/
/* File   : ServiceCsm.hpp                                                           */
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
#include "ConstServiceCsm.hpp"
#include "CfgServiceCsm.hpp"
#include "ServiceCsm_core.hpp"
#include "infServiceCsm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCsm:
      INTERFACES_EXPORTED_SERVICECSM
      public abstract_module
   ,  public class_ServiceCsm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceCsm_Type* lptrConst = (ConstServiceCsm_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECSM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECSM_CONST,       SERVICECSM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECSM_CONFIG_DATA, SERVICECSM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECSM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECSM_CODE) MainFunction   (void);
      SERVICECSM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceCsm, SERVICECSM_VAR) ServiceCsm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

