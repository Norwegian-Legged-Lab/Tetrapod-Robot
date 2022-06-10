/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:04 GMT+02:00
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
  double t2571;
  double t195;
  double t1602;
  double t3670;
  double t6924;
  double t8828;
  double t8838;
  double t6518;
  double t6866;
  double t10104;
  double t6702;
  double t10699;
  double t5593;
  double t2020;
  double t3968;
  double t5131;
  double t9497;
  double t10831;
  double t10834;
  double t11452;
  double t10870;
  double t10871;
  double t10873;
  double t11436;
  double t11062;
  double t11116;
  double t11240;
  double t11271;
  double t11272;
  double t11366;
  double t11441;
  double t11447;
  double t11448;
  double t11454;
  double t11488;
  double t11515;
  double t11549;
  double t11557;
  double t11583;
  double t11622;
  double t11623;
  double t11624;
  double t11640;
  double t11642;
  double t11647;
  double t11270;
  double t11410;
  double t11433;
  double t11810;
  double t11814;
  double t11820;
  double t11827;
  double t11831;
  double t11840;
  double t11844;
  double t11851;
  double t11863;
  double t11913;
  double t11927;
  double t11937;
  double t11957;
  double t11993;
  double t12018;
  double t12021;
  double t11821;
  double t11822;
  double t11996;
  double t12014;
  double t12093;
  double t12107;
  double t12109;
  double t12121;
  double t12132;
  double t12186;
  double t12211;
  double t12017;
  double t12071;
  double t12081;
  double t12123;
  double t12213;
  double t12219;
  double t12249;
  double t12285;
  double t12286;
  double t6500;
  double t10850;
  double t10855;
  double t12092;
  double t12307;
  double t12332;
  double t12411;
  double t12486;
  double t12547;
  double t12653;
  double t12687;
  t2571 = Cos(var1[16]);
  t195 = Cos(var1[17]);
  t1602 = Sin(var1[16]);
  t3670 = Sin(var1[17]);
  t6924 = -1.*t2571*t195;
  t8828 = -1.*t1602*t3670;
  t8838 = t6924 + t8828;
  t6518 = Cos(var1[4]);
  t6866 = Cos(var1[5]);
  t10104 = Sin(var1[15]);
  t6702 = Cos(var1[15]);
  t10699 = Sin(var1[5]);
  t5593 = Sin(var1[4]);
  t2020 = -1.*t195*t1602;
  t3968 = t2571*t3670;
  t5131 = t2020 + t3968;
  t9497 = t6702*t6866*t8838;
  t10831 = -1.*t10104*t8838*t10699;
  t10834 = t9497 + t10831;
  t11452 = Sin(var1[3]);
  t10870 = t6866*t10104;
  t10871 = t6702*t10699;
  t10873 = t10870 + t10871;
  t11436 = Cos(var1[3]);
  t11062 = t2571*t195;
  t11116 = t1602*t3670;
  t11240 = t11062 + t11116;
  t11271 = t6702*t6866*t5131;
  t11272 = -1.*t10104*t5131*t10699;
  t11366 = t11271 + t11272;
  t11441 = t6866*t10104*t8838;
  t11447 = t6702*t8838*t10699;
  t11448 = t11441 + t11447;
  t11454 = t6518*t5131;
  t11488 = -1.*t5593*t10834;
  t11515 = t11454 + t11488;
  t11549 = -1.*t6702*t6866;
  t11557 = t10104*t10699;
  t11583 = t11549 + t11557;
  t11622 = t6866*t10104*t5131;
  t11623 = t6702*t5131*t10699;
  t11624 = t11622 + t11623;
  t11640 = t6518*t11240;
  t11642 = -1.*t5593*t11366;
  t11647 = t11640 + t11642;
  t11270 = t11240*t5593;
  t11410 = t6518*t11366;
  t11433 = t11270 + t11410;
  t11810 = -1.*t6702;
  t11814 = 1. + t11810;
  t11820 = -0.15121*t11814;
  t11827 = -1.*t2571;
  t11831 = 1. + t11827;
  t11840 = -0.28121*t11831;
  t11844 = -1.*t195;
  t11851 = 1. + t11844;
  t11863 = -0.50321*t11851;
  t11913 = -0.19821*t195;
  t11927 = t11863 + t11913;
  t11937 = t2571*t11927;
  t11957 = 0.305*t1602*t3670;
  t11993 = t11840 + t11937 + t11957;
  t12018 = t6702*t11993;
  t12021 = t11820 + t12018;
  t11821 = -0.15121*t6702;
  t11822 = 0.15121*t10104;
  t11996 = t10104*t11993;
  t12014 = t11820 + t11821 + t11822 + t11996;
  t12093 = 0.28121*t1602;
  t12107 = t11927*t1602;
  t12109 = -0.305*t2571*t3670;
  t12121 = t12093 + t12107 + t12109;
  t12132 = t6866*t12021;
  t12186 = -1.*t12014*t10699;
  t12211 = t12132 + t12186;
  t12017 = t6866*t12014;
  t12071 = t12021*t10699;
  t12081 = t12017 + t12071;
  t12123 = t12121*t5593;
  t12213 = t6518*t12211;
  t12219 = t12123 + t12213;
  t12249 = t6518*t12121;
  t12285 = -1.*t5593*t12211;
  t12286 = t12249 + t12285;
  t6500 = t5131*t5593;
  t10850 = t6518*t10834;
  t10855 = t6500 + t10850;
  t12092 = -1.*t11583*t12081;
  t12307 = t11624*t12081;
  t12332 = -1.*t11624*t12081;
  t12411 = t11448*t12081;
  t12486 = t11583*t12081;
  t12547 = -1.*t11448*t12081;
  t12653 = -1.*t12121*t11240;
  t12687 = t12121*t5131;
  p_output1[0]=t10855;
  p_output1[1]=t10873*t6518;
  p_output1[2]=t11433;
  p_output1[3]=t11436*t11448 - 1.*t11452*t11515;
  p_output1[4]=t11436*t11583 + t10873*t11452*t5593;
  p_output1[5]=t11436*t11624 - 1.*t11452*t11647;
  p_output1[6]=t11448*t11452 + t11436*t11515;
  p_output1[7]=t11452*t11583 - 1.*t10873*t11436*t5593;
  p_output1[8]=t11452*t11624 + t11436*t11647;
  p_output1[9]=t10873*(t11433*t12219 + t11647*t12286 + t12307)*t6518 + t11433*(t12092 + t10873*t12286*t5593 - 1.*t10873*t12219*t6518);
  p_output1[10]=t10855*(-1.*t11433*t12219 - 1.*t11647*t12286 + t12332) + t11433*(t10855*t12219 + t11515*t12286 + t12411);
  p_output1[11]=t10873*(-1.*t10855*t12219 - 1.*t11515*t12286 + t12547)*t6518 + t10855*(t12486 - 1.*t10873*t12286*t5593 + t10873*t12219*t6518);
  p_output1[12]=t11624*(t12092 - 1.*t10873*t12211) + t11583*(t11240*t12121 + t11366*t12211 + t12307);
  p_output1[13]=t11448*(-1.*t11366*t12211 + t12332 + t12653) + t11624*(t10834*t12211 + t12411 + t12687);
  p_output1[14]=t11448*(t10873*t12211 + t12486) + t11583*(-1.*t10834*t12211 + t12547 - 1.*t12121*t5131);
  p_output1[15]=t11240*(-1.*t10104*t12021 + t12014*t6702);
  p_output1[16]=t5131*(t12653 - 1.*t10104*t12014*t5131 - 1.*t12021*t5131*t6702) + t11240*(t12687 + t10104*t12014*t8838 + t12021*t6702*t8838);
  p_output1[17]=t5131*(t10104*t12021 - 1.*t12014*t6702);
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t11240 - 0.15121*t8838;
  p_output1[46]=-0.15121 + t5131*(t12653 - 1.*t11993*t5131) + t11240*(t12687 + t11993*t8838);
  p_output1[47]=0;
  p_output1[48]=0.28121*t3670 + t11927*t3670 - 0.305*t195*t3670;
  p_output1[49]=0;
  p_output1[50]=0.28121*t195 + t11927*t195 + 0.305*Power(t3670,2);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
