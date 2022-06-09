/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:28 GMT+02:00
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
  double t5104;
  double t3193;
  double t3657;
  double t5185;
  double t8692;
  double t8820;
  double t9541;
  double t8423;
  double t9780;
  double t8204;
  double t9823;
  double t6412;
  double t4090;
  double t5255;
  double t5256;
  double t5281;
  double t9566;
  double t9898;
  double t9901;
  double t10256;
  double t10130;
  double t10225;
  double t10226;
  double t10078;
  double t10264;
  double t10267;
  double t11549;
  double t13413;
  double t13416;
  double t18863;
  double t18864;
  double t18866;
  double t18980;
  double t18986;
  double t18987;
  double t18990;
  double t18998;
  double t19003;
  double t19009;
  double t19010;
  double t19014;
  double t19015;
  double t19016;
  double t18855;
  double t18860;
  double t18861;
  double t19011;
  double t19012;
  double t19020;
  double t19021;
  double t19022;
  double t19023;
  double t19024;
  double t19025;
  double t19026;
  double t19028;
  double t19029;
  double t19030;
  double t19013;
  double t19017;
  double t19018;
  double t13242;
  double t13261;
  double t13308;
  double t13333;
  double t13352;
  double t13363;
  double t13370;
  double t13372;
  double t13374;
  double t19027;
  double t19031;
  double t19032;
  double t19034;
  double t19036;
  double t19037;
  double t19042;
  double t19043;
  double t19044;
  double t13377;
  double t13378;
  double t13389;
  double t19019;
  double t19045;
  double t5358;
  double t10061;
  double t10072;
  double t19048;
  double t19049;
  double t19051;
  double t19088;
  double t19093;
  double t19099;
  double t19105;
  double t19138;
  double t19143;
  t5104 = Cos(var1[10]);
  t3193 = Cos(var1[11]);
  t3657 = Sin(var1[10]);
  t5185 = Sin(var1[11]);
  t8692 = -1.*t5104*t3193;
  t8820 = -1.*t3657*t5185;
  t9541 = t8692 + t8820;
  t8423 = Cos(var1[5]);
  t9780 = Sin(var1[9]);
  t8204 = Cos(var1[9]);
  t9823 = Sin(var1[5]);
  t6412 = Cos(var1[4]);
  t4090 = -1.*t3193*t3657;
  t5255 = t5104*t5185;
  t5256 = t4090 + t5255;
  t5281 = Sin(var1[4]);
  t9566 = t8204*t8423*t9541;
  t9898 = -1.*t9780*t9541*t9823;
  t9901 = t9566 + t9898;
  t10256 = Sin(var1[3]);
  t10130 = t8423*t9780*t9541;
  t10225 = t8204*t9541*t9823;
  t10226 = t10130 + t10225;
  t10078 = Cos(var1[3]);
  t10264 = t6412*t5256;
  t10267 = -1.*t5281*t9901;
  t11549 = t10264 + t10267;
  t13413 = -1.*t8204;
  t13416 = 1. + t13413;
  t18863 = -1.*t5104;
  t18864 = 1. + t18863;
  t18866 = -0.28121*t18864;
  t18980 = -1.*t3193;
  t18986 = 1. + t18980;
  t18987 = -0.50321*t18986;
  t18990 = -0.19821*t3193;
  t18998 = t18987 + t18990;
  t19003 = t5104*t18998;
  t19009 = 0.305*t3657*t5185;
  t19010 = t18866 + t19003 + t19009;
  t19014 = -0.15121*t13416;
  t19015 = t8204*t19010;
  t19016 = t19014 + t19015;
  t18855 = 0.15121*t13416;
  t18860 = 0.15121*t8204;
  t18861 = 0.15121*t9780;
  t19011 = t9780*t19010;
  t19012 = t18855 + t18860 + t18861 + t19011;
  t19020 = t8423*t9780;
  t19021 = t8204*t9823;
  t19022 = t19020 + t19021;
  t19023 = 0.28121*t3657;
  t19024 = t18998*t3657;
  t19025 = -0.305*t5104*t5185;
  t19026 = t19023 + t19024 + t19025;
  t19028 = t8423*t19016;
  t19029 = -1.*t19012*t9823;
  t19030 = t19028 + t19029;
  t19013 = t8423*t19012;
  t19017 = t19016*t9823;
  t19018 = t19013 + t19017;
  t13242 = t5104*t3193;
  t13261 = t3657*t5185;
  t13308 = t13242 + t13261;
  t13333 = t13308*t5281;
  t13352 = t8204*t8423*t5256;
  t13363 = -1.*t9780*t5256*t9823;
  t13370 = t13352 + t13363;
  t13372 = t6412*t13370;
  t13374 = t13333 + t13372;
  t19027 = t19026*t5281;
  t19031 = t6412*t19030;
  t19032 = t19027 + t19031;
  t19034 = t6412*t19026;
  t19036 = -1.*t5281*t19030;
  t19037 = t19034 + t19036;
  t19042 = t8423*t9780*t5256;
  t19043 = t8204*t5256*t9823;
  t19044 = t19042 + t19043;
  t13377 = -1.*t8204*t8423;
  t13378 = t9780*t9823;
  t13389 = t13377 + t13378;
  t19019 = -1.*t13389*t19018;
  t19045 = t19044*t19018;
  t5358 = t5256*t5281;
  t10061 = t6412*t9901;
  t10072 = t5358 + t10061;
  t19048 = t6412*t13308;
  t19049 = -1.*t5281*t13370;
  t19051 = t19048 + t19049;
  t19088 = -1.*t19044*t19018;
  t19093 = t10226*t19018;
  t19099 = -1.*t19026*t13308;
  t19105 = t19026*t5256;
  t19138 = t13389*t19018;
  t19143 = -1.*t10226*t19018;
  p_output1[0]=t10072;
  p_output1[1]=t10078*t10226 - 1.*t10256*t11549;
  p_output1[2]=t10226*t10256 + t10078*t11549;
  p_output1[3]=t19022*(t13374*t19032 + t19045 + t19037*t19051)*t6412 + t13374*(t19019 + t19022*t19037*t5281 - 1.*t19022*t19032*t6412);
  p_output1[4]=(t19019 - 1.*t19022*t19030)*t19044 + t13389*(t13308*t19026 + t13370*t19030 + t19045);
  p_output1[5]=t13308*(t19012*t8204 - 1.*t19016*t9780);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t13308 + 0.15121*t9541;
  p_output1[10]=0.28121*t5185 + t18998*t5185 - 0.305*t3193*t5185;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t19022*t6412;
  p_output1[19]=t10078*t13389 + t10256*t19022*t5281;
  p_output1[20]=t10256*t13389 - 1.*t10078*t19022*t5281;
  p_output1[21]=t10072*(-1.*t13374*t19032 - 1.*t19037*t19051 + t19088) + t13374*(t10072*t19032 + t11549*t19037 + t19093);
  p_output1[22]=t10226*(-1.*t13370*t19030 + t19088 + t19099) + t19044*(t19093 + t19105 + t19030*t9901);
  p_output1[23]=t5256*(t19099 - 1.*t19016*t5256*t8204 - 1.*t19012*t5256*t9780) + t13308*(t19105 + t19016*t8204*t9541 + t19012*t9541*t9780);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t5256*(t19099 - 1.*t19010*t5256) + t13308*(t19105 + t19010*t9541);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t13374;
  p_output1[37]=t10078*t19044 - 1.*t10256*t19051;
  p_output1[38]=t10256*t19044 + t10078*t19051;
  p_output1[39]=t19022*(-1.*t10072*t19032 - 1.*t11549*t19037 + t19143)*t6412 + t10072*(t19138 - 1.*t19022*t19037*t5281 + t19022*t19032*t6412);
  p_output1[40]=t10226*(t19022*t19030 + t19138) + t13389*(t19143 - 1.*t19026*t5256 - 1.*t19030*t9901);
  p_output1[41]=t5256*(-1.*t19012*t8204 + t19016*t9780);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t3193 + t18998*t3193 + 0.305*Power(t5185,2);
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
