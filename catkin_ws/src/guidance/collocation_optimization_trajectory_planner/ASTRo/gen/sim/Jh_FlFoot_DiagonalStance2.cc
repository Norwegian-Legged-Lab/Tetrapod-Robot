/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:49 GMT+02:00
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
  double t20913;
  double t19580;
  double t20911;
  double t20992;
  double t21769;
  double t21774;
  double t21776;
  double t21672;
  double t21757;
  double t29850;
  double t21756;
  double t52042;
  double t386;
  double t52192;
  double t52193;
  double t52350;
  double t20912;
  double t21041;
  double t21365;
  double t29420;
  double t52137;
  double t52138;
  double t52427;
  double t52159;
  double t52164;
  double t52165;
  double t52376;
  double t52354;
  double t52355;
  double t52356;
  double t52377;
  double t52379;
  double t52380;
  double t52435;
  double t52441;
  double t52442;
  double t52447;
  double t52448;
  double t52449;
  double t52452;
  double t52454;
  double t52456;
  double t52458;
  double t52459;
  double t52460;
  double t52188;
  double t52362;
  double t52375;
  double t52493;
  double t52495;
  double t52500;
  double t52501;
  double t52502;
  double t52504;
  double t52505;
  double t52509;
  double t52514;
  double t52515;
  double t52516;
  double t52520;
  double t52522;
  double t52523;
  double t52524;
  double t52528;
  double t52530;
  double t52531;
  double t52532;
  double t52533;
  double t52539;
  double t52540;
  double t52541;
  double t52543;
  double t52546;
  double t52547;
  double t52548;
  double t52529;
  double t52535;
  double t52536;
  double t52545;
  double t52549;
  double t52550;
  double t52553;
  double t52554;
  double t52555;
  double t21474;
  double t52145;
  double t52153;
  double t52537;
  double t52559;
  double t52565;
  double t52572;
  double t52580;
  double t52586;
  double t52601;
  double t52606;
  t20913 = Cos(var1[7]);
  t19580 = Cos(var1[8]);
  t20911 = Sin(var1[7]);
  t20992 = Sin(var1[8]);
  t21769 = t20913*t19580;
  t21774 = t20911*t20992;
  t21776 = t21769 + t21774;
  t21672 = Cos(var1[4]);
  t21757 = Cos(var1[6]);
  t29850 = Sin(var1[5]);
  t21756 = Cos(var1[5]);
  t52042 = Sin(var1[6]);
  t386 = Sin(var1[4]);
  t52192 = t19580*t20911;
  t52193 = -1.*t20913*t20992;
  t52350 = t52192 + t52193;
  t20912 = -1.*t19580*t20911;
  t21041 = t20913*t20992;
  t21365 = t20912 + t21041;
  t29420 = t21756*t21757*t21776;
  t52137 = -1.*t29850*t52042*t21776;
  t52138 = t29420 + t52137;
  t52427 = Sin(var1[3]);
  t52159 = -1.*t21757*t29850;
  t52164 = -1.*t21756*t52042;
  t52165 = t52159 + t52164;
  t52376 = Cos(var1[3]);
  t52354 = t21756*t21757*t52350;
  t52355 = -1.*t29850*t52042*t52350;
  t52356 = t52354 + t52355;
  t52377 = t21757*t29850*t21776;
  t52379 = t21756*t52042*t21776;
  t52380 = t52377 + t52379;
  t52435 = t21672*t21365;
  t52441 = -1.*t386*t52138;
  t52442 = t52435 + t52441;
  t52447 = t21756*t21757;
  t52448 = -1.*t29850*t52042;
  t52449 = t52447 + t52448;
  t52452 = t21757*t29850*t52350;
  t52454 = t21756*t52042*t52350;
  t52456 = t52452 + t52454;
  t52458 = t21672*t21776;
  t52459 = -1.*t386*t52356;
  t52460 = t52458 + t52459;
  t52188 = t386*t21776;
  t52362 = t21672*t52356;
  t52375 = t52188 + t52362;
  t52493 = -1.*t21757;
  t52495 = 1. + t52493;
  t52500 = 0.15121*t52495;
  t52501 = -1.*t20913;
  t52502 = 1. + t52501;
  t52504 = 0.28121*t52502;
  t52505 = -1.*t19580;
  t52509 = 1. + t52505;
  t52514 = 0.50321*t52509;
  t52515 = 0.23321*t19580;
  t52516 = t52514 + t52515;
  t52520 = t20913*t52516;
  t52522 = -0.27*t20911*t20992;
  t52523 = t52504 + t52520 + t52522;
  t52524 = t21757*t52523;
  t52528 = t52500 + t52524;
  t52530 = 0.15121*t21757;
  t52531 = -0.15121*t52042;
  t52532 = t52042*t52523;
  t52533 = t52500 + t52530 + t52531 + t52532;
  t52539 = 0.28121*t20911;
  t52540 = -1.*t52516*t20911;
  t52541 = -0.27*t20913*t20992;
  t52543 = t52539 + t52540 + t52541;
  t52546 = t21756*t52528;
  t52547 = -1.*t29850*t52533;
  t52548 = t52546 + t52547;
  t52529 = t29850*t52528;
  t52535 = t21756*t52533;
  t52536 = t52529 + t52535;
  t52545 = t386*t52543;
  t52549 = t21672*t52548;
  t52550 = t52545 + t52549;
  t52553 = t21672*t52543;
  t52554 = -1.*t386*t52548;
  t52555 = t52553 + t52554;
  t21474 = t386*t21365;
  t52145 = t21672*t52138;
  t52153 = t21474 + t52145;
  t52537 = -1.*t52449*t52536;
  t52559 = t52456*t52536;
  t52565 = -1.*t52456*t52536;
  t52572 = t52380*t52536;
  t52580 = t52449*t52536;
  t52586 = -1.*t52380*t52536;
  t52601 = -1.*t52543*t21776;
  t52606 = t52543*t21365;
  p_output1[0]=t52153;
  p_output1[1]=t21672*t52165;
  p_output1[2]=t52375;
  p_output1[3]=t52376*t52380 - 1.*t52427*t52442;
  p_output1[4]=t386*t52165*t52427 + t52376*t52449;
  p_output1[5]=t52376*t52456 - 1.*t52427*t52460;
  p_output1[6]=t52380*t52427 + t52376*t52442;
  p_output1[7]=-1.*t386*t52165*t52376 + t52427*t52449;
  p_output1[8]=t52427*t52456 + t52376*t52460;
  p_output1[9]=t52375*(t52537 - 1.*t21672*t52165*t52550 + t386*t52165*t52555) + t21672*t52165*(t52375*t52550 + t52460*t52555 + t52559);
  p_output1[10]=t52153*(-1.*t52375*t52550 - 1.*t52460*t52555 + t52565) + t52375*(t52153*t52550 + t52442*t52555 + t52572);
  p_output1[11]=t52153*(t21672*t52165*t52550 - 1.*t386*t52165*t52555 + t52580) + t21672*t52165*(-1.*t52153*t52550 - 1.*t52442*t52555 + t52586);
  p_output1[12]=t52456*(t52537 - 1.*t52165*t52548) + t52449*(t21776*t52543 + t52356*t52548 + t52559);
  p_output1[13]=t52380*(-1.*t52356*t52548 + t52565 + t52601) + t52456*(t52138*t52548 + t52572 + t52606);
  p_output1[14]=t52380*(t52165*t52548 + t52580) + t52449*(-1.*t21365*t52543 - 1.*t52138*t52548 + t52586);
  p_output1[15]=t21776*(t52042*t52528 - 1.*t21757*t52533);
  p_output1[16]=t21365*(-1.*t21757*t52350*t52528 - 1.*t52042*t52350*t52533 + t52601) + t21776*(t21757*t21776*t52528 + t21776*t52042*t52533 + t52606);
  p_output1[17]=t21365*(-1.*t52042*t52528 + t21757*t52533);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t21365*(-1.*t52350*t52523 + t52601) + t21776*(t21776*t52523 + t52606);
  p_output1[20]=0.15121*t21365 + 0.15121*t52350;
  p_output1[21]=0.28121*t20992 - 0.27*t19580*t20992 - 1.*t20992*t52516;
  p_output1[22]=0;
  p_output1[23]=0.28121*t19580 + 0.27*Power(t20992,2) - 1.*t19580*t52516;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.27;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
