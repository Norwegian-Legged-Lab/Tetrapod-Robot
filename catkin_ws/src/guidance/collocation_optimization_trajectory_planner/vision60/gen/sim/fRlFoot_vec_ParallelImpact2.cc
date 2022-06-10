/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:31 GMT+02:00
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
  double t3403;
  double t443;
  double t3582;
  double t10226;
  double t7313;
  double t7317;
  double t10227;
  double t227;
  double t10225;
  double t10361;
  double t10384;
  double t6924;
  double t10395;
  double t10420;
  double t10428;
  double t10386;
  double t10577;
  double t10589;
  double t10437;
  double t10438;
  double t10440;
  double t10455;
  double t10456;
  double t10458;
  double t10459;
  double t10462;
  double t10464;
  double t10591;
  double t10592;
  double t10595;
  double t10606;
  double t10609;
  double t10610;
  double t10614;
  double t10615;
  double t10619;
  double t10623;
  double t10625;
  double t10626;
  double t10631;
  double t10632;
  double t10633;
  double t10385;
  double t10441;
  double t10445;
  double t10683;
  double t10684;
  double t10685;
  double t10687;
  double t10691;
  double t10694;
  double t10695;
  double t10696;
  double t10697;
  double t1598;
  double t7091;
  double t7256;
  double t10680;
  double t10686;
  double t10700;
  double t10702;
  double t10709;
  double t10711;
  double t10712;
  double t10713;
  double t10716;
  double t10717;
  double t10674;
  double t10675;
  double t10677;
  double t10679;
  double t10703;
  double t10704;
  double t10727;
  double t10729;
  double t10730;
  double t10736;
  double t10737;
  double t10740;
  double t10707;
  double t10720;
  double t10721;
  double t10733;
  double t10741;
  double t10745;
  double t10751;
  double t10752;
  double t10754;
  double t10453;
  double t10465;
  double t10466;
  double t10722;
  double t10761;
  double t10769;
  double t10775;
  double t10785;
  double t10792;
  double t10838;
  double t10845;
  double t10807;
  double t10812;
  double t10832;
  double t10821;
  double t10911;
  double t10903;
  t3403 = Cos(var1[9]);
  t443 = Sin(var1[4]);
  t3582 = Cos(var1[4]);
  t10226 = Cos(var1[10]);
  t7313 = Cos(var1[11]);
  t7317 = Sin(var1[10]);
  t10227 = Sin(var1[11]);
  t227 = Sin(var1[9]);
  t10225 = t7313*t7317;
  t10361 = -1.*t10226*t10227;
  t10384 = t10225 + t10361;
  t6924 = Sin(var1[5]);
  t10395 = t10226*t7313;
  t10420 = t7317*t10227;
  t10428 = t10395 + t10420;
  t10386 = Cos(var1[5]);
  t10577 = Cos(var1[3]);
  t10589 = Sin(var1[3]);
  t10437 = t10386*t10428;
  t10438 = t227*t10384*t6924;
  t10440 = t10437 + t10438;
  t10455 = -1.*t7313*t7317;
  t10456 = t10226*t10227;
  t10458 = t10455 + t10456;
  t10459 = t10386*t10458;
  t10462 = t227*t10428*t6924;
  t10464 = t10459 + t10462;
  t10591 = t3582*t227;
  t10592 = t3403*t443*t6924;
  t10595 = t10591 + t10592;
  t10606 = -1.*t10386*t227*t10384;
  t10609 = t10428*t6924;
  t10610 = t10606 + t10609;
  t10614 = t3403*t3582*t10384;
  t10615 = -1.*t443*t10440;
  t10619 = t10614 + t10615;
  t10623 = -1.*t10386*t227*t10428;
  t10625 = t10458*t6924;
  t10626 = t10623 + t10625;
  t10631 = t3403*t3582*t10428;
  t10632 = -1.*t443*t10464;
  t10633 = t10631 + t10632;
  t10385 = t3403*t10384*t443;
  t10441 = t3582*t10440;
  t10445 = t10385 + t10441;
  t10683 = -0.0641*t7313;
  t10684 = -0.28*t10227;
  t10685 = t10683 + t10684;
  t10687 = -1.*t7313;
  t10691 = 1. + t10687;
  t10694 = -0.575*t10691;
  t10695 = -0.295*t7313;
  t10696 = -0.0641*t10227;
  t10697 = t10694 + t10695 + t10696;
  t1598 = t227*t443;
  t7091 = -1.*t3403*t3582*t6924;
  t7256 = t1598 + t7091;
  t10680 = 0.325*t7317;
  t10686 = t10226*t10685;
  t10700 = t7317*t10697;
  t10702 = t10680 + t10686 + t10700;
  t10709 = -1.*t10226;
  t10711 = 1. + t10709;
  t10712 = -0.325*t10711;
  t10713 = -1.*t7317*t10685;
  t10716 = t10226*t10697;
  t10717 = t10712 + t10713 + t10716;
  t10674 = -1.*t3403;
  t10675 = 1. + t10674;
  t10677 = 0.1575*t10675;
  t10679 = 0.2255*t3403;
  t10703 = -1.*t227*t10702;
  t10704 = t10677 + t10679 + t10703;
  t10727 = 0.068*t227;
  t10729 = t3403*t10702;
  t10730 = t10727 + t10729;
  t10736 = t10386*t10717;
  t10737 = -1.*t10704*t6924;
  t10740 = t10736 + t10737;
  t10707 = t10386*t10704;
  t10720 = t10717*t6924;
  t10721 = t10707 + t10720;
  t10733 = t10730*t443;
  t10741 = t3582*t10740;
  t10745 = t10733 + t10741;
  t10751 = t3582*t10730;
  t10752 = -1.*t443*t10740;
  t10754 = t10751 + t10752;
  t10453 = t3403*t10428*t443;
  t10465 = t3582*t10464;
  t10466 = t10453 + t10465;
  t10722 = t3403*t10386*t10721;
  t10761 = -1.*t10721*t10610;
  t10769 = t10721*t10610;
  t10775 = -1.*t10721*t10626;
  t10785 = -1.*t3403*t10386*t10721;
  t10792 = t10721*t10626;
  t10838 = -1.*t227*t10730;
  t10845 = t3403*t10730*t10428;
  t10807 = t227*t10730;
  t10812 = -1.*t3403*t10730*t10384;
  t10832 = -1.*t3403*t10730*t10428;
  t10821 = t3403*t10730*t10384;
  t10911 = t10717*t10428;
  t10903 = -1.*t10717*t10458;
  p_output1[0]=t10445*var2[0] + t7256*var2[1] + t10466*var2[2];
  p_output1[1]=(t10577*t10610 - 1.*t10589*t10619)*var2[0] + (-1.*t10589*t10595 + t10386*t10577*t3403)*var2[1] + (t10577*t10626 - 1.*t10589*t10633)*var2[2];
  p_output1[2]=(t10589*t10610 + t10577*t10619)*var2[0] + (t10577*t10595 + t10386*t10589*t3403)*var2[1] + (t10589*t10626 + t10577*t10633)*var2[2];
  p_output1[3]=((t10466*t10745 + t10633*t10754 + t10792)*t7256 + t10466*(-1.*t10595*t10754 + t10785 - 1.*t10745*t7256))*var2[0] + (t10466*(t10445*t10745 + t10619*t10754 + t10769) + t10445*(-1.*t10466*t10745 - 1.*t10633*t10754 + t10775))*var2[1] + ((-1.*t10445*t10745 - 1.*t10619*t10754 + t10761)*t7256 + t10445*(t10722 + t10595*t10754 + t10745*t7256))*var2[2];
  p_output1[4]=(t10386*(t10464*t10740 + t10792 + t10845)*t3403 + t10626*(t10785 + t10838 + t10740*t3403*t6924))*var2[0] + (t10626*(t10440*t10740 + t10769 + t10821) + t10610*(-1.*t10464*t10740 + t10775 + t10832))*var2[1] + (t10386*(-1.*t10440*t10740 + t10761 + t10812)*t3403 + t10610*(t10722 + t10807 - 1.*t10740*t3403*t6924))*var2[2];
  p_output1[5]=(t227*(t10458*t10717 + t10845 - 1.*t10428*t10704*t227) + t10428*t3403*(t10838 - 1.*t10704*t3403))*var2[0] + (t10428*(t10821 + t10911 - 1.*t10384*t10704*t227)*t3403 + t10384*(t10832 + t10903 + t10428*t10704*t227)*t3403)*var2[1] + (t227*(-1.*t10428*t10717 + t10812 + t10384*t10704*t227) + t10384*t3403*(t10807 + t10704*t3403))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t10384 - 0.2255*t10458)*var2[0] + (t10428*(-1.*t10428*t10702 + t10903) + t10458*(t10384*t10702 + t10911))*var2[1] + 0.068*t10428*var2[2];
  p_output1[10]=(-0.325*t10227 - 1.*t10227*t10697 - 1.*t10685*t7313)*var2[0] + (-1.*t10227*t10685 + 0.325*t7313 + t10697*t7313)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
