#pragma once
/******************************************************************************/
/* File   : McalGpt_core.hpp                                                      */
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
#include "CompilerCfg_McalGpt.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define GPT_CORE_FUNCTIONALITIES                                               \
              FUNC(void, GPT_CODE) GetTimeElapsed      (void);                 \
              FUNC(void, GPT_CODE) GetTimeRemaining    (void);                 \
              FUNC(void, GPT_CODE) StartTimer          (void);                 \
              FUNC(void, GPT_CODE) StopTimer           (void);                 \
              FUNC(void, GPT_CODE) DisableNotification (void);                 \
              FUNC(void, GPT_CODE) EnableNotification  (void);                 \
              FUNC(void, GPT_CODE) SetMode             (void);                 \
              FUNC(void, GPT_CODE) CheckWakeup         (void);                 \
              FUNC(void, GPT_CODE) DisableWakeup       (void);                 \
              FUNC(void, GPT_CODE) EnableWakeup        (void);                 \
              FUNC(void, GPT_CODE) GetPredefTimerValue (void);                 \

#define GPT_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, GPT_CODE) GetTimeElapsed      (void) = 0;             \
      virtual FUNC(void, GPT_CODE) GetTimeRemaining    (void) = 0;             \
      virtual FUNC(void, GPT_CODE) StartTimer          (void) = 0;             \
      virtual FUNC(void, GPT_CODE) StopTimer           (void) = 0;             \
      virtual FUNC(void, GPT_CODE) DisableNotification (void) = 0;             \
      virtual FUNC(void, GPT_CODE) EnableNotification  (void) = 0;             \
      virtual FUNC(void, GPT_CODE) SetMode             (void) = 0;             \
      virtual FUNC(void, GPT_CODE) CheckWakeup         (void) = 0;             \
      virtual FUNC(void, GPT_CODE) DisableWakeup       (void) = 0;             \
      virtual FUNC(void, GPT_CODE) EnableWakeup        (void) = 0;             \
      virtual FUNC(void, GPT_CODE) GetPredefTimerValue (void) = 0;             \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalGpt_Functionality{
   public:
      GPT_CORE_FUNCTIONALITIES_VIRTUAL
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

