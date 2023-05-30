#pragma once
/******************************************************************************/
/* File   : ServiceDet.hpp                                                    */
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
#include "infServiceDet_ServiceNvM_Types.hpp"
#include "CfgServiceDet.hpp"
#include "ServiceDet_core.hpp"
#include "infServiceDet_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceDet:
      INTERFACES_EXPORTED_SERVICEDET
      public abstract_module
   ,  public infServiceDetClient
   ,  public class_ServiceDet_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
   public:
      FUNC(void, SERVICEDET_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEDET_CONST,       SERVICEDET_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEDET_CONFIG_DATA, SERVICEDET_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEDET_CODE) DeInitFunction (void);
      FUNC(void, SERVICEDET_CODE) MainFunction   (void);
      SERVICEDET_CORE_FUNCTIONALITIES

      FUNC(Std_TypeReturn, SERVICEDET_CODE) ReportError(
            uint16 IdModule
         ,  uint8  IdInstance
         ,  uint8  IdApi
         ,  uint8  IdError
      );
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
extern VAR(module_ServiceDet, SERVICEDET_VAR) ServiceDet;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

