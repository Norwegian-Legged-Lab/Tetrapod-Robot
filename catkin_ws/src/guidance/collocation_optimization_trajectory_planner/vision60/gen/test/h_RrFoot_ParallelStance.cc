/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:29 GMT+02:00
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
  double t4907;
  double t4916;
  double t4919;
  double t4925;
  double t4951;
  double t4908;
  double t5052;
  double t3907;
  double t18015;
  double t23442;
  double t23461;
  double t23546;
  double t23653;
  double t23655;
  double t23749;
  double t23777;
  double t28652;
  double t28656;
  double t28660;
  double t4901;
  double t4902;
  double t28704;
  double t4930;
  double t4934;
  double t28721;
  double t28734;
  double t28735;
  double t28779;
  double t28720;
  double t28727;
  double t28728;
  double t28807;
  double t28811;
  double t28812;
  double t27529;
  double t28582;
  double t28814;
  double t28815;
  double t28816;
  double t28822;
  double t28823;
  double t28824;
  double t28852;
  double t28853;
  double t28854;
  double t28844;
  double t28845;
  double t28846;
  double t28860;
  double t28861;
  double t28862;
  double t28864;
  double t28869;
  double t28870;
  double t28872;
  double t28873;
  double t28874;
  t4907 = Cos(var1[4]);
  t4916 = Sin(var1[15]);
  t4919 = Sin(var1[4]);
  t4925 = Cos(var1[15]);
  t4951 = Sin(var1[5]);
  t4908 = Cos(var1[5]);
  t5052 = Sin(var1[16]);
  t3907 = Cos(var1[16]);
  t18015 = t4925*t4919;
  t23442 = t4907*t4916*t4951;
  t23461 = t18015 + t23442;
  t23546 = Sin(var1[17]);
  t23653 = -1.*t4907*t4908*t5052;
  t23655 = t3907*t23461;
  t23749 = t23653 + t23655;
  t23777 = Cos(var1[17]);
  t28652 = t3907*t4907*t4908;
  t28656 = t5052*t23461;
  t28660 = t28652 + t28656;
  t4901 = -1.*t3907;
  t4902 = 1. + t4901;
  t28704 = Sin(var1[3]);
  t4930 = -1.*t4925;
  t4934 = 1. + t4930;
  t28721 = Cos(var1[3]);
  t28734 = t28721*t4908;
  t28735 = -1.*t28704*t4919*t4951;
  t28779 = t28734 + t28735;
  t28720 = t4908*t28704*t4919;
  t28727 = t28721*t4951;
  t28728 = t28720 + t28727;
  t28807 = -1.*t4925*t4907*t28704;
  t28811 = -1.*t4916*t28779;
  t28812 = t28807 + t28811;
  t27529 = -1.*t23777;
  t28582 = 1. + t27529;
  t28814 = -1.*t5052*t28728;
  t28815 = t3907*t28812;
  t28816 = t28814 + t28815;
  t28822 = t3907*t28728;
  t28823 = t5052*t28812;
  t28824 = t28822 + t28823;
  t28852 = t4908*t28704;
  t28853 = t28721*t4919*t4951;
  t28854 = t28852 + t28853;
  t28844 = -1.*t28721*t4908*t4919;
  t28845 = t28704*t4951;
  t28846 = t28844 + t28845;
  t28860 = t4925*t28721*t4907;
  t28861 = -1.*t4916*t28854;
  t28862 = t28860 + t28861;
  t28864 = -1.*t5052*t28846;
  t28869 = t3907*t28862;
  t28870 = t28864 + t28869;
  t28872 = t3907*t28846;
  t28873 = t5052*t28862;
  t28874 = t28872 + t28873;
  p_output1[0]=-0.575*t23546*t23749 - 0.575*t28582*t28660 - 0.0641*(t23749*t23777 + t23546*t28660) - 0.295*(-1.*t23546*t23749 + t23777*t28660) - 0.325*t4902*t4907*t4908 + 0.1575*t4916*t4919 + 0.1575*t4907*t4934*t4951 - 0.2255*(t4916*t4919 - 1.*t4907*t4925*t4951) + 0.325*t23461*t5052 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.575*t23546*t28816 - 0.575*t28582*t28824 - 0.0641*(t23777*t28816 + t23546*t28824) - 0.295*(-1.*t23546*t28816 + t23777*t28824) - 0.325*t28728*t4902 - 0.1575*t28704*t4907*t4916 - 0.2255*(-1.*t28704*t4907*t4916 + t28779*t4925) - 0.1575*t28779*t4934 + 0.325*t28812*t5052 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.575*t23546*t28870 - 0.575*t28582*t28874 - 0.0641*(t23777*t28870 + t23546*t28874) - 0.295*(-1.*t23546*t28870 + t23777*t28874) - 0.325*t28846*t4902 + 0.1575*t28721*t4907*t4916 - 0.2255*(t28721*t4907*t4916 + t28854*t4925) - 0.1575*t28854*t4934 + 0.325*t28862*t5052 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
