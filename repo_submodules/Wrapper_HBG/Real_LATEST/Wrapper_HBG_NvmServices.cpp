/******************************************************************************/
/* File   : Wrapper_HBG_NvmServices.cpp                                       */
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
#include "Wrapper_HBG_NvmServices.h"

#include <stdio.h>
#include <string.h>

#include "crc16X.h"

#ifdef _SwcApplTpms_CLAR_LCI
#else
#include "Wrapper_HBG_JumpTableX.h"
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
static uint8 ucDataIndexEcoBlock;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void NVM_ReadAll( void )
{
  (void) Wrap_HBG_Call_NvmRdciCommonBlock_ReadBlock( (uint8 *) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciDiagBlock1_ReadBlock( (uint8 *) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciDiagBlock2_ReadBlock( (uint8 *) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciErfsBlock_ReadBlock( (uint8 *) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciErfsTsaBlock_ReadBlock( (uint8 *) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciRidQrBlock1_ReadBlock( (uint8 *) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciRidQrBlock2_ReadBlock( (uint8 *) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciWarnStatusBlock_ReadBlock( (uint8 *) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciZoHistoryBlock_ReadBlock( (uint8 *) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciZomBlock1_ReadBlock( (uint8 *) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
  (void) Wrap_HBG_Call_NvmRdciZomBlock2_ReadBlock( (uint8 *) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
}


void NVM_WriteAll( void )
{
  ImpTypeArrayDcm_StatusRdcVersionReadDataType Data;
  uint16 ushVersion;

#ifdef _SwcApplTpms_CLAR_LCI
#else
  (void) RDCi_ROpInvDcmStatusRdcVersion_ReadData_093( Rte_Inst_CtApHufTpmsSWC, (uint8 *) &Data );
#endif

  ushVersion = (uint16) (Data[0] << 8) + Data[1];

  Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciCommonBlock_WriteBlock( (uint8 *) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciDiagBlock1_WriteBlock( (uint8 *) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciDiagBlock2_WriteBlock( (uint8 *) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciErfsBlock_WriteBlock( (uint8 *) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciErfsTsaBlock_WriteBlock( (uint8 *) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciRidQrBlock1_WriteBlock( (uint8 *) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciRidQrBlock2_WriteBlock( (uint8 *) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciWarnStatusBlock_WriteBlock( (uint8 *) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciZoHistoryBlock_WriteBlock( (uint8 *) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciZomBlock1_WriteBlock( (uint8 *) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );

  Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Version = ushVersion;
  Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Chksum = ushCalcCrc16( (uint8 *) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data, (uint16) sizeof(Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC )->Data) );
  (void) Wrap_HBG_Call_NvmRdciZomBlock2_WriteBlock( (uint8 *) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC ) );
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciCommonBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_SetDataIndex(uint8 DataIndex)
{
  ucDataIndexEcoBlock = DataIndex; 
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsEcoBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciDiagBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;  
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciErfsTsaBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciWarnStatusBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZoHistoryBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciRidQrBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_GetDataIndex( uint8 *DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_SetDataIndex( uint8 DataIndex )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_SetRamBlockStatus( boolean BlockStatus )
{
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Call_NvmRdciZomBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  return E_OK;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

