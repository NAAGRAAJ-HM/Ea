/******************************************************************************/
/* File   : EcuabEa.cpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
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
VAR(module_EcuabEa, ECUABEA_VAR) EcuabEa;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABEA_CODE) module_EcuabEa::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABEA_CONST,       ECUABEA_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABEA_CONFIG_DATA, ECUABEA_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabEa_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
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

