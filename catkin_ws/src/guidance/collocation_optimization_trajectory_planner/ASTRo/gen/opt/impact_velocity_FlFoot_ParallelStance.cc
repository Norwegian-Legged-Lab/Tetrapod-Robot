/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:54 GMT+02:00
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
  double t24342;
  double t44471;
  double t44913;
  double t44915;
  double t44989;
  double t45301;
  double t45823;
  double t44200;
  double t45848;
  double t45884;
  double t45886;
  double t45890;
  double t45921;
  double t46117;
  double t46118;
  double t45838;
  double t45862;
  double t45863;
  double t45892;
  double t46011;
  double t46036;
  double t46042;
  double t46070;
  double t46092;
  double t46107;
  double t46116;
  double t46122;
  double t46138;
  double t46139;
  double t46140;
  double t46153;
  double t46293;
  double t46294;
  double t46295;
  double t46277;
  double t46288;
  double t46297;
  double t46298;
  double t46316;
  double t46317;
  double t46318;
  double t46382;
  double t46386;
  double t46387;
  double t45407;
  double t45586;
  double t45845;
  double t46412;
  double t46418;
  double t46419;
  double t46422;
  double t46423;
  double t46424;
  double t46426;
  double t46427;
  double t46431;
  double t46458;
  double t46456;
  double t46463;
  double t46464;
  double t46466;
  double t46457;
  double t46459;
  double t46461;
  double t46468;
  double t46469;
  double t46471;
  double t46172;
  double t46176;
  double t46229;
  double t46260;
  double t46505;
  double t46506;
  double t46507;
  double t46509;
  double t46510;
  double t46475;
  double t46555;
  double t46556;
  double t46559;
  double t46545;
  double t46592;
  double t46598;
  double t46600;
  double t46601;
  double t46602;
  double t46619;
  double t46621;
  double t46622;
  double t46657;
  double t46661;
  double t46668;
  double t46673;
  double t46674;
  double t46675;
  double t46677;
  double t46679;
  double t46681;
  double t46692;
  double t46693;
  double t46694;
  double t46696;
  double t46697;
  double t46701;
  double t46715;
  double t46716;
  double t46720;
  double t46723;
  double t46724;
  double t46725;
  double t46727;
  double t46728;
  double t46729;
  double t46740;
  double t46741;
  double t46742;
  double t46744;
  double t46745;
  double t46746;
  double t46767;
  double t46773;
  double t46777;
  double t46791;
  double t46794;
  double t46749;
  double t46839;
  double t46842;
  double t46847;
  double t46838;
  double t46848;
  double t46850;
  double t46855;
  double t46856;
  double t46857;
  double t46873;
  double t46874;
  double t46908;
  double t46928;
  double t46946;
  double t46959;
  double t46963;
  double t46966;
  double t46972;
  double t46973;
  double t46980;
  t24342 = Cos(var1[4]);
  t44471 = Cos(var1[6]);
  t44913 = -1.*t44471;
  t44915 = 1. + t44913;
  t44989 = 0.15121*t44915;
  t45301 = Sin(var1[6]);
  t45823 = Sin(var1[5]);
  t44200 = Cos(var1[5]);
  t45848 = Cos(var1[7]);
  t45884 = -1.*t24342*t44471*t45823;
  t45886 = -1.*t24342*t44200*t45301;
  t45890 = t45884 + t45886;
  t45921 = Cos(var1[8]);
  t46117 = Sin(var1[7]);
  t46118 = Sin(var1[8]);
  t45838 = 0.15121*t45301;
  t45862 = -1.*t45848;
  t45863 = 1. + t45862;
  t45892 = 0.28121*t45863*t45890;
  t46011 = -1.*t45921;
  t46036 = 1. + t46011;
  t46042 = 0.50321*t45848*t46036*t45890;
  t46070 = -1.*t24342*t44200*t44471;
  t46092 = t24342*t45823*t45301;
  t46107 = t46070 + t46092;
  t46116 = 0.15121*t46107;
  t46122 = -0.50321*t45890*t46117*t46118;
  t46138 = t45848*t45921*t45890;
  t46139 = t45890*t46117*t46118;
  t46140 = t46138 + t46139;
  t46153 = 0.23321*t46140;
  t46293 = t24342*t44200*t44471;
  t46294 = -1.*t24342*t45823*t45301;
  t46295 = t46293 + t46294;
  t46277 = Sin(var1[4]);
  t46288 = t45848*t46277;
  t46297 = t46295*t46117;
  t46298 = t46288 + t46297;
  t46316 = t45848*t46295;
  t46317 = -1.*t46277*t46117;
  t46318 = t46316 + t46317;
  t46382 = -1.*t45848*t46277;
  t46386 = -1.*t46295*t46117;
  t46387 = t46382 + t46386;
  t45407 = -0.15121*t45301;
  t45586 = t44989 + t45407;
  t45845 = t44989 + t45838;
  t46412 = -1.*t44200*t44471*t46277;
  t46418 = t46277*t45823*t45301;
  t46419 = t46412 + t46418;
  t46422 = t45848*t46419;
  t46423 = -1.*t24342*t46117;
  t46424 = t46422 + t46423;
  t46426 = t24342*t45848;
  t46427 = t46419*t46117;
  t46431 = t46426 + t46427;
  t46458 = Cos(var1[3]);
  t46456 = Sin(var1[3]);
  t46463 = t46458*t44200;
  t46464 = -1.*t46456*t46277*t45823;
  t46466 = t46463 + t46464;
  t46457 = -1.*t44200*t46456*t46277;
  t46459 = -1.*t46458*t45823;
  t46461 = t46457 + t46459;
  t46468 = t44471*t46466;
  t46469 = t46461*t45301;
  t46471 = t46468 + t46469;
  t46172 = -0.15121*t44471;
  t46176 = t46172 + t45838;
  t46229 = 0.15121*t44471;
  t46260 = t46229 + t45838;
  t46505 = t44200*t46456*t46277;
  t46506 = t46458*t45823;
  t46507 = t46505 + t46506;
  t46509 = -1.*t46507*t45301;
  t46510 = t46468 + t46509;
  t46475 = -1.*t46466*t45301;
  t46555 = t44471*t46507;
  t46556 = t46466*t45301;
  t46559 = t46555 + t46556;
  t46545 = -1.*t24342*t45848*t46456;
  t46592 = t46559*t46117;
  t46598 = t46545 + t46592;
  t46600 = t45848*t46559;
  t46601 = t24342*t46456*t46117;
  t46602 = t46600 + t46601;
  t46619 = t24342*t45848*t46456;
  t46621 = -1.*t46559*t46117;
  t46622 = t46619 + t46621;
  t46657 = t24342*t44200*t44471*t46456;
  t46661 = -1.*t24342*t46456*t45823*t45301;
  t46668 = t46657 + t46661;
  t46673 = t45848*t46668;
  t46674 = -1.*t46456*t46277*t46117;
  t46675 = t46673 + t46674;
  t46677 = t45848*t46456*t46277;
  t46679 = t46668*t46117;
  t46681 = t46677 + t46679;
  t46692 = -1.*t44200*t46456;
  t46693 = -1.*t46458*t46277*t45823;
  t46694 = t46692 + t46693;
  t46696 = t46458*t44200*t46277;
  t46697 = -1.*t46456*t45823;
  t46701 = t46696 + t46697;
  t46715 = t44471*t46701;
  t46716 = t46694*t45301;
  t46720 = t46715 + t46716;
  t46723 = t45848*t46720;
  t46724 = t46458*t24342*t46117;
  t46725 = t46723 + t46724;
  t46727 = -1.*t46458*t24342*t45848;
  t46728 = t46720*t46117;
  t46729 = t46727 + t46728;
  t46740 = t44200*t46456;
  t46741 = t46458*t46277*t45823;
  t46742 = t46740 + t46741;
  t46744 = t44471*t46742;
  t46745 = t46701*t45301;
  t46746 = t46744 + t46745;
  t46767 = -1.*t46458*t44200*t46277;
  t46773 = t46456*t45823;
  t46777 = t46767 + t46773;
  t46791 = -1.*t46777*t45301;
  t46794 = t46744 + t46791;
  t46749 = -1.*t46742*t45301;
  t46839 = t44471*t46777;
  t46842 = t46742*t45301;
  t46847 = t46839 + t46842;
  t46838 = t46458*t24342*t45848;
  t46848 = t46847*t46117;
  t46850 = t46838 + t46848;
  t46855 = t45848*t46847;
  t46856 = -1.*t46458*t24342*t46117;
  t46857 = t46855 + t46856;
  t46873 = -1.*t46847*t46117;
  t46874 = t46727 + t46873;
  t46908 = -1.*t46458*t24342*t44200*t44471;
  t46928 = t46458*t24342*t45823*t45301;
  t46946 = t46908 + t46928;
  t46959 = t45848*t46946;
  t46963 = t46458*t46277*t46117;
  t46966 = t46959 + t46963;
  t46972 = -1.*t46458*t45848*t46277;
  t46973 = t46946*t46117;
  t46980 = t46972 + t46973;
  p_output1[0]=var2[0] + (0.28121*t24342*t46117 + t45586*t45823*t46277 - 1.*t44200*t45845*t46277 + 0.15121*(t44200*t45301*t46277 + t44471*t45823*t46277) + 0.28121*t45863*t46419 + 0.50321*t46036*t46424 - 0.50321*t46118*t46431 + 0.23321*(t45921*t46424 + t46118*t46431))*var2[4] + (-1.*t24342*t44200*t45586 - 1.*t24342*t45823*t45845 + t45892 + t46042 + t46116 + t46122 + t46153)*var2[5] + (t45892 + t46042 + t46116 + t46122 + t46153 - 1.*t24342*t45823*t46176 + t24342*t44200*t46260)*var2[6] + (0.28121*t45848*t46277 + 0.28121*t46117*t46295 - 0.50321*t46118*t46318 + 0.50321*t46036*t46387 + 0.23321*(t46118*t46318 + t45921*t46387))*var2[7] + (-0.50321*t45921*t46298 + 0.50321*t46118*t46318 + 0.23321*(t45921*t46298 - 1.*t46118*t46318))*var2[8];
  p_output1[1]=var2[1] + (-0.28121*t24342*t46117*t46458 + t45586*t46694 + t45845*t46701 + 0.15121*(t44471*t46694 - 1.*t45301*t46701) + 0.28121*t45863*t46720 + 0.50321*t46036*t46725 - 0.50321*t46118*t46729 + 0.23321*(t45921*t46725 + t46118*t46729))*var2[3] + (-1.*t24342*t45586*t45823*t46456 + t24342*t44200*t45845*t46456 + 0.28121*t46117*t46277*t46456 + 0.15121*(-1.*t24342*t44200*t45301*t46456 - 1.*t24342*t44471*t45823*t46456) + 0.28121*t45863*t46668 + 0.50321*t46036*t46675 - 0.50321*t46118*t46681 + 0.23321*(t45921*t46675 + t46118*t46681))*var2[4] + (t45586*t46461 + t45845*t46466 + 0.28121*t45863*t46471 + 0.50321*t45848*t46036*t46471 - 0.50321*t46117*t46118*t46471 + 0.23321*(t45848*t45921*t46471 + t46117*t46118*t46471) + 0.15121*(t44471*t46461 + t46475))*var2[5] + (t46176*t46466 + t46260*t46507 + 0.15121*(t46475 - 1.*t44471*t46507) + 0.28121*t45863*t46510 + 0.50321*t45848*t46036*t46510 - 0.50321*t46117*t46118*t46510 + 0.23321*(t45848*t45921*t46510 + t46117*t46118*t46510))*var2[6] + (-0.28121*t24342*t45848*t46456 + 0.28121*t46117*t46559 - 0.50321*t46118*t46602 + 0.50321*t46036*t46622 + 0.23321*(t46118*t46602 + t45921*t46622))*var2[7] + (-0.50321*t45921*t46598 + 0.50321*t46118*t46602 + 0.23321*(t45921*t46598 - 1.*t46118*t46602))*var2[8];
  p_output1[2]=var2[2] + (-0.28121*t24342*t46117*t46456 + t45586*t46466 + t45845*t46507 + 0.15121*t46510 + 0.28121*t45863*t46559 - 0.50321*t46118*t46598 + 0.50321*t46036*t46602 + 0.23321*(t46118*t46598 + t45921*t46602))*var2[3] + (t24342*t45586*t45823*t46458 - 1.*t24342*t44200*t45845*t46458 - 0.28121*t46117*t46277*t46458 + 0.15121*(t24342*t44200*t45301*t46458 + t24342*t44471*t45823*t46458) + 0.28121*t45863*t46946 + 0.50321*t46036*t46966 - 0.50321*t46118*t46980 + 0.23321*(t45921*t46966 + t46118*t46980))*var2[4] + (t45586*t46701 + t45845*t46742 + 0.28121*t45863*t46746 + 0.50321*t45848*t46036*t46746 - 0.50321*t46117*t46118*t46746 + 0.23321*(t45848*t45921*t46746 + t46117*t46118*t46746) + 0.15121*(t46715 + t46749))*var2[5] + (t46176*t46742 + t46260*t46777 + 0.15121*(t46749 - 1.*t44471*t46777) + 0.28121*t45863*t46794 + 0.50321*t45848*t46036*t46794 - 0.50321*t46117*t46118*t46794 + 0.23321*(t45848*t45921*t46794 + t46117*t46118*t46794))*var2[6] + (0.28121*t24342*t45848*t46458 + 0.28121*t46117*t46847 - 0.50321*t46118*t46857 + 0.50321*t46036*t46874 + 0.23321*(t46118*t46857 + t45921*t46874))*var2[7] + (-0.50321*t45921*t46850 + 0.50321*t46118*t46857 + 0.23321*(t45921*t46850 - 1.*t46118*t46857))*var2[8];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
