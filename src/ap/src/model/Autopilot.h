#ifndef RTW_HEADER_Autopilot_h_
#define RTW_HEADER_Autopilot_h_
#include <cfloat>
#include <cmath>
#include <cstring>
#ifndef Autopilot_COMMON_INCLUDES_
# define Autopilot_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif

#include "Autopilot_types.h"

typedef struct {
  uint8_T is_active_c8_Autopilot;
  uint8_T is_c8_Autopilot;
} rtDW_Chart_Autopilot_T;

typedef struct {
  ap_output BusAssignment;
  base_vertical_output out;
  base_vertical_input BusConversion_InsertedFor_VerticalMode_at_inport_3_BusCreator1;
  base_lateral_output out_g;
  real_T u;
  real_T u_n;
  real_T in;
  real_T in_l;
  real_T in_i;
} BlockIO_Autopilot_T;

typedef struct {
  ap_output Delay_DSTATE;
  real_T Delay_DSTATE_h;
  real_T Delay_DSTATE_ho;
  real_T Delay1_DSTATE;
  real_T Delay_DSTATE_a;
  real_T Delay_DSTATE_am;
  real_T Delay1_DSTATE_g;
  real_T Delay_DSTATE_hc;
  real_T Delay_DSTATE_e;
  real_T Delay1_DSTATE_k;
  real_T Delay_DSTATE_b;
  real_T Delay_DSTATE_ex;
  real_T Delay_DSTATE_bx;
  real_T Delay1_DSTATE_f;
  real_T Delay_DSTATE_e3;
  real_T Delay_DSTATE_f;
  real_T Delay1_DSTATE_j;
  real_T Delay_DSTATE_k;
  real_T Delay_DSTATE_b5;
  real_T Delay1_DSTATE_b;
  real_T Delay_DSTATE_g;
  real_T Delay_DSTATE_j;
  real_T Delay1_DSTATE_n;
  real_T Delay_DSTATE_gx;
  boolean_T DelayInput1_DSTATE;
  boolean_T DelayInput1_DSTATE_b;
  boolean_T DelayInput1_DSTATE_d;
  boolean_T DelayInput1_DSTATE_e;
  boolean_T DelayInput1_DSTATE_g;
  boolean_T DelayInput1_DSTATE_f;
  boolean_T DelayInput1_DSTATE_i;
  boolean_T DelayInput1_DSTATE_bd;
  boolean_T DelayInput1_DSTATE_a;
  boolean_T DelayInput1_DSTATE_fn;
  boolean_T DelayInput1_DSTATE_h;
  uint8_T icLoad;
  uint8_T icLoad_b;
  uint8_T is_active_c2_Autopilot;
  uint8_T is_c2_Autopilot;
  uint8_T is_ON;
  uint8_T is_GS;
  uint8_T is_active_c6_Autopilot;
  uint8_T is_c6_Autopilot;
  uint8_T is_active_c7_Autopilot;
  uint8_T is_c7_Autopilot;
  uint8_T is_active_c4_Autopilot;
  uint8_T is_c4_Autopilot;
  uint8_T is_active_c1_Autopilot;
  uint8_T is_c1_Autopilot;
  uint8_T is_ON_c;
  uint8_T is_LOC;
  uint8_T is_active_c3_Autopilot;
  uint8_T is_c3_Autopilot;
  uint8_T is_active_c5_Autopilot;
  uint8_T is_c5_Autopilot;
  rtDW_Chart_Autopilot_T sf_Chart_n;
  rtDW_Chart_Autopilot_T sf_Chart_g;
  rtDW_Chart_Autopilot_T sf_Chart_i;
  rtDW_Chart_Autopilot_T sf_Chart_l;
  rtDW_Chart_Autopilot_T sf_Chart_c;
  rtDW_Chart_Autopilot_T sf_Chart_b;
  rtDW_Chart_Autopilot_T sf_Chart;
} D_Work_Autopilot_T;

typedef struct {
  ap_input in;
} ExternalInputs_Autopilot_T;

typedef struct {
  ap_output out;
} ExternalOutputs_Autopilot_T;

struct Parameters_Autopilot_T_ {
  ap_output ap_output_MATLABStruct;
  real_T ScheduledGain_BreakpointsForDimension1[3];
  real_T ScheduledGain_BreakpointsForDimension1_b[4];
  real_T ScheduledGain_BreakpointsForDimension1_c[4];
  real_T ScheduledGain_BreakpointsForDimension1_m[4];
  real_T ScheduledGain_BreakpointsForDimension1_a[5];
  real_T ScheduledGain_BreakpointsForDimension1_f[4];
  real_T ScheduledGain_BreakpointsForDimension1_e[5];
  real_T ScheduledGain_BreakpointsForDimension1_j[4];
  real_T ScheduledGain_BreakpointsForDimension1_h[5];
  real_T LagFilter1_C1;
  real_T LagFilter_C1;
  real_T LagFilter_C1_l;
  real_T LagFilter1_C1_a;
  real_T LagFilter_C1_n;
  real_T LagFilter1_C1_p;
  real_T LagFilter_C1_f;
  real_T DiscreteTimeIntegratorVariableTs_Gain;
  real_T DiscreteDerivativeVariableTs_Gain;
  real_T DiscreteDerivativeVariableTs_Gain_m;
  real_T DiscreteDerivativeVariableTs_Gain_l;
  real_T DiscreteDerivativeVariableTs_Gain_lf;
  real_T DiscreteTimeIntegratorVariableTs_InitialCondition;
  real_T DiscreteDerivativeVariableTs_InitialCondition;
  real_T RateLimiterVariableTs_InitialCondition;
  real_T DiscreteDerivativeVariableTs_InitialCondition_e;
  real_T DiscreteDerivativeVariableTs_InitialCondition_h;
  real_T DiscreteDerivativeVariableTs_InitialCondition_b;
  real_T RateLimiterVariableTs_InitialCondition_p;
  real_T DiscreteTimeIntegratorVariableTs_LowerLimit;
  real_T ScheduledGain_Table[3];
  real_T ScheduledGain_Table_p[4];
  real_T ScheduledGain_Table_b[4];
  real_T ScheduledGain_Table_a[4];
  real_T ScheduledGain_Table_pq[5];
  real_T ScheduledGain_Table_n[4];
  real_T ScheduledGain_Table_pf[5];
  real_T ScheduledGain_Table_m[4];
  real_T ScheduledGain_Table_i[5];
  real_T DiscreteTimeIntegratorVariableTs_UpperLimit;
  real_T CompareToConstant35_const;
  real_T CompareToConstant36_const;
  real_T CompareToConstant_const;
  real_T CompareToConstant1_const;
  real_T CompareToConstant2_const;
  real_T CompareToConstant13_const;
  real_T CompareToConstant24_const;
  real_T CompareToConstant34_const;
  real_T CompareToConstant1_const_m;
  real_T CompareToConstant2_const_o;
  real_T CompareToConstant5_const;
  real_T CompareToConstant19_const;
  real_T CompareToConstant6_const;
  real_T CompareToConstant7_const;
  real_T CompareToConstant8_const;
  real_T CompareToConstant33_const;
  real_T CompareToConstant3_const;
  real_T CompareToConstant4_const;
  real_T CompareToConstant32_const;
  real_T CompareToConstant_const_k;
  real_T CompareToConstant_const_d;
  real_T CompareToConstant5_const_e;
  real_T CompareToConstant_const_j;
  real_T RateLimiterVariableTs_lo;
  real_T RateLimiterVariableTs_lo_o;
  real_T RateLimiterVariableTs_up;
  real_T RateLimiterVariableTs_up_i;
  lateral_mode CompareToConstant3_const_f;
  lateral_mode CompareToConstant4_const_k;
  lateral_mode CompareToConstant12_const;
  lateral_mode CompareToConstant20_const;
  lateral_mode CompareToConstant23_const;
  lateral_mode CompareToConstant25_const;
  lateral_mode CompareToConstant15_const;
  lateral_mode CompareToConstant17_const;
  vertical_mode CompareToConstant11_const;
  vertical_mode CompareToConstant21_const;
  vertical_mode CompareToConstant22_const;
  vertical_mode CompareToConstant26_const;
  vertical_mode CompareToConstant14_const;
  vertical_mode CompareToConstant18_const;
  vertical_mode CompareToConstant16_const;
  vertical_mode CompareToConstant27_const;
  vertical_mode CompareToConstant28_const;
  vertical_mode CompareToConstant29_const;
  vertical_mode CompareToConstant9_const;
  vertical_mode CompareToConstant10_const;
  boolean_T DetectIncrease_vinit;
  boolean_T DetectIncrease1_vinit;
  boolean_T DetectIncrease2_vinit;
  boolean_T DetectIncrease3_vinit;
  boolean_T DetectIncrease4_vinit;
  boolean_T DetectIncrease5_vinit;
  boolean_T DetectIncrease6_vinit;
  boolean_T DetectIncrease7_vinit;
  boolean_T DetectIncrease8_vinit;
  boolean_T DetectIncrease9_vinit;
  boolean_T DetectIncrease10_vinit;
  ap_output Delay_InitialCondition;
  real_T Constant_Value;
  real_T Gain_Gain;
  real_T Gain1_Gain;
  real_T Constant1_Value;
  real_T Gain_Gain_a;
  real_T Gain_Gain_b;
  real_T Gain5_Gain;
  real_T beta_Value;
  real_T beta_Value_m;
  real_T beta_Value_b;
  real_T beta_Value_e;
  real_T beta_Value_ed;
  real_T Constant3_Value;
  real_T Gain_Gain_p;
  real_T Gain1_Gain_k;
  real_T Gain1_Gain_l;
  real_T out_Y0;
  real_T out_Y0_i;
  real_T out_Y0_d;
  real_T kntoms_Gain;
  real_T Saturation_UpperSat;
  real_T Saturation_LowerSat;
  real_T Gain1_Gain_f;
  real_T Gain1_Gain_b;
  real_T msftmin_Gain;
  real_T Constant_Value_p;
  real_T Constant3_Value_n;
  real_T ftmintoms_Gain;
  real_T Gain_Gain_l;
  real_T Gain_Gain_m;
  real_T Constant2_Value;
  real_T Gain4_Gain;
  real_T Switch_Threshold;
  real_T Gain1_Gain_d;
  real_T Gain_Gain_c;
  real_T kntoms_Gain_a;
  real_T Saturation_UpperSat_e;
  real_T Saturation_LowerSat_a;
  real_T Gain1_Gain_g;
  real_T Gain1_Gain_dz;
  real_T msftmin_Gain_l;
  real_T ftmintoms_Gain_l;
  real_T Gain_Gain_d;
  real_T Gain_Gain_a3;
  real_T Switch_Threshold_k;
  real_T kntoms_Gain_e;
  real_T Saturation_UpperSat_d;
  real_T Saturation_LowerSat_n;
  real_T Gain1_Gain_b1;
  real_T Gain1_Gain_p;
  real_T msftmin_Gain_f;
  real_T Constant_Value_b;
  real_T Gain_Gain_e;
  real_T ftmintoms_Gain_le;
  real_T Gain_Gain_f;
  real_T Gain_Gain_lg;
  real_T kntoms_Gain_n;
  real_T Saturation_UpperSat_g;
  real_T Saturation_LowerSat_g;
  real_T Gain1_Gain_m;
  real_T Gain1_Gain_c;
  real_T msftmin_Gain_ff;
  real_T Gain_Gain_ft;
  real_T Saturation_UpperSat_n;
  real_T Saturation_LowerSat_d;
  real_T ftmintoms_Gain_j;
  real_T Gain_Gain_k;
  real_T Gain_Gain_bb;
  real_T Constant_Value_m;
  real_T Y_Y0;
  real_T Y_Y0_n;
  real_T Gain1_Gain_i;
  real_T GainTheta_Gain;
  real_T GainTheta1_Gain;
  real_T Gain_Gain_lv;
  real_T Gainqk_Gain;
  real_T Gain_Gain_aq;
  real_T Gain_Gain_kc;
  real_T Gainpk_Gain;
  real_T Gain_Gain_af;
  real_T Constant1_Value_p;
  real_T Saturation_UpperSat_k;
  real_T Saturation_LowerSat_m;
  real_T Gain1_Gain_k1;
  real_T Saturation1_UpperSat;
  real_T Saturation1_LowerSat;
  real_T Gain2_Gain;
  real_T Constant10_Value;
  real_T Switch_Threshold_o;
  real_T Gain1_Gain_cu;
  real_T Saturation_UpperSat_o;
  real_T Saturation_LowerSat_o;
  real_T Gain2_Gain_g;
  real_T Saturation1_UpperSat_g;
  real_T Saturation1_LowerSat_k;
  real_T Gain6_Gain;
  real_T Constant3_Value_c;
  real_T Constant3_Value_l;
  real_T Gain1_Gain_fq;
  real_T Constant3_Value_lz;
  real_T Constant3_Value_i;
  real_T Gain_Gain_ka;
  real_T Constant3_Value_l5;
  real_T Gain_Gain_ec;
  real_T Constant2_Value_l;
  real_T Constant1_Value_e;
  real_T Delay_InitialCondition_a;
  real_T Constant_Value_d;
  real_T Delay1_InitialCondition;
  real_T ROLLLIM1_tableData[5];
  real_T ROLLLIM1_bp01Data[5];
  real_T Constant3_Value_p;
  real_T Gain_Gain_ke;
  real_T Constant_Value_c;
  real_T Constant3_Value_a;
  real_T Gain_Gain_kg;
  real_T Constant_Value_i;
  real_T Constant3_Value_nk;
  real_T Constant3_Value_e;
  real_T Gain_Gain_n;
  real_T Saturation_UpperSat_kr;
  real_T Saturation_LowerSat_p;
  real_T Gain2_Gain_f;
  real_T Gain1_Gain_n;
  real_T Gain_Gain_nf;
  real_T Constant_Value_cw;
  real_T Constant3_Value_ic;
  real_T Constant3_Value_g;
  real_T Gain1_Gain_h;
  real_T Saturation_UpperSat_m;
  real_T Saturation_LowerSat_k;
  real_T Saturation1_UpperSat_i;
  real_T Saturation1_LowerSat_g;
  real_T Constant3_Value_j;
  real_T Constant3_Value_ik;
  real_T Gain3_Gain;
  real_T Gain_Gain_i;
  real_T Constant_Value_e;
  real_T Constant3_Value_k;
  real_T Constant3_Value_f;
  real_T Gain3_Gain_i;
  real_T Delay_InitialCondition_k;
  real_T Constant_Value_b2;
  real_T Delay1_InitialCondition_f;
  real_T Gain_Gain_cz;
  real_T Constant_Value_p1;
  real_T Constant2_Value_h;
  real_T Gain1_Gain_kf;
  real_T Delay_InitialCondition_g;
  real_T Constant_Value_o;
  real_T Delay1_InitialCondition_d;
  real_T Saturation_UpperSat_d1;
  real_T Saturation_LowerSat_d4;
  real_T Constant_Value_k;
  real_T Switch_Threshold_d;
  real_T Gain3_Gain_f;
  real_T Delay_InitialCondition_f;
  real_T Constant_Value_j;
  real_T Delay1_InitialCondition_h;
  real_T Saturation_UpperSat_h;
  real_T Saturation_LowerSat_c;
  real_T Gain1_Gain_bz;
  real_T Constant_Value_em;
  real_T Gain1_Gain_k0;
  real_T Gain1_Gain_ch;
  real_T Gain_Gain_pc;
  real_T Gain_Gain_k1;
  real_T Constant1_Value_ef;
  real_T Gain_Gain_h;
  real_T Constant_Value_ke;
  real_T Gain1_Gain_nd;
  real_T Gain1_Gain_m5;
  real_T kntoms_Gain_i;
  real_T msftmin_Gain_h;
  real_T ftmintoms_Gain_g;
  real_T Saturation_UpperSat_j;
  real_T Saturation_LowerSat_m3;
  real_T Gain_Gain_ly;
  real_T Gain_Gain_d4;
  real_T Gain1_Gain_j;
  real_T Gain3_Gain_o;
  real_T Delay_InitialCondition_h;
  real_T Constant_Value_n;
  real_T Delay1_InitialCondition_e;
  real_T Constant1_Value_d;
  real_T Gain3_Gain_fd;
  real_T Delay_InitialCondition_b;
  real_T Constant_Value_mm;
  real_T Delay1_InitialCondition_l;
  real_T Constant2_Value_m;
  real_T Saturation_UpperSat_nk;
  real_T Saturation_LowerSat_h;
  real_T Gain1_Gain_pc;
  real_T Constant_Value_jb;
  real_T Gain1_Gain_k4;
  real_T Gain1_Gain_db;
  real_T Gain_Gain_pn;
  real_T Gain_Gain_he;
  real_T Constant1_Value_l;
  real_T Gain_Gain_hk;
  real_T Constant_Value_in;
  real_T Gain1_Gain_a;
  real_T Gain1_Gain_n4;
  real_T kntoms_Gain_f;
  real_T msftmin_Gain_d;
  real_T ftmintoms_Gain_c;
  real_T Saturation_UpperSat_j3;
  real_T Saturation_LowerSat_e;
  real_T Gain_Gain_kcp;
  real_T Gain_Gain_e5;
  real_T Constant1_Value_i;
  real_T Constant2_Value_h1;
  real_T Gain1_Gain_ds;
  real_T Delay_InitialCondition_b5;
  real_T Constant_Value_cc;
  real_T Delay1_InitialCondition_h0;
  real_T Saturation_UpperSat_nn;
  real_T Saturation_LowerSat_l;
  real_T Constant_Value_px;
  boolean_T Constant1_Value_en;
  boolean_T Constant6_Value;
  boolean_T Constant4_Value;
  boolean_T Constant5_Value;
  boolean_T Constant2_Value_e;
  boolean_T Constant3_Value_i1;
  uint8_T ManualSwitch_CurrentSetting;
  uint8_T ManualSwitch_CurrentSetting_b;
};

extern const ap_input Autopilot_rtZap_input;
extern const ap_output Autopilot_rtZap_output;
class AutopilotModelClass {
 public:
  ExternalInputs_Autopilot_T Autopilot_U;
  ExternalOutputs_Autopilot_T Autopilot_Y;
  void initialize();
  void step();
  void terminate();
  AutopilotModelClass();
  ~AutopilotModelClass();
 private:
  static Parameters_Autopilot_T Autopilot_P;
  BlockIO_Autopilot_T Autopilot_B;
  D_Work_Autopilot_T Autopilot_DWork;
  void Autopilot_Chart_Init(rtDW_Chart_Autopilot_T *localDW);
  void Autopilot_Chart(real_T rtu_right, real_T rtu_left, real_T rtu_use_short_path, real_T *rty_out,
                       rtDW_Chart_Autopilot_T *localDW);
  void Autopilot_NAV_entry(void);
  void Autopilot_HDG_entry(void);
  void Autopilot_HDG_during(const base_lateral_input *BusConversion_InsertedFor_LateralMode_at_inport_4_BusCreator1);
  void Autopilot_LOC_CPT_entry(void);
  void Autopilot_OFF_entry(void);
  void Autopilot_ROLL_OUT_entry(void);
  void Autopilot_FLARE_entry(void);
  void Autopilot_LOC_TRACK_entry(void);
  void Autopilot_LAND_entry(void);
  void Autopilot_GA_TRK_entry(const base_lateral_input *BusConversion_InsertedFor_LateralMode_at_inport_4_BusCreator1);
  void Autopilot_RWY_TRK_entry(const base_lateral_input *BusConversion_InsertedFor_LateralMode_at_inport_4_BusCreator1);
  void Autopilot_ON(const base_lateral_armed *BusConversion_InsertedFor_LateralMode_at_inport_2_BusCreator1, const
                    base_lateral_condition *BusConversion_InsertedFor_LateralMode_at_inport_3_BusCreator1, const
                    base_lateral_input *BusConversion_InsertedFor_LateralMode_at_inport_4_BusCreator1);
  void Autopilot_RWY_entry(void);
  void Autopilot_VS_during(void);
  void Autopilot_ALT_entry(void);
  void Autopilot_DES_entry(void);
  void Autopilot_CLB_entry(void);
  void Autopilot_OP_CLB_entry(void);
  void Autopilot_OP_DES_entry(void);
  void Autopilot_GS_CPT_entry(void);
  void Autopilot_ALT_CPT_entry(void);
  void Autopilot_ALT(const base_vertical_armed *BusConversion_InsertedFor_VerticalMode_at_inport_4_BusCreator1, const
                     base_vertical_condition *BusConversion_InsertedFor_VerticalMode_at_inport_5_BusCreator1);
  void Autopilot_VS_entry(void);
  void Autopilot_ALT_CPT(const base_vertical_armed *BusConversion_InsertedFor_VerticalMode_at_inport_4_BusCreator1,
    const base_vertical_condition *BusConversion_InsertedFor_VerticalMode_at_inport_5_BusCreator1);
  void Autopilot_ALT_CST_entry(void);
  void Autopilot_ALT_CST_CPT(const base_vertical_armed *BusConversion_InsertedFor_VerticalMode_at_inport_4_BusCreator1,
    const base_vertical_condition *BusConversion_InsertedFor_VerticalMode_at_inport_5_BusCreator1);
  void Autopilot_CLB_during(void);
  void Autopilot_ALT_CST_CPT_entry(void);
  void Autopilot_CLB(const base_vertical_armed *BusConversion_InsertedFor_VerticalMode_at_inport_4_BusCreator1, const
                     base_vertical_condition *BusConversion_InsertedFor_VerticalMode_at_inport_5_BusCreator1);
  void Autopilot_DES_during(void);
  void Autopilot_OFF_entry_g(void);
  void Autopilot_ROLL_OUT_entry_b(void);
  void Autopilot_GS_TRACK_entry(void);
  void Autopilot_LAND_entry_m(void);
  void Autopilot_FLARE_entry_b(void);
  void Autopilot_SRS_entry(void);
  void Autopilot_GS(const base_vertical_condition *BusConversion_InsertedFor_VerticalMode_at_inport_5_BusCreator1);
  void Autopilot_OP_CLB_during(void);
  void Autopilot_exit_internal_ON(void);
  void Autopilot_ON_n(const base_vertical_armed *BusConversion_InsertedFor_VerticalMode_at_inport_4_BusCreator1, const
                      base_vertical_condition *BusConversion_InsertedFor_VerticalMode_at_inport_5_BusCreator1);
};

#endif

