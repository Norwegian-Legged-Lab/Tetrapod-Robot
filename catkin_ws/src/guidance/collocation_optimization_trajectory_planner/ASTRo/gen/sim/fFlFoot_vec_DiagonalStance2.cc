/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:57 GMT+02:00
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
  double t2118;
  double t2663;
  double t2186;
  double t3323;
  double t3343;
  double t3316;
  double t3353;
  double t2639;
  double t2669;
  double t3371;
  double t3392;
  double t3397;
  double t3221;
  double t3328;
  double t3356;
  double t3368;
  double t2662;
  double t2671;
  double t2677;
  double t3626;
  double t3555;
  double t3398;
  double t3404;
  double t3405;
  double t3437;
  double t3442;
  double t3448;
  double t3499;
  double t3510;
  double t3511;
  double t3631;
  double t3639;
  double t3644;
  double t3691;
  double t3712;
  double t3717;
  double t3756;
  double t3758;
  double t3774;
  double t3860;
  double t3861;
  double t3863;
  double t3869;
  double t3899;
  double t3957;
  double t3369;
  double t3406;
  double t3407;
  double t4320;
  double t4338;
  double t4381;
  double t4387;
  double t4388;
  double t4416;
  double t4417;
  double t4420;
  double t4429;
  double t4431;
  double t4432;
  double t4442;
  double t4445;
  double t4446;
  double t4452;
  double t4464;
  double t4468;
  double t4508;
  double t4535;
  double t4598;
  double t4699;
  double t4720;
  double t4798;
  double t4819;
  double t4869;
  double t4983;
  double t5254;
  double t4467;
  double t4653;
  double t4675;
  double t4856;
  double t5643;
  double t5656;
  double t5874;
  double t6060;
  double t6099;
  double t3464;
  double t3515;
  double t3519;
  double t4677;
  double t6597;
  double t8539;
  double t9631;
  double t10420;
  double t10510;
  double t11549;
  double t11640;
  t2118 = Cos(var1[4]);
  t2663 = Cos(var1[5]);
  t2186 = Cos(var1[6]);
  t3323 = Cos(var1[8]);
  t3343 = Sin(var1[7]);
  t3316 = Cos(var1[7]);
  t3353 = Sin(var1[8]);
  t2639 = Sin(var1[5]);
  t2669 = Sin(var1[6]);
  t3371 = t3323*t3343;
  t3392 = -1.*t3316*t3353;
  t3397 = t3371 + t3392;
  t3221 = Sin(var1[4]);
  t3328 = t3316*t3323;
  t3356 = t3343*t3353;
  t3368 = t3328 + t3356;
  t2662 = -1.*t2186*t2639;
  t2671 = -1.*t2663*t2669;
  t2677 = t2662 + t2671;
  t3626 = Cos(var1[3]);
  t3555 = Sin(var1[3]);
  t3398 = t2663*t2186*t3397;
  t3404 = -1.*t2639*t2669*t3397;
  t3405 = t3398 + t3404;
  t3437 = -1.*t3323*t3343;
  t3442 = t3316*t3353;
  t3448 = t3437 + t3442;
  t3499 = t2663*t2186*t3368;
  t3510 = -1.*t2639*t2669*t3368;
  t3511 = t3499 + t3510;
  t3631 = t2663*t2186;
  t3639 = -1.*t2639*t2669;
  t3644 = t3631 + t3639;
  t3691 = t2186*t2639*t3397;
  t3712 = t2663*t2669*t3397;
  t3717 = t3691 + t3712;
  t3756 = t2118*t3368;
  t3758 = -1.*t3221*t3405;
  t3774 = t3756 + t3758;
  t3860 = t2186*t2639*t3368;
  t3861 = t2663*t2669*t3368;
  t3863 = t3860 + t3861;
  t3869 = t2118*t3448;
  t3899 = -1.*t3221*t3511;
  t3957 = t3869 + t3899;
  t3369 = t3221*t3368;
  t3406 = t2118*t3405;
  t3407 = t3369 + t3406;
  t4320 = -1.*t2186;
  t4338 = 1. + t4320;
  t4381 = 0.15121*t4338;
  t4387 = -1.*t3316;
  t4388 = 1. + t4387;
  t4416 = 0.28121*t4388;
  t4417 = -1.*t3323;
  t4420 = 1. + t4417;
  t4429 = 0.50321*t4420;
  t4431 = 0.19821*t3323;
  t4432 = t4429 + t4431;
  t4442 = t3316*t4432;
  t4445 = -0.305*t3343*t3353;
  t4446 = t4416 + t4442 + t4445;
  t4452 = t2186*t4446;
  t4464 = t4381 + t4452;
  t4468 = 0.15121*t2186;
  t4508 = -0.15121*t2669;
  t4535 = t2669*t4446;
  t4598 = t4381 + t4468 + t4508 + t4535;
  t4699 = 0.28121*t3343;
  t4720 = -1.*t4432*t3343;
  t4798 = -0.305*t3316*t3353;
  t4819 = t4699 + t4720 + t4798;
  t4869 = t2663*t4464;
  t4983 = -1.*t2639*t4598;
  t5254 = t4869 + t4983;
  t4467 = t2639*t4464;
  t4653 = t2663*t4598;
  t4675 = t4467 + t4653;
  t4856 = t3221*t4819;
  t5643 = t2118*t5254;
  t5656 = t4856 + t5643;
  t5874 = t2118*t4819;
  t6060 = -1.*t3221*t5254;
  t6099 = t5874 + t6060;
  t3464 = t3221*t3448;
  t3515 = t2118*t3511;
  t3519 = t3464 + t3515;
  t4677 = -1.*t3644*t4675;
  t6597 = t3717*t4675;
  t8539 = t3644*t4675;
  t9631 = -1.*t3863*t4675;
  t10420 = -1.*t3717*t4675;
  t10510 = t3863*t4675;
  t11549 = -1.*t4819*t3368;
  t11640 = t4819*t3448;
  p_output1[0]=t3519*var2[0] + t2118*t2677*var2[1] + t3407*var2[2];
  p_output1[1]=(t3626*t3863 - 1.*t3555*t3957)*var2[0] + (t2677*t3221*t3555 + t3626*t3644)*var2[1] + (t3626*t3717 - 1.*t3555*t3774)*var2[2];
  p_output1[2]=(t3555*t3863 + t3626*t3957)*var2[0] + (-1.*t2677*t3221*t3626 + t3555*t3644)*var2[1] + (t3555*t3717 + t3626*t3774)*var2[2];
  p_output1[3]=(t3407*(t4677 - 1.*t2118*t2677*t5656 + t2677*t3221*t6099) + t2118*t2677*(t3407*t5656 + t3774*t6099 + t6597))*var2[0] + (t3519*(t10420 - 1.*t3407*t5656 - 1.*t3774*t6099) + t3407*(t10510 + t3519*t5656 + t3957*t6099))*var2[1] + (t3519*(t2118*t2677*t5656 - 1.*t2677*t3221*t6099 + t8539) + t2118*t2677*(-1.*t3519*t5656 - 1.*t3957*t6099 + t9631))*var2[2];
  p_output1[4]=(t3717*(t4677 - 1.*t2677*t5254) + t3644*(t3368*t4819 + t3405*t5254 + t6597))*var2[0] + (t3863*(t10420 + t11549 - 1.*t3405*t5254) + t3717*(t10510 + t11640 + t3511*t5254))*var2[1] + (t3863*(t2677*t5254 + t8539) + t3644*(-1.*t3448*t4819 - 1.*t3511*t5254 + t9631))*var2[2];
  p_output1[5]=t3368*(t2669*t4464 - 1.*t2186*t4598)*var2[0] + (t3368*(t11640 + t2186*t3368*t4464 + t2669*t3368*t4598) + t3448*(t11549 - 1.*t2186*t3397*t4464 - 1.*t2669*t3397*t4598))*var2[1] + t3448*(-1.*t2669*t4464 + t2186*t4598)*var2[2];
  p_output1[6]=(-0.15121 + t3368*(t11640 + t3368*t4446) + t3448*(t11549 - 1.*t3397*t4446))*var2[1] + (0.15121*t3397 + 0.15121*t3448)*var2[2];
  p_output1[7]=(0.28121*t3353 - 0.305*t3323*t3353 - 1.*t3353*t4432)*var2[0] + (0.28121*t3323 + 0.305*Power(t3353,2) - 1.*t3323*t4432)*var2[2];
  p_output1[8]=-0.305*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
