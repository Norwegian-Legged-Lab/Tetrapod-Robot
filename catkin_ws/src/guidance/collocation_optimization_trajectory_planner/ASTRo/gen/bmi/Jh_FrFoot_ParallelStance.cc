/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:13 GMT+02:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t3988;
  double t2460;
  double t3975;
  double t3989;
  double t4057;
  double t4058;
  double t4059;
  double t4049;
  double t4056;
  double t4062;
  double t4054;
  double t4064;
  double t3992;
  double t4092;
  double t4093;
  double t4094;
  double t3981;
  double t3990;
  double t3991;
  double t4061;
  double t4070;
  double t4075;
  double t4116;
  double t4078;
  double t4079;
  double t4083;
  double t4108;
  double t4095;
  double t4096;
  double t4097;
  double t4109;
  double t4110;
  double t4111;
  double t4120;
  double t4124;
  double t4125;
  double t4129;
  double t4130;
  double t4131;
  double t4134;
  double t4135;
  double t4136;
  double t4138;
  double t4139;
  double t4140;
  double t4091;
  double t4099;
  double t4104;
  double t4152;
  double t4153;
  double t4157;
  double t4158;
  double t4159;
  double t4160;
  double t4161;
  double t4162;
  double t4163;
  double t4164;
  double t4165;
  double t4166;
  double t4167;
  double t4171;
  double t4172;
  double t4173;
  double t4154;
  double t4155;
  double t4156;
  double t4168;
  double t4169;
  double t4177;
  double t4178;
  double t4179;
  double t4180;
  double t4182;
  double t4183;
  double t4184;
  double t4170;
  double t4174;
  double t4175;
  double t4181;
  double t4185;
  double t4186;
  double t4188;
  double t4189;
  double t4190;
  double t4000;
  double t4076;
  double t4077;
  double t4176;
  double t4194;
  double t4200;
  double t4205;
  double t4211;
  double t4216;
  double t4230;
  double t4234;
  t3988 = Cos(var1[13]);
  t2460 = Cos(var1[14]);
  t3975 = Sin(var1[13]);
  t3989 = Sin(var1[14]);
  t4057 = t3988*t2460;
  t4058 = t3975*t3989;
  t4059 = t4057 + t4058;
  t4049 = Cos(var1[4]);
  t4056 = Cos(var1[5]);
  t4062 = Sin(var1[12]);
  t4054 = Cos(var1[12]);
  t4064 = Sin(var1[5]);
  t3992 = Sin(var1[4]);
  t4092 = t2460*t3975;
  t4093 = -1.*t3988*t3989;
  t4094 = t4092 + t4093;
  t3981 = -1.*t2460*t3975;
  t3990 = t3988*t3989;
  t3991 = t3981 + t3990;
  t4061 = t4054*t4056*t4059;
  t4070 = -1.*t4062*t4059*t4064;
  t4075 = t4061 + t4070;
  t4116 = Sin(var1[3]);
  t4078 = -1.*t4056*t4062;
  t4079 = -1.*t4054*t4064;
  t4083 = t4078 + t4079;
  t4108 = Cos(var1[3]);
  t4095 = t4054*t4056*t4094;
  t4096 = -1.*t4062*t4094*t4064;
  t4097 = t4095 + t4096;
  t4109 = t4056*t4062*t4059;
  t4110 = t4054*t4059*t4064;
  t4111 = t4109 + t4110;
  t4120 = t4049*t3991;
  t4124 = -1.*t3992*t4075;
  t4125 = t4120 + t4124;
  t4129 = t4054*t4056;
  t4130 = -1.*t4062*t4064;
  t4131 = t4129 + t4130;
  t4134 = t4056*t4062*t4094;
  t4135 = t4054*t4094*t4064;
  t4136 = t4134 + t4135;
  t4138 = t4049*t4059;
  t4139 = -1.*t3992*t4097;
  t4140 = t4138 + t4139;
  t4091 = t4059*t3992;
  t4099 = t4049*t4097;
  t4104 = t4091 + t4099;
  t4152 = -1.*t4054;
  t4153 = 1. + t4152;
  t4157 = -1.*t3988;
  t4158 = 1. + t4157;
  t4159 = 0.28121*t4158;
  t4160 = -1.*t2460;
  t4161 = 1. + t4160;
  t4162 = 0.50321*t4161;
  t4163 = 0.19821*t2460;
  t4164 = t4162 + t4163;
  t4165 = t3988*t4164;
  t4166 = -0.305*t3975*t3989;
  t4167 = t4159 + t4165 + t4166;
  t4171 = 0.15121*t4153;
  t4172 = t4054*t4167;
  t4173 = t4171 + t4172;
  t4154 = -0.15121*t4153;
  t4155 = -0.15121*t4054;
  t4156 = -0.15121*t4062;
  t4168 = t4062*t4167;
  t4169 = t4154 + t4155 + t4156 + t4168;
  t4177 = 0.28121*t3975;
  t4178 = -1.*t4164*t3975;
  t4179 = -0.305*t3988*t3989;
  t4180 = t4177 + t4178 + t4179;
  t4182 = t4056*t4173;
  t4183 = -1.*t4169*t4064;
  t4184 = t4182 + t4183;
  t4170 = t4056*t4169;
  t4174 = t4173*t4064;
  t4175 = t4170 + t4174;
  t4181 = t4180*t3992;
  t4185 = t4049*t4184;
  t4186 = t4181 + t4185;
  t4188 = t4049*t4180;
  t4189 = -1.*t3992*t4184;
  t4190 = t4188 + t4189;
  t4000 = t3991*t3992;
  t4076 = t4049*t4075;
  t4077 = t4000 + t4076;
  t4176 = -1.*t4131*t4175;
  t4194 = t4136*t4175;
  t4200 = -1.*t4136*t4175;
  t4205 = t4111*t4175;
  t4211 = t4131*t4175;
  t4216 = -1.*t4111*t4175;
  t4230 = -1.*t4180*t4059;
  t4234 = t4180*t3991;
  p_output1[0]=t4077;
  p_output1[1]=t4049*t4083;
  p_output1[2]=t4104;
  p_output1[3]=t4108*t4111 - 1.*t4116*t4125;
  p_output1[4]=t3992*t4083*t4116 + t4108*t4131;
  p_output1[5]=t4108*t4136 - 1.*t4116*t4140;
  p_output1[6]=t4111*t4116 + t4108*t4125;
  p_output1[7]=-1.*t3992*t4083*t4108 + t4116*t4131;
  p_output1[8]=t4116*t4136 + t4108*t4140;
  p_output1[9]=t4104*(t4176 - 1.*t4049*t4083*t4186 + t3992*t4083*t4190) + t4049*t4083*(t4104*t4186 + t4140*t4190 + t4194);
  p_output1[10]=t4077*(-1.*t4104*t4186 - 1.*t4140*t4190 + t4200) + t4104*(t4077*t4186 + t4125*t4190 + t4205);
  p_output1[11]=t4077*(t4049*t4083*t4186 - 1.*t3992*t4083*t4190 + t4211) + t4049*t4083*(-1.*t4077*t4186 - 1.*t4125*t4190 + t4216);
  p_output1[12]=t4136*(t4176 - 1.*t4083*t4184) + t4131*(t4059*t4180 + t4097*t4184 + t4194);
  p_output1[13]=t4111*(-1.*t4097*t4184 + t4200 + t4230) + t4136*(t4075*t4184 + t4205 + t4234);
  p_output1[14]=t4111*(t4083*t4184 + t4211) + t4131*(-1.*t3991*t4180 - 1.*t4075*t4184 + t4216);
  p_output1[15]=t4059*(-1.*t4054*t4169 + t4062*t4173);
  p_output1[16]=t3991*(-1.*t4062*t4094*t4169 - 1.*t4054*t4094*t4173 + t4230) + t4059*(t4059*t4062*t4169 + t4054*t4059*t4173 + t4234);
  p_output1[17]=t3991*(t4054*t4169 - 1.*t4062*t4173);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t3991*(-1.*t4094*t4167 + t4230) + t4059*(t4059*t4167 + t4234);
  p_output1[38]=-0.15121*t3991 - 0.15121*t4094;
  p_output1[39]=0.28121*t3989 - 0.305*t2460*t3989 - 1.*t3989*t4164;
  p_output1[40]=0;
  p_output1[41]=0.28121*t2460 + 0.305*Power(t3989,2) - 1.*t2460*t4164;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
