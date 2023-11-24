#pragma once
#ifdef __cplusplus
extern "C"
{
#endif
/******************************************************************************/
/* File   : Wrapper_HBG_JumpTableX.h                                          */
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
#include "JumpTableX.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define RDCi_RCyclicRDCiTask_001                                                  ( RDCi_FunctiontablePtr->RDCi_RCyclicRDCiTask_001)
#define RDCi_RInitRDCiStartup_002                                                 ( RDCi_FunctiontablePtr->RDCi_RInitRDCiStartup_002)
#define RDCi_RExitRDCiBye_003                                                     ( RDCi_FunctiontablePtr->RDCi_RExitRDCiBye_003)
#define RDCi_ROpInvDcmDiagFunktionenReifendruckkontrolle_ConditionCheckRead_004   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagFunktionenReifendruckkontrolle_ConditionCheckRead_004)
#define RDCi_ROpInvDcmDiagFunktionenReifendruckkontrolle_ReadData_005             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagFunktionenReifendruckkontrolle_ReadData_005)
#define RDCi_ROpInvDcmDiagRdcAktuelleAussentemperatur_ConditionCheckRead_006      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcAktuelleAussentemperatur_ConditionCheckRead_006)
#define RDCi_ROpInvDcmDiagRdcAktuelleAussentemperatur_ReadData_007                ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcAktuelleAussentemperatur_ReadData_007)
#define RDCi_ROpInvDcmDiagRdcAussendruck_ConditionCheckRead_008                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcAussendruck_ConditionCheckRead_008)
#define RDCi_ROpInvDcmDiagRdcAussendruck_ReadData_009                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcAussendruck_ReadData_009)
#define RDCi_ROpInvDcmDiagRdcInaktivStatus_ConditionCheckRead_010                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcInaktivStatus_ConditionCheckRead_010)
#define RDCi_ROpInvDcmDiagRdcInaktivStatus_ReadData_011                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcInaktivStatus_ReadData_011)
#define RDCi_ROpInvDcmDiagRdcKalibrierungStatus_ConditionCheckRead_012            ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcKalibrierungStatus_ConditionCheckRead_012)
#define RDCi_ROpInvDcmDiagRdcKalibrierungStatus_ReadData_013                      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcKalibrierungStatus_ReadData_013)
#define RDCi_ROpInvDcmDiagRdcKonfiguration_ConditionCheckRead_014                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcKonfiguration_ConditionCheckRead_014)
#define RDCi_ROpInvDcmDiagRdcKonfiguration_ReadData_015                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcKonfiguration_ReadData_015)
#define RDCi_ROpInvDcmDiagRdcPosition_ConditionCheckRead_016                      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcPosition_ConditionCheckRead_016)
#define RDCi_ROpInvDcmDiagRdcPosition_ReadData_017                                ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcPosition_ReadData_017)
#define RDCi_ROpInvDcmDiagRdcReferenzAussentemperatur_ConditionCheckRead_018      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReferenzAussentemperatur_ConditionCheckRead_018)
#define RDCi_ROpInvDcmDiagRdcReferenzAussentemperatur_ReadData_019                ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReferenzAussentemperatur_ReadData_019)
#define RDCi_ROpInvDcmDiagRdcReifendruckHl_ConditionCheckRead_020                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckHl_ConditionCheckRead_020)
#define RDCi_ROpInvDcmDiagRdcReifendruckHl_ReadData_021                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckHl_ReadData_021)
#define RDCi_ROpInvDcmDiagRdcReifendruckHr_ConditionCheckRead_022                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckHr_ConditionCheckRead_022)
#define RDCi_ROpInvDcmDiagRdcReifendruckHr_ReadData_023                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckHr_ReadData_023)
#define RDCi_ROpInvDcmDiagRdcReifendruckVl_ConditionCheckRead_024                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckVl_ConditionCheckRead_024)
#define RDCi_ROpInvDcmDiagRdcReifendruckVl_ReadData_025                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckVl_ReadData_025)
#define RDCi_ROpInvDcmDiagRdcReifendruckVr_ConditionCheckRead_026                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckVr_ConditionCheckRead_026)
#define RDCi_ROpInvDcmDiagRdcReifendruckVr_ReadData_027                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifendruckVr_ReadData_027)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturHl_ConditionCheckRead_028            ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturHl_ConditionCheckRead_028)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturHl_ReadData_029                      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturHl_ReadData_029)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturHr_ConditionCheckRead_030            ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturHr_ConditionCheckRead_030)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturHr_ReadData_031                      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturHr_ReadData_031)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturVl_ConditionCheckRead_032            ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturVl_ConditionCheckRead_032)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturVl_ReadData_033                      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturVl_ReadData_033)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturVr_ConditionCheckRead_034            ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturVr_ConditionCheckRead_034)
#define RDCi_ROpInvDcmDiagRdcReifentemperaturVr_ReadData_035                      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcReifentemperaturVr_ReadData_035)
#define RDCi_ROpInvDcmDiagRdcSensorHersteller_ConditionCheckRead_036              ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcSensorHersteller_ConditionCheckRead_036)
#define RDCi_ROpInvDcmDiagRdcSensorHersteller_ReadData_037                        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcSensorHersteller_ReadData_037)
#define RDCi_ROpInvDcmDiagRdcSolldruckHinten_ConditionCheckRead_038               ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcSolldruckHinten_ConditionCheckRead_038)
#define RDCi_ROpInvDcmDiagRdcSolldruckHinten_ReadData_039                         ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcSolldruckHinten_ReadData_039)
#define RDCi_ROpInvDcmDiagRdcSolldruckVorn_ConditionCheckRead_040                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcSolldruckVorn_ConditionCheckRead_040)
#define RDCi_ROpInvDcmDiagRdcSolldruckVorn_ReadData_041                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcSolldruckVorn_ReadData_041)
#define RDCi_ROpInvDcmDiagRdcStatus_ConditionCheckRead_042                        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcStatus_ConditionCheckRead_042)
#define RDCi_ROpInvDcmDiagRdcStatus_ReadData_043                                  ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmDiagRdcStatus_ReadData_043)
#define RDCi_ROpInvDcmRdcAnlernenLokalisierungLesen_ConditionCheckRead_044        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcAnlernenLokalisierungLesen_ConditionCheckRead_044)
#define RDCi_ROpInvDcmRdcAnlernenLokalisierungLesen_ReadData_045                  ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcAnlernenLokalisierungLesen_ReadData_045)
#define RDCi_ROpInvDcmRdcErfsEcoTabelleLesen_ConditionCheckRead_046               ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcErfsEcoTabelleLesen_ConditionCheckRead_046)
#define RDCi_ROpInvDcmRdcErfsEcoTabelleLesen_ReadData_047                         ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcErfsEcoTabelleLesen_ReadData_047)
#define RDCi_ROpInvDcmRdcHsInaktivereignis_ConditionCheckRead_048                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsInaktivereignis_ConditionCheckRead_048)
#define RDCi_ROpInvDcmRdcHsInaktivereignis_ReadData_049                           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsInaktivereignis_ReadData_049)
#define RDCi_ROpInvDcmRdcHsKalibrierereignis_ConditionCheckRead_050               ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsKalibrierereignis_ConditionCheckRead_050)
#define RDCi_ROpInvDcmRdcHsKalibrierereignis_ReadData_051                         ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsKalibrierereignis_ReadData_051)
#define RDCi_ROpInvDcmRdcHsWarnereignis1_ConditionCheckRead_052                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignis1_ConditionCheckRead_052)
#define RDCi_ROpInvDcmRdcHsWarnereignis1_ReadData_053                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignis1_ReadData_053)
#define RDCi_ROpInvDcmRdcHsWarnereignis2_ConditionCheckRead_054                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignis2_ConditionCheckRead_054)
#define RDCi_ROpInvDcmRdcHsWarnereignis2_ReadData_055                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignis2_ReadData_055)
#define RDCi_ROpInvDcmRdcHsWarnereignis3_ConditionCheckRead_056                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignis3_ConditionCheckRead_056)
#define RDCi_ROpInvDcmRdcHsWarnereignis3_ReadData_057                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignis3_ReadData_057)
#define RDCi_ROpInvDcmRdcHsWarnereignisRuecknahme_ConditionCheckRead_058          ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisRuecknahme_ConditionCheckRead_058)
#define RDCi_ROpInvDcmRdcHsWarnereignisRuecknahme_ReadData_059                    ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisRuecknahme_ReadData_059)
#define RDCi_ROpInvDcmRdcHsWarnereignisWeich1_ConditionCheckRead_060              ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisWeich1_ConditionCheckRead_060)
#define RDCi_ROpInvDcmRdcHsWarnereignisWeich1_ReadData_061                        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisWeich1_ReadData_061)
#define RDCi_ROpInvDcmRdcHsWarnereignisWeich2_ConditionCheckRead_062              ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisWeich2_ConditionCheckRead_062)
#define RDCi_ROpInvDcmRdcHsWarnereignisWeich2_ReadData_063                        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisWeich2_ReadData_063)
#define RDCi_ROpInvDcmRdcHsWarnereignisWeich3_ConditionCheckRead_064              ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisWeich3_ConditionCheckRead_064)
#define RDCi_ROpInvDcmRdcHsWarnereignisWeich3_ReadData_065                        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcHsWarnereignisWeich3_ReadData_065)
#define RDCi_ROpInvDcmRdcMessdatenblock1_ConditionCheckRead_066                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock1_ConditionCheckRead_066)
#define RDCi_ROpInvDcmRdcMessdatenblock1_ReadData_067                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock1_ReadData_067)
#define RDCi_ROpInvDcmRdcMessdatenblock2_ConditionCheckRead_068                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock2_ConditionCheckRead_068)
#define RDCi_ROpInvDcmRdcMessdatenblock2_ReadData_069                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock2_ReadData_069)
#define RDCi_ROpInvDcmRdcMessdatenblock3_ConditionCheckRead_070                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock3_ConditionCheckRead_070)
#define RDCi_ROpInvDcmRdcMessdatenblock3_ReadData_071                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock3_ReadData_071)
#define RDCi_ROpInvDcmRdcMessdatenblock4_ConditionCheckRead_072                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock4_ConditionCheckRead_072)
#define RDCi_ROpInvDcmRdcMessdatenblock4_ReadData_073                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcMessdatenblock4_ReadData_073)
#define RDCi_ROpInvDcmRdcRidAktReifenLaufstreckeLesen_ConditionCheckRead_074      ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAktReifenLaufstreckeLesen_ConditionCheckRead_074)
#define RDCi_ROpInvDcmRdcRidAktReifenLaufstreckeLesen_ReadData_075                ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAktReifenLaufstreckeLesen_ReadData_075)
#define RDCi_ROpInvDcmRdcRidAktReifenQrCodeLesen_ConditionCheckRead_076           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAktReifenQrCodeLesen_ConditionCheckRead_076)
#define RDCi_ROpInvDcmRdcRidAktReifenQrCodeLesen_ReadData_077                     ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAktReifenQrCodeLesen_ReadData_077)
#define RDCi_ROpInvDcmRdcRidAlteReifenLaufstreckeLesen_ConditionCheckRead_078     ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAlteReifenLaufstreckeLesen_ConditionCheckRead_078)
#define RDCi_ROpInvDcmRdcRidAlteReifenLaufstreckeLesen_ReadData_079               ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAlteReifenLaufstreckeLesen_ReadData_079)
#define RDCi_ROpInvDcmRdcRidAlteReifenQrCodeLesen_ConditionCheckRead_080          ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAlteReifenQrCodeLesen_ConditionCheckRead_080)
#define RDCi_ROpInvDcmRdcRidAlteReifenQrCodeLesen_ReadData_081                    ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmRdcRidAlteReifenQrCodeLesen_ReadData_081)
#define RDCi_ROpInvDcmStatusRdcDeveloperDataLesen_ConditionCheckRead_082          ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcDeveloperDataLesen_ConditionCheckRead_082)
#define RDCi_ROpInvDcmStatusRdcDeveloperDataLesen_ReadData_083                    ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcDeveloperDataLesen_ReadData_083)
#define RDCi_ROpInvDcmStatusRdcErfsAktReifenEcoLesen_ConditionCheckRead_084       ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcErfsAktReifenEcoLesen_ConditionCheckRead_084)
#define RDCi_ROpInvDcmStatusRdcErfsAktReifenEcoLesen_ReadData_085                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcErfsAktReifenEcoLesen_ReadData_085)
#define RDCi_ROpInvDcmStatusRdcErfsAktReifenLesen_ConditionCheckRead_086          ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcErfsAktReifenLesen_ConditionCheckRead_086)
#define RDCi_ROpInvDcmStatusRdcErfsAktReifenLesen_ReadData_087                    ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcErfsAktReifenLesen_ReadData_087)
#define RDCi_ROpInvDcmStatusRdcErfsTsaDatenLesen_ConditionCheckRead_088           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcErfsTsaDatenLesen_ConditionCheckRead_088)
#define RDCi_ROpInvDcmStatusRdcErfsTsaDatenLesen_ReadData_089                     ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcErfsTsaDatenLesen_ReadData_089)
#define RDCi_ROpInvDcmStatusRdcLesen_ConditionCheckRead_090                       ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcLesen_ConditionCheckRead_090)
#define RDCi_ROpInvDcmStatusRdcLesen_ReadData_091                                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcLesen_ReadData_091)
#define RDCi_ROpInvDcmStatusRdcVersion_ConditionCheckRead_092                     ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcVersion_ConditionCheckRead_092)
#define RDCi_ROpInvDcmStatusRdcVersion_ReadData_093                               ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcVersion_ReadData_093)
#define RDCi_ROpInvDcmStatusReLesenDruckcodierung_ConditionCheckRead_094          ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusReLesenDruckcodierung_ConditionCheckRead_094)
#define RDCi_ROpInvDcmStatusReLesenDruckcodierung_ReadData_095                    ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusReLesenDruckcodierung_ReadData_095)
#define RDCi_ROpInvDcmSteuernDigitalRdc_WriteData_096                             ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernDigitalRdc_WriteData_096)
#define RDCi_ROpInvDcmSteuernRadelektronikVorgeben_WriteData_097                  ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRadelektronikVorgeben_WriteData_097)
#define RDCi_ROpInvDcmSteuernRdcDeveloperConfig_WriteData_098                     ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRdcDeveloperConfig_WriteData_098)
#define RDCi_ROpInvDcmSteuernRdcErfsDeveloperConfig_WriteData_099                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRdcErfsDeveloperConfig_WriteData_099)
#define RDCi_ROpInvDcmSteuernRdcErfsEcoAktReifenPosVorgeben_WriteData_100         ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRdcErfsEcoAktReifenPosVorgeben_WriteData_100)
#define RDCi_ROpInvDcmSteuernRdcErfsEcoNeueReifenVorgeben_WriteData_101           ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRdcErfsEcoNeueReifenVorgeben_WriteData_101)
#define RDCi_ROpInvDcmSteuernRdcErfsEcoReifentabelleVorgeben_WriteData_102        ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRdcErfsEcoReifentabelleVorgeben_WriteData_102)
#define RDCi_ROpInvDcmSteuernRdcErfsTsaDatenVorgeben_WriteData_103                ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmSteuernRdcErfsTsaDatenVorgeben_WriteData_103)
#define RDCi_ROpInvDemErrorRdci1To3WrongWuMounted_InitMonitorForEvent_104         ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdci1To3WrongWuMounted_InitMonitorForEvent_104)
#define RDCi_ROpInvDemErrorRdci4WrongWuMounted_InitMonitorForEvent_105            ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdci4WrongWuMounted_InitMonitorForEvent_105)
#define RDCi_ROpInvDemErrorRdciATempInvalid_InitMonitorForEvent_106               ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciATempInvalid_InitMonitorForEvent_106)
#define RDCi_ROpInvDemErrorRdciATempTimeout_InitMonitorForEvent_107               ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciATempTimeout_InitMonitorForEvent_107)
#define RDCi_ROpInvDemErrorRdciAusfall_InitMonitorForEvent_108                    ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciAusfall_InitMonitorForEvent_108)
#define RDCi_ROpInvDemErrorRdciAutoLearningFailed_InitMonitorForEvent_109         ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciAutoLearningFailed_InitMonitorForEvent_109)
#define RDCi_ROpInvDemErrorRdciBefuellhinweis_InitMonitorForEvent_110             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciBefuellhinweis_InitMonitorForEvent_110)
#define RDCi_ROpInvDemErrorRdciConVehAlive_InitMonitorForEvent_111                ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciConVehAlive_InitMonitorForEvent_111)
#define RDCi_ROpInvDemErrorRdciConVehCrc_InitMonitorForEvent_112                  ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciConVehCrc_InitMonitorForEvent_112)
#define RDCi_ROpInvDemErrorRdciConVehInvalid_InitMonitorForEvent_113              ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciConVehInvalid_InitMonitorForEvent_113)
#define RDCi_ROpInvDemErrorRdciConVehTimeout_InitMonitorForEvent_114              ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciConVehTimeout_InitMonitorForEvent_114)
#define RDCi_ROpInvDemErrorRdciDruckwarnung_InitMonitorForEvent_115               ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciDruckwarnung_InitMonitorForEvent_115)
#define RDCi_ROpInvDemErrorRdciEinheitenBn2020Invalid_InitMonitorForEvent_116     ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciEinheitenBn2020Invalid_InitMonitorForEvent_116)
#define RDCi_ROpInvDemErrorRdciEinheitenBn2020Timeout_InitMonitorForEvent_117     ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciEinheitenBn2020Timeout_InitMonitorForEvent_117)
#define RDCi_ROpInvDemErrorRdciErfsCodingDataInconsistent_InitMonitorForEvent_118 ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciErfsCodingDataInconsistent_InitMonitorForEvent_118)
#define RDCi_ROpInvDemErrorRdciGatewayOrAntennaError_InitMonitorForEvent_119      ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciGatewayOrAntennaError_InitMonitorForEvent_119)
#define RDCi_ROpInvDemErrorRdciKalibrierung_InitMonitorForEvent_120               ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciKalibrierung_InitMonitorForEvent_120)
#define RDCi_ROpInvDemErrorRdciOtherWuSensorType_InitMonitorForEvent_121          ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciOtherWuSensorType_InitMonitorForEvent_121)
#define RDCi_ROpInvDemErrorRdciPannenwarnung_InitMonitorForEvent_122              ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciPannenwarnung_InitMonitorForEvent_122)
#define RDCi_ROpInvDemErrorRdciPartialSystemAvailability_InitMonitorForEvent_123  ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciPartialSystemAvailability_InitMonitorForEvent_123)
#define RDCi_ROpInvDemErrorRdciRdcDtPckg1Alive_InitMonitorForEvent_124            ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciRdcDtPckg1Alive_InitMonitorForEvent_124)
#define RDCi_ROpInvDemErrorRdciRdcDtPckg1Invalid_InitMonitorForEvent_125          ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciRdcDtPckg1Invalid_InitMonitorForEvent_125)
#define RDCi_ROpInvDemErrorRdciRdcDtPckg1Timeout_InitMonitorForEvent_126          ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciRdcDtPckg1Timeout_InitMonitorForEvent_126)
#define RDCi_ROpInvDemErrorRdciRelativzeitInvalid_InitMonitorForEvent_127         ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciRelativzeitInvalid_InitMonitorForEvent_127)
#define RDCi_ROpInvDemErrorRdciRelativzeitTimeout_InitMonitorForEvent_128         ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciRelativzeitTimeout_InitMonitorForEvent_128)
#define RDCi_ROpInvDemErrorRdciRfExternalInterference_InitMonitorForEvent_129     ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciRfExternalInterference_InitMonitorForEvent_129)
#define RDCi_ROpInvDemErrorRdciSystemNotAvailable_InitMonitorForEvent_130         ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciSystemNotAvailable_InitMonitorForEvent_130)
#define RDCi_ROpInvDemErrorRdciTpmsManufactoryMode_InitMonitorForEvent_131        ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciTpmsManufactoryMode_InitMonitorForEvent_131)
#define RDCi_ROpInvDemErrorRdciUnspecifiedWfcDefect_InitMonitorForEvent_132       ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciUnspecifiedWfcDefect_InitMonitorForEvent_132)
#define RDCi_ROpInvDemErrorRdciUnspecifiedWuMute_InitMonitorForEvent_133          ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciUnspecifiedWuMute_InitMonitorForEvent_133)
#define RDCi_ROpInvDemErrorRdciVVehAliveFailure_InitMonitorForEvent_134           ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciVVehAliveFailure_InitMonitorForEvent_134)
#define RDCi_ROpInvDemErrorRdciVVehCogInvalid_InitMonitorForEvent_135             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciVVehCogInvalid_InitMonitorForEvent_135)
#define RDCi_ROpInvDemErrorRdciVVehCogQualifier_InitMonitorForEvent_136           ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciVVehCogQualifier_InitMonitorForEvent_136)
#define RDCi_ROpInvDemErrorRdciVVehCrcFailure_InitMonitorForEvent_137             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciVVehCrcFailure_InitMonitorForEvent_137)
#define RDCi_ROpInvDemErrorRdciVVehTimeout_InitMonitorForEvent_138                ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciVVehTimeout_InitMonitorForEvent_138)
#define RDCi_ROpInvDemErrorRdciWarnruecknahme_InitMonitorForEvent_139             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWarnruecknahme_InitMonitorForEvent_139)
#define RDCi_ROpInvDemErrorRdciWuDefectFl_InitMonitorForEvent_140                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuDefectFl_InitMonitorForEvent_140)
#define RDCi_ROpInvDemErrorRdciWuDefectFr_InitMonitorForEvent_141                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuDefectFr_InitMonitorForEvent_141)
#define RDCi_ROpInvDemErrorRdciWuDefectRl_InitMonitorForEvent_142                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuDefectRl_InitMonitorForEvent_142)
#define RDCi_ROpInvDemErrorRdciWuDefectRr_InitMonitorForEvent_143                 ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuDefectRr_InitMonitorForEvent_143)
#define RDCi_ROpInvDemErrorRdciWuLocalisationFailed_InitMonitorForEvent_144       ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuLocalisationFailed_InitMonitorForEvent_144)
#define RDCi_ROpInvDemErrorRdciWuLowBatteryFl_InitMonitorForEvent_145             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuLowBatteryFl_InitMonitorForEvent_145)
#define RDCi_ROpInvDemErrorRdciWuLowBatteryFr_InitMonitorForEvent_146             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuLowBatteryFr_InitMonitorForEvent_146)
#define RDCi_ROpInvDemErrorRdciWuLowBatteryRl_InitMonitorForEvent_147             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuLowBatteryRl_InitMonitorForEvent_147)
#define RDCi_ROpInvDemErrorRdciWuLowBatteryRr_InitMonitorForEvent_148             ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuLowBatteryRr_InitMonitorForEvent_148)
#define RDCi_ROpInvDemErrorRdciWuMuteFl_InitMonitorForEvent_149                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuMuteFl_InitMonitorForEvent_149)
#define RDCi_ROpInvDemErrorRdciWuMuteFr_InitMonitorForEvent_150                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuMuteFr_InitMonitorForEvent_150)
#define RDCi_ROpInvDemErrorRdciWuMuteRl_InitMonitorForEvent_151                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuMuteRl_InitMonitorForEvent_151)
#define RDCi_ROpInvDemErrorRdciWuMuteRr_InitMonitorForEvent_152                   ( RDCi_FunctiontablePtr->RDCi_ROpInvDemErrorRdciWuMuteRr_InitMonitorForEvent_152)
#define RDCi_ROpInvNvmRdciCommonBlock_NvMNotifyJobFinished_JobFinished_153        ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciCommonBlock_NvMNotifyJobFinished_JobFinished_153)
#define RDCi_ROpInvNvmRdciDiagBlock1_NvMNotifyJobFinished_JobFinished_154         ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock1_NvMNotifyJobFinished_JobFinished_154)
#define RDCi_ROpInvNvmRdciDiagBlock2_NvMNotifyJobFinished_JobFinished_155         ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock2_NvMNotifyJobFinished_JobFinished_155)
#define RDCi_ROpInvNvmRdciErfsBlock_NvMNotifyJobFinished_JobFinished_156          ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsBlock_NvMNotifyJobFinished_JobFinished_156)
#define RDCi_ROpInvNvmRdciErfsEcoBlock_NvMNotifyJobFinished_JobFinished_157       ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsEcoBlock_NvMNotifyJobFinished_JobFinished_157)
#define RDCi_ROpInvNvmRdciErfsTsaBlock_NvMNotifyJobFinished_JobFinished_158       ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsTsaBlock_NvMNotifyJobFinished_JobFinished_158)
#define RDCi_ROpInvNvmRdciRidQrBlock1_NvMNotifyJobFinished_JobFinished_159        ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock1_NvMNotifyJobFinished_JobFinished_159)
#define RDCi_ROpInvNvmRdciRidQrBlock2_NvMNotifyJobFinished_JobFinished_160        ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock2_NvMNotifyJobFinished_JobFinished_160)
#define RDCi_ROpInvNvmRdciWarnStatusBlock_NvMNotifyJobFinished_JobFinished_161    ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciWarnStatusBlock_NvMNotifyJobFinished_JobFinished_161)
#define RDCi_ROpInvNvmRdciZoHistoryBlock_NvMNotifyJobFinished_JobFinished_162     ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZoHistoryBlock_NvMNotifyJobFinished_JobFinished_162)
#define RDCi_ROpInvNvmRdciZomBlock1_NvMNotifyJobFinished_JobFinished_163          ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock1_NvMNotifyJobFinished_JobFinished_163)
#define RDCi_ROpInvNvmRdciZomBlock2_NvMNotifyJobFinished_JobFinished_164          ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock2_NvMNotifyJobFinished_JobFinished_164)
#define RDCi_ROpInvNvmRdciCommonBlock_NvMNotifyInitBlock_InitBlock_165            ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciCommonBlock_NvMNotifyInitBlock_InitBlock_165)
#define RDCi_ROpInvNvmRdciDiagBlock1_NvMNotifyInitBlock_InitBlock_166             ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock1_NvMNotifyInitBlock_InitBlock_166)
#define RDCi_ROpInvNvmRdciDiagBlock2_NvMNotifyInitBlock_InitBlock_167             ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock2_NvMNotifyInitBlock_InitBlock_167)
#define RDCi_ROpInvNvmRdciErfsBlock_NvMNotifyInitBlock_InitBlock_168              ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsBlock_NvMNotifyInitBlock_InitBlock_168)
#define RDCi_ROpInvNvmRdciErfsEcoBlock_NvMNotifyInitBlock_InitBlock_169           ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsEcoBlock_NvMNotifyInitBlock_InitBlock_169)
#define RDCi_ROpInvNvmRdciErfsTsaBlock_NvMNotifyInitBlock_InitBlock_170           ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsTsaBlock_NvMNotifyInitBlock_InitBlock_170)
#define RDCi_ROpInvNvmRdciRidQrBlock1_NvMNotifyInitBlock_InitBlock_171            ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock1_NvMNotifyInitBlock_InitBlock_171)
#define RDCi_ROpInvNvmRdciRidQrBlock2_NvMNotifyInitBlock_InitBlock_172            ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock2_NvMNotifyInitBlock_InitBlock_172)
#define RDCi_ROpInvNvmRdciWarnStatusBlock_NvMNotifyInitBlock_InitBlock_173        ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciWarnStatusBlock_NvMNotifyInitBlock_InitBlock_173)
#define RDCi_ROpInvNvmRdciZoHistoryBlock_NvMNotifyInitBlock_InitBlock_174         ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZoHistoryBlock_NvMNotifyInitBlock_InitBlock_174)
#define RDCi_ROpInvNvmRdciZomBlock1_NvMNotifyInitBlock_InitBlock_175              ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock1_NvMNotifyInitBlock_InitBlock_175)
#define RDCi_ROpInvNvmRdciZomBlock2_NvMNotifyInitBlock_InitBlock_176              ( RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock2_NvMNotifyInitBlock_InitBlock_176)
#define RDCi_ROpInvDcmStatusRdcExtParkSupervisionLesen_ConditionCheckRead_177     ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcExtParkSupervisionLesen_ConditionCheckRead_177)
#define RDCi_ROpInvDcmStatusRdcExtParkSupervisionLesen_ReadData_178               ( RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcExtParkSupervisionLesen_ReadData_178)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const RDCi_FunctiontableType* const RDCi_FunctiontablePtr;

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
#ifdef __cplusplus
}
#endif

