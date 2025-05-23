void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void OVENPCB_init__(OVENPCB *data__, BOOL retain) {
  __INIT_LOCATED(INT,__QW100,data__->MB_PWM_FREQ_H,retain)
  __INIT_LOCATED_VALUE(data__->MB_PWM_FREQ_H,0)
  __INIT_LOCATED(INT,__QW101,data__->MB_PWM_FREQ_L,retain)
  __INIT_LOCATED_VALUE(data__->MB_PWM_FREQ_L,0)
  __INIT_LOCATED(INT,__QW102,data__->MB_PWM_DUTY,retain)
  __INIT_LOCATED_VALUE(data__->MB_PWM_DUTY,0)
  __INIT_LOCATED(INT,__IW100,data__->MB_TEMP,retain)
  __INIT_LOCATED_VALUE(data__->MB_TEMP,0)
  __INIT_LOCATED(INT,__IW101,data__->MB_TEMPDS18B20,retain)
  __INIT_LOCATED_VALUE(data__->MB_TEMPDS18B20,0)
  __INIT_LOCATED(INT,__QW0,data__->MBSL_TEMP,retain)
  __INIT_LOCATED_VALUE(data__->MBSL_TEMP,0)
  __INIT_LOCATED(INT,__QW1,data__->MBSL_TEMPDS18B20,retain)
  __INIT_LOCATED_VALUE(data__->MBSL_TEMPDS18B20,0)
  PID_init__(&data__->PID0,retain);
  __INIT_LOCATED(BOOL,__QX0_0,data__->PID_AUTO,retain)
  __INIT_LOCATED_VALUE(data__->PID_AUTO,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(REAL,__MD0,data__->PID_OUT,retain)
  __INIT_LOCATED_VALUE(data__->PID_OUT,0)
  __INIT_LOCATED(REAL,__MD1,data__->PID_P,retain)
  __INIT_LOCATED_VALUE(data__->PID_P,2.0)
  __INIT_LOCATED(REAL,__MD2,data__->PID_I,retain)
  __INIT_LOCATED_VALUE(data__->PID_I,1000.0)
  __INIT_LOCATED(REAL,__MD3,data__->PID_D,retain)
  __INIT_LOCATED_VALUE(data__->PID_D,0.0)
  __INIT_LOCATED(REAL,__MD4,data__->PID_SP,retain)
  __INIT_LOCATED_VALUE(data__->PID_SP,450.0)
  __INIT_LOCATED(DINT,__MD5,data__->PWM_DUTY,retain)
  __INIT_LOCATED_VALUE(data__->PWM_DUTY,0)
  __INIT_LOCATED(REAL,__MD6,data__->PWM_DUTY_MANUAL,retain)
  __INIT_LOCATED_VALUE(data__->PWM_DUTY_MANUAL,0.0)
  __INIT_VAR(data__->_TMP_MUL26_OUT,0,retain)
  __INIT_VAR(data__->_TMP_INT_TO_REAL34_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV28_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV32_OUT,0,retain)
  __INIT_VAR(data__->_TMP_REAL_TO_INT3_OUT,0,retain)
  __INIT_VAR(data__->_TMP_SUB37_OUT,0,retain)
  __INIT_VAR(data__->_TMP_INT_TO_REAL62_OUT,0,retain)
  __INIT_VAR(data__->_TMP_SUB71_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV73_OUT,0,retain)
  __INIT_VAR(data__->_TMP_REAL_TO_INT54_OUT,0,retain)
  __INIT_VAR(data__->_TMP_SUB65_OUT,0,retain)
  __INIT_VAR(data__->_TMP_LIMIT60_OUT,0,retain)
  __INIT_VAR(data__->_TMP_INT_TO_DINT70_OUT,0,retain)
  __INIT_VAR(data__->_TMP_INT_TO_REAL64_OUT,0,retain)
}

// Code part
void OVENPCB_body__(OVENPCB *data__) {
  // Initialise TEMP variables

  __SET_LOCATED(data__->,MBSL_TEMPDS18B20,,__GET_LOCATED(data__->MB_TEMPDS18B20,));
  __SET_VAR(data__->,_TMP_MUL26_OUT,,MUL__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_LOCATED(data__->MB_TEMP,),
    (INT)5));
  __SET_VAR(data__->,_TMP_INT_TO_REAL34_OUT,,INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->_TMP_MUL26_OUT,)));
  __SET_VAR(data__->,_TMP_DIV28_OUT,,DIV__REAL__REAL__REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->_TMP_INT_TO_REAL34_OUT,),
    (REAL)4.096));
  __SET_VAR(data__->,_TMP_DIV32_OUT,,DIV__REAL__REAL__REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->_TMP_DIV28_OUT,),
    (REAL)1.88));
  __SET_VAR(data__->,_TMP_REAL_TO_INT3_OUT,,REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->_TMP_DIV32_OUT,)));
  __SET_VAR(data__->,_TMP_SUB37_OUT,,SUB__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->_TMP_REAL_TO_INT3_OUT,),
    (INT)250));
  __SET_LOCATED(data__->,MBSL_TEMP,,__GET_VAR(data__->_TMP_SUB37_OUT,));
  __SET_LOCATED(data__->,MB_PWM_FREQ_H,,31);
  __SET_VAR(data__->,_TMP_INT_TO_REAL62_OUT,,INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_LOCATED(data__->MBSL_TEMP,)));
  __SET_VAR(data__->,_TMP_SUB71_OUT,,SUB__REAL__REAL__REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)0.0,
    (REAL)__GET_LOCATED(data__->PWM_DUTY_MANUAL,)));
  __SET_VAR(data__->,_TMP_DIV73_OUT,,DIV__REAL__REAL__REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->_TMP_SUB71_OUT,),
    (REAL)__GET_LOCATED(data__->PID_P,)));
  __SET_VAR(data__->PID0.,AUTO,,__GET_LOCATED(data__->PID_AUTO,));
  __SET_VAR(data__->PID0.,PV,,__GET_VAR(data__->_TMP_INT_TO_REAL62_OUT,));
  __SET_VAR(data__->PID0.,SP,,__GET_LOCATED(data__->PID_SP,));
  __SET_VAR(data__->PID0.,X0,,__GET_VAR(data__->_TMP_DIV73_OUT,));
  __SET_VAR(data__->PID0.,KP,,__GET_LOCATED(data__->PID_P,));
  __SET_VAR(data__->PID0.,TR,,__GET_LOCATED(data__->PID_I,));
  __SET_VAR(data__->PID0.,TD,,__GET_LOCATED(data__->PID_D,));
  __SET_VAR(data__->PID0.,CYCLE,,__time_to_timespec(1, 20, 0, 0, 0, 0));
  PID_body__(&data__->PID0);
  __SET_VAR(data__->,_TMP_REAL_TO_INT54_OUT,,REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PID0.XOUT,)));
  __SET_VAR(data__->,_TMP_SUB65_OUT,,SUB__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)0,
    (INT)__GET_VAR(data__->_TMP_REAL_TO_INT54_OUT,)));
  __SET_VAR(data__->,_TMP_LIMIT60_OUT,,LIMIT__INT__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)0,
    (INT)__GET_VAR(data__->_TMP_SUB65_OUT,),
    (INT)1000));
  __SET_LOCATED(data__->,MB_PWM_DUTY,,__GET_VAR(data__->_TMP_LIMIT60_OUT,));
  __SET_VAR(data__->,_TMP_INT_TO_DINT70_OUT,,INT_TO_DINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->_TMP_LIMIT60_OUT,)));
  __SET_LOCATED(data__->,PWM_DUTY,,__GET_VAR(data__->_TMP_INT_TO_DINT70_OUT,));
  __SET_VAR(data__->,_TMP_INT_TO_REAL64_OUT,,INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->_TMP_SUB65_OUT,)));
  __SET_LOCATED(data__->,PID_OUT,,__GET_VAR(data__->_TMP_INT_TO_REAL64_OUT,));

  goto __end;

__end:
  return;
} // OVENPCB_body__() 





