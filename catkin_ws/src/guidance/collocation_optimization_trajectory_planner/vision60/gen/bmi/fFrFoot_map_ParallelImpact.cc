/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:50 GMT+02:00
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
  double t11932;
  double t6765;
  double t10782;
  double t12508;
  double t11913;
  double t13130;
  double t13678;
  double t24482;
  double t29266;
  double t25334;
  double t26157;
  double t28451;
  double t29989;
  double t1866;
  double t24093;
  double t13691;
  double t28846;
  double t29993;
  double t30001;
  double t31294;
  double t30496;
  double t30794;
  double t31139;
  double t30426;
  double t31335;
  double t31338;
  double t31351;
  double t32986;
  double t33052;
  double t33055;
  double t33084;
  double t33112;
  double t33147;
  double t33289;
  double t33394;
  double t33423;
  double t32960;
  double t33063;
  double t33444;
  double t33548;
  double t33708;
  double t33716;
  double t33748;
  double t33757;
  double t33831;
  double t33842;
  double t32829;
  double t32922;
  double t32929;
  double t32941;
  double t33554;
  double t33577;
  double t33897;
  double t33905;
  double t33906;
  double t33909;
  double t33911;
  double t33915;
  double t33870;
  double t33891;
  double t33894;
  double t33585;
  double t33853;
  double t33860;
  double t31643;
  double t31938;
  double t31961;
  double t33907;
  double t33916;
  double t33990;
  double t31638;
  double t32152;
  double t32185;
  double t32724;
  double t32796;
  double t32799;
  double t34034;
  double t34043;
  double t34048;
  double t34059;
  double t34078;
  double t34079;
  double t33869;
  double t34080;
  double t34094;
  double t34107;
  double t34018;
  double t34023;
  double t34024;
  double t14163;
  double t30038;
  double t30226;
  double t34083;
  double t34084;
  double t34087;
  double t34155;
  double t34211;
  double t34526;
  double t34384;
  double t37274;
  double t35763;
  double t39233;
  double t39242;
  double t39260;
  double t39282;
  t11932 = Cos(var1[13]);
  t6765 = Cos(var1[14]);
  t10782 = Sin(var1[13]);
  t12508 = Sin(var1[14]);
  t11913 = t6765*t10782;
  t13130 = -1.*t11932*t12508;
  t13678 = t11913 + t13130;
  t24482 = Cos(var1[5]);
  t29266 = Sin(var1[12]);
  t25334 = t11932*t6765;
  t26157 = t10782*t12508;
  t28451 = t25334 + t26157;
  t29989 = Sin(var1[5]);
  t1866 = Cos(var1[12]);
  t24093 = Cos(var1[4]);
  t13691 = Sin(var1[4]);
  t28846 = t24482*t28451;
  t29993 = t29266*t13678*t29989;
  t30001 = t28846 + t29993;
  t31294 = Sin(var1[3]);
  t30496 = -1.*t24482*t29266*t13678;
  t30794 = t28451*t29989;
  t31139 = t30496 + t30794;
  t30426 = Cos(var1[3]);
  t31335 = t1866*t24093*t13678;
  t31338 = -1.*t13691*t30001;
  t31351 = t31335 + t31338;
  t32986 = -0.0641*t6765;
  t33052 = -0.28*t12508;
  t33055 = t32986 + t33052;
  t33084 = -1.*t6765;
  t33112 = 1. + t33084;
  t33147 = 0.075*t33112;
  t33289 = 0.355*t6765;
  t33394 = -0.0641*t12508;
  t33423 = t33147 + t33289 + t33394;
  t32960 = -0.325*t10782;
  t33063 = t11932*t33055;
  t33444 = t10782*t33423;
  t33548 = t32960 + t33063 + t33444;
  t33708 = -1.*t11932;
  t33716 = 1. + t33708;
  t33748 = 0.325*t33716;
  t33757 = -1.*t10782*t33055;
  t33831 = t11932*t33423;
  t33842 = t33748 + t33757 + t33831;
  t32829 = -1.*t1866;
  t32922 = 1. + t32829;
  t32929 = -0.1575*t32922;
  t32941 = -0.2255*t1866;
  t33554 = -1.*t29266*t33548;
  t33577 = t32929 + t32941 + t33554;
  t33897 = -0.068*t29266;
  t33905 = t1866*t33548;
  t33906 = t33897 + t33905;
  t33909 = t24482*t33842;
  t33911 = -1.*t33577*t29989;
  t33915 = t33909 + t33911;
  t33870 = t29266*t13691;
  t33891 = -1.*t1866*t24093*t29989;
  t33894 = t33870 + t33891;
  t33585 = t24482*t33577;
  t33853 = t33842*t29989;
  t33860 = t33585 + t33853;
  t31643 = -1.*t6765*t10782;
  t31938 = t11932*t12508;
  t31961 = t31643 + t31938;
  t33907 = t33906*t13691;
  t33916 = t24093*t33915;
  t33990 = t33907 + t33916;
  t31638 = t1866*t28451*t13691;
  t32152 = t24482*t31961;
  t32185 = t29266*t28451*t29989;
  t32724 = t32152 + t32185;
  t32796 = t24093*t32724;
  t32799 = t31638 + t32796;
  t34034 = t24093*t33906;
  t34043 = -1.*t13691*t33915;
  t34048 = t34034 + t34043;
  t34059 = -1.*t24482*t29266*t28451;
  t34078 = t31961*t29989;
  t34079 = t34059 + t34078;
  t33869 = -1.*t1866*t24482*t33860;
  t34080 = t33860*t34079;
  t34094 = -1.*t29266*t33906;
  t34107 = t1866*t33906*t28451;
  t34018 = t24093*t29266;
  t34023 = t1866*t13691*t29989;
  t34024 = t34018 + t34023;
  t14163 = t1866*t13678*t13691;
  t30038 = t24093*t30001;
  t30226 = t14163 + t30038;
  t34083 = t1866*t24093*t28451;
  t34084 = -1.*t13691*t32724;
  t34087 = t34083 + t34084;
  t34155 = t33860*t31139;
  t34211 = -1.*t33860*t34079;
  t34526 = -1.*t1866*t33906*t28451;
  t34384 = t1866*t33906*t13678;
  t37274 = t33842*t28451;
  t35763 = -1.*t33842*t31961;
  t39233 = t1866*t24482*t33860;
  t39242 = -1.*t33860*t31139;
  t39260 = t29266*t33906;
  t39282 = -1.*t1866*t33906*t13678;
  p_output1[0]=t30226;
  p_output1[1]=t30426*t31139 - 1.*t31294*t31351;
  p_output1[2]=t31139*t31294 + t30426*t31351;
  p_output1[3]=t32799*(t33869 - 1.*t33894*t33990 - 1.*t34024*t34048) + t33894*(t32799*t33990 + t34080 + t34048*t34087);
  p_output1[4]=t34079*(t33869 + t1866*t29989*t33915 + t34094) + t1866*t24482*(t32724*t33915 + t34080 + t34107);
  p_output1[5]=t1866*t28451*(-1.*t1866*t33577 + t34094) + t29266*(-1.*t28451*t29266*t33577 + t31961*t33842 + t34107);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t13678 + 0.2255*t31961;
  p_output1[13]=0.325*t12508 - 1.*t12508*t33423 - 1.*t33055*t6765;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t33894;
  p_output1[19]=t1866*t24482*t30426 - 1.*t31294*t34024;
  p_output1[20]=t1866*t24482*t31294 + t30426*t34024;
  p_output1[21]=t32799*(t30226*t33990 + t31351*t34048 + t34155) + t30226*(-1.*t32799*t33990 - 1.*t34048*t34087 + t34211);
  p_output1[22]=t34079*(t30001*t33915 + t34155 + t34384) + t31139*(-1.*t32724*t33915 + t34211 + t34526);
  p_output1[23]=t13678*t1866*(t28451*t29266*t33577 + t34526 + t35763) + t1866*t28451*(-1.*t13678*t29266*t33577 + t34384 + t37274);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t28451*(-1.*t28451*t33548 + t35763) + t31961*(t13678*t33548 + t37274);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t32799;
  p_output1[37]=t30426*t34079 - 1.*t31294*t34087;
  p_output1[38]=t31294*t34079 + t30426*t34087;
  p_output1[39]=t30226*(t33894*t33990 + t34024*t34048 + t39233) + t33894*(-1.*t30226*t33990 - 1.*t31351*t34048 + t39242);
  p_output1[40]=t31139*(-1.*t1866*t29989*t33915 + t39233 + t39260) + t1866*t24482*(-1.*t30001*t33915 + t39242 + t39282);
  p_output1[41]=t13678*t1866*(t1866*t33577 + t39260) + t29266*(t13678*t29266*t33577 - 1.*t28451*t33842 + t39282);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t28451;
  p_output1[49]=-1.*t12508*t33055 - 0.325*t6765 + t33423*t6765;
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
