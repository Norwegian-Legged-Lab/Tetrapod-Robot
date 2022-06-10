/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:22 GMT+02:00
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
  double t119;
  double t55;
  double t71;
  double t120;
  double t96;
  double t141;
  double t143;
  double t298;
  double t144;
  double t34;
  double t188;
  double t304;
  double t270;
  double t275;
  double t279;
  double t226;
  double t285;
  double t306;
  double t308;
  double t396;
  double t408;
  double t350;
  double t366;
  double t367;
  double t368;
  double t370;
  double t381;
  double t397;
  double t400;
  double t401;
  double t409;
  double t410;
  double t411;
  double t441;
  double t443;
  double t444;
  double t457;
  double t480;
  double t497;
  double t499;
  double t500;
  double t502;
  double t344;
  double t388;
  double t394;
  double t559;
  double t560;
  double t561;
  double t570;
  double t582;
  double t583;
  double t584;
  double t585;
  double t587;
  double t312;
  double t322;
  double t337;
  double t556;
  double t565;
  double t588;
  double t589;
  double t603;
  double t604;
  double t605;
  double t607;
  double t608;
  double t611;
  double t547;
  double t549;
  double t550;
  double t555;
  double t592;
  double t597;
  double t622;
  double t624;
  double t631;
  double t635;
  double t640;
  double t643;
  double t598;
  double t614;
  double t615;
  double t633;
  double t645;
  double t646;
  double t652;
  double t656;
  double t658;
  double t170;
  double t309;
  double t310;
  double t616;
  double t683;
  double t701;
  double t707;
  double t729;
  double t736;
  double t743;
  double t747;
  double t759;
  double t753;
  double t766;
  double t770;
  double t816;
  double t794;
  t119 = Cos(var1[13]);
  t55 = Cos(var1[14]);
  t71 = Sin(var1[13]);
  t120 = Sin(var1[14]);
  t96 = t55*t71;
  t141 = -1.*t119*t120;
  t143 = t96 + t141;
  t298 = Sin(var1[12]);
  t144 = Sin(var1[4]);
  t34 = Cos(var1[12]);
  t188 = Cos(var1[4]);
  t304 = Sin(var1[5]);
  t270 = t119*t55;
  t275 = t71*t120;
  t279 = t270 + t275;
  t226 = Cos(var1[5]);
  t285 = t226*t279;
  t306 = t298*t143*t304;
  t308 = t285 + t306;
  t396 = Cos(var1[3]);
  t408 = Sin(var1[3]);
  t350 = -1.*t55*t71;
  t366 = t119*t120;
  t367 = t350 + t366;
  t368 = t226*t367;
  t370 = t298*t279*t304;
  t381 = t368 + t370;
  t397 = -1.*t226*t298*t143;
  t400 = t279*t304;
  t401 = t397 + t400;
  t409 = t34*t188*t143;
  t410 = -1.*t144*t308;
  t411 = t409 + t410;
  t441 = t188*t298;
  t443 = t34*t144*t304;
  t444 = t441 + t443;
  t457 = -1.*t226*t298*t279;
  t480 = t367*t304;
  t497 = t457 + t480;
  t499 = t34*t188*t279;
  t500 = -1.*t144*t381;
  t502 = t499 + t500;
  t344 = t34*t279*t144;
  t388 = t188*t381;
  t394 = t344 + t388;
  t559 = -0.0641*t55;
  t560 = -0.28*t120;
  t561 = t559 + t560;
  t570 = -1.*t55;
  t582 = 1. + t570;
  t583 = 0.075*t582;
  t584 = 0.355*t55;
  t585 = -0.0641*t120;
  t587 = t583 + t584 + t585;
  t312 = t298*t144;
  t322 = -1.*t34*t188*t304;
  t337 = t312 + t322;
  t556 = -0.325*t71;
  t565 = t119*t561;
  t588 = t71*t587;
  t589 = t556 + t565 + t588;
  t603 = -1.*t119;
  t604 = 1. + t603;
  t605 = 0.325*t604;
  t607 = -1.*t71*t561;
  t608 = t119*t587;
  t611 = t605 + t607 + t608;
  t547 = -1.*t34;
  t549 = 1. + t547;
  t550 = -0.1575*t549;
  t555 = -0.2255*t34;
  t592 = -1.*t298*t589;
  t597 = t550 + t555 + t592;
  t622 = -0.068*t298;
  t624 = t34*t589;
  t631 = t622 + t624;
  t635 = t226*t611;
  t640 = -1.*t597*t304;
  t643 = t635 + t640;
  t598 = t226*t597;
  t614 = t611*t304;
  t615 = t598 + t614;
  t633 = t631*t144;
  t645 = t188*t643;
  t646 = t633 + t645;
  t652 = t188*t631;
  t656 = -1.*t144*t643;
  t658 = t652 + t656;
  t170 = t34*t143*t144;
  t309 = t188*t308;
  t310 = t170 + t309;
  t616 = -1.*t34*t226*t615;
  t683 = t615*t497;
  t701 = t615*t401;
  t707 = -1.*t615*t497;
  t729 = t34*t226*t615;
  t736 = -1.*t615*t401;
  t743 = -1.*t298*t631;
  t747 = t34*t631*t279;
  t759 = -1.*t34*t631*t279;
  t753 = t34*t631*t143;
  t766 = t298*t631;
  t770 = -1.*t34*t631*t143;
  t816 = t611*t279;
  t794 = -1.*t611*t367;
  p_output1[0]=t310;
  p_output1[1]=t337;
  p_output1[2]=t394;
  p_output1[3]=t396*t401 - 1.*t408*t411;
  p_output1[4]=t226*t34*t396 - 1.*t408*t444;
  p_output1[5]=t396*t497 - 1.*t408*t502;
  p_output1[6]=t401*t408 + t396*t411;
  p_output1[7]=t226*t34*t408 + t396*t444;
  p_output1[8]=t408*t497 + t396*t502;
  p_output1[9]=t394*(t616 - 1.*t337*t646 - 1.*t444*t658) + t337*(t394*t646 + t502*t658 + t683);
  p_output1[10]=t394*(t310*t646 + t411*t658 + t701) + t310*(-1.*t394*t646 - 1.*t502*t658 + t707);
  p_output1[11]=t310*(t337*t646 + t444*t658 + t729) + t337*(-1.*t310*t646 - 1.*t411*t658 + t736);
  p_output1[12]=t497*(t616 + t304*t34*t643 + t743) + t226*t34*(t381*t643 + t683 + t747);
  p_output1[13]=t497*(t308*t643 + t701 + t753) + t401*(-1.*t381*t643 + t707 + t759);
  p_output1[14]=t401*(-1.*t304*t34*t643 + t729 + t766) + t226*t34*(-1.*t308*t643 + t736 + t770);
  p_output1[15]=t279*t34*(-1.*t34*t597 + t743) + t298*(-1.*t279*t298*t597 + t367*t611 + t747);
  p_output1[16]=t143*t34*(t279*t298*t597 + t759 + t794) + t279*t34*(-1.*t143*t298*t597 + t753 + t816);
  p_output1[17]=t143*t34*(t34*t597 + t766) + t298*(t143*t298*t597 - 1.*t279*t611 + t770);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.1575*t143 + 0.2255*t367;
  p_output1[37]=t279*(-1.*t279*t589 + t794) + t367*(t143*t589 + t816);
  p_output1[38]=-0.068*t279;
  p_output1[39]=0.325*t120 - 1.*t55*t561 - 1.*t120*t587;
  p_output1[40]=0;
  p_output1[41]=-0.325*t55 - 1.*t120*t561 + t55*t587;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
