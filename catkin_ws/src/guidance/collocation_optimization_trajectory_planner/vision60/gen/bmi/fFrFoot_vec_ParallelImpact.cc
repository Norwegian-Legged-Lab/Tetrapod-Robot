/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:52 GMT+02:00
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
  double t12069;
  double t2382;
  double t12303;
  double t34112;
  double t13751;
  double t14989;
  double t34115;
  double t2191;
  double t34102;
  double t34120;
  double t34122;
  double t12314;
  double t39241;
  double t39244;
  double t39245;
  double t38852;
  double t39421;
  double t39423;
  double t39278;
  double t39288;
  double t39306;
  double t39364;
  double t39391;
  double t39393;
  double t39395;
  double t39396;
  double t39397;
  double t39425;
  double t39426;
  double t39427;
  double t39435;
  double t39436;
  double t39439;
  double t39441;
  double t39451;
  double t39453;
  double t39902;
  double t40074;
  double t40178;
  double t40286;
  double t40287;
  double t40826;
  double t34123;
  double t39323;
  double t39325;
  double t42987;
  double t43024;
  double t43034;
  double t43048;
  double t43053;
  double t43061;
  double t43062;
  double t43065;
  double t43066;
  double t2648;
  double t12319;
  double t12322;
  double t41980;
  double t43035;
  double t43067;
  double t43068;
  double t43073;
  double t43125;
  double t43127;
  double t43132;
  double t43133;
  double t43134;
  double t41926;
  double t41932;
  double t41951;
  double t41977;
  double t43069;
  double t43071;
  double t43146;
  double t43149;
  double t43150;
  double t43173;
  double t43174;
  double t43175;
  double t43072;
  double t43139;
  double t43144;
  double t43151;
  double t43177;
  double t43178;
  double t43181;
  double t43182;
  double t43183;
  double t39363;
  double t39406;
  double t39408;
  double t43145;
  double t43187;
  double t43198;
  double t43206;
  double t43217;
  double t43241;
  double t45276;
  double t45289;
  double t44506;
  double t45086;
  double t45193;
  double t45182;
  double t45536;
  double t45393;
  t12069 = Cos(var1[12]);
  t2382 = Sin(var1[4]);
  t12303 = Cos(var1[4]);
  t34112 = Cos(var1[13]);
  t13751 = Cos(var1[14]);
  t14989 = Sin(var1[13]);
  t34115 = Sin(var1[14]);
  t2191 = Sin(var1[12]);
  t34102 = t13751*t14989;
  t34120 = -1.*t34112*t34115;
  t34122 = t34102 + t34120;
  t12314 = Sin(var1[5]);
  t39241 = t34112*t13751;
  t39244 = t14989*t34115;
  t39245 = t39241 + t39244;
  t38852 = Cos(var1[5]);
  t39421 = Cos(var1[3]);
  t39423 = Sin(var1[3]);
  t39278 = t38852*t39245;
  t39288 = t2191*t34122*t12314;
  t39306 = t39278 + t39288;
  t39364 = -1.*t13751*t14989;
  t39391 = t34112*t34115;
  t39393 = t39364 + t39391;
  t39395 = t38852*t39393;
  t39396 = t2191*t39245*t12314;
  t39397 = t39395 + t39396;
  t39425 = t12303*t2191;
  t39426 = t12069*t2382*t12314;
  t39427 = t39425 + t39426;
  t39435 = -1.*t38852*t2191*t34122;
  t39436 = t39245*t12314;
  t39439 = t39435 + t39436;
  t39441 = t12069*t12303*t34122;
  t39451 = -1.*t2382*t39306;
  t39453 = t39441 + t39451;
  t39902 = -1.*t38852*t2191*t39245;
  t40074 = t39393*t12314;
  t40178 = t39902 + t40074;
  t40286 = t12069*t12303*t39245;
  t40287 = -1.*t2382*t39397;
  t40826 = t40286 + t40287;
  t34123 = t12069*t34122*t2382;
  t39323 = t12303*t39306;
  t39325 = t34123 + t39323;
  t42987 = -0.0641*t13751;
  t43024 = -0.28*t34115;
  t43034 = t42987 + t43024;
  t43048 = -1.*t13751;
  t43053 = 1. + t43048;
  t43061 = 0.075*t43053;
  t43062 = 0.355*t13751;
  t43065 = -0.0641*t34115;
  t43066 = t43061 + t43062 + t43065;
  t2648 = t2191*t2382;
  t12319 = -1.*t12069*t12303*t12314;
  t12322 = t2648 + t12319;
  t41980 = -0.325*t14989;
  t43035 = t34112*t43034;
  t43067 = t14989*t43066;
  t43068 = t41980 + t43035 + t43067;
  t43073 = -1.*t34112;
  t43125 = 1. + t43073;
  t43127 = 0.325*t43125;
  t43132 = -1.*t14989*t43034;
  t43133 = t34112*t43066;
  t43134 = t43127 + t43132 + t43133;
  t41926 = -1.*t12069;
  t41932 = 1. + t41926;
  t41951 = -0.1575*t41932;
  t41977 = -0.2255*t12069;
  t43069 = -1.*t2191*t43068;
  t43071 = t41951 + t41977 + t43069;
  t43146 = -0.068*t2191;
  t43149 = t12069*t43068;
  t43150 = t43146 + t43149;
  t43173 = t38852*t43134;
  t43174 = -1.*t43071*t12314;
  t43175 = t43173 + t43174;
  t43072 = t38852*t43071;
  t43139 = t43134*t12314;
  t43144 = t43072 + t43139;
  t43151 = t43150*t2382;
  t43177 = t12303*t43175;
  t43178 = t43151 + t43177;
  t43181 = t12303*t43150;
  t43182 = -1.*t2382*t43175;
  t43183 = t43181 + t43182;
  t39363 = t12069*t39245*t2382;
  t39406 = t12303*t39397;
  t39408 = t39363 + t39406;
  t43145 = t12069*t38852*t43144;
  t43187 = -1.*t43144*t39439;
  t43198 = t43144*t39439;
  t43206 = -1.*t43144*t40178;
  t43217 = -1.*t12069*t38852*t43144;
  t43241 = t43144*t40178;
  t45276 = -1.*t2191*t43150;
  t45289 = t12069*t43150*t39245;
  t44506 = t2191*t43150;
  t45086 = -1.*t12069*t43150*t34122;
  t45193 = -1.*t12069*t43150*t39245;
  t45182 = t12069*t43150*t34122;
  t45536 = t43134*t39245;
  t45393 = -1.*t43134*t39393;
  p_output1[0]=t39325*var2[0] + t12322*var2[1] + t39408*var2[2];
  p_output1[1]=(t39421*t39439 - 1.*t39423*t39453)*var2[0] + (t12069*t38852*t39421 - 1.*t39423*t39427)*var2[1] + (t39421*t40178 - 1.*t39423*t40826)*var2[2];
  p_output1[2]=(t39423*t39439 + t39421*t39453)*var2[0] + (t12069*t38852*t39423 + t39421*t39427)*var2[1] + (t39423*t40178 + t39421*t40826)*var2[2];
  p_output1[3]=(t39408*(-1.*t12322*t43178 - 1.*t39427*t43183 + t43217) + t12322*(t39408*t43178 + t40826*t43183 + t43241))*var2[0] + (t39408*(t39325*t43178 + t39453*t43183 + t43198) + t39325*(-1.*t39408*t43178 - 1.*t40826*t43183 + t43206))*var2[1] + (t39325*(t43145 + t12322*t43178 + t39427*t43183) + t12322*(-1.*t39325*t43178 - 1.*t39453*t43183 + t43187))*var2[2];
  p_output1[4]=(t40178*(t12069*t12314*t43175 + t43217 + t45276) + t12069*t38852*(t39397*t43175 + t43241 + t45289))*var2[0] + (t40178*(t39306*t43175 + t43198 + t45182) + t39439*(-1.*t39397*t43175 + t43206 + t45193))*var2[1] + (t39439*(t43145 - 1.*t12069*t12314*t43175 + t44506) + t12069*t38852*(-1.*t39306*t43175 + t43187 + t45086))*var2[2];
  p_output1[5]=(t12069*t39245*(-1.*t12069*t43071 + t45276) + t2191*(-1.*t2191*t39245*t43071 + t39393*t43134 + t45289))*var2[0] + (t12069*t34122*(t2191*t39245*t43071 + t45193 + t45393) + t12069*t39245*(-1.*t2191*t34122*t43071 + t45182 + t45536))*var2[1] + (t12069*t34122*(t12069*t43071 + t44506) + t2191*(t2191*t34122*t43071 - 1.*t39245*t43134 + t45086))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t34122 + 0.2255*t39393)*var2[0] + (t39245*(-1.*t39245*t43068 + t45393) + t39393*(t34122*t43068 + t45536))*var2[1] - 0.068*t39245*var2[2];
  p_output1[13]=(0.325*t34115 - 1.*t13751*t43034 - 1.*t34115*t43066)*var2[0] + (-0.325*t13751 - 1.*t34115*t43034 + t13751*t43066)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
