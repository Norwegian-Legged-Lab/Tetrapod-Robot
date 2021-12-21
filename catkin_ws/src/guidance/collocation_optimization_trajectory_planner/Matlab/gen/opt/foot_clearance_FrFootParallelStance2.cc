/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:51 GMT+01:00
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
  double t261;
  double t42;
  double t754;
  double t796;
  double t825;
  double t877;
  double t883;
  double t895;
  double t944;
  double t914;
  double t1030;
  double t277;
  double t408;
  double t502;
  double t601;
  double t939;
  double t1046;
  double t1047;
  double t1071;
  double t1078;
  double t1103;
  double t46;
  double t1184;
  double t1215;
  double t1216;
  double t1302;
  double t1304;
  double t1313;
  double t1316;
  double t1318;
  double t1324;
  double t1330;
  double t1399;
  double t1341;
  double t1358;
  double t1372;
  double t1373;
  double t1374;
  double t1378;
  double t1440;
  double t1441;
  double t1444;
  double t1455;
  double t1507;
  double t1513;
  double t1521;
  double t1533;
  double t1535;
  double t1539;
  t261 = Cos(var1[10]);
  t42 = Cos(var1[3]);
  t754 = Cos(var1[9]);
  t796 = -1.*t754;
  t825 = 1. + t796;
  t877 = Sin(var1[9]);
  t883 = -0.15121*t877;
  t895 = Cos(var1[5]);
  t944 = Sin(var1[3]);
  t914 = Sin(var1[4]);
  t1030 = Sin(var1[5]);
  t277 = -1.*t261;
  t408 = 1. + t277;
  t502 = -1. + t261;
  t601 = Sin(var1[10]);
  t939 = -1.*t42*t895*t914;
  t1046 = t944*t1030;
  t1047 = t939 + t1046;
  t1071 = t895*t944;
  t1078 = t42*t914*t1030;
  t1103 = t1071 + t1078;
  t46 = Cos(var1[4]);
  t1184 = -1.*t877*t1047;
  t1215 = t754*t1103;
  t1216 = t1184 + t1215;
  t1302 = t754*t1047;
  t1304 = t877*t1103;
  t1313 = t1302 + t1304;
  t1316 = Cos(var1[11]);
  t1318 = -1.*t1316;
  t1324 = 1. + t1318;
  t1330 = Sin(var1[11]);
  t1399 = -1. + t1316;
  t1341 = t42*t46*t601;
  t1358 = -4.e-6*t601*t1216;
  t1372 = -1.000000000016*t408;
  t1373 = 1. + t1372;
  t1374 = t1373*t1313;
  t1378 = t1341 + t1358 + t1374;
  t1440 = t261*t42*t46;
  t1441 = 4.e-6*t408*t1216;
  t1444 = -1.*t601*t1313;
  t1455 = t1440 + t1441 + t1444;
  t1507 = 4.e-6*t408*t42*t46;
  t1513 = 1.6e-11*t502;
  t1521 = 1. + t1513;
  t1533 = t1521*t1216;
  t1535 = 4.e-6*t601*t1313;
  t1539 = t1507 + t1533 + t1535;
  p_output1[0]=(0.50315000001605*t1324 - 0.0398890000006382*t1330)*t1378 - 0.041195*(-1.*t1330*t1378 + t1316*t1455 + 4.e-6*t1324*t1539) + 0.803147*((1. - 1.000000000016*t1324)*t1378 + t1330*t1455 - 4.e-6*t1330*t1539) - 0.14871*(4.e-6*t1330*t1378 + 4.e-6*t1324*t1455 + (1. + 1.6e-11*t1399)*t1539) + t1313*(0.281210000008499*t408 - 0.03874900000062*t601) + t1103*(-0.15121*t825 + t883) + t1047*(0.15121*t825 + t883) + var1[2] + t1216*(2.479936e-18*t408 - 1.54996e-7*t502 + 1.124840000016e-6*t601 - 1.2484e-7*var1[10]) + t42*t46*(-0.038749*t408 + 6.19984e-13*t502 - 0.281210000004*t601 - 4.9936e-13*var1[10]) + t1539*(2.552896e-18*t1324 + 2.012600000032e-6*t1330 - 1.59556e-7*t1399 - 1.26e-8*var1[11]) + t1455*(-0.039889*t1324 - 0.503150000008*t1330 + 6.38224e-13*t1399 - 5.04e-14*var1[11]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_FrFootParallelStance2.hh"

namespace ParallelStance2
{

void foot_clearance_FrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
