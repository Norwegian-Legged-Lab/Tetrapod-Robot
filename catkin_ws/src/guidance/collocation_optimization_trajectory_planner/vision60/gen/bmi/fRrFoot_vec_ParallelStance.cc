/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:50 GMT+02:00
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
  double t21729;
  double t13352;
  double t21824;
  double t25245;
  double t24266;
  double t24868;
  double t25746;
  double t1025;
  double t24879;
  double t25818;
  double t25872;
  double t22290;
  double t26002;
  double t26007;
  double t26011;
  double t25886;
  double t29184;
  double t29494;
  double t26034;
  double t26035;
  double t26039;
  double t26183;
  double t26189;
  double t26202;
  double t26821;
  double t27022;
  double t27080;
  double t29807;
  double t29975;
  double t29978;
  double t30006;
  double t30012;
  double t30036;
  double t30048;
  double t30175;
  double t30219;
  double t30497;
  double t30503;
  double t30793;
  double t31053;
  double t31054;
  double t31097;
  double t25884;
  double t26121;
  double t26155;
  double t32258;
  double t32259;
  double t32261;
  double t32264;
  double t32265;
  double t32352;
  double t32353;
  double t32355;
  double t32370;
  double t20340;
  double t23933;
  double t24072;
  double t32257;
  double t32262;
  double t32371;
  double t32373;
  double t32411;
  double t32416;
  double t32432;
  double t32442;
  double t32445;
  double t32460;
  double t32206;
  double t32215;
  double t32241;
  double t32245;
  double t32374;
  double t32375;
  double t32532;
  double t32533;
  double t32546;
  double t32607;
  double t32653;
  double t32664;
  double t32378;
  double t32462;
  double t32488;
  double t32592;
  double t32712;
  double t32714;
  double t32777;
  double t32785;
  double t32793;
  double t26158;
  double t27129;
  double t28445;
  double t32507;
  double t32845;
  double t33053;
  double t33347;
  double t33579;
  double t33749;
  double t34036;
  double t34051;
  double t33875;
  double t33898;
  double t33991;
  double t33914;
  double t34125;
  double t34116;
  t21729 = Cos(var1[15]);
  t13352 = Sin(var1[4]);
  t21824 = Cos(var1[4]);
  t25245 = Cos(var1[16]);
  t24266 = Cos(var1[17]);
  t24868 = Sin(var1[16]);
  t25746 = Sin(var1[17]);
  t1025 = Sin(var1[15]);
  t24879 = t24266*t24868;
  t25818 = -1.*t25245*t25746;
  t25872 = t24879 + t25818;
  t22290 = Sin(var1[5]);
  t26002 = t25245*t24266;
  t26007 = t24868*t25746;
  t26011 = t26002 + t26007;
  t25886 = Cos(var1[5]);
  t29184 = Cos(var1[3]);
  t29494 = Sin(var1[3]);
  t26034 = t25886*t26011;
  t26035 = t1025*t25872*t22290;
  t26039 = t26034 + t26035;
  t26183 = -1.*t24266*t24868;
  t26189 = t25245*t25746;
  t26202 = t26183 + t26189;
  t26821 = t25886*t26202;
  t27022 = t1025*t26011*t22290;
  t27080 = t26821 + t27022;
  t29807 = t21824*t1025;
  t29975 = t21729*t13352*t22290;
  t29978 = t29807 + t29975;
  t30006 = -1.*t25886*t1025*t25872;
  t30012 = t26011*t22290;
  t30036 = t30006 + t30012;
  t30048 = t21729*t21824*t25872;
  t30175 = -1.*t13352*t26039;
  t30219 = t30048 + t30175;
  t30497 = -1.*t25886*t1025*t26011;
  t30503 = t26202*t22290;
  t30793 = t30497 + t30503;
  t31053 = t21729*t21824*t26011;
  t31054 = -1.*t13352*t27080;
  t31097 = t31053 + t31054;
  t25884 = t21729*t25872*t13352;
  t26121 = t21824*t26039;
  t26155 = t25884 + t26121;
  t32258 = -0.0641*t24266;
  t32259 = -0.28*t25746;
  t32261 = t32258 + t32259;
  t32264 = -1.*t24266;
  t32265 = 1. + t32264;
  t32352 = -0.575*t32265;
  t32353 = -0.295*t24266;
  t32355 = -0.0641*t25746;
  t32370 = t32352 + t32353 + t32355;
  t20340 = t1025*t13352;
  t23933 = -1.*t21729*t21824*t22290;
  t24072 = t20340 + t23933;
  t32257 = 0.325*t24868;
  t32262 = t25245*t32261;
  t32371 = t24868*t32370;
  t32373 = t32257 + t32262 + t32371;
  t32411 = -1.*t25245;
  t32416 = 1. + t32411;
  t32432 = -0.325*t32416;
  t32442 = -1.*t24868*t32261;
  t32445 = t25245*t32370;
  t32460 = t32432 + t32442 + t32445;
  t32206 = -1.*t21729;
  t32215 = 1. + t32206;
  t32241 = -0.1575*t32215;
  t32245 = -0.2255*t21729;
  t32374 = -1.*t1025*t32373;
  t32375 = t32241 + t32245 + t32374;
  t32532 = -0.068*t1025;
  t32533 = t21729*t32373;
  t32546 = t32532 + t32533;
  t32607 = t25886*t32460;
  t32653 = -1.*t32375*t22290;
  t32664 = t32607 + t32653;
  t32378 = t25886*t32375;
  t32462 = t32460*t22290;
  t32488 = t32378 + t32462;
  t32592 = t32546*t13352;
  t32712 = t21824*t32664;
  t32714 = t32592 + t32712;
  t32777 = t21824*t32546;
  t32785 = -1.*t13352*t32664;
  t32793 = t32777 + t32785;
  t26158 = t21729*t26011*t13352;
  t27129 = t21824*t27080;
  t28445 = t26158 + t27129;
  t32507 = t21729*t25886*t32488;
  t32845 = -1.*t32488*t30036;
  t33053 = t32488*t30036;
  t33347 = -1.*t32488*t30793;
  t33579 = -1.*t21729*t25886*t32488;
  t33749 = t32488*t30793;
  t34036 = -1.*t1025*t32546;
  t34051 = t21729*t32546*t26011;
  t33875 = t1025*t32546;
  t33898 = -1.*t21729*t32546*t25872;
  t33991 = -1.*t21729*t32546*t26011;
  t33914 = t21729*t32546*t25872;
  t34125 = t32460*t26011;
  t34116 = -1.*t32460*t26202;
  p_output1[0]=t26155*var2[0] + t24072*var2[1] + t28445*var2[2];
  p_output1[1]=(t29184*t30036 - 1.*t29494*t30219)*var2[0] + (t21729*t25886*t29184 - 1.*t29494*t29978)*var2[1] + (t29184*t30793 - 1.*t29494*t31097)*var2[2];
  p_output1[2]=(t29494*t30036 + t29184*t30219)*var2[0] + (t21729*t25886*t29494 + t29184*t29978)*var2[1] + (t29494*t30793 + t29184*t31097)*var2[2];
  p_output1[3]=(t28445*(-1.*t24072*t32714 - 1.*t29978*t32793 + t33579) + t24072*(t28445*t32714 + t31097*t32793 + t33749))*var2[0] + (t28445*(t26155*t32714 + t30219*t32793 + t33053) + t26155*(-1.*t28445*t32714 - 1.*t31097*t32793 + t33347))*var2[1] + (t26155*(t32507 + t24072*t32714 + t29978*t32793) + t24072*(-1.*t26155*t32714 - 1.*t30219*t32793 + t32845))*var2[2];
  p_output1[4]=(t30793*(t21729*t22290*t32664 + t33579 + t34036) + t21729*t25886*(t27080*t32664 + t33749 + t34051))*var2[0] + (t30793*(t26039*t32664 + t33053 + t33914) + t30036*(-1.*t27080*t32664 + t33347 + t33991))*var2[1] + (t30036*(t32507 - 1.*t21729*t22290*t32664 + t33875) + t21729*t25886*(-1.*t26039*t32664 + t32845 + t33898))*var2[2];
  p_output1[5]=(t21729*t26011*(-1.*t21729*t32375 + t34036) + t1025*(-1.*t1025*t26011*t32375 + t26202*t32460 + t34051))*var2[0] + (t21729*t25872*(t1025*t26011*t32375 + t33991 + t34116) + t21729*t26011*(-1.*t1025*t25872*t32375 + t33914 + t34125))*var2[1] + (t21729*t25872*(t21729*t32375 + t33875) + t1025*(t1025*t25872*t32375 - 1.*t26011*t32460 + t33898))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t25872 + 0.2255*t26202)*var2[0] + (t26011*(-1.*t26011*t32373 + t34116) + t26202*(t25872*t32373 + t34125))*var2[1] - 0.068*t26011*var2[2];
  p_output1[16]=(-0.325*t25746 - 1.*t24266*t32261 - 1.*t25746*t32370)*var2[0] + (0.325*t24266 - 1.*t25746*t32261 + t24266*t32370)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
