#pragma once
/******************************************************************************/
/* File   : McalPort.hpp                                                      */
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
#include "infMcalPort_ServiceNvM_Types.hpp"
#include "CfgMcalPort.hpp"
#include "McalPort_core.hpp"
#include "infMcalPort_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalPort:
      INTERFACES_EXPORTED_MCALPORT
      public abstract_module
   ,  public class_McalPort_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALPORT_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALPORT_CONST,       MCALPORT_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALPORT_CONFIG_DATA, MCALPORT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALPORT_CODE) DeInitFunction (void);
      FUNC(void, MCALPORT_CODE) MainFunction   (void);
      MCALPORT_CORE_FUNCTIONALITIES
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
extern VAR(module_McalPort, MCALPORT_VAR) McalPort;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

