/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:47 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5146;
  double t18992;
  double t7199;
  double t30797;
  double t31118;
  double t30658;
  double t35051;
  double t7278;
  double t41703;
  double t41705;
  double t51058;
  double t20790;
  double t41668;
  double t30821;
  double t41650;
  double t41666;
  double t17231;
  double t21256;
  double t23274;
  double t51606;
  double t51600;
  double t51386;
  double t51392;
  double t51398;
  double t51571;
  double t51573;
  double t51579;
  double t51587;
  double t51589;
  double t51591;
  double t51611;
  double t51613;
  double t51614;
  double t51625;
  double t51626;
  double t51654;
  double t51721;
  double t51723;
  double t51773;
  double t51880;
  double t51888;
  double t51890;
  double t51906;
  double t51910;
  double t51914;
  double t41702;
  double t51400;
  double t51537;
  double t51970;
  double t51971;
  double t51977;
  double t51979;
  double t51980;
  double t51981;
  double t51982;
  double t51983;
  double t51984;
  double t51985;
  double t51986;
  double t51988;
  double t51989;
  double t51994;
  double t51995;
  double t51999;
  double t51972;
  double t51975;
  double t51976;
  double t51990;
  double t51991;
  double t52004;
  double t52006;
  double t52007;
  double t52008;
  double t52011;
  double t52013;
  double t52014;
  double t51993;
  double t52000;
  double t52001;
  double t52010;
  double t52015;
  double t52016;
  double t52022;
  double t52025;
  double t52029;
  double t51581;
  double t51593;
  double t51597;
  double t52003;
  double t52041;
  double t52120;
  double t52125;
  double t52146;
  double t52155;
  double t52303;
  double t52308;
  t5146 = Cos(var1[4]);
  t18992 = Cos(var1[12]);
  t7199 = Cos(var1[5]);
  t30797 = Cos(var1[14]);
  t31118 = Sin(var1[13]);
  t30658 = Cos(var1[13]);
  t35051 = Sin(var1[14]);
  t7278 = Sin(var1[12]);
  t41703 = t30797*t31118;
  t41705 = -1.*t30658*t35051;
  t51058 = t41703 + t41705;
  t20790 = Sin(var1[5]);
  t41668 = Sin(var1[4]);
  t30821 = t30658*t30797;
  t41650 = t31118*t35051;
  t41666 = t30821 + t41650;
  t17231 = -1.*t7199*t7278;
  t21256 = -1.*t18992*t20790;
  t23274 = t17231 + t21256;
  t51606 = Cos(var1[3]);
  t51600 = Sin(var1[3]);
  t51386 = t18992*t7199*t51058;
  t51392 = -1.*t7278*t51058*t20790;
  t51398 = t51386 + t51392;
  t51571 = -1.*t30797*t31118;
  t51573 = t30658*t35051;
  t51579 = t51571 + t51573;
  t51587 = t18992*t7199*t41666;
  t51589 = -1.*t7278*t41666*t20790;
  t51591 = t51587 + t51589;
  t51611 = t18992*t7199;
  t51613 = -1.*t7278*t20790;
  t51614 = t51611 + t51613;
  t51625 = t7199*t7278*t51058;
  t51626 = t18992*t51058*t20790;
  t51654 = t51625 + t51626;
  t51721 = t5146*t41666;
  t51723 = -1.*t41668*t51398;
  t51773 = t51721 + t51723;
  t51880 = t7199*t7278*t41666;
  t51888 = t18992*t41666*t20790;
  t51890 = t51880 + t51888;
  t51906 = t5146*t51579;
  t51910 = -1.*t41668*t51591;
  t51914 = t51906 + t51910;
  t41702 = t41666*t41668;
  t51400 = t5146*t51398;
  t51537 = t41702 + t51400;
  t51970 = -1.*t18992;
  t51971 = 1. + t51970;
  t51977 = -1.*t30658;
  t51979 = 1. + t51977;
  t51980 = 0.28121*t51979;
  t51981 = -1.*t30797;
  t51982 = 1. + t51981;
  t51983 = 0.50321*t51982;
  t51984 = 0.23321*t30797;
  t51985 = t51983 + t51984;
  t51986 = t30658*t51985;
  t51988 = -0.27*t31118*t35051;
  t51989 = t51980 + t51986 + t51988;
  t51994 = 0.15121*t51971;
  t51995 = t18992*t51989;
  t51999 = t51994 + t51995;
  t51972 = -0.15121*t51971;
  t51975 = -0.15121*t18992;
  t51976 = -0.15121*t7278;
  t51990 = t7278*t51989;
  t51991 = t51972 + t51975 + t51976 + t51990;
  t52004 = 0.28121*t31118;
  t52006 = -1.*t51985*t31118;
  t52007 = -0.27*t30658*t35051;
  t52008 = t52004 + t52006 + t52007;
  t52011 = t7199*t51999;
  t52013 = -1.*t51991*t20790;
  t52014 = t52011 + t52013;
  t51993 = t7199*t51991;
  t52000 = t51999*t20790;
  t52001 = t51993 + t52000;
  t52010 = t52008*t41668;
  t52015 = t5146*t52014;
  t52016 = t52010 + t52015;
  t52022 = t5146*t52008;
  t52025 = -1.*t41668*t52014;
  t52029 = t52022 + t52025;
  t51581 = t51579*t41668;
  t51593 = t5146*t51591;
  t51597 = t51581 + t51593;
  t52003 = -1.*t51614*t52001;
  t52041 = t51654*t52001;
  t52120 = t51614*t52001;
  t52125 = -1.*t51890*t52001;
  t52146 = -1.*t51654*t52001;
  t52155 = t51890*t52001;
  t52303 = -1.*t52008*t41666;
  t52308 = t52008*t51579;
  p_output1[0]=t51597*var2[0] + t23274*t5146*var2[1] + t51537*var2[2];
  p_output1[1]=(t51606*t51890 - 1.*t51600*t51914)*var2[0] + (t23274*t41668*t51600 + t51606*t51614)*var2[1] + (t51606*t51654 - 1.*t51600*t51773)*var2[2];
  p_output1[2]=(t51600*t51890 + t51606*t51914)*var2[0] + (-1.*t23274*t41668*t51606 + t51600*t51614)*var2[1] + (t51600*t51654 + t51606*t51773)*var2[2];
  p_output1[3]=(t51537*(t52003 - 1.*t23274*t5146*t52016 + t23274*t41668*t52029) + t23274*t5146*(t51537*t52016 + t51773*t52029 + t52041))*var2[0] + (t51597*(-1.*t51537*t52016 - 1.*t51773*t52029 + t52146) + t51537*(t51597*t52016 + t51914*t52029 + t52155))*var2[1] + (t51597*(t23274*t5146*t52016 - 1.*t23274*t41668*t52029 + t52120) + t23274*t5146*(-1.*t51597*t52016 - 1.*t51914*t52029 + t52125))*var2[2];
  p_output1[4]=(t51654*(t52003 - 1.*t23274*t52014) + t51614*(t41666*t52008 + t51398*t52014 + t52041))*var2[0] + (t51890*(-1.*t51398*t52014 + t52146 + t52303) + t51654*(t51591*t52014 + t52155 + t52308))*var2[1] + (t51890*(t23274*t52014 + t52120) + t51614*(-1.*t51579*t52008 - 1.*t51591*t52014 + t52125))*var2[2];
  p_output1[5]=t41666*(-1.*t18992*t51991 + t51999*t7278)*var2[0] + (t41666*(t18992*t41666*t51999 + t52308 + t41666*t51991*t7278) + t51579*(-1.*t18992*t51058*t51999 + t52303 - 1.*t51058*t51991*t7278))*var2[1] + t51579*(t18992*t51991 - 1.*t51999*t7278)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t51579*(-1.*t51058*t51989 + t52303) + t41666*(t41666*t51989 + t52308))*var2[1] + (-0.15121*t51058 - 0.15121*t51579)*var2[2];
  p_output1[13]=(0.28121*t35051 - 0.27*t30797*t35051 - 1.*t35051*t51985)*var2[0] + (0.28121*t30797 + 0.27*Power(t35051,2) - 1.*t30797*t51985)*var2[2];
  p_output1[14]=-0.27*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
