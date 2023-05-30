#pragma once
/******************************************************************************/
/* File   : McalEep_core.hpp                                                      */
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
#include "CompilerCfg_McalEep.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EEP_CORE_FUNCTIONALITIES                                               \
              FUNC(void, EEP_CODE) SetMode        (void);                      \
              FUNC(void, EEP_CODE) Read           (void);                      \
              FUNC(void, EEP_CODE) Write          (void);                      \
              FUNC(void, EEP_CODE) Erase          (void);                      \
              FUNC(void, EEP_CODE) ServiceCompare        (void);                      \
              FUNC(void, EEP_CODE) McalCancel         (void);                      \
              FUNC(void, EEP_CODE) GetStatus      (void);                      \
              FUNC(void, EEP_CODE) GetJobResult   (void);                      \

#define EEP_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, EEP_CODE) SetMode        (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Read           (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Write          (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) Erase          (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) ServiceCompare        (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) McalCancel         (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) GetStatus      (void) = 0;                  \
      virtual FUNC(void, EEP_CODE) GetJobResult   (void) = 0;                  \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalEep_Functionality{
   public:
      EEP_CORE_FUNCTIONALITIES_VIRTUAL
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

