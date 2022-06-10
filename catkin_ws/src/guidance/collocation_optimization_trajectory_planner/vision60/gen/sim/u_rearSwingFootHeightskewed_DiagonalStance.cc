/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:06:28 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t12898;
  double t18849;
  double t21888;
  double t21344;
  double t21978;
  double t12917;
  double t16892;
  double t25928;
  double t26338;
  double t28454;
  double t29588;
  double t31345;
  double t21760;
  double t21979;
  double t22013;
  double t16929;
  double t31354;
  double t31604;
  double t31621;
  double t31637;
  double t31640;
  double t31879;
  double t31880;
  double t31893;
  double t31902;
  double t31903;
  double t31906;
  double t17753;
  double t18178;
  double t25955;
  double t26329;
  double t32163;
  double t32165;
  double t32175;
  double t31950;
  double t31972;
  double t31975;
  double t32731;
  double t34186;
  double t34439;
  double t31895;
  double t31897;
  double t34606;
  double t36791;
  double t36968;
  double t37175;
  double t37181;
  double t37213;
  double t37811;
  double t37824;
  double t37828;
  double t37883;
  double t37885;
  double t37886;
  double t37890;
  double t37892;
  double t37897;
  t12898 = Cos(var1[3]);
  t18849 = Cos(var1[5]);
  t21888 = Sin(var1[3]);
  t21344 = Sin(var1[4]);
  t21978 = Sin(var1[5]);
  t12917 = Cos(var1[4]);
  t16892 = Sin(var1[15]);
  t25928 = Cos(var1[15]);
  t26338 = t18849*t21888;
  t28454 = t12898*t21344*t21978;
  t29588 = t26338 + t28454;
  t31345 = Sin(var1[16]);
  t21760 = -1.*t12898*t18849*t21344;
  t21979 = t21888*t21978;
  t22013 = t21760 + t21979;
  t16929 = Cos(var1[16]);
  t31354 = t25928*t12898*t12917;
  t31604 = -1.*t16892*t29588;
  t31621 = t31354 + t31604;
  t31637 = Sin(var1[17]);
  t31640 = -1.*t31345*t22013;
  t31879 = t16929*t31621;
  t31880 = t31640 + t31879;
  t31893 = Cos(var1[17]);
  t31902 = t16929*t22013;
  t31903 = t31345*t31621;
  t31906 = t31902 + t31903;
  t17753 = -1.*t16929;
  t18178 = 1. + t17753;
  t25955 = -1.*t25928;
  t26329 = 1. + t25955;
  t32163 = t12898*t18849;
  t32165 = -1.*t21888*t21344*t21978;
  t32175 = t32163 + t32165;
  t31950 = t18849*t21888*t21344;
  t31972 = t12898*t21978;
  t31975 = t31950 + t31972;
  t32731 = -1.*t25928*t12917*t21888;
  t34186 = -1.*t16892*t32175;
  t34439 = t32731 + t34186;
  t31895 = -1.*t31893;
  t31897 = 1. + t31895;
  t34606 = -1.*t31345*t31975;
  t36791 = t16929*t34439;
  t36968 = t34606 + t36791;
  t37175 = t16929*t31975;
  t37181 = t31345*t34439;
  t37213 = t37175 + t37181;
  t37811 = t25928*t21344;
  t37824 = t12917*t16892*t21978;
  t37828 = t37811 + t37824;
  t37883 = -1.*t12917*t18849*t31345;
  t37885 = t16929*t37828;
  t37886 = t37883 + t37885;
  t37890 = t16929*t12917*t18849;
  t37892 = t31345*t37828;
  t37897 = t37890 + t37892;
  p_output1[0]=0.1575*t12898*t12917*t16892 - 0.325*t18178*t22013 - 0.1575*t26329*t29588 - 0.2255*(t12898*t12917*t16892 + t25928*t29588) + 0.325*t31345*t31621 - 0.575*t31637*t31880 - 0.575*t31897*t31906 - 0.0641*(t31880*t31893 + t31637*t31906) - 0.295*(-1.*t31637*t31880 + t31893*t31906) + var1[2] - 0.5*(-0.1575*t12917*t16892*t21888 - 0.325*t18178*t31975 - 0.1575*t26329*t32175 - 0.2255*(-1.*t12917*t16892*t21888 + t25928*t32175) + 0.325*t31345*t34439 - 0.575*t31637*t36968 - 0.575*t31897*t37213 - 0.0641*(t31893*t36968 + t31637*t37213) - 0.295*(-1.*t31637*t36968 + t31893*t37213) + var1[1])*var3[0]*(1. + Tanh((-0.325*t12917*t18178*t18849 + 0.1575*t16892*t21344 - 0.2255*(t16892*t21344 - 1.*t12917*t21978*t25928) + 0.1575*t12917*t21978*t26329 + 0.325*t31345*t37828 - 0.575*t31637*t37886 - 0.575*t31897*t37897 - 0.0641*(t31893*t37886 + t31637*t37897) - 0.295*(-1.*t31637*t37886 + t31893*t37897) + var1[0] - 1.*var2[0])*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightskewed_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightskewed_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
