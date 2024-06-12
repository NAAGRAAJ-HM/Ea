/******************************************************************************/
/* File   : EcuabEa.cpp                                                       */
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
#define ECUABEA_AR_RELEASE_VERSION_MAJOR                                       4
#define ECUABEA_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABEA_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABEA_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABEA_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABEA_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_EcuabEa, ECUABEA_VAR) EcuabEa;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABEA_CODE) module_EcuabEa::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABEA_CONST,       ECUABEA_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABEA_CONFIG_DATA, ECUABEA_APPL_CONST) lptrCfgModule
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
         ,  ECUABEA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::DeInitFunction(
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
         ,  ECUABEA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::MainFunction(
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
         ,  ECUABEA_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::SetMode(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::Read(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::Write(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::McalCancel(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::GetStatus(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::GetJobResult(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::InvalidateBlock(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::EraseImmediateBlock(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::CbJobEndNotification(
   void
){
}

FUNC(void, ECUABEA_CODE) module_EcuabEa::CbJobErrorNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

