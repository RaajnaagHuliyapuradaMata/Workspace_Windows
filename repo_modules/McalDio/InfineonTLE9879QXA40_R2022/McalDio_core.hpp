#pragma once
/******************************************************************************/
/* File   : McalDio_core.hpp                                                      */
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
#include "CompilerCfg_McalDio.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALDIO_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALDIO_CODE) ReadChannel       (void);                   \
              FUNC(void, MCALDIO_CODE) WriteChannel      (void);                   \
              FUNC(void, MCALDIO_CODE) ReadMcalPort          (void);                   \
              FUNC(void, MCALDIO_CODE) WriteMcalPort         (void);                   \
              FUNC(void, MCALDIO_CODE) ReadChannelGroup  (void);                   \
              FUNC(void, MCALDIO_CODE) WriteChannelGroup (void);                   \
              FUNC(void, MCALDIO_CODE) FlipChannel       (void);                   \

#define MCALDIO_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALDIO_CODE) ReadChannel       (void) = 0;               \
      virtual FUNC(void, MCALDIO_CODE) WriteChannel      (void) = 0;               \
      virtual FUNC(void, MCALDIO_CODE) ReadMcalPort          (void) = 0;               \
      virtual FUNC(void, MCALDIO_CODE) WriteMcalPort         (void) = 0;               \
      virtual FUNC(void, MCALDIO_CODE) ReadChannelGroup  (void) = 0;               \
      virtual FUNC(void, MCALDIO_CODE) WriteChannelGroup (void) = 0;               \
      virtual FUNC(void, MCALDIO_CODE) FlipChannel       (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalDio_Functionality{
   public:
      MCALDIO_CORE_FUNCTIONALITIES_VIRTUAL
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

