#pragma once
/******************************************************************************/
/* File   : EcuabFrTp.hpp                                                          */
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
#include "ConstEcuabFrTp.hpp"
#include "CfgEcuabFrTp.hpp"
#include "EcuabFrTp_core.hpp"
#include "infEcuabFrTp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabFrTp:
      INTERFACES_EXPORTED_FRTP
      public abstract_module
   ,  public class_EcuabFrTp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabFrTp_Type* lptrConst = (ConstEcuabFrTp_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabFrTp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, FRTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, FRTP_CONST,       FRTP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   FRTP_CONFIG_DATA, FRTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FRTP_CODE) DeInitFunction (void);
      FUNC(void, FRTP_CODE) MainFunction   (void);
      FRTP_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabFrTp, FRTP_VAR) EcuabFrTp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

