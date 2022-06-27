/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:39 GMT+02:00
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
  double t7144;
  double t5979;
  double t6238;
  double t7154;
  double t7117;
  double t7661;
  double t7666;
  double t9596;
  double t21188;
  double t13497;
  double t14789;
  double t14811;
  double t21189;
  double t5464;
  double t8084;
  double t7787;
  double t21179;
  double t21194;
  double t21195;
  double t21209;
  double t21204;
  double t21205;
  double t21206;
  double t21203;
  double t21210;
  double t21221;
  double t21236;
  double t21578;
  double t21585;
  double t21586;
  double t21590;
  double t21591;
  double t21592;
  double t21593;
  double t21594;
  double t21598;
  double t21577;
  double t21589;
  double t21599;
  double t21600;
  double t21608;
  double t21609;
  double t21610;
  double t21611;
  double t21614;
  double t21615;
  double t21570;
  double t21571;
  double t21572;
  double t21573;
  double t21601;
  double t21602;
  double t21633;
  double t21634;
  double t21635;
  double t21637;
  double t21638;
  double t21639;
  double t21630;
  double t21631;
  double t21632;
  double t21607;
  double t21623;
  double t21625;
  double t21376;
  double t21516;
  double t21526;
  double t21636;
  double t21645;
  double t21646;
  double t21375;
  double t21536;
  double t21544;
  double t21546;
  double t21547;
  double t21566;
  double t21654;
  double t21659;
  double t21660;
  double t21667;
  double t21668;
  double t21669;
  double t21626;
  double t21670;
  double t21702;
  double t21721;
  double t21649;
  double t21650;
  double t21652;
  double t8080;
  double t21196;
  double t21201;
  double t21672;
  double t21673;
  double t21674;
  double t21768;
  double t21776;
  double t21802;
  double t21794;
  double t21812;
  double t21807;
  double t21833;
  double t21840;
  double t21852;
  double t21856;
  t7144 = Cos(var1[13]);
  t5979 = Cos(var1[14]);
  t6238 = Sin(var1[13]);
  t7154 = Sin(var1[14]);
  t7117 = t5979*t6238;
  t7661 = -1.*t7144*t7154;
  t7666 = t7117 + t7661;
  t9596 = Cos(var1[5]);
  t21188 = Sin(var1[12]);
  t13497 = t7144*t5979;
  t14789 = t6238*t7154;
  t14811 = t13497 + t14789;
  t21189 = Sin(var1[5]);
  t5464 = Cos(var1[12]);
  t8084 = Cos(var1[4]);
  t7787 = Sin(var1[4]);
  t21179 = t9596*t14811;
  t21194 = t21188*t7666*t21189;
  t21195 = t21179 + t21194;
  t21209 = Sin(var1[3]);
  t21204 = -1.*t9596*t21188*t7666;
  t21205 = t14811*t21189;
  t21206 = t21204 + t21205;
  t21203 = Cos(var1[3]);
  t21210 = t5464*t8084*t7666;
  t21221 = -1.*t7787*t21195;
  t21236 = t21210 + t21221;
  t21578 = -0.0641*t5979;
  t21585 = -0.28*t7154;
  t21586 = t21578 + t21585;
  t21590 = -1.*t5979;
  t21591 = 1. + t21590;
  t21592 = 0.075*t21591;
  t21593 = 0.355*t5979;
  t21594 = -0.0641*t7154;
  t21598 = t21592 + t21593 + t21594;
  t21577 = -0.325*t6238;
  t21589 = t7144*t21586;
  t21599 = t6238*t21598;
  t21600 = t21577 + t21589 + t21599;
  t21608 = -1.*t7144;
  t21609 = 1. + t21608;
  t21610 = 0.325*t21609;
  t21611 = -1.*t6238*t21586;
  t21614 = t7144*t21598;
  t21615 = t21610 + t21611 + t21614;
  t21570 = -1.*t5464;
  t21571 = 1. + t21570;
  t21572 = -0.1575*t21571;
  t21573 = -0.2255*t5464;
  t21601 = -1.*t21188*t21600;
  t21602 = t21572 + t21573 + t21601;
  t21633 = -0.068*t21188;
  t21634 = t5464*t21600;
  t21635 = t21633 + t21634;
  t21637 = t9596*t21615;
  t21638 = -1.*t21602*t21189;
  t21639 = t21637 + t21638;
  t21630 = t21188*t7787;
  t21631 = -1.*t5464*t8084*t21189;
  t21632 = t21630 + t21631;
  t21607 = t9596*t21602;
  t21623 = t21615*t21189;
  t21625 = t21607 + t21623;
  t21376 = -1.*t5979*t6238;
  t21516 = t7144*t7154;
  t21526 = t21376 + t21516;
  t21636 = t21635*t7787;
  t21645 = t8084*t21639;
  t21646 = t21636 + t21645;
  t21375 = t5464*t14811*t7787;
  t21536 = t9596*t21526;
  t21544 = t21188*t14811*t21189;
  t21546 = t21536 + t21544;
  t21547 = t8084*t21546;
  t21566 = t21375 + t21547;
  t21654 = t8084*t21635;
  t21659 = -1.*t7787*t21639;
  t21660 = t21654 + t21659;
  t21667 = -1.*t9596*t21188*t14811;
  t21668 = t21526*t21189;
  t21669 = t21667 + t21668;
  t21626 = -1.*t5464*t9596*t21625;
  t21670 = t21625*t21669;
  t21702 = -1.*t21188*t21635;
  t21721 = t5464*t21635*t14811;
  t21649 = t8084*t21188;
  t21650 = t5464*t7787*t21189;
  t21652 = t21649 + t21650;
  t8080 = t5464*t7666*t7787;
  t21196 = t8084*t21195;
  t21201 = t8080 + t21196;
  t21672 = t5464*t8084*t14811;
  t21673 = -1.*t7787*t21546;
  t21674 = t21672 + t21673;
  t21768 = t21625*t21206;
  t21776 = -1.*t21625*t21669;
  t21802 = -1.*t5464*t21635*t14811;
  t21794 = t5464*t21635*t7666;
  t21812 = t21615*t14811;
  t21807 = -1.*t21615*t21526;
  t21833 = t5464*t9596*t21625;
  t21840 = -1.*t21625*t21206;
  t21852 = t21188*t21635;
  t21856 = -1.*t5464*t21635*t7666;
  p_output1[0]=t21201;
  p_output1[1]=t21203*t21206 - 1.*t21209*t21236;
  p_output1[2]=t21206*t21209 + t21203*t21236;
  p_output1[3]=t21566*(t21626 - 1.*t21632*t21646 - 1.*t21652*t21660) + t21632*(t21566*t21646 + t21670 + t21660*t21674);
  p_output1[4]=t21669*(t21626 + t21702 + t21189*t21639*t5464) + (t21546*t21639 + t21670 + t21721)*t5464*t9596;
  p_output1[5]=t21188*(-1.*t14811*t21188*t21602 + t21526*t21615 + t21721) + t14811*t5464*(t21702 - 1.*t21602*t5464);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.2255*t21526 + 0.1575*t7666;
  p_output1[13]=-1.*t21586*t5979 + 0.325*t7154 - 1.*t21598*t7154;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t21632;
  p_output1[19]=-1.*t21209*t21652 + t21203*t5464*t9596;
  p_output1[20]=t21203*t21652 + t21209*t5464*t9596;
  p_output1[21]=t21566*(t21201*t21646 + t21236*t21660 + t21768) + t21201*(-1.*t21566*t21646 - 1.*t21660*t21674 + t21776);
  p_output1[22]=t21669*(t21195*t21639 + t21768 + t21794) + t21206*(-1.*t21546*t21639 + t21776 + t21802);
  p_output1[23]=(t14811*t21188*t21602 + t21802 + t21807)*t5464*t7666 + t14811*t5464*(t21794 + t21812 - 1.*t21188*t21602*t7666);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t14811*(-1.*t14811*t21600 + t21807) + t21526*(t21812 + t21600*t7666);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t21566;
  p_output1[37]=t21203*t21669 - 1.*t21209*t21674;
  p_output1[38]=t21209*t21669 + t21203*t21674;
  p_output1[39]=t21201*(t21632*t21646 + t21652*t21660 + t21833) + t21632*(-1.*t21201*t21646 - 1.*t21236*t21660 + t21840);
  p_output1[40]=t21206*(t21833 + t21852 - 1.*t21189*t21639*t5464) + (-1.*t21195*t21639 + t21840 + t21856)*t5464*t9596;
  p_output1[41]=t5464*(t21852 + t21602*t5464)*t7666 + t21188*(-1.*t14811*t21615 + t21856 + t21188*t21602*t7666);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t14811;
  p_output1[49]=-0.325*t5979 + t21598*t5979 - 1.*t21586*t7154;
  p_output1[50]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
