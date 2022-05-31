/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:18 GMT+02:00
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
  double t4848;
  double t4309;
  double t4591;
  double t4849;
  double t5011;
  double t5020;
  double t5030;
  double t5010;
  double t5070;
  double t4998;
  double t5165;
  double t4968;
  double t4593;
  double t4850;
  double t4910;
  double t4953;
  double t5031;
  double t5166;
  double t5167;
  double t5196;
  double t5185;
  double t5186;
  double t5187;
  double t5184;
  double t5197;
  double t5198;
  double t5199;
  double t5348;
  double t5425;
  double t5426;
  double t6138;
  double t6249;
  double t6484;
  double t6487;
  double t6494;
  double t6513;
  double t6521;
  double t6526;
  double t6539;
  double t6540;
  double t6667;
  double t6687;
  double t6690;
  double t7994;
  double t14589;
  double t14737;
  double t6285;
  double t6470;
  double t6483;
  double t6773;
  double t7753;
  double t16529;
  double t16776;
  double t16940;
  double t17632;
  double t17843;
  double t18074;
  double t18075;
  double t18406;
  double t18416;
  double t18420;
  double t7977;
  double t15065;
  double t15326;
  double t5347;
  double t5429;
  double t5432;
  double t5930;
  double t6003;
  double t6005;
  double t18252;
  double t18434;
  double t18445;
  double t18527;
  double t18535;
  double t18542;
  double t18654;
  double t18673;
  double t18715;
  double t6006;
  double t6120;
  double t6121;
  double t16504;
  double t18716;
  double t4957;
  double t5176;
  double t5181;
  double t18728;
  double t18730;
  double t18732;
  double t19124;
  double t19140;
  double t19157;
  double t19171;
  double t19630;
  double t19659;
  t4848 = Cos(var1[13]);
  t4309 = Cos(var1[14]);
  t4591 = Sin(var1[13]);
  t4849 = Sin(var1[14]);
  t5011 = t4848*t4309;
  t5020 = t4591*t4849;
  t5030 = t5011 + t5020;
  t5010 = Cos(var1[5]);
  t5070 = Sin(var1[12]);
  t4998 = Cos(var1[12]);
  t5165 = Sin(var1[5]);
  t4968 = Cos(var1[4]);
  t4593 = -1.*t4309*t4591;
  t4850 = t4848*t4849;
  t4910 = t4593 + t4850;
  t4953 = Sin(var1[4]);
  t5031 = t4998*t5010*t5030;
  t5166 = -1.*t5070*t5030*t5165;
  t5167 = t5031 + t5166;
  t5196 = Sin(var1[3]);
  t5185 = t5010*t5070*t5030;
  t5186 = t4998*t5030*t5165;
  t5187 = t5185 + t5186;
  t5184 = Cos(var1[3]);
  t5197 = t4968*t4910;
  t5198 = -1.*t4953*t5167;
  t5199 = t5197 + t5198;
  t5348 = t4309*t4591;
  t5425 = -1.*t4848*t4849;
  t5426 = t5348 + t5425;
  t6138 = -1.*t4998;
  t6249 = 1. + t6138;
  t6484 = -1.*t4848;
  t6487 = 1. + t6484;
  t6494 = 0.28121*t6487;
  t6513 = -1.*t4309;
  t6521 = 1. + t6513;
  t6526 = 0.50321*t6521;
  t6539 = 0.19821*t4309;
  t6540 = t6526 + t6539;
  t6667 = t4848*t6540;
  t6687 = -0.305*t4591*t4849;
  t6690 = t6494 + t6667 + t6687;
  t7994 = 0.15121*t6249;
  t14589 = t4998*t6690;
  t14737 = t7994 + t14589;
  t6285 = -0.15121*t6249;
  t6470 = -0.15121*t4998;
  t6483 = -0.15121*t5070;
  t6773 = t5070*t6690;
  t7753 = t6285 + t6470 + t6483 + t6773;
  t16529 = -1.*t5010*t5070;
  t16776 = -1.*t4998*t5165;
  t16940 = t16529 + t16776;
  t17632 = 0.28121*t4591;
  t17843 = -1.*t6540*t4591;
  t18074 = -0.305*t4848*t4849;
  t18075 = t17632 + t17843 + t18074;
  t18406 = t5010*t14737;
  t18416 = -1.*t7753*t5165;
  t18420 = t18406 + t18416;
  t7977 = t5010*t7753;
  t15065 = t14737*t5165;
  t15326 = t7977 + t15065;
  t5347 = t5030*t4953;
  t5429 = t4998*t5010*t5426;
  t5432 = -1.*t5070*t5426*t5165;
  t5930 = t5429 + t5432;
  t6003 = t4968*t5930;
  t6005 = t5347 + t6003;
  t18252 = t18075*t4953;
  t18434 = t4968*t18420;
  t18445 = t18252 + t18434;
  t18527 = t4968*t18075;
  t18535 = -1.*t4953*t18420;
  t18542 = t18527 + t18535;
  t18654 = t5010*t5070*t5426;
  t18673 = t4998*t5426*t5165;
  t18715 = t18654 + t18673;
  t6006 = t4998*t5010;
  t6120 = -1.*t5070*t5165;
  t6121 = t6006 + t6120;
  t16504 = -1.*t6121*t15326;
  t18716 = t18715*t15326;
  t4957 = t4910*t4953;
  t5176 = t4968*t5167;
  t5181 = t4957 + t5176;
  t18728 = t4968*t5030;
  t18730 = -1.*t4953*t5930;
  t18732 = t18728 + t18730;
  t19124 = -1.*t18715*t15326;
  t19140 = t5187*t15326;
  t19157 = -1.*t18075*t5030;
  t19171 = t18075*t4910;
  t19630 = t6121*t15326;
  t19659 = -1.*t5187*t15326;
  p_output1[0]=t5181;
  p_output1[1]=t5184*t5187 - 1.*t5196*t5199;
  p_output1[2]=t5187*t5196 + t5184*t5199;
  p_output1[3]=(t16504 + t16940*t18542*t4953 - 1.*t16940*t18445*t4968)*t6005 + t16940*t4968*(t18716 + t18542*t18732 + t18445*t6005);
  p_output1[4]=(t16504 - 1.*t16940*t18420)*t18715 + (t18716 + t18075*t5030 + t18420*t5930)*t6121;
  p_output1[5]=t5030*(t14737*t5070 - 1.*t4998*t7753);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t4849 - 0.305*t4309*t4849 - 1.*t4849*t6540;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t16940*t4968;
  p_output1[19]=t16940*t4953*t5196 + t5184*t6121;
  p_output1[20]=-1.*t16940*t4953*t5184 + t5196*t6121;
  p_output1[21]=(t19140 + t18445*t5181 + t18542*t5199)*t6005 + t5181*(-1.*t18542*t18732 + t19124 - 1.*t18445*t6005);
  p_output1[22]=t18715*(t19140 + t19171 + t18420*t5167) + t5187*(t19124 + t19157 - 1.*t18420*t5930);
  p_output1[23]=t5030*(t19171 + t14737*t4998*t5030 + t5030*t5070*t7753) + t4910*(t19157 - 1.*t14737*t4998*t5426 - 1.*t5070*t5426*t7753);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t5030*(t19171 + t5030*t6690) + t4910*(t19157 - 1.*t5426*t6690);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6005;
  p_output1[37]=t18715*t5184 - 1.*t18732*t5196;
  p_output1[38]=t18732*t5184 + t18715*t5196;
  p_output1[39]=(t19630 - 1.*t16940*t18542*t4953 + t16940*t18445*t4968)*t5181 + t16940*t4968*(t19659 - 1.*t18445*t5181 - 1.*t18542*t5199);
  p_output1[40]=(t16940*t18420 + t19630)*t5187 + (t19659 - 1.*t18075*t4910 - 1.*t18420*t5167)*t6121;
  p_output1[41]=t4910*(-1.*t14737*t5070 + t4998*t7753);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t4910 - 0.15121*t5426;
  p_output1[49]=0.28121*t4309 + 0.305*Power(t4849,2) - 1.*t4309*t6540;
  p_output1[50]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
