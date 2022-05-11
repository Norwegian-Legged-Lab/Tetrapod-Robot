/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:05 GMT+02:00
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
  double t5144;
  double t5116;
  double t5140;
  double t5157;
  double t5142;
  double t5164;
  double t5165;
  double t5204;
  double t5238;
  double t5206;
  double t5207;
  double t5214;
  double t5242;
  double t5102;
  double t5171;
  double t5166;
  double t5232;
  double t5246;
  double t5248;
  double t5257;
  double t5252;
  double t5253;
  double t5254;
  double t5251;
  double t5259;
  double t5261;
  double t5262;
  double t5282;
  double t5285;
  double t5287;
  double t5292;
  double t5296;
  double t5297;
  double t5299;
  double t5301;
  double t5303;
  double t5281;
  double t5288;
  double t5304;
  double t5305;
  double t5310;
  double t5311;
  double t5312;
  double t5313;
  double t5314;
  double t5315;
  double t5277;
  double t5278;
  double t5279;
  double t5280;
  double t5307;
  double t5308;
  double t5322;
  double t5323;
  double t5324;
  double t5329;
  double t5330;
  double t5331;
  double t5319;
  double t5320;
  double t5321;
  double t5309;
  double t5316;
  double t5317;
  double t5269;
  double t5270;
  double t5271;
  double t5328;
  double t5332;
  double t5333;
  double t5268;
  double t5272;
  double t5273;
  double t5274;
  double t5275;
  double t5276;
  double t5354;
  double t5358;
  double t5362;
  double t5374;
  double t5379;
  double t5380;
  double t5318;
  double t5382;
  double t5397;
  double t5401;
  double t5335;
  double t5345;
  double t5346;
  double t5170;
  double t5249;
  double t5250;
  double t5384;
  double t5385;
  double t5386;
  double t5455;
  double t5464;
  double t5487;
  double t5474;
  double t5509;
  double t5501;
  double t5536;
  double t5541;
  double t5549;
  double t5555;
  t5144 = Cos(var1[13]);
  t5116 = Cos(var1[14]);
  t5140 = Sin(var1[13]);
  t5157 = Sin(var1[14]);
  t5142 = t5116*t5140;
  t5164 = -1.*t5144*t5157;
  t5165 = t5142 + t5164;
  t5204 = Cos(var1[5]);
  t5238 = Sin(var1[12]);
  t5206 = t5144*t5116;
  t5207 = t5140*t5157;
  t5214 = t5206 + t5207;
  t5242 = Sin(var1[5]);
  t5102 = Cos(var1[12]);
  t5171 = Cos(var1[4]);
  t5166 = Sin(var1[4]);
  t5232 = t5204*t5214;
  t5246 = t5238*t5165*t5242;
  t5248 = t5232 + t5246;
  t5257 = Sin(var1[3]);
  t5252 = -1.*t5204*t5238*t5165;
  t5253 = t5214*t5242;
  t5254 = t5252 + t5253;
  t5251 = Cos(var1[3]);
  t5259 = t5102*t5171*t5165;
  t5261 = -1.*t5166*t5248;
  t5262 = t5259 + t5261;
  t5282 = -0.0641*t5116;
  t5285 = -0.28*t5157;
  t5287 = t5282 + t5285;
  t5292 = -1.*t5116;
  t5296 = 1. + t5292;
  t5297 = 0.075*t5296;
  t5299 = 0.355*t5116;
  t5301 = -0.0641*t5157;
  t5303 = t5297 + t5299 + t5301;
  t5281 = -0.325*t5140;
  t5288 = t5144*t5287;
  t5304 = t5140*t5303;
  t5305 = t5281 + t5288 + t5304;
  t5310 = -1.*t5144;
  t5311 = 1. + t5310;
  t5312 = 0.325*t5311;
  t5313 = -1.*t5140*t5287;
  t5314 = t5144*t5303;
  t5315 = t5312 + t5313 + t5314;
  t5277 = -1.*t5102;
  t5278 = 1. + t5277;
  t5279 = -0.1575*t5278;
  t5280 = -0.2255*t5102;
  t5307 = -1.*t5238*t5305;
  t5308 = t5279 + t5280 + t5307;
  t5322 = -0.068*t5238;
  t5323 = t5102*t5305;
  t5324 = t5322 + t5323;
  t5329 = t5204*t5315;
  t5330 = -1.*t5308*t5242;
  t5331 = t5329 + t5330;
  t5319 = t5238*t5166;
  t5320 = -1.*t5102*t5171*t5242;
  t5321 = t5319 + t5320;
  t5309 = t5204*t5308;
  t5316 = t5315*t5242;
  t5317 = t5309 + t5316;
  t5269 = -1.*t5116*t5140;
  t5270 = t5144*t5157;
  t5271 = t5269 + t5270;
  t5328 = t5324*t5166;
  t5332 = t5171*t5331;
  t5333 = t5328 + t5332;
  t5268 = t5102*t5214*t5166;
  t5272 = t5204*t5271;
  t5273 = t5238*t5214*t5242;
  t5274 = t5272 + t5273;
  t5275 = t5171*t5274;
  t5276 = t5268 + t5275;
  t5354 = t5171*t5324;
  t5358 = -1.*t5166*t5331;
  t5362 = t5354 + t5358;
  t5374 = -1.*t5204*t5238*t5214;
  t5379 = t5271*t5242;
  t5380 = t5374 + t5379;
  t5318 = -1.*t5102*t5204*t5317;
  t5382 = t5317*t5380;
  t5397 = -1.*t5238*t5324;
  t5401 = t5102*t5324*t5214;
  t5335 = t5171*t5238;
  t5345 = t5102*t5166*t5242;
  t5346 = t5335 + t5345;
  t5170 = t5102*t5165*t5166;
  t5249 = t5171*t5248;
  t5250 = t5170 + t5249;
  t5384 = t5102*t5171*t5214;
  t5385 = -1.*t5166*t5274;
  t5386 = t5384 + t5385;
  t5455 = t5317*t5254;
  t5464 = -1.*t5317*t5380;
  t5487 = -1.*t5102*t5324*t5214;
  t5474 = t5102*t5324*t5165;
  t5509 = t5315*t5214;
  t5501 = -1.*t5315*t5271;
  t5536 = t5102*t5204*t5317;
  t5541 = -1.*t5317*t5254;
  t5549 = t5238*t5324;
  t5555 = -1.*t5102*t5324*t5165;
  p_output1[0]=t5250;
  p_output1[1]=t5251*t5254 - 1.*t5257*t5262;
  p_output1[2]=t5254*t5257 + t5251*t5262;
  p_output1[3]=t5276*(t5318 - 1.*t5321*t5333 - 1.*t5346*t5362) + t5321*(t5276*t5333 + t5382 + t5362*t5386);
  p_output1[4]=t5380*(t5318 + t5102*t5242*t5331 + t5397) + t5102*t5204*(t5274*t5331 + t5382 + t5401);
  p_output1[5]=t5102*t5214*(-1.*t5102*t5308 + t5397) + t5238*(-1.*t5214*t5238*t5308 + t5271*t5315 + t5401);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t5165 + 0.2255*t5271;
  p_output1[13]=0.325*t5157 - 1.*t5116*t5287 - 1.*t5157*t5303;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5321;
  p_output1[19]=t5102*t5204*t5251 - 1.*t5257*t5346;
  p_output1[20]=t5102*t5204*t5257 + t5251*t5346;
  p_output1[21]=t5276*(t5250*t5333 + t5262*t5362 + t5455) + t5250*(-1.*t5276*t5333 - 1.*t5362*t5386 + t5464);
  p_output1[22]=t5380*(t5248*t5331 + t5455 + t5474) + t5254*(-1.*t5274*t5331 + t5464 + t5487);
  p_output1[23]=t5102*t5165*(t5214*t5238*t5308 + t5487 + t5501) + t5102*t5214*(-1.*t5165*t5238*t5308 + t5474 + t5509);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t5214*(-1.*t5214*t5305 + t5501) + t5271*(t5165*t5305 + t5509);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5276;
  p_output1[37]=t5251*t5380 - 1.*t5257*t5386;
  p_output1[38]=t5257*t5380 + t5251*t5386;
  p_output1[39]=t5250*(t5321*t5333 + t5346*t5362 + t5536) + t5321*(-1.*t5250*t5333 - 1.*t5262*t5362 + t5541);
  p_output1[40]=t5254*(-1.*t5102*t5242*t5331 + t5536 + t5549) + t5102*t5204*(-1.*t5248*t5331 + t5541 + t5555);
  p_output1[41]=t5102*t5165*(t5102*t5308 + t5549) + t5238*(t5165*t5238*t5308 - 1.*t5214*t5315 + t5555);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t5214;
  p_output1[49]=-0.325*t5116 - 1.*t5157*t5287 + t5116*t5303;
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

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
