/******************************************************************************/
/* File   : Ea.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infEa_EcuM.hpp"
#include "infEa_Dcm.hpp"
#include "infEa_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EA_AR_RELEASE_VERSION_MAJOR                                            4
#define EA_AR_RELEASE_VERSION_MINOR                                            3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(EA_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible EA_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(EA_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible EA_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Ea:
      public abstract_module
{
   public:
      module_Ea(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, EA_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
      );
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) MainFunction   (void);
};

extern VAR(module_Ea, EA_VAR) Ea;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, EA_VAR, EA_CONST) gptrinfEcuMClient_Ea = &Ea;
CONSTP2VAR(infDcmClient,  EA_VAR, EA_CONST) gptrinfDcmClient_Ea  = &Ea;
CONSTP2VAR(infSchMClient, EA_VAR, EA_CONST) gptrinfSchMClient_Ea = &Ea;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgEa.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Ea, EA_VAR) Ea(
   {
         EA_AR_RELEASE_VERSION_MAJOR
      ,  EA_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EA_CODE) module_Ea::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Ea_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Ea_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Ea_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfg_CanIf as back-up configuration
            lptrCfg = PBcfg_CanIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Ea_InitCheck)
   }
#endif
}

FUNC(void, EA_CODE) module_Ea::DeInitFunction(void){
#if(STD_ON == Ea_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Ea_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Ea_InitCheck)
   }
#endif
}

FUNC(void, EA_CODE) module_Ea::MainFunction(void){
#if(STD_ON == Ea_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Ea_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == Ea_InitCheck)
   }
#endif
}

class class_Ea_Unused{
   public:
      FUNC(void, EA_CODE) SetMode                (void);
      FUNC(void, EA_CODE) Read                   (void);
      FUNC(void, EA_CODE) Write                  (void);
      FUNC(void, EA_CODE) Cancel                 (void);
      FUNC(void, EA_CODE) GetStatus              (void);
      FUNC(void, EA_CODE) GetJobResult           (void);
      FUNC(void, EA_CODE) InvalidateBlock        (void);
      FUNC(void, EA_CODE) GetVersionInfo         (void);
      FUNC(void, EA_CODE) EraseImmediateBlock    (void);
      FUNC(void, EA_CODE) CbJobEndNotification   (void);
      FUNC(void, EA_CODE) CbJobErrorNotification (void);
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

