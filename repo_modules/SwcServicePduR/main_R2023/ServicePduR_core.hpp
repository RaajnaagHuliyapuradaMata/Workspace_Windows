#pragma once
/******************************************************************************/
/* File   : ServicePduR_core.hpp                                                     */
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
#include "CompilerCfg_ServicePduR.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEPDUR_CORE_FUNCTIONALITIES                                                                         \
              FUNC(uint16, SERVICEPDUR_CODE) GetConfigurationId (void);                                          \
              FUNC(void,   SERVICEPDUR_CODE) DisableRouting     (TypeIdRoutingPathGroup IdRoutingPathGroup);     \
              FUNC(void,   SERVICEPDUR_CODE) EnableRouting      (TypeIdRoutingPathGroup IdRoutingPathGroup);     \

#define SERVICEPDUR_CORE_FUNCTIONALITIES_VIRTUAL                                                                 \
      virtual FUNC(uint16, SERVICEPDUR_CODE) GetConfigurationId (void) = 0;                                      \
      virtual FUNC(void,   SERVICEPDUR_CODE) DisableRouting     (TypeIdRoutingPathGroup IdRoutingPathGroup) = 0; \
      virtual FUNC(void,   SERVICEPDUR_CODE) EnableRouting      (TypeIdRoutingPathGroup IdRoutingPathGroup) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServicePduR_Functionality{
   public:
      SERVICEPDUR_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

