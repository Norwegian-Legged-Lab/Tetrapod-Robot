/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:07 GMT+01:00
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
  double t591;
  double t593;
  double t995;
  double t141;
  double t146;
  double t156;
  double t174;
  double t234;
  double t367;
  double t2272;
  double t1444;
  double t1604;
  double t2490;
  double t1730;
  double t1772;
  double t2265;
  double t2516;
  double t2539;
  double t2550;
  double t2562;
  double t2922;
  double t2953;
  double t2969;
  double t3066;
  double t3250;
  double t3278;
  double t3488;
  double t3493;
  double t3510;
  double t3581;
  double t3703;
  double t3723;
  double t3746;
  double t3766;
  double t3767;
  double t3771;
  double t3781;
  double t853;
  double t982;
  double t3802;
  double t3890;
  double t3918;
  double t2761;
  double t2864;
  double t3367;
  double t3756;
  double t3789;
  double t3797;
  double t4317;
  double t4319;
  double t4320;
  double t4321;
  double t4325;
  double t4184;
  double t4200;
  double t4231;
  double t4246;
  double t4266;
  double t4295;
  double t4300;
  double t3920;
  double t3921;
  double t3922;
  double t3938;
  double t3941;
  double t3942;
  double t4157;
  double t4323;
  double t4326;
  double t4339;
  double t4340;
  double t4495;
  double t4496;
  double t4498;
  double t4509;
  double t4528;
  double t4530;
  double t4544;
  double t417;
  double t1150;
  double t1294;
  double t1433;
  double t1849;
  double t1944;
  double t2162;
  double t4651;
  double t4645;
  double t4166;
  double t4168;
  double t4182;
  double t2526;
  double t2564;
  double t2732;
  double t4775;
  double t4777;
  double t4778;
  double t4160;
  double t4476;
  double t4782;
  double t4783;
  double t4784;
  double t4794;
  double t4346;
  double t4356;
  double t4358;
  double t4391;
  double t4460;
  double t4466;
  double t4467;
  double t4472;
  double t4811;
  double t4812;
  double t4818;
  double t4827;
  double t4665;
  double t4649;
  double t4659;
  double t4660;
  double t4644;
  double t4667;
  double t4668;
  double t4669;
  double t4636;
  double t4625;
  double t4627;
  double t4631;
  double t4632;
  double t4623;
  double t4664;
  double t4677;
  double t4687;
  double t4974;
  double t4965;
  double t4967;
  double t4969;
  double t4964;
  double t4982;
  double t4983;
  double t4985;
  double t4806;
  double t4807;
  double t4808;
  double t4751;
  double t4757;
  double t4761;
  double t4893;
  double t4900;
  double t4908;
  double t4924;
  double t4926;
  double t4945;
  double t5086;
  double t5089;
  double t5090;
  double t5055;
  double t5058;
  double t5061;
  double t5095;
  double t5096;
  double t5097;
  double t5100;
  double t5106;
  double t5111;
  double t5098;
  double t5018;
  double t5024;
  double t5047;
  double t5114;
  double t5116;
  double t5118;
  double t5209;
  double t5210;
  double t5214;
  double t5138;
  double t5215;
  double t5218;
  double t5221;
  double t5236;
  double t5246;
  double t5253;
  double t5194;
  double t5196;
  double t5201;
  double t5422;
  double t5433;
  double t5477;
  double t5481;
  double t5482;
  double t5483;
  double t5485;
  double t5350;
  double t5368;
  double t5260;
  double t5261;
  double t5264;
  double t5663;
  double t5188;
  double t5191;
  double t5193;
  double t4635;
  double t4691;
  double t4702;
  double t5682;
  double t6228;
  double t6248;
  double t6249;
  double t6250;
  double t6304;
  double t6326;
  double t6338;
  double t6341;
  double t6096;
  double t6136;
  double t6482;
  double t6584;
  t591 = Cos(var1[7]);
  t593 = -1. + t591;
  t995 = Sin(var1[8]);
  t141 = Cos(var1[8]);
  t146 = -1.*t141;
  t156 = 1. + t146;
  t174 = -1.000000000016*t156;
  t234 = 1. + t174;
  t367 = Sin(var1[7]);
  t2272 = -1. + t141;
  t1444 = -1.*t591;
  t1604 = 1. + t1444;
  t2490 = 1.6e-11*t2272;
  t1730 = -1.000000000016*t1604;
  t1772 = 1. + t1730;
  t2265 = 1.6e-11*t156;
  t2516 = 1. + t2265 + t2490;
  t2539 = 4.e-6*t2272;
  t2550 = -4.e-6*t141;
  t2562 = t2539 + t2550;
  t2922 = 5.136e-14*var1[8];
  t2953 = -0.03874900000062*t156;
  t2969 = 5.9484e-7*t2272;
  t3066 = -0.03875*t141;
  t3250 = -0.299999999992*t995;
  t3278 = t2922 + t2953 + t2969 + t3066 + t3250;
  t3488 = -1.284e-8*var1[8];
  t3493 = 1. + t2490;
  t3510 = 0.14871*t3493;
  t3581 = -1.5499600000248e-7*t156;
  t3703 = -1.55e-7*t2272;
  t3723 = -1.199999999968e-6*t995;
  t3746 = t3488 + t3510 + t3581 + t3703 + t3723;
  t3766 = 0.80321*t234;
  t3767 = 0.503210000016051*t156;
  t3771 = -4.05159380016e-7*t995;
  t3781 = t3766 + t3767 + t3771;
  t853 = 1.6e-11*t593;
  t982 = 1. + t853;
  t3802 = 4.e-6*t593*t2516;
  t3890 = t591*t2562;
  t3918 = t3802 + t3890;
  t2761 = 0.281210000008499*t1604;
  t2864 = 0.03874900000062*t367;
  t3367 = t367*t3278;
  t3756 = 4.e-6*t367*t3746;
  t3789 = t1772*t3781;
  t3797 = t2761 + t2864 + t3367 + t3756 + t3789;
  t4317 = -1. + t2265;
  t4319 = 4.e-6*t4317;
  t4320 = 4.e-6*t156;
  t4321 = t4319 + t4320;
  t4325 = t2265 + t146;
  t4184 = -1.2484e-7*var1[7];
  t4200 = -1.5499600000248e-7*t1604;
  t4231 = 1.124840000016e-6*t367;
  t4246 = 4.e-6*t593*t3278;
  t4266 = t982*t3746;
  t4295 = -4.e-6*t367*t3781;
  t4300 = t4184 + t4200 + t4231 + t4246 + t4266 + t4295;
  t3920 = 4.9936e-13*var1[7];
  t3921 = -0.03874900000062*t1604;
  t3922 = 0.281210000004*t367;
  t3938 = t591*t3278;
  t3941 = 4.e-6*t593*t3746;
  t3942 = -1.*t367*t3781;
  t4157 = t3920 + t3921 + t3922 + t3938 + t3941 + t3942;
  t4323 = 4.e-6*t593*t4321;
  t4326 = t591*t4325;
  t4339 = 1.000000000016*t367*t995;
  t4340 = t4323 + t4326 + t4339;
  t4495 = t2562*t3278;
  t4496 = t2516*t3746;
  t4498 = t4495 + t4496;
  t4509 = -1.*t4325*t3278;
  t4528 = -1.*t4321*t3746;
  t4530 = 1.000000000016*t3781*t995;
  t4544 = t4509 + t4528 + t4530;
  t417 = -4.e-6*t234*t367;
  t1150 = -4.e-6*t982*t995;
  t1294 = -4.e-6*t593*t995;
  t1433 = t417 + t1150 + t1294;
  t1849 = t1772*t234;
  t1944 = -1.000000000016*t367*t995;
  t2162 = t1849 + t1944;
  t4651 = Cos(var1[6]);
  t4645 = Sin(var1[6]);
  t4166 = t982*t2516;
  t4168 = 4.e-6*t593*t2562;
  t4182 = t4166 + t4168;
  t2526 = 4.e-6*t2516*t367;
  t2564 = t2562*t367;
  t2732 = t2526 + t2564;
  t4775 = -1.*t4651;
  t4777 = 1. + t4775;
  t4778 = 0.15121*t4777;
  t4160 = t3918*t4157;
  t4476 = -1.*t4157*t4340;
  t4782 = -0.15121*t4645;
  t4783 = t4645*t3797;
  t4784 = t4651*t4300;
  t4794 = t4778 + t4782 + t4783 + t4784;
  t4346 = 4.e-6*t4321*t367;
  t4356 = t4325*t367;
  t4358 = -1.000000000016*t1772*t995;
  t4391 = t4346 + t4356 + t4358;
  t4460 = t982*t4321;
  t4466 = 4.e-6*t593*t4325;
  t4467 = 4.000000000064e-6*t367*t995;
  t4472 = t4460 + t4466 + t4467;
  t4811 = 0.15121*t4645;
  t4812 = t4651*t3797;
  t4818 = -1.*t4645*t4300;
  t4827 = t4778 + t4811 + t4812 + t4818;
  t4665 = Sin(var1[5]);
  t4649 = -1.*t4645*t1433;
  t4659 = t4651*t2162;
  t4660 = t4649 + t4659;
  t4644 = Cos(var1[5]);
  t4667 = t4651*t1433;
  t4668 = t4645*t2162;
  t4669 = t4667 + t4668;
  t4636 = Cos(var1[4]);
  t4625 = -1.*t234*t367;
  t4627 = -1.6e-11*t593*t995;
  t4631 = -1.*t591*t995;
  t4632 = t4625 + t4627 + t4631;
  t4623 = Sin(var1[4]);
  t4664 = t4644*t4660;
  t4677 = -1.*t4665*t4669;
  t4687 = t4664 + t4677;
  t4974 = Cos(var1[3]);
  t4965 = t4665*t4660;
  t4967 = t4644*t4669;
  t4969 = t4965 + t4967;
  t4964 = Sin(var1[3]);
  t4982 = t4636*t4632;
  t4983 = -1.*t4623*t4687;
  t4985 = t4982 + t4983;
  t4806 = -1.*t4182*t4645;
  t4807 = t4651*t2732;
  t4808 = t4806 + t4807;
  t4751 = t4651*t4182;
  t4757 = t4645*t2732;
  t4761 = t4751 + t4757;
  t4893 = t4645*t4391;
  t4900 = t4651*t4472;
  t4908 = t4893 + t4900;
  t4924 = t4651*t4391;
  t4926 = -1.*t4645*t4472;
  t4945 = t4924 + t4926;
  t5086 = t4665*t4808;
  t5089 = t4644*t4761;
  t5090 = t5086 + t5089;
  t5055 = -1.*t4665*t4794;
  t5058 = t4644*t4827;
  t5061 = t5055 + t5058;
  t5095 = t4644*t4794;
  t5096 = t4665*t4827;
  t5097 = t5095 + t5096;
  t5100 = t4644*t4908;
  t5106 = t4665*t4945;
  t5111 = t5100 + t5106;
  t5098 = t5090*t5097;
  t5018 = t4644*t4808;
  t5024 = -1.*t4665*t4761;
  t5047 = t5018 + t5024;
  t5114 = -1.*t4665*t4908;
  t5116 = t4644*t4945;
  t5118 = t5114 + t5116;
  t5209 = t3918*t4623;
  t5210 = t4636*t5047;
  t5214 = t5209 + t5210;
  t5138 = -1.*t5097*t5111;
  t5215 = t4636*t5061;
  t5218 = t4623*t4157;
  t5221 = t5215 + t5218;
  t5236 = t4623*t4340;
  t5246 = t4636*t5118;
  t5253 = t5236 + t5246;
  t5194 = -1.*t4623*t5061;
  t5196 = t4636*t4157;
  t5201 = t5194 + t5196;
  t5422 = -1.*t2562*t3278;
  t5433 = -1.*t2516*t3746;
  t5477 = t5422 + t5433;
  t5481 = t234*t3781;
  t5482 = -1.*t3278*t995;
  t5483 = -4.e-6*t3746*t995;
  t5485 = t5481 + t5482 + t5483;
  t5350 = -1.*t3918*t4157;
  t5368 = t4157*t4632;
  t5260 = t4636*t4340;
  t5261 = -1.*t4623*t5118;
  t5264 = t5260 + t5261;
  t5663 = -1.*t5090*t5097;
  t5188 = t4636*t3918;
  t5191 = -1.*t4623*t5047;
  t5193 = t5188 + t5191;
  t4635 = t4623*t4632;
  t4691 = t4636*t4687;
  t4702 = t4635 + t4691;
  t5682 = t5097*t4969;
  t6228 = -1.*t234*t3781;
  t6248 = t3278*t995;
  t6249 = 4.e-6*t3746*t995;
  t6250 = t6228 + t6248 + t6249;
  t6304 = t4325*t3278;
  t6326 = t4321*t3746;
  t6338 = -1.000000000016*t3781*t995;
  t6341 = t6304 + t6326 + t6338;
  t6096 = -1.*t4157*t4632;
  t6136 = t4157*t4340;
  t6482 = -1.*t5097*t4969;
  t6584 = t5097*t5111;
  p_output1[0]=t4702*var2[0] + (t4969*t4974 - 1.*t4964*t4985)*var2[1] + (t4964*t4969 + t4974*t4985)*var2[2] + ((t5098 + t5193*t5201 + t5214*t5221)*t5253 + t5214*(t5138 - 1.*t5221*t5253 - 1.*t5201*t5264))*var2[3] + ((t4160 + t5047*t5061 + t5098)*t5111 + t5090*(t4476 - 1.*t5061*t5118 + t5138))*var2[4] + (t4340*(t4160 + t4761*t4794 + t4808*t4827) + t3918*(t4476 - 1.*t4794*t4908 - 1.*t4827*t4945))*var2[5] + (-0.15121*t1433 + 0.15121*t2162 + (t2732*t3797 + t4160 + t4182*t4300)*t4340 + t3918*(-1.*t3797*t4391 - 1.*t4300*t4472 + t4476))*var2[6] + (0.038749*t234 + t4321*t4498 + t2516*t4544 + 4.e-6*(-1.*t4325*t4498 - 1.*t2562*t4544) - 0.281210000004*t995)*var2[7] - 4.05160619990483e-7*var2[8];
  p_output1[1]=t5253*var2[0] + (t4974*t5111 - 1.*t4964*t5264)*var2[1] + (t4964*t5111 + t4974*t5264)*var2[2] + (t4702*(-1.*t5193*t5201 - 1.*t5214*t5221 + t5663) + t5214*(t4985*t5201 + t4702*t5221 + t5682))*var2[3] + (t4969*(-1.*t5047*t5061 + t5350 + t5663) + t5090*(t4687*t5061 + t5368 + t5682))*var2[4] + (t4632*(-1.*t4761*t4794 - 1.*t4808*t4827 + t5350) + t3918*(t4669*t4794 + t4660*t4827 + t5368))*var2[5] + (0.15121*t4391 - 0.15121*t4472 + t4632*(-1.*t2732*t3797 - 1.*t4182*t4300 + t5350) + t3918*(t2162*t3797 + t1433*t4300 + t5368))*var2[6] + (1.e-6*t4321 + 0.28121*t4325 + t2516*t5485 - 0.03874900000062*t995 - 4.e-6*t5477*t995 + 4.e-6*(-1.*t2562*t5485 + t5477*t995))*var2[7] + 0.300000000004851*var2[8];
  p_output1[2]=t5214*var2[0] + (t4974*t5090 - 1.*t4964*t5193)*var2[1] + (t4964*t5090 + t4974*t5193)*var2[2] + (t5253*(-1.*t4985*t5201 - 1.*t4702*t5221 + t6482) + t4702*(t5221*t5253 + t5201*t5264 + t6584))*var2[3] + (t5111*(-1.*t4687*t5061 + t6096 + t6482) + t4969*(t5061*t5118 + t6136 + t6584))*var2[4] + (t4340*(-1.*t4669*t4794 - 1.*t4660*t4827 + t6096) + t4632*(t4794*t4908 + t4827*t4945 + t6136))*var2[5] + (0.15121*t2732 - 0.15121*t4182 + t4340*(-1.*t2162*t3797 - 1.*t1433*t4300 + t6096) + t4632*(t3797*t4391 + t4300*t4472 + t6136))*var2[6] + (1.e-6*t2516 + 0.28121*t2562 + t4321*t6250 - 4.e-6*t6341*t995 + 4.e-6*(-1.*t4325*t6250 + t6341*t995))*var2[7] - 1.284e-8*var2[8];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FlFoot_DiagonalStance2.hh"

namespace TrotStance2
{

void dh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
