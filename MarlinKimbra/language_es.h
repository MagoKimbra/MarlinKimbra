/**
 * Spanish
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_ES_H
#define LANGUAGE_ES_H

#define MAPPER_NON
#define DISPLAY_CHARSET_ISO10646_1







#define WELCOME_MSG                         MACHINE_NAME " lista."

#define MSG_SD_INSERTED                     "Tarjeta colocada"
#define MSG_SD_REMOVED                      "Tarjeta retirada"
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       " Autostart"
#define MSG_DISABLE_STEPPERS                "Apagar motores"
#define MSG_AUTO_HOME                       "Llevar al origen"
#define MSG_MBL_SETTING                     "Manual Bed Leveling"
#define MSG_MBL_BUTTON                      " Press the button   "
#define MSG_MBL_INTRO                       " Leveling bed...    "
#define MSG_MBL_1                           " Adjust first point "
#define MSG_MBL_2                           " Adjust second point"
#define MSG_MBL_3                           " Adjust third point "
#define MSG_MBL_4                           " Adjust fourth point"
#define MSG_MBL_5                           "    Is it ok?       "
#define MSG_MBL_6                           " BED leveled!       "
#define MSG_SET_HOME_OFFSETS                "Ajustar offsets"
#define MSG_SET_ORIGIN                      "Establecer cero"
#define MSG_ONFOR                           "On x:"
#define MSG_PWRCONSUMED                     "P.er:"


#define MSG_PREHEAT_PLA                     "Precalentar PLA"
#define MSG_PREHEAT_PLA_ALL                 "Precal. PLA Todo"
#define MSG_PREHEAT_PLA_BEDONLY             "Precal. PLA Base"
#define MSG_PREHEAT_PLA_SETTINGS            "Ajustar temp. PLA"
#define MSG_PREHEAT_ABS                     "Precalentar ABS"
#define MSG_PREHEAT_ABS_ALL                 "Precal. ABS Todo"
#define MSG_PREHEAT_ABS_BEDONLY             "Precal. ABS Base"
#define MSG_PREHEAT_ABS_SETTINGS            "Ajustar temp. ABS"
#define MSG_PREHEAT_GUM                     "Preheat GUM"
#define MSG_PREHEAT_GUM_ALL                 "Preheat GUM All"
#define MSG_PREHEAT_GUM_BEDONLY             "Preheat GUM Bed"
#define MSG_PREHEAT_GUM_SETTINGS            "Preheat GUM conf"
#define MSG_TOO_COLD_FOR_M600               "M600 Hotend too cold to change filament"
#define MSG_COOLDOWN                        "Enfriar"
#define MSG_SWITCH_PS_ON                    "Encender"
#define MSG_SWITCH_PS_OFF                   "Apagar"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Retraer"
#define MSG_PURGE                           "Purge"
#define MSG_LEVEL_BED                       "Level bed"
#define MSG_SPEED                           "Velocidad"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_BED                             "Base"
#define MSG_FAN_SPEED                       "Ventilador"
#define MSG_FLOW                            "Flujo"
#define MSG_CONTROL                         "Control"
#define MSG_STATS                           "Statistics"
#define MSG_FIX_LOSE_STEPS                  "Fix axis steps"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_IDLEOOZING                      "Anti oozing"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_H1                              " H1"
#define MSG_H2                              " H2"
#define MSG_H3                              " H3"
#define MSG_ACC                             "Accel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"

#define MSG_MOVE_AXIS                       "Mover ejes"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vvacio min"
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-retrac."
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          "X pasos/mm"
#define MSG_YSTEPS                          "Y pasos/mm"
#define MSG_ZSTEPS                          "Z pasos/mm"
#define MSG_E0STEPS                         "E0 pasos/mm"
#define MSG_E1STEPS                         "E1 pasos/mm"
#define MSG_E2STEPS                         "E2 pasos/mm"
#define MSG_E3STEPS                         "E3 pasos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimiento"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm" STR_h3
#define MSG_FILAMENT_SIZE_EXTRUDER          "Fil. Dia."
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EPROM                     "Guardar memoria"
#define MSG_LOAD_EPROM                      "Cargar memoria"
#define MSG_RESTORE_FAILSAFE                "Rest. de emergen."
#define MSG_REFRESH                         "Volver a cargar"
#define MSG_WATCH                           "Monitorizar"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Ajustar"
#define MSG_PAUSE_PRINT                     "Pausar impresion"
#define MSG_RESUME_PRINT                    "Reanudar impres."
#define MSG_STOP_PRINT                      "Detener impresion"
#define MSG_CARD_MENU                       "Menu de SD"
#define MSG_NO_CARD                         "No hay tarjeta SD"
#define MSG_DWELL                           "Reposo..."
#define MSG_USERWAIT                        "Esperando ordenes"
#define MSG_RESUMING                        "Resumiendo impre."
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Sin movimiento"
#define MSG_KILLED                          "PARADA DE EMERG."
#define MSG_STOPPED                         "PARADA"
#define MSG_CONTROL_RETRACT                 "Retraer mm"
#define MSG_CONTROL_RETRACT_SWAP            "Interc. Retraer mm"
#define MSG_CONTROL_RETRACTF                "Retraer  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Interc. DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Cambiar filamento"
#define MSG_INIT_SDCARD                     "Iniciando tarjeta"
#define MSG_CNG_SDCARD                      "Cambiar tarjeta"
#define MSG_ZPROBE_OUT                      "sonda Z fuera"
#define MSG_POSITION_UNKNOWN                "Reiniciar X/Y y Z"
#define MSG_ZPROBE_ZOFFSET                  "Offset Z"
#define MSG_BABYSTEP                        "Babystep"
#define MSG_BABYSTEP_X                      MSG_BABYSTEP " " MSG_X
#define MSG_BABYSTEP_Y                      MSG_BABYSTEP " " MSG_Y
#define MSG_BABYSTEP_Z                      MSG_BABYSTEP " " MSG_Z
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP ERROR"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_HOTEND_AD595                    "HOTEND AD595 Offset & Gain"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#define MSG_END_DAY                         "days"
#define MSG_END_HOUR                        "hours"
#define MSG_END_MINUTE                      "minutes"

#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_BABYSTEPPING                    "Babystepping"
#define MSG_BABYSTEPPING_X                  MSG_BABYSTEPPING " " MSG_X
#define MSG_BABYSTEPPING_Y                  MSG_BABYSTEPPING " " MSG_Y
#define MSG_BABYSTEPPING_Z                  MSG_BABYSTEPPING " " MSG_Z

#define MSG_ENDSTOP_XS                      MSG_X
#define MSG_ENDSTOP_YS                      MSG_Y
#define MSG_ENDSTOP_ZS                      MSG_Z
#define MSG_ENDSTOP_ZPS                     MSG_Z "P"
#define MSG_ENDSTOP_ES                      MSG_E

// Debug
#define MSG_DEBUG_ECHO                      "DEBUG ECHO ENABLED"
#define MSG_DEBUG_INFO                      "DEBUG INFO ENABLED"
#define MSG_DEBUG_ERRORS                    "DEBUG ERRORS ENABLED"
#define MSG_DEBUG_DRYRUN                    "DEBUG DRYRUN ENABLED"
#define MSG_DEBUG                           "DEBUG ENABLED"

// Calibrate Delta
#if MECH(DELTA)
  #define MSG_DELTA_CALIBRATE               "Delta Calibration"
  #define MSG_DELTA_CALIBRATE               "Calibrate"
  #define MSG_DELTA_CALIBRATE_X             MSG_DELTA_CALIBRATE " " MSG_X
  #define MSG_DELTA_CALIBRATE_Y             MSG_DELTA_CALIBRATE " " MSG_Y
  #define MSG_DELTA_CALIBRATE_Z             MSG_DELTA_CALIBRATE " " MSG_Z
  #define MSG_DELTA_CALIBRATE_CENTER        MSG_DELTA_CALIBRATE " Center"
#endif // DELTA

// Scara
#if MECH(SCARA)
  #define MSG_SCALE                         "Scale"
  #define MSG_XSCALE                        MSG_X " " MSG_SCALE
  #define MSG_YSCALE                        MSG_Y " " MSG_SCALE
#endif

#define MSG_HEATING                         "Heating..."
#define MSG_HEATING_COMPLETE                "Heating done."
#define MSG_BED_HEATING                     "Bed Heating."
#define MSG_BED_DONE                        "Bed done."

// Extra
#define MSG_LASER                           "Laser Preset"
#define MSG_CONFIG                          "Configuration"
#define MSG_E_BOWDEN_LENGTH                 MSG_EXTRUDE " " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_R_BOWDEN_LENGTH                 MSG_RETRACT " " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_PURGE_XMM                       MSG_PURGE " " STRINGIFY(LCD_PURGE_LENGTH) "mm"
#define MSG_RETRACT_XMM                     MSG_RETRACT " " STRINGIFY(LCD_RETRACT_LENGTH) "mm"
#define MSG_SAVED_POS                       "Saved position"
#define MSG_RESTORING_POS                   "Restoring position"
#define MSG_INVALID_POS_SLOT                "Invalid slot, total slots: "

// Firmware Test
#if ENABLED(FIRMWARE_TEST)
  #define MSG_FWTEST_YES                    "Put the Y command to go next"
  #define MSG_FWTEST_NO                     "Put the N command to go next"
  #define MSG_FWTEST_YES_NO                 "Put the Y or N command to go next"
  #define MSG_FWTEST_ENDSTOP_ERR            "ENDSTOP ERROR! Check wire and connection"
  #define MSG_FWTEST_PRESS                  "Press and hold the endstop "
  #define MSG_FWTEST_INVERT                 "Reverse value of "
  #define MSG_FWTEST_XAXIS                  "Has the nozzle moved to the right?"
  #define MSG_FWTEST_YAXIS                  "Has the nozzle moved forward?"
  #define MSG_FWTEST_ZAXIS                  "Has the nozzle moved up?"
  #define MSG_FWTEST_01                     "Manually move the axes X, Y and Z away from the endstop"
  #define MSG_FWTEST_02                     "Do you want check ENDSTOP?"
  #define MSG_FWTEST_03                     "Start check ENDSTOP"
  #define MSG_FWTEST_04                     "Start check MOTOR"
  #define MSG_FWTEST_ATTENTION              "ATTENTION! Check that the three axes are more than 5 mm from the endstop!"
  #define MSG_FWTEST_END                    "Finish Test. Disable FIRMWARE_TEST and recompile."
  #define MSG_FWTEST_INTO                   "into "
  #define MSG_FWTEST_ERROR                  "ERROR"
  #define MSG_FWTEST_OK                     "OK"
  #define MSG_FWTEST_NDEF                   "not defined"
#endif // FIRMWARE_TEST

#endif // LANGUAGE_ES_H
