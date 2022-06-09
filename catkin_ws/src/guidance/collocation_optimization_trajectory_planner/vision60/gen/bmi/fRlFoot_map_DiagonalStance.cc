/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:52 GMT+02:00
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
  double t2669;
  double t2657;
  double t2658;
  double t2670;
  double t2668;
  double t2933;
  double t3064;
  double t4576;
  double t4590;
  double t4579;
  double t4584;
  double t4586;
  double t4613;
  double t2428;
  double t4515;
  double t3275;
  double t4588;
  double t4618;
  double t4622;
  double t4693;
  double t4675;
  double t4680;
  double t4681;
  double t4668;
  double t4694;
  double t4695;
  double t4714;
  double t4777;
  double t4796;
  double t4800;
  double t4803;
  double t4806;
  double t4807;
  double t4808;
  double t5195;
  double t7877;
  double t4776;
  double t4802;
  double t7878;
  double t10817;
  double t14752;
  double t15611;
  double t18129;
  double t18923;
  double t19056;
  double t19208;
  double t4751;
  double t4771;
  double t4773;
  double t4775;
  double t12984;
  double t13689;
  double t33912;
  double t34036;
  double t34040;
  double t34094;
  double t34680;
  double t35191;
  double t31144;
  double t31166;
  double t31501;
  double t14507;
  double t20446;
  double t25416;
  double t4727;
  double t4737;
  double t4738;
  double t34043;
  double t35283;
  double t35658;
  double t4726;
  double t4739;
  double t4741;
  double t4742;
  double t4745;
  double t4746;
  double t37325;
  double t37349;
  double t37521;
  double t40732;
  double t40770;
  double t40778;
  double t29190;
  double t40794;
  double t42583;
  double t44083;
  double t36480;
  double t36481;
  double t36725;
  double t3292;
  double t4625;
  double t4664;
  double t40817;
  double t40900;
  double t40903;
  double t44250;
  double t44288;
  double t44311;
  double t44302;
  double t44336;
  double t44326;
  double t44366;
  double t44375;
  double t44390;
  double t44402;
  t2669 = Cos(var1[10]);
  t2657 = Cos(var1[11]);
  t2658 = Sin(var1[10]);
  t2670 = Sin(var1[11]);
  t2668 = t2657*t2658;
  t2933 = -1.*t2669*t2670;
  t3064 = t2668 + t2933;
  t4576 = Cos(var1[5]);
  t4590 = Sin(var1[9]);
  t4579 = t2669*t2657;
  t4584 = t2658*t2670;
  t4586 = t4579 + t4584;
  t4613 = Sin(var1[5]);
  t2428 = Cos(var1[9]);
  t4515 = Cos(var1[4]);
  t3275 = Sin(var1[4]);
  t4588 = t4576*t4586;
  t4618 = t4590*t3064*t4613;
  t4622 = t4588 + t4618;
  t4693 = Sin(var1[3]);
  t4675 = -1.*t4576*t4590*t3064;
  t4680 = t4586*t4613;
  t4681 = t4675 + t4680;
  t4668 = Cos(var1[3]);
  t4694 = t2428*t4515*t3064;
  t4695 = -1.*t3275*t4622;
  t4714 = t4694 + t4695;
  t4777 = -0.0641*t2657;
  t4796 = -0.28*t2670;
  t4800 = t4777 + t4796;
  t4803 = -1.*t2657;
  t4806 = 1. + t4803;
  t4807 = -0.575*t4806;
  t4808 = -0.295*t2657;
  t5195 = -0.0641*t2670;
  t7877 = t4807 + t4808 + t5195;
  t4776 = 0.325*t2658;
  t4802 = t2669*t4800;
  t7878 = t2658*t7877;
  t10817 = t4776 + t4802 + t7878;
  t14752 = -1.*t2669;
  t15611 = 1. + t14752;
  t18129 = -0.325*t15611;
  t18923 = -1.*t2658*t4800;
  t19056 = t2669*t7877;
  t19208 = t18129 + t18923 + t19056;
  t4751 = -1.*t2428;
  t4771 = 1. + t4751;
  t4773 = 0.1575*t4771;
  t4775 = 0.2255*t2428;
  t12984 = -1.*t4590*t10817;
  t13689 = t4773 + t4775 + t12984;
  t33912 = 0.068*t4590;
  t34036 = t2428*t10817;
  t34040 = t33912 + t34036;
  t34094 = t4576*t19208;
  t34680 = -1.*t13689*t4613;
  t35191 = t34094 + t34680;
  t31144 = t4590*t3275;
  t31166 = -1.*t2428*t4515*t4613;
  t31501 = t31144 + t31166;
  t14507 = t4576*t13689;
  t20446 = t19208*t4613;
  t25416 = t14507 + t20446;
  t4727 = -1.*t2657*t2658;
  t4737 = t2669*t2670;
  t4738 = t4727 + t4737;
  t34043 = t34040*t3275;
  t35283 = t4515*t35191;
  t35658 = t34043 + t35283;
  t4726 = t2428*t4586*t3275;
  t4739 = t4576*t4738;
  t4741 = t4590*t4586*t4613;
  t4742 = t4739 + t4741;
  t4745 = t4515*t4742;
  t4746 = t4726 + t4745;
  t37325 = t4515*t34040;
  t37349 = -1.*t3275*t35191;
  t37521 = t37325 + t37349;
  t40732 = -1.*t4576*t4590*t4586;
  t40770 = t4738*t4613;
  t40778 = t40732 + t40770;
  t29190 = -1.*t2428*t4576*t25416;
  t40794 = t25416*t40778;
  t42583 = -1.*t4590*t34040;
  t44083 = t2428*t34040*t4586;
  t36480 = t4515*t4590;
  t36481 = t2428*t3275*t4613;
  t36725 = t36480 + t36481;
  t3292 = t2428*t3064*t3275;
  t4625 = t4515*t4622;
  t4664 = t3292 + t4625;
  t40817 = t2428*t4515*t4586;
  t40900 = -1.*t3275*t4742;
  t40903 = t40817 + t40900;
  t44250 = t25416*t4681;
  t44288 = -1.*t25416*t40778;
  t44311 = -1.*t2428*t34040*t4586;
  t44302 = t2428*t34040*t3064;
  t44336 = t19208*t4586;
  t44326 = -1.*t19208*t4738;
  t44366 = t2428*t4576*t25416;
  t44375 = -1.*t25416*t4681;
  t44390 = t4590*t34040;
  t44402 = -1.*t2428*t34040*t3064;
  p_output1[0]=t4664;
  p_output1[1]=t4668*t4681 - 1.*t4693*t4714;
  p_output1[2]=t4681*t4693 + t4668*t4714;
  p_output1[3]=(t29190 - 1.*t31501*t35658 - 1.*t36725*t37521)*t4746 + t31501*(t40794 + t37521*t40903 + t35658*t4746);
  p_output1[4]=t40778*(t29190 + t42583 + t2428*t35191*t4613) + t2428*t4576*(t40794 + t44083 + t35191*t4742);
  p_output1[5]=t2428*(-1.*t13689*t2428 + t42583)*t4586 + t4590*(t44083 - 1.*t13689*t4586*t4590 + t19208*t4738);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t3064 - 0.2255*t4738;
  p_output1[10]=-0.325*t2670 - 1.*t2657*t4800 - 1.*t2670*t7877;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t31501;
  p_output1[19]=t2428*t4576*t4668 - 1.*t36725*t4693;
  p_output1[20]=t36725*t4668 + t2428*t4576*t4693;
  p_output1[21]=(t44250 + t35658*t4664 + t37521*t4714)*t4746 + t4664*(-1.*t37521*t40903 + t44288 - 1.*t35658*t4746);
  p_output1[22]=t40778*(t44250 + t44302 + t35191*t4622) + t4681*(t44288 + t44311 - 1.*t35191*t4742);
  p_output1[23]=t2428*t4586*(t44302 + t44336 - 1.*t13689*t3064*t4590) + t2428*t3064*(t44311 + t44326 + t13689*t4586*t4590);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t4586*(t44326 - 1.*t10817*t4586) + (t10817*t3064 + t44336)*t4738;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4746;
  p_output1[37]=t40778*t4668 - 1.*t40903*t4693;
  p_output1[38]=t40903*t4668 + t40778*t4693;
  p_output1[39]=(t31501*t35658 + t36725*t37521 + t44366)*t4664 + t31501*(t44375 - 1.*t35658*t4664 - 1.*t37521*t4714);
  p_output1[40]=t2428*t4576*(t44375 + t44402 - 1.*t35191*t4622) + (t44366 + t44390 - 1.*t2428*t35191*t4613)*t4681;
  p_output1[41]=t2428*t3064*(t13689*t2428 + t44390) + t4590*(t44402 - 1.*t19208*t4586 + t13689*t3064*t4590);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t4586;
  p_output1[46]=0.325*t2657 - 1.*t2670*t4800 + t2657*t7877;
  p_output1[47]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
