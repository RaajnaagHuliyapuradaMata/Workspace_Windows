#pragma once
/******************************************************************************/
/* File   : ServiceSwcOs.hpp                                                  */
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
#include "ConstServiceSwcOs.hpp"
#include "CfgServiceSwcOs.hpp"
#include "ServiceSwcOs_core.hpp"
#include "infServiceSwcOs_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSwcOs:
      INTERFACES_EXPORTED_SERVICESWCOS
   ,  public abstract_module
   ,  public class_ServiceSwcOs_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSwcOs_Type* lptrConst = (ConstServiceSwcOs_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESWCOS_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESWCOS_CONST,       SERVICESWCOS_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESWCOS_CONFIG_DATA, SERVICESWCOS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESWCOS_CODE) DeInitFunction (void);
      FUNC(void, SERVICESWCOS_CODE) MainFunction   (void);
      SERVICESWCOS_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceSwcOs, SERVICESWCOS_VAR) ServiceSwcOs;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

