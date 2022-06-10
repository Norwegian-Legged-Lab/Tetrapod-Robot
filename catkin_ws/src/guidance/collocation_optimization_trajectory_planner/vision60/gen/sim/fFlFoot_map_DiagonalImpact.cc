/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:25 GMT+02:00
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
  double t645;
  double t698;
  double t738;
  double t1066;
  double t1149;
  double t1154;
  double t1188;
  double t8303;
  double t8172;
  double t7964;
  double t8332;
  double t8394;
  double t8406;
  double t1247;
  double t436;
  double t465;
  double t8272;
  double t8408;
  double t8413;
  double t8450;
  double t8437;
  double t8439;
  double t8442;
  double t8436;
  double t8452;
  double t8700;
  double t8708;
  double t9102;
  double t9105;
  double t9111;
  double t9120;
  double t9132;
  double t9133;
  double t9147;
  double t9155;
  double t9157;
  double t9095;
  double t9112;
  double t9159;
  double t9160;
  double t9073;
  double t9077;
  double t9090;
  double t9092;
  double t9161;
  double t9171;
  double t9174;
  double t9175;
  double t9178;
  double t9181;
  double t9186;
  double t9188;
  double t9189;
  double t9194;
  double t9198;
  double t9201;
  double t9202;
  double t9214;
  double t9228;
  double t9229;
  double t9240;
  double t9254;
  double t9258;
  double t9259;
  double t9266;
  double t9267;
  double t9270;
  double t9246;
  double t9247;
  double t9250;
  double t9265;
  double t9272;
  double t9273;
  double t9277;
  double t9280;
  double t9281;
  double t9199;
  double t9217;
  double t9219;
  double t9261;
  double t9283;
  double t9286;
  double t9287;
  double t9293;
  double t9339;
  double t9343;
  double t9030;
  double t9031;
  double t9055;
  double t1241;
  double t8421;
  double t8426;
  double t9301;
  double t9302;
  double t9304;
  double t9440;
  double t9449;
  double t9477;
  double t9467;
  double t9489;
  double t9483;
  double t9532;
  double t9535;
  double t9548;
  double t9554;
  t645 = Cos(var1[8]);
  t698 = Sin(var1[7]);
  t738 = t645*t698;
  t1066 = Cos(var1[7]);
  t1149 = Sin(var1[8]);
  t1154 = -1.*t1066*t1149;
  t1188 = t738 + t1154;
  t8303 = Cos(var1[5]);
  t8172 = Sin(var1[6]);
  t7964 = Sin(var1[5]);
  t8332 = t1066*t645;
  t8394 = t698*t1149;
  t8406 = t8332 + t8394;
  t1247 = Cos(var1[4]);
  t436 = Cos(var1[6]);
  t465 = Sin(var1[4]);
  t8272 = t7964*t8172*t1188;
  t8408 = t8303*t8406;
  t8413 = t8272 + t8408;
  t8450 = Sin(var1[3]);
  t8437 = -1.*t8303*t8172*t1188;
  t8439 = t7964*t8406;
  t8442 = t8437 + t8439;
  t8436 = Cos(var1[3]);
  t8452 = t1247*t436*t1188;
  t8700 = -1.*t465*t8413;
  t8708 = t8452 + t8700;
  t9102 = -0.0641*t645;
  t9105 = -0.28*t1149;
  t9111 = t9102 + t9105;
  t9120 = -1.*t645;
  t9132 = 1. + t9120;
  t9133 = 0.075*t9132;
  t9147 = 0.355*t645;
  t9155 = -0.0641*t1149;
  t9157 = t9133 + t9147 + t9155;
  t9095 = -0.325*t698;
  t9112 = t1066*t9111;
  t9159 = t698*t9157;
  t9160 = t9095 + t9112 + t9159;
  t9073 = -1.*t436;
  t9077 = 1. + t9073;
  t9090 = 0.1575*t9077;
  t9092 = 0.2255*t436;
  t9161 = -1.*t8172*t9160;
  t9171 = t9090 + t9092 + t9161;
  t9174 = -1.*t7964*t9171;
  t9175 = -1.*t1066;
  t9178 = 1. + t9175;
  t9181 = 0.325*t9178;
  t9186 = -1.*t698*t9111;
  t9188 = t1066*t9157;
  t9189 = t9181 + t9186 + t9188;
  t9194 = t8303*t9189;
  t9198 = t9174 + t9194;
  t9201 = 0.068*t8172;
  t9202 = t436*t9160;
  t9214 = t9201 + t9202;
  t9228 = -1.*t1247*t436*t7964;
  t9229 = t465*t8172;
  t9240 = t9228 + t9229;
  t9254 = t8303*t9171;
  t9258 = t7964*t9189;
  t9259 = t9254 + t9258;
  t9266 = -1.*t645*t698;
  t9267 = t1066*t1149;
  t9270 = t9266 + t9267;
  t9246 = t1247*t9198;
  t9247 = t465*t9214;
  t9250 = t9246 + t9247;
  t9265 = t436*t465*t8406;
  t9272 = t8303*t9270;
  t9273 = t7964*t8172*t8406;
  t9277 = t9272 + t9273;
  t9280 = t1247*t9277;
  t9281 = t9265 + t9280;
  t9199 = -1.*t465*t9198;
  t9217 = t1247*t9214;
  t9219 = t9199 + t9217;
  t9261 = -1.*t8303*t436*t9259;
  t9283 = t7964*t9270;
  t9286 = -1.*t8303*t8172*t8406;
  t9287 = t9283 + t9286;
  t9293 = t9259*t9287;
  t9339 = -1.*t8172*t9214;
  t9343 = t436*t9214*t8406;
  t9030 = t436*t465*t7964;
  t9031 = t1247*t8172;
  t9055 = t9030 + t9031;
  t1241 = t436*t465*t1188;
  t8421 = t1247*t8413;
  t8426 = t1241 + t8421;
  t9301 = t1247*t436*t8406;
  t9302 = -1.*t465*t9277;
  t9304 = t9301 + t9302;
  t9440 = t9259*t8442;
  t9449 = -1.*t9259*t9287;
  t9477 = -1.*t436*t9214*t8406;
  t9467 = t436*t9214*t1188;
  t9489 = t9189*t8406;
  t9483 = -1.*t9189*t9270;
  t9532 = t8303*t436*t9259;
  t9535 = -1.*t9259*t8442;
  t9548 = t8172*t9214;
  t9554 = -1.*t436*t9214*t1188;
  p_output1[0]=t8426;
  p_output1[1]=t8436*t8442 - 1.*t8450*t8708;
  p_output1[2]=t8442*t8450 + t8436*t8708;
  p_output1[3]=(-1.*t9055*t9219 - 1.*t9240*t9250 + t9261)*t9281 + t9240*(t9250*t9281 + t9293 + t9219*t9304);
  p_output1[4]=t9287*(t436*t7964*t9198 + t9261 + t9339) + t436*t8303*(t9198*t9277 + t9293 + t9343);
  p_output1[5]=t436*t8406*(-1.*t436*t9171 + t9339) + t8172*(-1.*t8172*t8406*t9171 + t9189*t9270 + t9343);
  p_output1[6]=-0.1575*t1188 - 0.2255*t9270;
  p_output1[7]=0.325*t1149 - 1.*t645*t9111 - 1.*t1149*t9157;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9240;
  p_output1[19]=t436*t8303*t8436 - 1.*t8450*t9055;
  p_output1[20]=t436*t8303*t8450 + t8436*t9055;
  p_output1[21]=t9281*(t8708*t9219 + t8426*t9250 + t9440) + t8426*(-1.*t9250*t9281 - 1.*t9219*t9304 + t9449);
  p_output1[22]=t9287*(t8413*t9198 + t9440 + t9467) + t8442*(-1.*t9198*t9277 + t9449 + t9477);
  p_output1[23]=t1188*t436*(t8172*t8406*t9171 + t9477 + t9483) + t436*t8406*(-1.*t1188*t8172*t9171 + t9467 + t9489);
  p_output1[24]=t8406*(-1.*t8406*t9160 + t9483) + t9270*(t1188*t9160 + t9489);
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
  p_output1[36]=t9281;
  p_output1[37]=t8436*t9287 - 1.*t8450*t9304;
  p_output1[38]=t8450*t9287 + t8436*t9304;
  p_output1[39]=t8426*(t9055*t9219 + t9240*t9250 + t9532) + t9240*(-1.*t8708*t9219 - 1.*t8426*t9250 + t9535);
  p_output1[40]=t8442*(-1.*t436*t7964*t9198 + t9532 + t9548) + t436*t8303*(-1.*t8413*t9198 + t9535 + t9554);
  p_output1[41]=t1188*t436*(t436*t9171 + t9548) + t8172*(t1188*t8172*t9171 - 1.*t8406*t9189 + t9554);
  p_output1[42]=0.068*t8406;
  p_output1[43]=-0.325*t645 - 1.*t1149*t9111 + t645*t9157;
  p_output1[44]=-0.28;
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

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
