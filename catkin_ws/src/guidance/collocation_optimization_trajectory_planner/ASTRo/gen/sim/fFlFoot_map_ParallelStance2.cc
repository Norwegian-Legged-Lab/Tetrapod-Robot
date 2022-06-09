/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:15 GMT+02:00
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
  double t15235;
  double t14971;
  double t15178;
  double t15236;
  double t15286;
  double t15296;
  double t15299;
  double t15285;
  double t15306;
  double t15282;
  double t15450;
  double t15281;
  double t15233;
  double t15250;
  double t15251;
  double t13987;
  double t15300;
  double t15454;
  double t15471;
  double t16036;
  double t15815;
  double t15933;
  double t15959;
  double t15809;
  double t16745;
  double t16850;
  double t16866;
  double t16956;
  double t16961;
  double t16964;
  double t17003;
  double t17007;
  double t17008;
  double t17013;
  double t17021;
  double t17022;
  double t17032;
  double t17034;
  double t17055;
  double t17063;
  double t17072;
  double t17073;
  double t17078;
  double t17079;
  double t17088;
  double t17090;
  double t17098;
  double t17102;
  double t17145;
  double t17152;
  double t17185;
  double t17196;
  double t17202;
  double t17205;
  double t17206;
  double t17211;
  double t17212;
  double t17216;
  double t17220;
  double t17221;
  double t17097;
  double t17153;
  double t17163;
  double t16942;
  double t16970;
  double t16971;
  double t16972;
  double t16976;
  double t16977;
  double t17215;
  double t17226;
  double t17231;
  double t17233;
  double t17240;
  double t17250;
  double t17258;
  double t17263;
  double t17265;
  double t16983;
  double t16984;
  double t16985;
  double t17169;
  double t17266;
  double t15256;
  double t15606;
  double t15776;
  double t17269;
  double t17270;
  double t17271;
  double t17305;
  double t17311;
  double t17319;
  double t17323;
  double t17415;
  double t17454;
  t15235 = Cos(var1[7]);
  t14971 = Cos(var1[8]);
  t15178 = Sin(var1[7]);
  t15236 = Sin(var1[8]);
  t15286 = t15235*t14971;
  t15296 = t15178*t15236;
  t15299 = t15286 + t15296;
  t15285 = Cos(var1[6]);
  t15306 = Sin(var1[5]);
  t15282 = Cos(var1[5]);
  t15450 = Sin(var1[6]);
  t15281 = Cos(var1[4]);
  t15233 = -1.*t14971*t15178;
  t15250 = t15235*t15236;
  t15251 = t15233 + t15250;
  t13987 = Sin(var1[4]);
  t15300 = t15282*t15285*t15299;
  t15454 = -1.*t15306*t15450*t15299;
  t15471 = t15300 + t15454;
  t16036 = Sin(var1[3]);
  t15815 = t15285*t15306*t15299;
  t15933 = t15282*t15450*t15299;
  t15959 = t15815 + t15933;
  t15809 = Cos(var1[3]);
  t16745 = t15281*t15251;
  t16850 = -1.*t13987*t15471;
  t16866 = t16745 + t16850;
  t16956 = t14971*t15178;
  t16961 = -1.*t15235*t15236;
  t16964 = t16956 + t16961;
  t17003 = -1.*t15285;
  t17007 = 1. + t17003;
  t17008 = 0.15121*t17007;
  t17013 = -1.*t15235;
  t17021 = 1. + t17013;
  t17022 = 0.28121*t17021;
  t17032 = -1.*t14971;
  t17034 = 1. + t17032;
  t17055 = 0.50321*t17034;
  t17063 = 0.19821*t14971;
  t17072 = t17055 + t17063;
  t17073 = t15235*t17072;
  t17078 = -0.305*t15178*t15236;
  t17079 = t17022 + t17073 + t17078;
  t17088 = t15285*t17079;
  t17090 = t17008 + t17088;
  t17098 = 0.15121*t15285;
  t17102 = -0.15121*t15450;
  t17145 = t15450*t17079;
  t17152 = t17008 + t17098 + t17102 + t17145;
  t17185 = -1.*t15285*t15306;
  t17196 = -1.*t15282*t15450;
  t17202 = t17185 + t17196;
  t17205 = 0.28121*t15178;
  t17206 = -1.*t17072*t15178;
  t17211 = -0.305*t15235*t15236;
  t17212 = t17205 + t17206 + t17211;
  t17216 = t15282*t17090;
  t17220 = -1.*t15306*t17152;
  t17221 = t17216 + t17220;
  t17097 = t15306*t17090;
  t17153 = t15282*t17152;
  t17163 = t17097 + t17153;
  t16942 = t13987*t15299;
  t16970 = t15282*t15285*t16964;
  t16971 = -1.*t15306*t15450*t16964;
  t16972 = t16970 + t16971;
  t16976 = t15281*t16972;
  t16977 = t16942 + t16976;
  t17215 = t13987*t17212;
  t17226 = t15281*t17221;
  t17231 = t17215 + t17226;
  t17233 = t15281*t17212;
  t17240 = -1.*t13987*t17221;
  t17250 = t17233 + t17240;
  t17258 = t15285*t15306*t16964;
  t17263 = t15282*t15450*t16964;
  t17265 = t17258 + t17263;
  t16983 = t15282*t15285;
  t16984 = -1.*t15306*t15450;
  t16985 = t16983 + t16984;
  t17169 = -1.*t16985*t17163;
  t17266 = t17265*t17163;
  t15256 = t13987*t15251;
  t15606 = t15281*t15471;
  t15776 = t15256 + t15606;
  t17269 = t15281*t15299;
  t17270 = -1.*t13987*t16972;
  t17271 = t17269 + t17270;
  t17305 = -1.*t17265*t17163;
  t17311 = t15959*t17163;
  t17319 = -1.*t17212*t15299;
  t17323 = t17212*t15251;
  t17415 = t16985*t17163;
  t17454 = -1.*t15959*t17163;
  p_output1[0]=t15776;
  p_output1[1]=t15809*t15959 - 1.*t16036*t16866;
  p_output1[2]=t15959*t16036 + t15809*t16866;
  p_output1[3]=t16977*(t17169 - 1.*t15281*t17202*t17231 + t13987*t17202*t17250) + t15281*t17202*(t16977*t17231 + t17266 + t17250*t17271);
  p_output1[4]=(t17169 - 1.*t17202*t17221)*t17265 + t16985*(t15299*t17212 + t16972*t17221 + t17266);
  p_output1[5]=t15299*(t15450*t17090 - 1.*t15285*t17152);
  p_output1[6]=0;
  p_output1[7]=0.28121*t15236 - 0.305*t14971*t15236 - 1.*t15236*t17072;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t15281*t17202;
  p_output1[19]=t15809*t16985 + t13987*t16036*t17202;
  p_output1[20]=t16036*t16985 - 1.*t13987*t15809*t17202;
  p_output1[21]=t15776*(-1.*t16977*t17231 - 1.*t17250*t17271 + t17305) + t16977*(t15776*t17231 + t16866*t17250 + t17311);
  p_output1[22]=t15959*(-1.*t16972*t17221 + t17305 + t17319) + t17265*(t15471*t17221 + t17311 + t17323);
  p_output1[23]=t15251*(-1.*t15285*t16964*t17090 - 1.*t15450*t16964*t17152 + t17319) + t15299*(t15285*t15299*t17090 + t15299*t15450*t17152 + t17323);
  p_output1[24]=-0.15121 + t15251*(-1.*t16964*t17079 + t17319) + t15299*(t15299*t17079 + t17323);
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
  p_output1[36]=t16977;
  p_output1[37]=t15809*t17265 - 1.*t16036*t17271;
  p_output1[38]=t16036*t17265 + t15809*t17271;
  p_output1[39]=t15776*(t15281*t17202*t17231 - 1.*t13987*t17202*t17250 + t17415) + t15281*t17202*(-1.*t15776*t17231 - 1.*t16866*t17250 + t17454);
  p_output1[40]=t15959*(t17202*t17221 + t17415) + t16985*(-1.*t15251*t17212 - 1.*t15471*t17221 + t17454);
  p_output1[41]=t15251*(-1.*t15450*t17090 + t15285*t17152);
  p_output1[42]=0.15121*t15251 + 0.15121*t16964;
  p_output1[43]=0.28121*t14971 + 0.305*Power(t15236,2) - 1.*t14971*t17072;
  p_output1[44]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
