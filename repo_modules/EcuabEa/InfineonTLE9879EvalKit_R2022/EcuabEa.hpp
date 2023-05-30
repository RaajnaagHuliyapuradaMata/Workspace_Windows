#pragma once
/******************************************************************************/
/* File   : EcuabEa.hpp                                                            */
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
#include "ConstEcuabEa.hpp"
#include "CfgEcuabEa.hpp"
#include "EcuabEa_core.hpp"
#include "infEcuabEa_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabEa:
      INTERFACES_EXPORTED_ECUABEA
      public abstract_module
   ,  public class_EcuabEa_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabEa_Type* lptrConst = (ConstEcuabEa_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABEA_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABEA_CONST,       ECUABEA_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABEA_CONFIG_DATA, ECUABEA_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABEA_CODE) DeInitFunction (void);
      FUNC(void, ECUABEA_CODE) MainFunction   (void);
      ECUABEA_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabEa, ECUABEA_VAR) EcuabEa;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

