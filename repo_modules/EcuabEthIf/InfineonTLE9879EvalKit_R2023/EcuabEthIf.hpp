#pragma once
/******************************************************************************/
/* File   : EcuabEthIf.hpp                                                    */
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
#include "infEcuabEthIf_ServiceNvM_Types.hpp"
#include "CfgEcuabEthIf.hpp"
#include "EcuabEthIf_core.hpp"
#include "infEcuabEthIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabEthIf:
      INTERFACES_EXPORTED_ECUABETHIF
      public abstract_module
   ,  public class_EcuabEthIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabEthIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABETHIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABETHIF_CONST,       ECUABETHIF_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABETHIF_CONFIG_DATA, ECUABETHIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABETHIF_CODE) DeInitFunction    (void);
      FUNC(void, ECUABETHIF_CODE) MainFunction      (void);
      ECUABETHIF_CORE_FUNCTIONALITIES

      FUNC(void, ECUABETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ECUABETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ECUABETHIF_CODE) MainFunctionState (void);
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
extern VAR(module_EcuabEthIf, ECUABETHIF_VAR) EcuabEthIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

