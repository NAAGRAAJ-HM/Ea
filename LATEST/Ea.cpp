/******************************************************************************/
/* File   : Ea.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgEa.hpp"
#include "infEa_EcuM.hpp"
#include "infEa_Dcm.hpp"
#include "infEa_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EA_AR_RELEASE_MAJOR_VERSION                                            4
#define EA_AR_RELEASE_MINOR_VERSION                                            3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(EA_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible EA_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(EA_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible EA_AR_RELEASE_MINOR_VERSION!"
#endif

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

   private:
      CONST(Std_TypeVersionInfo, EA_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_Ea, EA_VAR) Ea;
CONSTP2VAR(infEcuMClient, EA_VAR, EA_CONST) gptrinfEcuMClient_Ea = &Ea;
CONSTP2VAR(infDcmClient,  EA_VAR, EA_CONST) gptrinfDcmClient_Ea  = &Ea;
CONSTP2VAR(infSchMClient, EA_VAR, EA_CONST) gptrinfSchMClient_Ea = &Ea;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EA_CODE) module_Ea::InitFunction(void){
   Ea.IsInitDone = E_OK;
}

FUNC(void, EA_CODE) module_Ea::DeInitFunction(void){
   Ea.IsInitDone = E_NOT_OK;
}

FUNC(void, EA_CODE) module_Ea::GetVersionInfo(void){
#if(STD_ON == Ea_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, EA_CODE) module_Ea::MainFunction(void){
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

