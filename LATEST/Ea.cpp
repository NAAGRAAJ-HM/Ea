/******************************************************************************/
/* File   : Ea.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgEa.hpp"
#include "Ea_core.hpp"
#include "infEa_Exp.hpp"
#include "infEa_Imp.hpp"

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
      INTERFACES_EXPORTED_EA
      public abstract_module
   ,  public class_Ea_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Ea(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, EA_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
      );
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) MainFunction   (void);
      EA_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Ea, EA_VAR) Ea(
   {
#if(STD_ON == _ReSIM)
// char strModuleName[6];
#else
#endif
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgEa;
         }
      }
      else{
#if(STD_ON == Ea_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Ea_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Ea_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EA_CODE) module_Ea::DeInitFunction(void){
#if(STD_ON == Ea_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Ea_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Ea_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EA_CODE) module_Ea::MainFunction(void){
#if(STD_ON == Ea_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Ea_InitCheck)
   }
   else{
#if(STD_ON == Ea_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EA_CODE) module_Ea::SetMode(void){
}

FUNC(void, EA_CODE) module_Ea::Read(void){
}

FUNC(void, EA_CODE) module_Ea::Write(void){
}

FUNC(void, EA_CODE) module_Ea::Cancel(void){
}

FUNC(void, EA_CODE) module_Ea::GetStatus(void){
}

FUNC(void, EA_CODE) module_Ea::GetJobResult(void){
}

FUNC(void, EA_CODE) module_Ea::InvalidateBlock(void){
}

FUNC(void, EA_CODE) module_Ea::EraseImmediateBlock(void){
}

FUNC(void, EA_CODE) module_Ea::CbJobEndNotification(void){
}

FUNC(void, EA_CODE) module_Ea::CbJobErrorNotification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

