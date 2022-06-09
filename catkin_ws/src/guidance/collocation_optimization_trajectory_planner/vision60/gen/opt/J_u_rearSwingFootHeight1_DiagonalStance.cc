/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:09 GMT+02:00
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
  double t553;
  double t704;
  double t664;
  double t672;
  double t727;
  double t520;
  double t540;
  double t754;
  double t765;
  double t766;
  double t767;
  double t776;
  double t680;
  double t737;
  double t745;
  double t651;
  double t777;
  double t787;
  double t791;
  double t801;
  double t802;
  double t803;
  double t804;
  double t808;
  double t821;
  double t823;
  double t828;
  double t652;
  double t661;
  double t761;
  double t762;
  double t864;
  double t867;
  double t868;
  double t809;
  double t813;
  double t872;
  double t873;
  double t877;
  double t880;
  double t881;
  double t882;
  double t928;
  double t930;
  double t934;
  double t939;
  double t940;
  double t943;
  double t946;
  double t948;
  double t964;
  double t992;
  double t1001;
  double t1002;
  double t1039;
  double t1040;
  double t1041;
  double t1045;
  double t1046;
  double t1047;
  double t1073;
  double t1075;
  double t1078;
  double t1094;
  double t1100;
  double t1103;
  double t1106;
  double t1107;
  double t1108;
  double t1139;
  double t1144;
  double t1145;
  t553 = Sin(var1[3]);
  t704 = Cos(var1[3]);
  t664 = Cos(var1[5]);
  t672 = Sin(var1[4]);
  t727 = Sin(var1[5]);
  t520 = Cos(var1[4]);
  t540 = Sin(var1[15]);
  t754 = Cos(var1[15]);
  t765 = t704*t664;
  t766 = -1.*t553*t672*t727;
  t767 = t765 + t766;
  t776 = Sin(var1[16]);
  t680 = t664*t553*t672;
  t737 = t704*t727;
  t745 = t680 + t737;
  t651 = Cos(var1[16]);
  t777 = -1.*t754*t520*t553;
  t787 = -1.*t540*t767;
  t791 = t777 + t787;
  t801 = Sin(var1[17]);
  t802 = -1.*t776*t745;
  t803 = t651*t791;
  t804 = t802 + t803;
  t808 = Cos(var1[17]);
  t821 = t651*t745;
  t823 = t776*t791;
  t828 = t821 + t823;
  t652 = -1.*t651;
  t661 = 1. + t652;
  t761 = -1.*t754;
  t762 = 1. + t761;
  t864 = -1.*t754*t704*t672;
  t867 = -1.*t704*t520*t540*t727;
  t868 = t864 + t867;
  t809 = -1.*t808;
  t813 = 1. + t809;
  t872 = t704*t520*t664*t776;
  t873 = t651*t868;
  t877 = t872 + t873;
  t880 = -1.*t651*t704*t520*t664;
  t881 = t776*t868;
  t882 = t880 + t881;
  t928 = t704*t664*t672;
  t930 = -1.*t553*t727;
  t934 = t928 + t930;
  t939 = t664*t553;
  t940 = t704*t672*t727;
  t943 = t939 + t940;
  t946 = -1.*t540*t776*t934;
  t948 = t651*t943;
  t964 = t946 + t948;
  t992 = -1.*t651*t540*t934;
  t1001 = -1.*t776*t943;
  t1002 = t992 + t1001;
  t1039 = -1.*t704*t520*t540;
  t1040 = -1.*t754*t943;
  t1041 = t1039 + t1040;
  t1045 = t754*t704*t520;
  t1046 = -1.*t540*t943;
  t1047 = t1045 + t1046;
  t1073 = -1.*t704*t664*t672;
  t1075 = t553*t727;
  t1078 = t1073 + t1075;
  t1094 = -1.*t776*t1078;
  t1100 = t651*t1047;
  t1103 = t1094 + t1100;
  t1106 = -1.*t651*t1078;
  t1107 = -1.*t776*t1047;
  t1108 = t1106 + t1107;
  t1139 = t651*t1078;
  t1144 = t776*t1047;
  t1145 = t1139 + t1144;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t520*t540*t553 - 0.325*t661*t745 - 0.1575*t762*t767 - 0.2255*(-1.*t520*t540*t553 + t754*t767) + 0.325*t776*t791 - 0.575*t801*t804 - 0.575*t813*t828 - 0.0641*(t804*t808 + t801*t828) - 0.295*(-1.*t801*t804 + t808*t828);
  p_output1[2]=0.325*t520*t661*t664*t704 - 0.1575*t540*t672*t704 - 0.2255*(-1.*t540*t672*t704 + t520*t704*t727*t754) - 0.1575*t520*t704*t727*t762 + 0.325*t776*t868 - 0.575*t801*t877 - 0.575*t813*t882 - 0.0641*(t808*t877 + t801*t882) - 0.295*(-1.*t801*t877 + t808*t882);
  p_output1[3]=-0.575*t1002*t801 - 0.2255*t754*t934 - 0.1575*t762*t934 - 0.325*t540*t776*t934 - 0.325*t661*t943 - 0.575*t813*t964 - 0.0641*(t1002*t808 + t801*t964) - 0.295*(-1.*t1002*t801 + t808*t964);
  p_output1[4]=-0.2255*t1047 + 0.1575*t520*t704*t754 + 0.325*t1041*t776 - 0.575*t1041*t651*t801 - 0.0641*(t1041*t776*t801 + t1041*t651*t808) - 0.295*(-1.*t1041*t651*t801 + t1041*t776*t808) - 0.575*t1041*t776*t813 - 0.1575*t540*t943;
  p_output1[5]=0.325*t1047*t651 - 0.325*t1078*t776 - 0.575*t1108*t801 - 0.295*(-1.*t1108*t801 + t1103*t808) - 0.0641*(t1103*t801 + t1108*t808) - 0.575*t1103*t813;
  p_output1[6]=-0.575*t1145*t801 - 0.575*t1103*t808 - 0.295*(-1.*t1145*t801 - 1.*t1103*t808) - 0.0641*(-1.*t1103*t801 + t1145*t808);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
