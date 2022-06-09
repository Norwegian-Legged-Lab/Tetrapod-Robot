/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:04 GMT+02:00
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
  double t15960;
  double t16143;
  double t16145;
  double t16567;
  double t16585;
  double t16588;
  double t16888;
  double t16726;
  double t16793;
  double t16897;
  double t16885;
  double t16913;
  double t16931;
  double t16940;
  double t16950;
  double t16958;
  double t15761;
  double t15896;
  double t16974;
  double t16999;
  double t17010;
  double t17012;
  double t17014;
  double t17040;
  double t17043;
  double t17044;
  double t17054;
  double t17057;
  double t17059;
  double t17064;
  double t16579;
  double t16591;
  double t16936;
  double t16938;
  double t16977;
  double t16992;
  double t17026;
  double t17027;
  double t17099;
  double t17102;
  double t17104;
  double t17106;
  double t17107;
  double t17114;
  double t17124;
  double t17125;
  double t17126;
  double t17173;
  double t17175;
  double t17176;
  double t17185;
  double t17189;
  double t17194;
  double t17199;
  double t17200;
  double t17201;
  double t17242;
  double t17245;
  double t17249;
  double t17250;
  double t17260;
  double t17264;
  double t17231;
  double t17288;
  double t17296;
  double t17298;
  double t17303;
  double t17306;
  double t17307;
  double t17313;
  double t17329;
  double t17334;
  double t17350;
  double t17353;
  double t17354;
  t15960 = Sin(var1[3]);
  t16143 = Cos(var1[9]);
  t16145 = -1.*t16143;
  t16567 = 1. + t16145;
  t16585 = Sin(var1[9]);
  t16588 = 0.15121*t16585;
  t16888 = Cos(var1[3]);
  t16726 = Cos(var1[5]);
  t16793 = Sin(var1[4]);
  t16897 = Sin(var1[5]);
  t16885 = t16726*t15960*t16793;
  t16913 = t16888*t16897;
  t16931 = t16885 + t16913;
  t16940 = t16888*t16726;
  t16950 = -1.*t15960*t16793*t16897;
  t16958 = t16940 + t16950;
  t15761 = Cos(var1[4]);
  t15896 = Sin(var1[10]);
  t16974 = Cos(var1[10]);
  t16999 = t16143*t16931;
  t17010 = t16585*t16958;
  t17012 = t16999 + t17010;
  t17014 = Cos(var1[11]);
  t17040 = -1.*t15761*t15896*t15960;
  t17043 = t16974*t17012;
  t17044 = t17040 + t17043;
  t17054 = Sin(var1[11]);
  t17057 = -1.*t16974*t15761*t15960;
  t17059 = -1.*t15896*t17012;
  t17064 = t17057 + t17059;
  t16579 = -0.15121*t16567;
  t16591 = t16579 + t16588;
  t16936 = 0.15121*t16567;
  t16938 = t16936 + t16588;
  t16977 = -1.*t16974;
  t16992 = 1. + t16977;
  t17026 = -1.*t17014;
  t17027 = 1. + t17026;
  t17099 = -1.*t16143*t16888*t15761*t16726;
  t17102 = t16888*t15761*t16585*t16897;
  t17104 = t17099 + t17102;
  t17106 = -1.*t16888*t15896*t16793;
  t17107 = t16974*t17104;
  t17114 = t17106 + t17107;
  t17124 = -1.*t16974*t16888*t16793;
  t17125 = -1.*t15896*t17104;
  t17126 = t17124 + t17125;
  t17173 = t16888*t16726*t16793;
  t17175 = -1.*t15960*t16897;
  t17176 = t17173 + t17175;
  t17185 = t16726*t15960;
  t17189 = t16888*t16793*t16897;
  t17194 = t17185 + t17189;
  t17199 = t16585*t17176;
  t17200 = t16143*t17194;
  t17201 = t17199 + t17200;
  t17242 = 0.15121*t16143;
  t17245 = -1.*t16888*t16726*t16793;
  t17249 = t15960*t16897;
  t17250 = t17245 + t17249;
  t17260 = -1.*t16585*t17250;
  t17264 = t17260 + t17200;
  t17231 = -1.*t16585*t17194;
  t17288 = t16143*t17250;
  t17296 = t16585*t17194;
  t17298 = t17288 + t17296;
  t17303 = -1.*t16888*t15761*t15896;
  t17306 = -1.*t16974*t17298;
  t17307 = t17303 + t17306;
  t17313 = t16974*t16888*t15761;
  t17329 = -1.*t15896*t17298;
  t17334 = t17313 + t17329;
  t17350 = t16888*t15761*t15896;
  t17353 = t16974*t17298;
  t17354 = t17350 + t17353;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t15761*t15896*t15960 + t16591*t16931 + t16938*t16958 + 0.15121*(-1.*t16585*t16931 + t16143*t16958) - 0.28121*t16992*t17012 - 0.50321*t17027*t17044 - 0.50321*t17054*t17064 - 0.19821*(t17014*t17044 - 1.*t17054*t17064);
  p_output1[2]=-1.*t15761*t16591*t16726*t16888 - 0.28121*t15896*t16793*t16888 + 0.15121*(t15761*t16585*t16726*t16888 + t15761*t16143*t16888*t16897) + t15761*t16888*t16897*t16938 - 0.28121*t16992*t17104 - 0.50321*t17027*t17114 - 0.50321*t17054*t17126 - 0.19821*(t17014*t17114 - 1.*t17054*t17126);
  p_output1[3]=t16938*t17176 + t16591*t17194 - 0.28121*t16992*t17201 - 0.50321*t16974*t17027*t17201 + 0.50321*t15896*t17054*t17201 - 0.19821*(t16974*t17014*t17201 + t15896*t17054*t17201) + 0.15121*(t16143*t17176 + t17231);
  p_output1[4]=t17194*(t16588 + t17242) + (-0.15121*t16585 + t17242)*t17250 + 0.15121*(t17231 - 1.*t16143*t17250) - 0.28121*t16992*t17264 - 0.50321*t16974*t17027*t17264 + 0.50321*t15896*t17054*t17264 - 0.19821*(t16974*t17014*t17264 + t15896*t17054*t17264);
  p_output1[5]=0.28121*t15761*t16888*t16974 - 0.28121*t15896*t17298 - 0.50321*t17054*t17307 - 0.50321*t17027*t17334 - 0.19821*(-1.*t17054*t17307 + t17014*t17334);
  p_output1[6]=-0.50321*t17014*t17334 - 0.50321*t17054*t17354 - 0.19821*(-1.*t17014*t17334 - 1.*t17054*t17354);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
