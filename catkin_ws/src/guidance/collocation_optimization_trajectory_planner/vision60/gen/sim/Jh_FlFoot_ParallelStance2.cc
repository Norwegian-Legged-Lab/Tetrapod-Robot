/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:01 GMT+02:00
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
  double t2701;
  double t3979;
  double t4548;
  double t7895;
  double t7917;
  double t7932;
  double t7934;
  double t7936;
  double t818;
  double t7939;
  double t863;
  double t7948;
  double t8061;
  double t8062;
  double t8070;
  double t8060;
  double t7966;
  double t8074;
  double t8080;
  double t8164;
  double t8181;
  double t8121;
  double t8122;
  double t8124;
  double t8126;
  double t8127;
  double t8132;
  double t8167;
  double t8176;
  double t8178;
  double t8184;
  double t8185;
  double t8186;
  double t8206;
  double t8207;
  double t8208;
  double t8213;
  double t8218;
  double t8223;
  double t8230;
  double t8232;
  double t8235;
  double t8256;
  double t8257;
  double t8258;
  double t8264;
  double t8267;
  double t8270;
  double t8274;
  double t8275;
  double t8277;
  double t8254;
  double t8261;
  double t8278;
  double t8279;
  double t8084;
  double t8085;
  double t8088;
  double t8250;
  double t8251;
  double t8252;
  double t8253;
  double t8280;
  double t8282;
  double t8283;
  double t8284;
  double t8285;
  double t8286;
  double t8289;
  double t8291;
  double t8292;
  double t8293;
  double t8294;
  double t8297;
  double t8299;
  double t8300;
  double t8106;
  double t8140;
  double t8154;
  double t8310;
  double t8311;
  double t8312;
  double t8305;
  double t8306;
  double t8308;
  double t8296;
  double t8301;
  double t8302;
  double t7935;
  double t8082;
  double t8083;
  double t8313;
  double t8317;
  double t8325;
  double t8330;
  double t8341;
  double t8344;
  double t8356;
  double t8359;
  double t8369;
  double t8365;
  double t8376;
  double t8384;
  double t8428;
  double t8419;
  t2701 = Cos(var1[8]);
  t3979 = Sin(var1[7]);
  t4548 = t2701*t3979;
  t7895 = Cos(var1[7]);
  t7917 = Sin(var1[8]);
  t7932 = -1.*t7895*t7917;
  t7934 = t4548 + t7932;
  t7936 = Cos(var1[4]);
  t818 = Cos(var1[6]);
  t7939 = Sin(var1[5]);
  t863 = Sin(var1[4]);
  t7948 = Sin(var1[6]);
  t8061 = t7895*t2701;
  t8062 = t3979*t7917;
  t8070 = t8061 + t8062;
  t8060 = Cos(var1[5]);
  t7966 = t7939*t7948*t7934;
  t8074 = t8060*t8070;
  t8080 = t7966 + t8074;
  t8164 = Cos(var1[3]);
  t8181 = Sin(var1[3]);
  t8121 = -1.*t2701*t3979;
  t8122 = t7895*t7917;
  t8124 = t8121 + t8122;
  t8126 = t8060*t8124;
  t8127 = t7939*t7948*t8070;
  t8132 = t8126 + t8127;
  t8167 = -1.*t8060*t7948*t7934;
  t8176 = t7939*t8070;
  t8178 = t8167 + t8176;
  t8184 = t7936*t818*t7934;
  t8185 = -1.*t863*t8080;
  t8186 = t8184 + t8185;
  t8206 = t818*t863*t7939;
  t8207 = t7936*t7948;
  t8208 = t8206 + t8207;
  t8213 = t7939*t8124;
  t8218 = -1.*t8060*t7948*t8070;
  t8223 = t8213 + t8218;
  t8230 = t7936*t818*t8070;
  t8232 = -1.*t863*t8132;
  t8235 = t8230 + t8232;
  t8256 = -0.0641*t2701;
  t8257 = -0.28*t7917;
  t8258 = t8256 + t8257;
  t8264 = -1.*t2701;
  t8267 = 1. + t8264;
  t8270 = 0.075*t8267;
  t8274 = 0.355*t2701;
  t8275 = -0.0641*t7917;
  t8277 = t8270 + t8274 + t8275;
  t8254 = -0.325*t3979;
  t8261 = t7895*t8258;
  t8278 = t3979*t8277;
  t8279 = t8254 + t8261 + t8278;
  t8084 = -1.*t7936*t818*t7939;
  t8085 = t863*t7948;
  t8088 = t8084 + t8085;
  t8250 = -1.*t818;
  t8251 = 1. + t8250;
  t8252 = 0.1575*t8251;
  t8253 = 0.2255*t818;
  t8280 = -1.*t7948*t8279;
  t8282 = t8252 + t8253 + t8280;
  t8283 = -1.*t7939*t8282;
  t8284 = -1.*t7895;
  t8285 = 1. + t8284;
  t8286 = 0.325*t8285;
  t8289 = -1.*t3979*t8258;
  t8291 = t7895*t8277;
  t8292 = t8286 + t8289 + t8291;
  t8293 = t8060*t8292;
  t8294 = t8283 + t8293;
  t8297 = 0.068*t7948;
  t8299 = t818*t8279;
  t8300 = t8297 + t8299;
  t8106 = t818*t863*t8070;
  t8140 = t7936*t8132;
  t8154 = t8106 + t8140;
  t8310 = t8060*t8282;
  t8311 = t7939*t8292;
  t8312 = t8310 + t8311;
  t8305 = t7936*t8294;
  t8306 = t863*t8300;
  t8308 = t8305 + t8306;
  t8296 = -1.*t863*t8294;
  t8301 = t7936*t8300;
  t8302 = t8296 + t8301;
  t7935 = t818*t863*t7934;
  t8082 = t7936*t8080;
  t8083 = t7935 + t8082;
  t8313 = -1.*t8060*t818*t8312;
  t8317 = t8312*t8223;
  t8325 = t8312*t8178;
  t8330 = -1.*t8312*t8223;
  t8341 = t8060*t818*t8312;
  t8344 = -1.*t8312*t8178;
  t8356 = -1.*t7948*t8300;
  t8359 = t818*t8300*t8070;
  t8369 = -1.*t818*t8300*t8070;
  t8365 = t818*t8300*t7934;
  t8376 = t7948*t8300;
  t8384 = -1.*t818*t8300*t7934;
  t8428 = t8292*t8070;
  t8419 = -1.*t8292*t8124;
  p_output1[0]=t8083;
  p_output1[1]=t8088;
  p_output1[2]=t8154;
  p_output1[3]=t8164*t8178 - 1.*t8181*t8186;
  p_output1[4]=t8060*t8164*t818 - 1.*t8181*t8208;
  p_output1[5]=t8164*t8223 - 1.*t8181*t8235;
  p_output1[6]=t8178*t8181 + t8164*t8186;
  p_output1[7]=t8060*t818*t8181 + t8164*t8208;
  p_output1[8]=t8181*t8223 + t8164*t8235;
  p_output1[9]=t8154*(-1.*t8208*t8302 - 1.*t8088*t8308 + t8313) + t8088*(t8235*t8302 + t8154*t8308 + t8317);
  p_output1[10]=t8154*(t8186*t8302 + t8083*t8308 + t8325) + t8083*(-1.*t8235*t8302 - 1.*t8154*t8308 + t8330);
  p_output1[11]=t8083*(t8208*t8302 + t8088*t8308 + t8341) + t8088*(-1.*t8186*t8302 - 1.*t8083*t8308 + t8344);
  p_output1[12]=t8223*(t7939*t818*t8294 + t8313 + t8356) + t8060*t818*(t8132*t8294 + t8317 + t8359);
  p_output1[13]=t8223*(t8080*t8294 + t8325 + t8365) + t8178*(-1.*t8132*t8294 + t8330 + t8369);
  p_output1[14]=t8178*(-1.*t7939*t818*t8294 + t8341 + t8376) + t8060*t818*(-1.*t8080*t8294 + t8344 + t8384);
  p_output1[15]=t8070*t818*(-1.*t818*t8282 + t8356) + t7948*(-1.*t7948*t8070*t8282 + t8124*t8292 + t8359);
  p_output1[16]=t7934*t818*(t7948*t8070*t8282 + t8369 + t8419) + t8070*t818*(-1.*t7934*t7948*t8282 + t8365 + t8428);
  p_output1[17]=t7934*t818*(t818*t8282 + t8376) + t7948*(t7934*t7948*t8282 - 1.*t8070*t8292 + t8384);
  p_output1[18]=-0.1575*t7934 - 0.2255*t8124;
  p_output1[19]=t8070*(-1.*t8070*t8279 + t8419) + t8124*(t7934*t8279 + t8428);
  p_output1[20]=0.068*t8070;
  p_output1[21]=0.325*t7917 - 1.*t2701*t8258 - 1.*t7917*t8277;
  p_output1[22]=0;
  p_output1[23]=-0.325*t2701 - 1.*t7917*t8258 + t2701*t8277;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
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
