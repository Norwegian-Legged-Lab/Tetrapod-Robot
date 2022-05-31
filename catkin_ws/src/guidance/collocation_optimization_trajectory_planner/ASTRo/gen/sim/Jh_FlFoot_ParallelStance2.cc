/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:28 GMT+02:00
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
  double t9785;
  double t7605;
  double t7907;
  double t11923;
  double t12387;
  double t12399;
  double t12400;
  double t11956;
  double t12360;
  double t12408;
  double t12205;
  double t12411;
  double t6161;
  double t12724;
  double t12734;
  double t12755;
  double t8364;
  double t11939;
  double t11946;
  double t12403;
  double t12419;
  double t12422;
  double t12919;
  double t12458;
  double t12550;
  double t12564;
  double t12818;
  double t12764;
  double t12779;
  double t12780;
  double t12864;
  double t12871;
  double t12888;
  double t12920;
  double t13012;
  double t13013;
  double t13040;
  double t13041;
  double t13047;
  double t13059;
  double t13062;
  double t13063;
  double t13094;
  double t13095;
  double t13112;
  double t12693;
  double t12814;
  double t12816;
  double t13227;
  double t13228;
  double t13235;
  double t13236;
  double t13239;
  double t13240;
  double t13245;
  double t13246;
  double t13252;
  double t15516;
  double t15615;
  double t15705;
  double t15708;
  double t15710;
  double t15720;
  double t15721;
  double t15727;
  double t15732;
  double t15733;
  double t15734;
  double t15745;
  double t15756;
  double t15757;
  double t15758;
  double t15785;
  double t15786;
  double t15787;
  double t15722;
  double t15739;
  double t15743;
  double t15762;
  double t15794;
  double t15798;
  double t15804;
  double t15810;
  double t15811;
  double t11955;
  double t12443;
  double t12456;
  double t15744;
  double t15873;
  double t15882;
  double t15891;
  double t15898;
  double t15905;
  double t15919;
  double t15924;
  t9785 = Cos(var1[7]);
  t7605 = Cos(var1[8]);
  t7907 = Sin(var1[7]);
  t11923 = Sin(var1[8]);
  t12387 = t9785*t7605;
  t12399 = t7907*t11923;
  t12400 = t12387 + t12399;
  t11956 = Cos(var1[4]);
  t12360 = Cos(var1[6]);
  t12408 = Sin(var1[5]);
  t12205 = Cos(var1[5]);
  t12411 = Sin(var1[6]);
  t6161 = Sin(var1[4]);
  t12724 = t7605*t7907;
  t12734 = -1.*t9785*t11923;
  t12755 = t12724 + t12734;
  t8364 = -1.*t7605*t7907;
  t11939 = t9785*t11923;
  t11946 = t8364 + t11939;
  t12403 = t12205*t12360*t12400;
  t12419 = -1.*t12408*t12411*t12400;
  t12422 = t12403 + t12419;
  t12919 = Sin(var1[3]);
  t12458 = -1.*t12360*t12408;
  t12550 = -1.*t12205*t12411;
  t12564 = t12458 + t12550;
  t12818 = Cos(var1[3]);
  t12764 = t12205*t12360*t12755;
  t12779 = -1.*t12408*t12411*t12755;
  t12780 = t12764 + t12779;
  t12864 = t12360*t12408*t12400;
  t12871 = t12205*t12411*t12400;
  t12888 = t12864 + t12871;
  t12920 = t11956*t11946;
  t13012 = -1.*t6161*t12422;
  t13013 = t12920 + t13012;
  t13040 = t12205*t12360;
  t13041 = -1.*t12408*t12411;
  t13047 = t13040 + t13041;
  t13059 = t12360*t12408*t12755;
  t13062 = t12205*t12411*t12755;
  t13063 = t13059 + t13062;
  t13094 = t11956*t12400;
  t13095 = -1.*t6161*t12780;
  t13112 = t13094 + t13095;
  t12693 = t6161*t12400;
  t12814 = t11956*t12780;
  t12816 = t12693 + t12814;
  t13227 = -1.*t12360;
  t13228 = 1. + t13227;
  t13235 = 0.15121*t13228;
  t13236 = -1.*t9785;
  t13239 = 1. + t13236;
  t13240 = 0.28121*t13239;
  t13245 = -1.*t7605;
  t13246 = 1. + t13245;
  t13252 = 0.50321*t13246;
  t15516 = 0.23321*t7605;
  t15615 = t13252 + t15516;
  t15705 = t9785*t15615;
  t15708 = -0.27*t7907*t11923;
  t15710 = t13240 + t15705 + t15708;
  t15720 = t12360*t15710;
  t15721 = t13235 + t15720;
  t15727 = 0.15121*t12360;
  t15732 = -0.15121*t12411;
  t15733 = t12411*t15710;
  t15734 = t13235 + t15727 + t15732 + t15733;
  t15745 = 0.28121*t7907;
  t15756 = -1.*t15615*t7907;
  t15757 = -0.27*t9785*t11923;
  t15758 = t15745 + t15756 + t15757;
  t15785 = t12205*t15721;
  t15786 = -1.*t12408*t15734;
  t15787 = t15785 + t15786;
  t15722 = t12408*t15721;
  t15739 = t12205*t15734;
  t15743 = t15722 + t15739;
  t15762 = t6161*t15758;
  t15794 = t11956*t15787;
  t15798 = t15762 + t15794;
  t15804 = t11956*t15758;
  t15810 = -1.*t6161*t15787;
  t15811 = t15804 + t15810;
  t11955 = t6161*t11946;
  t12443 = t11956*t12422;
  t12456 = t11955 + t12443;
  t15744 = -1.*t13047*t15743;
  t15873 = t13063*t15743;
  t15882 = -1.*t13063*t15743;
  t15891 = t12888*t15743;
  t15898 = t13047*t15743;
  t15905 = -1.*t12888*t15743;
  t15919 = -1.*t15758*t12400;
  t15924 = t15758*t11946;
  p_output1[0]=t12456;
  p_output1[1]=t11956*t12564;
  p_output1[2]=t12816;
  p_output1[3]=t12818*t12888 - 1.*t12919*t13013;
  p_output1[4]=t12818*t13047 + t12564*t12919*t6161;
  p_output1[5]=t12818*t13063 - 1.*t12919*t13112;
  p_output1[6]=t12888*t12919 + t12818*t13013;
  p_output1[7]=t12919*t13047 - 1.*t12564*t12818*t6161;
  p_output1[8]=t12919*t13063 + t12818*t13112;
  p_output1[9]=t11956*t12564*(t12816*t15798 + t13112*t15811 + t15873) + t12816*(t15744 - 1.*t11956*t12564*t15798 + t12564*t15811*t6161);
  p_output1[10]=t12456*(-1.*t12816*t15798 - 1.*t13112*t15811 + t15882) + t12816*(t12456*t15798 + t13013*t15811 + t15891);
  p_output1[11]=t11956*t12564*(-1.*t12456*t15798 - 1.*t13013*t15811 + t15905) + t12456*(t11956*t12564*t15798 + t15898 - 1.*t12564*t15811*t6161);
  p_output1[12]=t13063*(t15744 - 1.*t12564*t15787) + t13047*(t12400*t15758 + t12780*t15787 + t15873);
  p_output1[13]=t12888*(-1.*t12780*t15787 + t15882 + t15919) + t13063*(t12422*t15787 + t15891 + t15924);
  p_output1[14]=t12888*(t12564*t15787 + t15898) + t13047*(-1.*t11946*t15758 - 1.*t12422*t15787 + t15905);
  p_output1[15]=t12400*(t12411*t15721 - 1.*t12360*t15734);
  p_output1[16]=t11946*(-1.*t12360*t12755*t15721 - 1.*t12411*t12755*t15734 + t15919) + t12400*(t12360*t12400*t15721 + t12400*t12411*t15734 + t15924);
  p_output1[17]=t11946*(-1.*t12411*t15721 + t12360*t15734);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t11946*(-1.*t12755*t15710 + t15919) + t12400*(t12400*t15710 + t15924);
  p_output1[20]=0.15121*t11946 + 0.15121*t12755;
  p_output1[21]=0.28121*t11923 - 1.*t11923*t15615 - 0.27*t11923*t7605;
  p_output1[22]=0;
  p_output1[23]=0.27*Power(t11923,2) + 0.28121*t7605 - 1.*t15615*t7605;
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

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
