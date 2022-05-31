/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:23:11 GMT+02:00
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
  double t4026;
  double t4131;
  double t4100;
  double t4165;
  double t4172;
  double t4164;
  double t5111;
  double t4123;
  double t5173;
  double t5175;
  double t5176;
  double t4138;
  double t5115;
  double t5207;
  double t5211;
  double t5289;
  double t4124;
  double t4139;
  double t4140;
  double t5312;
  double t5308;
  double t4167;
  double t5113;
  double t5114;
  double t5181;
  double t5185;
  double t5186;
  double t5296;
  double t5297;
  double t5298;
  double t5315;
  double t5316;
  double t5317;
  double t5323;
  double t5324;
  double t5326;
  double t5332;
  double t5333;
  double t5334;
  double t5376;
  double t5381;
  double t5387;
  double t5451;
  double t5458;
  double t11692;
  double t5168;
  double t5187;
  double t5188;
  double t16665;
  double t16667;
  double t16668;
  double t16671;
  double t16672;
  double t16673;
  double t16674;
  double t16675;
  double t16677;
  double t16678;
  double t16679;
  double t16681;
  double t16682;
  double t16683;
  double t16687;
  double t16688;
  double t16669;
  double t16670;
  double t16684;
  double t16685;
  double t16693;
  double t16694;
  double t16696;
  double t16698;
  double t16700;
  double t16705;
  double t16718;
  double t16686;
  double t16689;
  double t16691;
  double t16699;
  double t16744;
  double t16752;
  double t16800;
  double t16801;
  double t16808;
  double t5200;
  double t5300;
  double t5304;
  double t16692;
  double t17068;
  double t17518;
  double t17662;
  double t17740;
  double t17752;
  double t18226;
  double t18309;
  t4026 = Cos(var1[4]);
  t4131 = Cos(var1[15]);
  t4100 = Cos(var1[5]);
  t4165 = Cos(var1[17]);
  t4172 = Sin(var1[16]);
  t4164 = Cos(var1[16]);
  t5111 = Sin(var1[17]);
  t4123 = Sin(var1[15]);
  t5173 = -1.*t4165*t4172;
  t5175 = t4164*t5111;
  t5176 = t5173 + t5175;
  t4138 = Sin(var1[5]);
  t5115 = Sin(var1[4]);
  t5207 = -1.*t4164*t4165;
  t5211 = -1.*t4172*t5111;
  t5289 = t5207 + t5211;
  t4124 = t4100*t4123;
  t4139 = t4131*t4138;
  t4140 = t4124 + t4139;
  t5312 = Cos(var1[3]);
  t5308 = Sin(var1[3]);
  t4167 = t4164*t4165;
  t5113 = t4172*t5111;
  t5114 = t4167 + t5113;
  t5181 = t4131*t4100*t5176;
  t5185 = -1.*t4123*t5176*t4138;
  t5186 = t5181 + t5185;
  t5296 = t4131*t4100*t5289;
  t5297 = -1.*t4123*t5289*t4138;
  t5298 = t5296 + t5297;
  t5315 = -1.*t4131*t4100;
  t5316 = t4123*t4138;
  t5317 = t5315 + t5316;
  t5323 = t4100*t4123*t5176;
  t5324 = t4131*t5176*t4138;
  t5326 = t5323 + t5324;
  t5332 = t4026*t5114;
  t5333 = -1.*t5115*t5186;
  t5334 = t5332 + t5333;
  t5376 = t4100*t4123*t5289;
  t5381 = t4131*t5289*t4138;
  t5387 = t5376 + t5381;
  t5451 = t4026*t5176;
  t5458 = -1.*t5115*t5298;
  t11692 = t5451 + t5458;
  t5168 = t5114*t5115;
  t5187 = t4026*t5186;
  t5188 = t5168 + t5187;
  t16665 = -1.*t4131;
  t16667 = 1. + t16665;
  t16668 = -0.15121*t16667;
  t16671 = -1.*t4164;
  t16672 = 1. + t16671;
  t16673 = -0.28121*t16672;
  t16674 = -1.*t4165;
  t16675 = 1. + t16674;
  t16677 = -0.50321*t16675;
  t16678 = -0.23321*t4165;
  t16679 = t16677 + t16678;
  t16681 = t4164*t16679;
  t16682 = 0.27*t4172*t5111;
  t16683 = t16673 + t16681 + t16682;
  t16687 = t4131*t16683;
  t16688 = t16668 + t16687;
  t16669 = -0.15121*t4131;
  t16670 = 0.15121*t4123;
  t16684 = t4123*t16683;
  t16685 = t16668 + t16669 + t16670 + t16684;
  t16693 = 0.28121*t4172;
  t16694 = t16679*t4172;
  t16696 = -0.27*t4164*t5111;
  t16698 = t16693 + t16694 + t16696;
  t16700 = t4100*t16688;
  t16705 = -1.*t16685*t4138;
  t16718 = t16700 + t16705;
  t16686 = t4100*t16685;
  t16689 = t16688*t4138;
  t16691 = t16686 + t16689;
  t16699 = t16698*t5115;
  t16744 = t4026*t16718;
  t16752 = t16699 + t16744;
  t16800 = t4026*t16698;
  t16801 = -1.*t5115*t16718;
  t16808 = t16800 + t16801;
  t5200 = t5176*t5115;
  t5300 = t4026*t5298;
  t5304 = t5200 + t5300;
  t16692 = -1.*t5317*t16691;
  t17068 = t5326*t16691;
  t17518 = t5317*t16691;
  t17662 = -1.*t5387*t16691;
  t17740 = -1.*t5326*t16691;
  t17752 = t5387*t16691;
  t18226 = -1.*t16698*t5114;
  t18309 = t16698*t5176;
  p_output1[0]=t5304*var2[0] + t4026*t4140*var2[1] + t5188*var2[2];
  p_output1[1]=(-1.*t11692*t5308 + t5312*t5387)*var2[0] + (t4140*t5115*t5308 + t5312*t5317)*var2[1] + (t5312*t5326 - 1.*t5308*t5334)*var2[2];
  p_output1[2]=(t11692*t5312 + t5308*t5387)*var2[0] + (-1.*t4140*t5115*t5312 + t5308*t5317)*var2[1] + (t5308*t5326 + t5312*t5334)*var2[2];
  p_output1[3]=((t16692 - 1.*t16752*t4026*t4140 + t16808*t4140*t5115)*t5188 + t4026*t4140*(t17068 + t16752*t5188 + t16808*t5334))*var2[0] + (t5188*(t11692*t16808 + t17752 + t16752*t5304) + t5304*(t17740 - 1.*t16752*t5188 - 1.*t16808*t5334))*var2[1] + ((t17518 + t16752*t4026*t4140 - 1.*t16808*t4140*t5115)*t5304 + t4026*t4140*(-1.*t11692*t16808 + t17662 - 1.*t16752*t5304))*var2[2];
  p_output1[4]=((t17068 + t16698*t5114 + t16718*t5186)*t5317 + (t16692 - 1.*t16718*t4140)*t5326)*var2[0] + ((t17752 + t18309 + t16718*t5298)*t5326 + (t17740 + t18226 - 1.*t16718*t5186)*t5387)*var2[1] + ((t17662 - 1.*t16698*t5176 - 1.*t16718*t5298)*t5317 + (t17518 + t16718*t4140)*t5387)*var2[2];
  p_output1[5]=(-1.*t16688*t4123 + t16685*t4131)*t5114*var2[0] + (t5176*(t18226 - 1.*t16685*t4123*t5176 - 1.*t16688*t4131*t5176) + t5114*(t18309 + t16685*t4123*t5289 + t16688*t4131*t5289))*var2[1] + (t16688*t4123 - 1.*t16685*t4131)*t5176*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t5114 - 0.15121*t5289)*var2[0] + (-0.15121 + t5176*(t18226 - 1.*t16683*t5176) + t5114*(t18309 + t16683*t5289))*var2[1];
  p_output1[16]=(0.28121*t5111 + t16679*t5111 - 0.27*t4165*t5111)*var2[0] + (0.28121*t4165 + t16679*t4165 + 0.27*Power(t5111,2))*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
