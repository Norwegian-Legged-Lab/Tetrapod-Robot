/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:51 GMT+02:00
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
  double t11759;
  double t1042;
  double t4741;
  double t11787;
  double t11663;
  double t11880;
  double t11927;
  double t31585;
  double t34003;
  double t31589;
  double t31590;
  double t31631;
  double t34050;
  double t979;
  double t31360;
  double t11960;
  double t33285;
  double t34055;
  double t34057;
  double t34106;
  double t34092;
  double t34093;
  double t34096;
  double t34090;
  double t34108;
  double t34109;
  double t34110;
  double t34151;
  double t34153;
  double t34154;
  double t34165;
  double t34188;
  double t34204;
  double t34221;
  double t34241;
  double t34262;
  double t34150;
  double t34161;
  double t34268;
  double t34341;
  double t34561;
  double t34577;
  double t34595;
  double t34810;
  double t36269;
  double t36507;
  double t34142;
  double t34143;
  double t34148;
  double t34149;
  double t34390;
  double t34393;
  double t37876;
  double t37920;
  double t38463;
  double t38500;
  double t38515;
  double t38521;
  double t37317;
  double t37596;
  double t37874;
  double t34394;
  double t36533;
  double t36582;
  double t34126;
  double t34128;
  double t34129;
  double t38467;
  double t38680;
  double t38840;
  double t34124;
  double t34130;
  double t34134;
  double t34136;
  double t34137;
  double t34138;
  double t39234;
  double t39238;
  double t39240;
  double t39246;
  double t39250;
  double t39257;
  double t36682;
  double t39274;
  double t39338;
  double t39388;
  double t39194;
  double t39220;
  double t39232;
  double t31142;
  double t34082;
  double t34088;
  double t39280;
  double t39283;
  double t39284;
  double t39463;
  double t39965;
  double t40871;
  double t40610;
  double t41285;
  double t41232;
  double t43045;
  double t43063;
  double t43070;
  double t43121;
  t11759 = Cos(var1[16]);
  t1042 = Cos(var1[17]);
  t4741 = Sin(var1[16]);
  t11787 = Sin(var1[17]);
  t11663 = t1042*t4741;
  t11880 = -1.*t11759*t11787;
  t11927 = t11663 + t11880;
  t31585 = Cos(var1[5]);
  t34003 = Sin(var1[15]);
  t31589 = t11759*t1042;
  t31590 = t4741*t11787;
  t31631 = t31589 + t31590;
  t34050 = Sin(var1[5]);
  t979 = Cos(var1[15]);
  t31360 = Cos(var1[4]);
  t11960 = Sin(var1[4]);
  t33285 = t31585*t31631;
  t34055 = t34003*t11927*t34050;
  t34057 = t33285 + t34055;
  t34106 = Sin(var1[3]);
  t34092 = -1.*t31585*t34003*t11927;
  t34093 = t31631*t34050;
  t34096 = t34092 + t34093;
  t34090 = Cos(var1[3]);
  t34108 = t979*t31360*t11927;
  t34109 = -1.*t11960*t34057;
  t34110 = t34108 + t34109;
  t34151 = -0.0641*t1042;
  t34153 = -0.28*t11787;
  t34154 = t34151 + t34153;
  t34165 = -1.*t1042;
  t34188 = 1. + t34165;
  t34204 = -0.575*t34188;
  t34221 = -0.295*t1042;
  t34241 = -0.0641*t11787;
  t34262 = t34204 + t34221 + t34241;
  t34150 = 0.325*t4741;
  t34161 = t11759*t34154;
  t34268 = t4741*t34262;
  t34341 = t34150 + t34161 + t34268;
  t34561 = -1.*t11759;
  t34577 = 1. + t34561;
  t34595 = -0.325*t34577;
  t34810 = -1.*t4741*t34154;
  t36269 = t11759*t34262;
  t36507 = t34595 + t34810 + t36269;
  t34142 = -1.*t979;
  t34143 = 1. + t34142;
  t34148 = -0.1575*t34143;
  t34149 = -0.2255*t979;
  t34390 = -1.*t34003*t34341;
  t34393 = t34148 + t34149 + t34390;
  t37876 = -0.068*t34003;
  t37920 = t979*t34341;
  t38463 = t37876 + t37920;
  t38500 = t31585*t36507;
  t38515 = -1.*t34393*t34050;
  t38521 = t38500 + t38515;
  t37317 = t34003*t11960;
  t37596 = -1.*t979*t31360*t34050;
  t37874 = t37317 + t37596;
  t34394 = t31585*t34393;
  t36533 = t36507*t34050;
  t36582 = t34394 + t36533;
  t34126 = -1.*t1042*t4741;
  t34128 = t11759*t11787;
  t34129 = t34126 + t34128;
  t38467 = t38463*t11960;
  t38680 = t31360*t38521;
  t38840 = t38467 + t38680;
  t34124 = t979*t31631*t11960;
  t34130 = t31585*t34129;
  t34134 = t34003*t31631*t34050;
  t34136 = t34130 + t34134;
  t34137 = t31360*t34136;
  t34138 = t34124 + t34137;
  t39234 = t31360*t38463;
  t39238 = -1.*t11960*t38521;
  t39240 = t39234 + t39238;
  t39246 = -1.*t31585*t34003*t31631;
  t39250 = t34129*t34050;
  t39257 = t39246 + t39250;
  t36682 = -1.*t979*t31585*t36582;
  t39274 = t36582*t39257;
  t39338 = -1.*t34003*t38463;
  t39388 = t979*t38463*t31631;
  t39194 = t31360*t34003;
  t39220 = t979*t11960*t34050;
  t39232 = t39194 + t39220;
  t31142 = t979*t11927*t11960;
  t34082 = t31360*t34057;
  t34088 = t31142 + t34082;
  t39280 = t979*t31360*t31631;
  t39283 = -1.*t11960*t34136;
  t39284 = t39280 + t39283;
  t39463 = t36582*t34096;
  t39965 = -1.*t36582*t39257;
  t40871 = -1.*t979*t38463*t31631;
  t40610 = t979*t38463*t11927;
  t41285 = t36507*t31631;
  t41232 = -1.*t36507*t34129;
  t43045 = t979*t31585*t36582;
  t43063 = -1.*t36582*t34096;
  t43070 = t34003*t38463;
  t43121 = -1.*t979*t38463*t11927;
  p_output1[0]=t34088;
  p_output1[1]=t34090*t34096 - 1.*t34106*t34110;
  p_output1[2]=t34096*t34106 + t34090*t34110;
  p_output1[3]=t34138*(t36682 - 1.*t37874*t38840 - 1.*t39232*t39240) + t37874*(t34138*t38840 + t39274 + t39240*t39284);
  p_output1[4]=t31585*(t34136*t38521 + t39274 + t39388)*t979 + t39257*(t36682 + t39338 + t34050*t38521*t979);
  p_output1[5]=t34003*(-1.*t31631*t34003*t34393 + t34129*t36507 + t39388) + t31631*t979*(t39338 - 1.*t34393*t979);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t11927 + 0.2255*t34129;
  p_output1[16]=-0.325*t11787 - 1.*t1042*t34154 - 1.*t11787*t34262;
  p_output1[17]=-0.0641;
  p_output1[18]=t37874;
  p_output1[19]=-1.*t34106*t39232 + t31585*t34090*t979;
  p_output1[20]=t34090*t39232 + t31585*t34106*t979;
  p_output1[21]=t34138*(t34088*t38840 + t34110*t39240 + t39463) + t34088*(-1.*t34138*t38840 - 1.*t39240*t39284 + t39965);
  p_output1[22]=t39257*(t34057*t38521 + t39463 + t40610) + t34096*(-1.*t34136*t38521 + t39965 + t40871);
  p_output1[23]=t11927*(t31631*t34003*t34393 + t40871 + t41232)*t979 + t31631*(-1.*t11927*t34003*t34393 + t40610 + t41285)*t979;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t31631*(-1.*t31631*t34341 + t41232) + t34129*(t11927*t34341 + t41285);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t34138;
  p_output1[37]=t34090*t39257 - 1.*t34106*t39284;
  p_output1[38]=t34106*t39257 + t34090*t39284;
  p_output1[39]=t34088*(t37874*t38840 + t39232*t39240 + t43045) + t37874*(-1.*t34088*t38840 - 1.*t34110*t39240 + t43063);
  p_output1[40]=t31585*(-1.*t34057*t38521 + t43063 + t43121)*t979 + t34096*(t43045 + t43070 - 1.*t34050*t38521*t979);
  p_output1[41]=t34003*(t11927*t34003*t34393 - 1.*t31631*t36507 + t43121) + t11927*t979*(t43070 + t34393*t979);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t31631;
  p_output1[52]=0.325*t1042 - 1.*t11787*t34154 + t1042*t34262;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
