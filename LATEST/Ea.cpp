/******************************************************************************/
/* File   : Ea.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Ea.hpp"
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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Ea, EA_VAR) Ea;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EA_CODE) module_Ea::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, EA_CONST,       EA_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Ea_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEa_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
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

FUNC(void, EA_CODE) module_Ea::DeInitFunction(
   void
){
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

FUNC(void, EA_CODE) module_Ea::MainFunction(
   void
){
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

FUNC(void, EA_CODE) module_Ea::SetMode(
   void
){
}

FUNC(void, EA_CODE) module_Ea::Read(
   void
){
}

FUNC(void, EA_CODE) module_Ea::Write(
   void
){
}

FUNC(void, EA_CODE) module_Ea::Cancel(
   void
){
}

FUNC(void, EA_CODE) module_Ea::GetStatus(
   void
){
}

FUNC(void, EA_CODE) module_Ea::GetJobResult(
   void
){
}

FUNC(void, EA_CODE) module_Ea::InvalidateBlock(
   void
){
}

FUNC(void, EA_CODE) module_Ea::EraseImmediateBlock(
   void
){
}

FUNC(void, EA_CODE) module_Ea::CbJobEndNotification(
   void
){
}

FUNC(void, EA_CODE) module_Ea::CbJobErrorNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

