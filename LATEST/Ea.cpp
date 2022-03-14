/******************************************************************************/
/* File   : Ea.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infEa_EcuM.h"
#include "infEa_Dcm.h"
#include "infEa_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Ea:
      public abstract_module
{
   public:
      FUNC(void, EA_CODE) InitFunction   (void);
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) GetVersionInfo (void);
      FUNC(void, EA_CODE) MainFunction   (void);
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


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Ea, EA_VAR) Ea;
CONSTP2VAR(infEcuMClient, EA_VAR, EA_CONST) gptrinfEcuMClient_Ea = &Ea;
CONSTP2VAR(infDcmClient,  EA_VAR, EA_CONST) gptrinfDcmClient_Ea  = &Ea;
CONSTP2VAR(infSchMClient, EA_VAR, EA_CONST) gptrinfSchMClient_Ea = &Ea;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, EA_CODE) module_Ea::InitFunction(void){
}

FUNC(void, EA_CODE) module_Ea::DeInitFunction(void){
}

FUNC(void, EA_CODE) module_Ea::GetVersionInfo(void){
}

FUNC(void, EA_CODE) module_Ea::MainFunction(void){
}

#include "Ea_Unused.h"

FUNC(void, EA_CODE) class_Ea_Unused::SetMode(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::Read(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::Write(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::Cancel(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::GetStatus(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::GetJobResult(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::InvalidateBlock(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::EraseImmediateBlock(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::CbJobEndNotification(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::CbJobErrorNotification(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

