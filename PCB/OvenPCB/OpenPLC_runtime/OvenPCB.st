PROGRAM OvenPCB
  VAR
    mb_PWM_freq_h AT %QW100 : INT;
    mb_PWM_freq_l AT %QW101 : INT;
    mb_PWM_duty AT %QW102 : INT;
    mb_Temp AT %IW100 : INT;
  END_VAR

  mb_PWM_freq_h := 31;
  mb_PWM_duty := 50;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : OvenPCB;
  END_RESOURCE
END_CONFIGURATION
