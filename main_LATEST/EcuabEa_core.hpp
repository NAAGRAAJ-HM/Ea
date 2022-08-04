#pragma once
/******************************************************************************/
/* File   : EcuabEa_core.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabEa.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EA_CORE_FUNCTIONALITIES                                                \
              FUNC(void, EA_CODE) SetMode                (void);               \
              FUNC(void, EA_CODE) Read                   (void);               \
              FUNC(void, EA_CODE) Write                  (void);               \
              FUNC(void, EA_CODE) McalCancel                 (void);               \
              FUNC(void, EA_CODE) GetStatus              (void);               \
              FUNC(void, EA_CODE) GetJobResult           (void);               \
              FUNC(void, EA_CODE) InvalidateBlock        (void);               \
              FUNC(void, EA_CODE) EraseImmediateBlock    (void);               \
              FUNC(void, EA_CODE) CbJobEndNotification   (void);               \
              FUNC(void, EA_CODE) CbJobErrorNotification (void);               \

#define EA_CORE_FUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, EA_CODE) SetMode                (void) = 0;           \
      virtual FUNC(void, EA_CODE) Read                   (void) = 0;           \
      virtual FUNC(void, EA_CODE) Write                  (void) = 0;           \
      virtual FUNC(void, EA_CODE) McalCancel                 (void) = 0;           \
      virtual FUNC(void, EA_CODE) GetStatus              (void) = 0;           \
      virtual FUNC(void, EA_CODE) GetJobResult           (void) = 0;           \
      virtual FUNC(void, EA_CODE) InvalidateBlock        (void) = 0;           \
      virtual FUNC(void, EA_CODE) EraseImmediateBlock    (void) = 0;           \
      virtual FUNC(void, EA_CODE) CbJobEndNotification   (void) = 0;           \
      virtual FUNC(void, EA_CODE) CbJobErrorNotification (void) = 0;           \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabEa_Functionality{
   public:
      EA_CORE_FUNCTIONALITIES_VIRTUAL
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

