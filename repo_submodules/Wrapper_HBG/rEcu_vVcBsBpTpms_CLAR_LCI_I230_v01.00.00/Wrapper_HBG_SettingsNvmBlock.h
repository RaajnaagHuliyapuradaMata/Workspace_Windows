#ifndef Wrapper_HBG_SettingsNvmBlock_h
#define Wrapper_HBG_SettingsNvmBlock_h
/******************************************************************************/
/* File   : Wrapper_HBG_SettingsNvmBlock.h                                    */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC_Type.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct
{
  uint16  numericUpDownRDCiCyclicTask;
  boolean checkBoxSendCyclicAliveTelegrams;
  uint16  OutputTimerInterval;
  uint16  FrTimerInterval;
  uint16  ABSRecEvSimInterval;
  uint16  RDCRecEvSimInterval;
  uint16  CanMsgTimerInterval;
  boolean checkBoxUseHufTelegrams;
  boolean checkBoxUseSchraderTelegrams;
  boolean checkBoxUseContiTelegrams;
  boolean checkATempInvalid;
  boolean checkATempMissing;
  boolean checkAipInvalid;
  boolean checkBoxAipInit;
  boolean checkAipMissing;
  boolean checkVVehInvalid;
  boolean checkVVehQualifier;
  boolean checkVVehMissing;
  boolean checkVVehAlive;
  boolean checkMileKmInvalid;
  boolean checkWmomInvalid;
  boolean checkWmomMissing;
  boolean checkRelativzeitInvalid;
  boolean checkRelativzeitMissing;
  boolean checkUhrzeitDatumInvalid;
  boolean checkUhrzeitDatumMissing;
  boolean checkUnitsInvalid;
  boolean checkUnitsMissing;
  boolean checkConVehInvalid;
  boolean checkConVehAlive;
  boolean checkConVehMissing;
  boolean checkConVehQualifier;
  boolean radioButtonFZZSTDFree;
  boolean radioButtonFZZSTDLocked;
  boolean radioButtonFZZSTDInvalid;
  boolean checkBoxFRBusOff;
  boolean checkFRBusState;
  boolean checkBoxGNSSPositionAltitudeInvalid;
  boolean checkBoxGNSSErrorAltitudeMetersInvalid;
  boolean checkBoxNMEARawData2Missing;
} tRteStubSettingsDataDecl;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern tRteStubSettingsDataDecl tRteStubSettingsDataRAM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void NVM_ReadRteStubSettings(void);
extern void NVM_WriteRteStubSettings(void);
extern void NVM_SetDefaultRteStubSettings(void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
