#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Ea.h"

class class_Ea{
   public:
      FUNC(void, EA_CODE) InitFunction           (void);
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
      FUNC(void, EA_CODE) MainFunction           (void);
};

extern class_Ea Ea;

