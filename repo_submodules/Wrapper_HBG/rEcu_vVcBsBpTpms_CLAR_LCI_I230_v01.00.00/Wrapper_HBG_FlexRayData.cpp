/******************************************************************************/
/* File   : Wrapper_HBG_FlexRayData.cpp                                       */
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
#include "Wrapper_HBG_FlexRayData.h"

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
Rdci_V_VEH_Type                   speedData;
Rdci_WMOM_DRV_4_Type              directionData;
Rdci_CON_VEH_Type                 vehicleCondition;
Rdci_UHRZEIT_DATUM_Type           timeDate;
Rdci_TEMP_EX_Type                 temperatureData = 0;
Rdci_UN_AIP_Type                  unitAipData = 0;
Rdci_UN_TEMP_Type                 unitTempData = 0;
Rdci_UN_MILE_Type                 unitMileData = 0;
Rdci_OP_SLCTN_TYR_AVLB_Type       OpSlctnTyr = 0;
Rdci_OP_TAR_P_LOCO_TPCT_Type      OpTarPLoco = 0;
Rdci_OP_TPCT_Type                 OpTpct = 0;
Rdci_OP_TYR_SEA_TPCT_Type         OpTyrSeason = 0;
Rdci_RQ_OL_TPCT_Type              RqOl = 0;
Rdci_OP_IDR_SLCTN_Type            OpIdrSlctn = 0;
Rdci_ST_IDR_MSGC_Type             StIdrMsgc = 0;
Rdci_T_SEC_COU_REL_Type           timeRel = 0;
Rdci_AIP_ENG_DRV_Type             ambientPressure = 0;
Rdci_GNSSErrorAltitudeMeters_Type posAltitude;
Rdci_GNSSErrorAltitudeMeters_Type errorAltitudeMeters;
Rdci_MILE_KM_Type                 MileKm = 0;
Rdci_ST_ILK_ERRM_FZM_Type         ucStIlkErrmFzm = 0;
Rdci_ST_ENERG_FZM_Type            ucStEnergFzm = 0;
ImpTypeValFrBusState              FlexrayBusState;

bool bNewSpeedData;
bool bNewUnitMileData;
bool bNewUnitTempData;
bool bNewUnitAipData;
bool bNewTemperatureData;
bool bNewDirectionData;
bool bNewOpSlctnTyr;
bool bNewOpTyrSeason;
bool bNewOpTarPLoco;
bool bNewRqOl;
bool bNewOpTpct;
bool bNewTimeDate;
bool bNewVehicleCondition;
bool bNewOpIdrSlctn;
bool bNewStIdrMsgc;
bool bNewTimeRel;
bool bNewAmbientPressure;
bool bNewPositionAltitude;
bool bNewErrorAltitudeMeters;
bool bNewMileKm;
bool bNewStIlkErrmFzm;
bool bNewStEnergFzm;
bool bNewFrBusState;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void PutSpeedData(Rdci_V_VEH_Type* data)
{
  speedData = *data;
  bNewSpeedData = true;
}

void PutUnitDataMile(uint8* data)
{
  unitMileData = *data;
  bNewUnitMileData = true;
}

void PutUnitDataAip(uint8* data)
{
  unitAipData = *data;
  bNewUnitAipData = true;
}

void PutUnitDataTemp(uint8* data)
{
  unitTempData = *data;
  bNewUnitTempData = true;
}

void PutTemperatureData(uint8* data)
{
  temperatureData = *data;
  bNewTemperatureData = true;
}

void PutDirectionData( Rdci_WMOM_DRV_4_Type* data )
{
  directionData = *data;
  bNewDirectionData = true;
}

void PutOpSlctnTyr(uint8* data)
{
  OpSlctnTyr = *data;
  bNewOpSlctnTyr = true;
}

void PutOpTarPLoco(uint8* data)
{
  OpTarPLoco = *data;
  bNewOpTarPLoco = true;
}

void PutOpTpct(uint8* data)
{
  OpTpct = *data;
  bNewOpTpct = true;
}

void PutOpTyrSeason(uint8* data)
{
  OpTyrSeason = *data;
  bNewOpTyrSeason = true;
}

void PutRqOl(uint8* data)
{
  RqOl = *data;
  bNewRqOl = true;
}

void PutOpIdrSlctn(uint8* data)
{
  OpIdrSlctn = *data;
  bNewOpIdrSlctn = true;
}

void PutStIdrMsgc(uint8* data)
{
  StIdrMsgc = *data;
  bNewStIdrMsgc = true;
}

void PutRelTime( Rdci_T_SEC_COU_REL_Type* data )
{
  timeRel = *data;
  bNewTimeRel = true;
}

void PutAmbientPressure( Rdci_AIP_ENG_DRV_Type * data )
{
  ambientPressure = *data;
  bNewAmbientPressure = true;
}

void PutPositionAltitude( Rdci_GNSSPositionAltitude_Type * data )
{
  posAltitude = *data;
  bNewPositionAltitude = true;
}

void PutErrorAltitudeMeters( Rdci_GNSSPositionAltitude_Type * data )
{
  errorAltitudeMeters = *data;
  bNewErrorAltitudeMeters = true;
}

 void PutTimeDate( Rdci_UHRZEIT_DATUM_Type* data )
 {
   timeDate = *data;
   bNewTimeDate = true;
 }

 void PutMileKm( Rdci_MILE_KM_Type* data )
 {
   MileKm = *data;
   bNewMileKm = true;
 }

 void PutVehicleCondition( Rdci_CON_VEH_Type* data )
 {
   vehicleCondition = *data;
   bNewVehicleCondition = true;
 }

void PutBusState(ImpTypeValFrBusState* ucBusState)
{
  FlexrayBusState = *ucBusState;
  bNewFrBusState = true;
}

void PutStIlkErrmFzm( Rdci_ST_ILK_ERRM_FZM_Type* StIlkErrmFzm )
{
  ucStIlkErrmFzm = *StIlkErrmFzm;
  bNewStIlkErrmFzm = true;
}

void PutStEnergFzm( Rdci_ST_ENERG_FZM_Type* StEnergFzm )
{
  ucStEnergFzm = *StEnergFzm;
  bNewStEnergFzm = true;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_V_VEH( P2VAR(Rdci_V_VEH_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_WMOM_DRV_4( P2VAR(Rdci_WMOM_DRV_4_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}


FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_TEMP_EX( P2VAR(Rdci_TEMP_EX_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_AIP( P2VAR(Rdci_UN_AIP_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_MILE( P2VAR(Rdci_UN_MILE_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UN_TEMP( P2VAR(Rdci_UN_TEMP_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_CON_VEH( P2VAR(Rdci_CON_VEH_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_SLCTN_TYR_AVLB( P2VAR(Rdci_OP_SLCTN_TYR_AVLB_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
	return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TAR_P_LOCO_TPCT( P2VAR(Rdci_OP_TAR_P_LOCO_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
	return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TPCT( P2VAR(Rdci_OP_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
	return 0;
}
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_TYR_SEA_TPCT( P2VAR(Rdci_OP_TYR_SEA_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
	return 0;
}
FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_RQ_OL_TPCT( P2VAR(Rdci_RQ_OL_TPCT_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
	return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_OP_IDR_SLCTN( P2VAR(Rdci_OP_IDR_SLCTN_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_IDR_MSGC( P2VAR(Rdci_ST_IDR_MSGC_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_UHRZEIT_DATUM( P2VAR(Rdci_UHRZEIT_DATUM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_T_SEC_COU_REL( P2VAR(Rdci_T_SEC_COU_REL_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_AIP_ENG_DRV( P2VAR(Rdci_AIP_ENG_DRV_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_GNSSPositionAltitude( P2VAR(Rdci_GNSSPositionAltitude_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_GNSSErrorAltitudeMeters( P2VAR(Rdci_GNSSErrorAltitudeMeters_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_MILE_KM( P2VAR(Rdci_MILE_KM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_ILK_ERRM_FZM( P2VAR(Rdci_ST_ILK_ERRM_FZM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_ST_ENERG_FZM( P2VAR(Rdci_ST_ENERG_FZM_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data )
{
    return 0;
}

FUNC(Std_ReturnType, RTE_CODE) Wrap_HBG_Read_FrBusState( P2VAR(ImpTypeValFrBusState, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) pucState ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return 0;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_TEMP_EX( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewTemperatureData;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_AIP( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewUnitAipData;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_MILE( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewUnitMileData;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UN_TEMP( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewUnitTempData;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_CON_VEH( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewVehicleCondition;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_V_VEH( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewSpeedData;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_WMOM_DRV_4( void ) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  return bNewDirectionData;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_SLCTN_TYR_AVLB( void )
{
	return bNewOpSlctnTyr;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TAR_P_LOCO_TPCT( void )
{
	return bNewOpTarPLoco;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TPCT( void )
{
	return bNewOpTpct;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_TYR_SEA_TPCT( void )
{
	return bNewOpTyrSeason;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_RQ_OL_TPCT( void )
{
	return bNewRqOl;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_IDR_MSGC( void )
{	
  return bNewStIdrMsgc;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_OP_IDR_SLCTN( void )
{
	return bNewOpIdrSlctn;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_UHRZEIT_DATUM( void )
{
  return bNewTimeDate;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_AIP_ENG_DRV( void )
{
  return bNewAmbientPressure;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_GNSSPositionAltitude( void )
{
  return bNewPositionAltitude;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_GNSSErrorAltitudeMeters( void )
{
  return bNewErrorAltitudeMeters;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_T_SEC_COU_REL( void )
{
  return bNewTimeRel;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_MILE_KM( void )
{
  return bNewMileKm;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_ILK_ERRM_FZM( void )
{
  return bNewStIlkErrmFzm;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_ST_ENERG_FZM( void )
{
  return bNewStEnergFzm;
}

FUNC(boolean, RTE_CODE) Wrap_HBG_IsUpdated_FrBusState( void )
{
  return bNewFrBusState;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

