/*****************************************************/
/* File   : Ea.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infEa_EcuM.h"
#include "infEa_SchM.h"
#include "Ea_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Ea:
      public abstract_module
{
   public:
      FUNC(void, EA_CODE) InitFunction   (void);
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) GetVersionInfo (void);
      FUNC(void, EA_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Ea      Ea;
infEcuMClient* gptrinfEcuMClient_Ea = &Ea;
infDcmClient*  gptrinfDcmClient_Ea  = &Ea;
infSchMClient* gptrinfSchMClient_Ea = &Ea;

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

FUNC(void, EA_CODE) class_Ea_Unused::GetVersionInfo(void){
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

