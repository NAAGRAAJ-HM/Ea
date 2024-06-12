/******************************************************************************/
/* File   : EcuabEa.cpp                                                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabEa.hpp"
#include "infEcuabEa_Imp.hpp"

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
VAR(module_EcuabEa, EA_VAR) EcuabEa;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EA_CODE) module_EcuabEa::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, EA_CONST,       EA_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabEa_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabEa_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabEa_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabEa_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EA_CODE) module_EcuabEa::DeInitFunction(
   void
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabEa_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabEa_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EA_CODE) module_EcuabEa::MainFunction(
   void
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabEa_InitCheck)
   }
   else{
#if(STD_ON == EcuabEa_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EA_CODE) module_EcuabEa::SetMode(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::Read(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::Write(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::McalCancel(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::GetStatus(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::GetJobResult(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::InvalidateBlock(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::EraseImmediateBlock(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::CbJobEndNotification(
   void
){
}

FUNC(void, EA_CODE) module_EcuabEa::CbJobErrorNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

