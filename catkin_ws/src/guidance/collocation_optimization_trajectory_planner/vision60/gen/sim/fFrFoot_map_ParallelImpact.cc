/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:39 GMT+02:00
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
  double t13348;
  double t7696;
  double t8268;
  double t21167;
  double t8994;
  double t21360;
  double t25168;
  double t25373;
  double t25395;
  double t25381;
  double t25382;
  double t25386;
  double t25396;
  double t2104;
  double t25371;
  double t25228;
  double t25390;
  double t25399;
  double t25404;
  double t25427;
  double t25419;
  double t25420;
  double t25422;
  double t25415;
  double t25428;
  double t25431;
  double t25433;
  double t25532;
  double t25534;
  double t25538;
  double t25546;
  double t25547;
  double t25548;
  double t25553;
  double t25554;
  double t25555;
  double t25531;
  double t25542;
  double t25556;
  double t25558;
  double t25562;
  double t25564;
  double t25568;
  double t25570;
  double t25572;
  double t25574;
  double t25517;
  double t25522;
  double t25528;
  double t25530;
  double t25559;
  double t25560;
  double t25587;
  double t25588;
  double t25590;
  double t25592;
  double t25593;
  double t25594;
  double t25581;
  double t25582;
  double t25584;
  double t25561;
  double t25576;
  double t25577;
  double t25499;
  double t25503;
  double t25504;
  double t25591;
  double t25596;
  double t25598;
  double t25440;
  double t25505;
  double t25507;
  double t25508;
  double t25512;
  double t25513;
  double t25606;
  double t25607;
  double t25608;
  double t25612;
  double t25613;
  double t25614;
  double t25580;
  double t25615;
  double t25624;
  double t25630;
  double t25603;
  double t25604;
  double t25605;
  double t25370;
  double t25409;
  double t25410;
  double t25617;
  double t25618;
  double t25619;
  double t25659;
  double t25664;
  double t25677;
  double t25673;
  double t25705;
  double t25688;
  double t25733;
  double t25741;
  double t25747;
  double t25753;
  t13348 = Cos(var1[13]);
  t7696 = Cos(var1[14]);
  t8268 = Sin(var1[13]);
  t21167 = Sin(var1[14]);
  t8994 = t7696*t8268;
  t21360 = -1.*t13348*t21167;
  t25168 = t8994 + t21360;
  t25373 = Cos(var1[5]);
  t25395 = Sin(var1[12]);
  t25381 = t13348*t7696;
  t25382 = t8268*t21167;
  t25386 = t25381 + t25382;
  t25396 = Sin(var1[5]);
  t2104 = Cos(var1[12]);
  t25371 = Cos(var1[4]);
  t25228 = Sin(var1[4]);
  t25390 = t25373*t25386;
  t25399 = t25395*t25168*t25396;
  t25404 = t25390 + t25399;
  t25427 = Sin(var1[3]);
  t25419 = -1.*t25373*t25395*t25168;
  t25420 = t25386*t25396;
  t25422 = t25419 + t25420;
  t25415 = Cos(var1[3]);
  t25428 = t2104*t25371*t25168;
  t25431 = -1.*t25228*t25404;
  t25433 = t25428 + t25431;
  t25532 = -0.0641*t7696;
  t25534 = -0.28*t21167;
  t25538 = t25532 + t25534;
  t25546 = -1.*t7696;
  t25547 = 1. + t25546;
  t25548 = 0.075*t25547;
  t25553 = 0.355*t7696;
  t25554 = -0.0641*t21167;
  t25555 = t25548 + t25553 + t25554;
  t25531 = -0.325*t8268;
  t25542 = t13348*t25538;
  t25556 = t8268*t25555;
  t25558 = t25531 + t25542 + t25556;
  t25562 = -1.*t13348;
  t25564 = 1. + t25562;
  t25568 = 0.325*t25564;
  t25570 = -1.*t8268*t25538;
  t25572 = t13348*t25555;
  t25574 = t25568 + t25570 + t25572;
  t25517 = -1.*t2104;
  t25522 = 1. + t25517;
  t25528 = -0.1575*t25522;
  t25530 = -0.2255*t2104;
  t25559 = -1.*t25395*t25558;
  t25560 = t25528 + t25530 + t25559;
  t25587 = -0.068*t25395;
  t25588 = t2104*t25558;
  t25590 = t25587 + t25588;
  t25592 = t25373*t25574;
  t25593 = -1.*t25560*t25396;
  t25594 = t25592 + t25593;
  t25581 = t25395*t25228;
  t25582 = -1.*t2104*t25371*t25396;
  t25584 = t25581 + t25582;
  t25561 = t25373*t25560;
  t25576 = t25574*t25396;
  t25577 = t25561 + t25576;
  t25499 = -1.*t7696*t8268;
  t25503 = t13348*t21167;
  t25504 = t25499 + t25503;
  t25591 = t25590*t25228;
  t25596 = t25371*t25594;
  t25598 = t25591 + t25596;
  t25440 = t2104*t25386*t25228;
  t25505 = t25373*t25504;
  t25507 = t25395*t25386*t25396;
  t25508 = t25505 + t25507;
  t25512 = t25371*t25508;
  t25513 = t25440 + t25512;
  t25606 = t25371*t25590;
  t25607 = -1.*t25228*t25594;
  t25608 = t25606 + t25607;
  t25612 = -1.*t25373*t25395*t25386;
  t25613 = t25504*t25396;
  t25614 = t25612 + t25613;
  t25580 = -1.*t2104*t25373*t25577;
  t25615 = t25577*t25614;
  t25624 = -1.*t25395*t25590;
  t25630 = t2104*t25590*t25386;
  t25603 = t25371*t25395;
  t25604 = t2104*t25228*t25396;
  t25605 = t25603 + t25604;
  t25370 = t2104*t25168*t25228;
  t25409 = t25371*t25404;
  t25410 = t25370 + t25409;
  t25617 = t2104*t25371*t25386;
  t25618 = -1.*t25228*t25508;
  t25619 = t25617 + t25618;
  t25659 = t25577*t25422;
  t25664 = -1.*t25577*t25614;
  t25677 = -1.*t2104*t25590*t25386;
  t25673 = t2104*t25590*t25168;
  t25705 = t25574*t25386;
  t25688 = -1.*t25574*t25504;
  t25733 = t2104*t25373*t25577;
  t25741 = -1.*t25577*t25422;
  t25747 = t25395*t25590;
  t25753 = -1.*t2104*t25590*t25168;
  p_output1[0]=t25410;
  p_output1[1]=t25415*t25422 - 1.*t25427*t25433;
  p_output1[2]=t25422*t25427 + t25415*t25433;
  p_output1[3]=t25513*(t25580 - 1.*t25584*t25598 - 1.*t25605*t25608) + t25584*(t25513*t25598 + t25615 + t25608*t25619);
  p_output1[4]=t25614*(t25580 + t2104*t25396*t25594 + t25624) + t2104*t25373*(t25508*t25594 + t25615 + t25630);
  p_output1[5]=t2104*t25386*(-1.*t2104*t25560 + t25624) + t25395*(-1.*t25386*t25395*t25560 + t25504*t25574 + t25630);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t25168 + 0.2255*t25504;
  p_output1[13]=0.325*t21167 - 1.*t21167*t25555 - 1.*t25538*t7696;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t25584;
  p_output1[19]=t2104*t25373*t25415 - 1.*t25427*t25605;
  p_output1[20]=t2104*t25373*t25427 + t25415*t25605;
  p_output1[21]=t25513*(t25410*t25598 + t25433*t25608 + t25659) + t25410*(-1.*t25513*t25598 - 1.*t25608*t25619 + t25664);
  p_output1[22]=t25614*(t25404*t25594 + t25659 + t25673) + t25422*(-1.*t25508*t25594 + t25664 + t25677);
  p_output1[23]=t2104*t25168*(t25386*t25395*t25560 + t25677 + t25688) + t2104*t25386*(-1.*t25168*t25395*t25560 + t25673 + t25705);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t25386*(-1.*t25386*t25558 + t25688) + t25504*(t25168*t25558 + t25705);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t25513;
  p_output1[37]=t25415*t25614 - 1.*t25427*t25619;
  p_output1[38]=t25427*t25614 + t25415*t25619;
  p_output1[39]=t25410*(t25584*t25598 + t25605*t25608 + t25733) + t25584*(-1.*t25410*t25598 - 1.*t25433*t25608 + t25741);
  p_output1[40]=t25422*(-1.*t2104*t25396*t25594 + t25733 + t25747) + t2104*t25373*(-1.*t25404*t25594 + t25741 + t25753);
  p_output1[41]=t2104*t25168*(t2104*t25560 + t25747) + t25395*(t25168*t25395*t25560 - 1.*t25386*t25574 + t25753);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t25386;
  p_output1[49]=-1.*t21167*t25538 - 0.325*t7696 + t25555*t7696;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
