#pragma once
/******************************************************************************/
/* File   : McalEep.hpp                                                           */
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
#include "ConstMcalEep.hpp"
#include "CfgMcalEep.hpp"
#include "McalEep_core.hpp"
#include "infMcalEep_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalEep:
      INTERFACES_EXPORTED_MCALEEP
      public abstract_module
   ,  public class_McalEep_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalEep_Type* lptrConst = (ConstMcalEep_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALEEP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALEEP_CONST,       MCALEEP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALEEP_CONFIG_DATA, MCALEEP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALEEP_CODE) DeInitFunction (void);
      FUNC(void, MCALEEP_CODE) MainFunction   (void);
      MCALEEP_CORE_FUNCTIONALITIES
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
extern VAR(module_McalEep, MCALEEP_VAR) McalEep;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

