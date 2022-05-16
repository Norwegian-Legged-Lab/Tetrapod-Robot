/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:30 GMT+02:00
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
  double t1135;
  double t1406;
  double t1160;
  double t4919;
  double t39402;
  double t4433;
  double t39404;
  double t1301;
  double t39752;
  double t39757;
  double t39767;
  double t2838;
  double t39744;
  double t39788;
  double t39792;
  double t39794;
  double t1378;
  double t3687;
  double t3724;
  double t40187;
  double t40184;
  double t39400;
  double t39670;
  double t39743;
  double t39769;
  double t39771;
  double t39775;
  double t39810;
  double t39838;
  double t39842;
  double t40189;
  double t40191;
  double t40193;
  double t40198;
  double t40199;
  double t40200;
  double t40203;
  double t40204;
  double t40205;
  double t40210;
  double t40211;
  double t40212;
  double t40220;
  double t40221;
  double t40224;
  double t39745;
  double t39776;
  double t39781;
  double t40322;
  double t40324;
  double t40379;
  double t40382;
  double t40387;
  double t40403;
  double t40404;
  double t40406;
  double t40423;
  double t40425;
  double t40438;
  double t40439;
  double t40443;
  double t40448;
  double t40451;
  double t40454;
  double t40331;
  double t40337;
  double t40342;
  double t40444;
  double t40446;
  double t40461;
  double t40462;
  double t40463;
  double t40465;
  double t40467;
  double t40469;
  double t40470;
  double t40447;
  double t40455;
  double t40456;
  double t40466;
  double t40472;
  double t40473;
  double t40475;
  double t40480;
  double t40491;
  double t39783;
  double t39851;
  double t39873;
  double t40460;
  double t40510;
  double t40537;
  double t40558;
  double t40585;
  double t40590;
  double t40618;
  double t40622;
  t1135 = Cos(var1[4]);
  t1406 = Cos(var1[9]);
  t1160 = Cos(var1[5]);
  t4919 = Cos(var1[11]);
  t39402 = Sin(var1[10]);
  t4433 = Cos(var1[10]);
  t39404 = Sin(var1[11]);
  t1301 = Sin(var1[9]);
  t39752 = -1.*t4919*t39402;
  t39757 = t4433*t39404;
  t39767 = t39752 + t39757;
  t2838 = Sin(var1[5]);
  t39744 = Sin(var1[4]);
  t39788 = -1.*t4433*t4919;
  t39792 = -1.*t39402*t39404;
  t39794 = t39788 + t39792;
  t1378 = t1160*t1301;
  t3687 = t1406*t2838;
  t3724 = t1378 + t3687;
  t40187 = Cos(var1[3]);
  t40184 = Sin(var1[3]);
  t39400 = t4433*t4919;
  t39670 = t39402*t39404;
  t39743 = t39400 + t39670;
  t39769 = t1406*t1160*t39767;
  t39771 = -1.*t1301*t39767*t2838;
  t39775 = t39769 + t39771;
  t39810 = t1406*t1160*t39794;
  t39838 = -1.*t1301*t39794*t2838;
  t39842 = t39810 + t39838;
  t40189 = -1.*t1406*t1160;
  t40191 = t1301*t2838;
  t40193 = t40189 + t40191;
  t40198 = t1160*t1301*t39767;
  t40199 = t1406*t39767*t2838;
  t40200 = t40198 + t40199;
  t40203 = t1135*t39743;
  t40204 = -1.*t39744*t39775;
  t40205 = t40203 + t40204;
  t40210 = t1160*t1301*t39794;
  t40211 = t1406*t39794*t2838;
  t40212 = t40210 + t40211;
  t40220 = t1135*t39767;
  t40221 = -1.*t39744*t39842;
  t40224 = t40220 + t40221;
  t39745 = t39743*t39744;
  t39776 = t1135*t39775;
  t39781 = t39745 + t39776;
  t40322 = -1.*t1406;
  t40324 = 1. + t40322;
  t40379 = -1.*t4433;
  t40382 = 1. + t40379;
  t40387 = -0.28121*t40382;
  t40403 = -1.*t4919;
  t40404 = 1. + t40403;
  t40406 = -0.50321*t40404;
  t40423 = -0.23321*t4919;
  t40425 = t40406 + t40423;
  t40438 = t4433*t40425;
  t40439 = 0.27*t39402*t39404;
  t40443 = t40387 + t40438 + t40439;
  t40448 = -0.15121*t40324;
  t40451 = t1406*t40443;
  t40454 = t40448 + t40451;
  t40331 = 0.15121*t40324;
  t40337 = 0.15121*t1406;
  t40342 = 0.15121*t1301;
  t40444 = t1301*t40443;
  t40446 = t40331 + t40337 + t40342 + t40444;
  t40461 = 0.28121*t39402;
  t40462 = t40425*t39402;
  t40463 = -0.27*t4433*t39404;
  t40465 = t40461 + t40462 + t40463;
  t40467 = t1160*t40454;
  t40469 = -1.*t40446*t2838;
  t40470 = t40467 + t40469;
  t40447 = t1160*t40446;
  t40455 = t40454*t2838;
  t40456 = t40447 + t40455;
  t40466 = t40465*t39744;
  t40472 = t1135*t40470;
  t40473 = t40466 + t40472;
  t40475 = t1135*t40465;
  t40480 = -1.*t39744*t40470;
  t40491 = t40475 + t40480;
  t39783 = t39767*t39744;
  t39851 = t1135*t39842;
  t39873 = t39783 + t39851;
  t40460 = -1.*t40193*t40456;
  t40510 = t40200*t40456;
  t40537 = t40193*t40456;
  t40558 = -1.*t40212*t40456;
  t40585 = -1.*t40200*t40456;
  t40590 = t40212*t40456;
  t40618 = -1.*t40465*t39743;
  t40622 = t40465*t39767;
  p_output1[0]=t39873*var2[0] + t1135*t3724*var2[1] + t39781*var2[2];
  p_output1[1]=(t40187*t40212 - 1.*t40184*t40224)*var2[0] + (t3724*t39744*t40184 + t40187*t40193)*var2[1] + (t40187*t40200 - 1.*t40184*t40205)*var2[2];
  p_output1[2]=(t40184*t40212 + t40187*t40224)*var2[0] + (-1.*t3724*t39744*t40187 + t40184*t40193)*var2[1] + (t40184*t40200 + t40187*t40205)*var2[2];
  p_output1[3]=(t39781*(t40460 - 1.*t1135*t3724*t40473 + t3724*t39744*t40491) + t1135*t3724*(t39781*t40473 + t40205*t40491 + t40510))*var2[0] + (t39873*(-1.*t39781*t40473 - 1.*t40205*t40491 + t40585) + t39781*(t39873*t40473 + t40224*t40491 + t40590))*var2[1] + (t39873*(t1135*t3724*t40473 - 1.*t3724*t39744*t40491 + t40537) + t1135*t3724*(-1.*t39873*t40473 - 1.*t40224*t40491 + t40558))*var2[2];
  p_output1[4]=(t40200*(t40460 - 1.*t3724*t40470) + t40193*(t39743*t40465 + t39775*t40470 + t40510))*var2[0] + (t40212*(-1.*t39775*t40470 + t40585 + t40618) + t40200*(t39842*t40470 + t40590 + t40622))*var2[1] + (t40212*(t3724*t40470 + t40537) + t40193*(-1.*t39767*t40465 - 1.*t39842*t40470 + t40558))*var2[2];
  p_output1[5]=t39743*(t1406*t40446 - 1.*t1301*t40454)*var2[0] + (t39767*(-1.*t1301*t39767*t40446 - 1.*t1406*t39767*t40454 + t40618) + t39743*(t1301*t39794*t40446 + t1406*t39794*t40454 + t40622))*var2[1] + t39767*(-1.*t1406*t40446 + t1301*t40454)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t39743 + 0.15121*t39794)*var2[0] + (-0.15121 + t39767*(-1.*t39767*t40443 + t40618) + t39743*(t39794*t40443 + t40622))*var2[1];
  p_output1[10]=(0.28121*t39404 + t39404*t40425 - 0.27*t39404*t4919)*var2[0] + (0.27*Power(t39404,2) + 0.28121*t4919 + t40425*t4919)*var2[2];
  p_output1[11]=-0.27*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
