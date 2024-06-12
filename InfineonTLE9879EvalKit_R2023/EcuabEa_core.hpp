#pragma once
/******************************************************************************/
/* File   : EcuabEa_core.hpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabEa.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABEA_CORE_FUNCTIONALITIES                                                \
              FUNC(void, ECUABEA_CODE) SetMode                (void);               \
              FUNC(void, ECUABEA_CODE) Read                   (void);               \
              FUNC(void, ECUABEA_CODE) Write                  (void);               \
              FUNC(void, ECUABEA_CODE) McalCancel                 (void);               \
              FUNC(void, ECUABEA_CODE) GetStatus              (void);               \
              FUNC(void, ECUABEA_CODE) GetJobResult           (void);               \
              FUNC(void, ECUABEA_CODE) InvalidateBlock        (void);               \
              FUNC(void, ECUABEA_CODE) EraseImmediateBlock    (void);               \
              FUNC(void, ECUABEA_CODE) CbJobEndNotification   (void);               \
              FUNC(void, ECUABEA_CODE) CbJobErrorNotification (void);               \

#define ECUABEA_CORE_FUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, ECUABEA_CODE) SetMode                (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) Read                   (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) Write                  (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) McalCancel                 (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) GetStatus              (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) GetJobResult           (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) InvalidateBlock        (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) EraseImmediateBlock    (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) CbJobEndNotification   (void) = 0;           \
      virtual FUNC(void, ECUABEA_CODE) CbJobErrorNotification (void) = 0;           \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabEa_Functionality{
   public:
      ECUABEA_CORE_FUNCTIONALITIES_VIRTUAL
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

