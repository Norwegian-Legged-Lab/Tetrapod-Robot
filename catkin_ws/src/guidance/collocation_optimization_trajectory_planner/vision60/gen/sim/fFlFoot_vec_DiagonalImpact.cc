/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:44 GMT+02:00
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
  double t22628;
  double t26093;
  double t13438;
  double t26087;
  double t26094;
  double t26162;
  double t26163;
  double t26164;
  double t26171;
  double t26175;
  double t26176;
  double t26177;
  double t26182;
  double t26184;
  double t26185;
  double t26181;
  double t26202;
  double t26204;
  double t26180;
  double t26186;
  double t26187;
  double t26192;
  double t26193;
  double t26194;
  double t26195;
  double t26196;
  double t26197;
  double t26205;
  double t26206;
  double t26207;
  double t26212;
  double t26213;
  double t26215;
  double t26217;
  double t26218;
  double t26219;
  double t26225;
  double t26226;
  double t26227;
  double t26230;
  double t26231;
  double t26232;
  double t26258;
  double t26259;
  double t26260;
  double t26263;
  double t26264;
  double t26265;
  double t26267;
  double t26268;
  double t26269;
  double t26257;
  double t26261;
  double t26270;
  double t26271;
  double t26092;
  double t26095;
  double t26096;
  double t26252;
  double t26253;
  double t26254;
  double t26255;
  double t26272;
  double t26273;
  double t26274;
  double t26275;
  double t26276;
  double t26277;
  double t26278;
  double t26279;
  double t26280;
  double t26281;
  double t26282;
  double t26284;
  double t26285;
  double t26286;
  double t26178;
  double t26188;
  double t26189;
  double t26294;
  double t26295;
  double t26296;
  double t26290;
  double t26291;
  double t26292;
  double t26283;
  double t26287;
  double t26288;
  double t26191;
  double t26198;
  double t26199;
  double t26297;
  double t26300;
  double t26307;
  double t26312;
  double t26321;
  double t26324;
  double t26353;
  double t26356;
  double t26333;
  double t26336;
  double t26346;
  double t26342;
  double t26386;
  double t26381;
  t22628 = Cos(var1[6]);
  t26093 = Sin(var1[4]);
  t13438 = Cos(var1[4]);
  t26087 = Sin(var1[5]);
  t26094 = Sin(var1[6]);
  t26162 = Cos(var1[8]);
  t26163 = Sin(var1[7]);
  t26164 = t26162*t26163;
  t26171 = Cos(var1[7]);
  t26175 = Sin(var1[8]);
  t26176 = -1.*t26171*t26175;
  t26177 = t26164 + t26176;
  t26182 = t26171*t26162;
  t26184 = t26163*t26175;
  t26185 = t26182 + t26184;
  t26181 = Cos(var1[5]);
  t26202 = Cos(var1[3]);
  t26204 = Sin(var1[3]);
  t26180 = t26087*t26094*t26177;
  t26186 = t26181*t26185;
  t26187 = t26180 + t26186;
  t26192 = -1.*t26162*t26163;
  t26193 = t26171*t26175;
  t26194 = t26192 + t26193;
  t26195 = t26181*t26194;
  t26196 = t26087*t26094*t26185;
  t26197 = t26195 + t26196;
  t26205 = t22628*t26093*t26087;
  t26206 = t13438*t26094;
  t26207 = t26205 + t26206;
  t26212 = -1.*t26181*t26094*t26177;
  t26213 = t26087*t26185;
  t26215 = t26212 + t26213;
  t26217 = t13438*t22628*t26177;
  t26218 = -1.*t26093*t26187;
  t26219 = t26217 + t26218;
  t26225 = t26087*t26194;
  t26226 = -1.*t26181*t26094*t26185;
  t26227 = t26225 + t26226;
  t26230 = t13438*t22628*t26185;
  t26231 = -1.*t26093*t26197;
  t26232 = t26230 + t26231;
  t26258 = -0.0641*t26162;
  t26259 = -0.28*t26175;
  t26260 = t26258 + t26259;
  t26263 = -1.*t26162;
  t26264 = 1. + t26263;
  t26265 = 0.075*t26264;
  t26267 = 0.355*t26162;
  t26268 = -0.0641*t26175;
  t26269 = t26265 + t26267 + t26268;
  t26257 = -0.325*t26163;
  t26261 = t26171*t26260;
  t26270 = t26163*t26269;
  t26271 = t26257 + t26261 + t26270;
  t26092 = -1.*t13438*t22628*t26087;
  t26095 = t26093*t26094;
  t26096 = t26092 + t26095;
  t26252 = -1.*t22628;
  t26253 = 1. + t26252;
  t26254 = 0.1575*t26253;
  t26255 = 0.2255*t22628;
  t26272 = -1.*t26094*t26271;
  t26273 = t26254 + t26255 + t26272;
  t26274 = -1.*t26087*t26273;
  t26275 = -1.*t26171;
  t26276 = 1. + t26275;
  t26277 = 0.325*t26276;
  t26278 = -1.*t26163*t26260;
  t26279 = t26171*t26269;
  t26280 = t26277 + t26278 + t26279;
  t26281 = t26181*t26280;
  t26282 = t26274 + t26281;
  t26284 = 0.068*t26094;
  t26285 = t22628*t26271;
  t26286 = t26284 + t26285;
  t26178 = t22628*t26093*t26177;
  t26188 = t13438*t26187;
  t26189 = t26178 + t26188;
  t26294 = t26181*t26273;
  t26295 = t26087*t26280;
  t26296 = t26294 + t26295;
  t26290 = t13438*t26282;
  t26291 = t26093*t26286;
  t26292 = t26290 + t26291;
  t26283 = -1.*t26093*t26282;
  t26287 = t13438*t26286;
  t26288 = t26283 + t26287;
  t26191 = t22628*t26093*t26185;
  t26198 = t13438*t26197;
  t26199 = t26191 + t26198;
  t26297 = t26181*t22628*t26296;
  t26300 = -1.*t26296*t26215;
  t26307 = t26296*t26215;
  t26312 = -1.*t26296*t26227;
  t26321 = -1.*t26181*t22628*t26296;
  t26324 = t26296*t26227;
  t26353 = -1.*t26094*t26286;
  t26356 = t22628*t26286*t26185;
  t26333 = t26094*t26286;
  t26336 = -1.*t22628*t26286*t26177;
  t26346 = -1.*t22628*t26286*t26185;
  t26342 = t22628*t26286*t26177;
  t26386 = t26280*t26185;
  t26381 = -1.*t26280*t26194;
  p_output1[0]=t26189*var2[0] + t26096*var2[1] + t26199*var2[2];
  p_output1[1]=(t26202*t26215 - 1.*t26204*t26219)*var2[0] + (t22628*t26181*t26202 - 1.*t26204*t26207)*var2[1] + (t26202*t26227 - 1.*t26204*t26232)*var2[2];
  p_output1[2]=(t26204*t26215 + t26202*t26219)*var2[0] + (t22628*t26181*t26204 + t26202*t26207)*var2[1] + (t26204*t26227 + t26202*t26232)*var2[2];
  p_output1[3]=(t26199*(-1.*t26207*t26288 - 1.*t26096*t26292 + t26321) + t26096*(t26232*t26288 + t26199*t26292 + t26324))*var2[0] + (t26199*(t26219*t26288 + t26189*t26292 + t26307) + t26189*(-1.*t26232*t26288 - 1.*t26199*t26292 + t26312))*var2[1] + (t26189*(t26207*t26288 + t26096*t26292 + t26297) + t26096*(-1.*t26219*t26288 - 1.*t26189*t26292 + t26300))*var2[2];
  p_output1[4]=(t26227*(t22628*t26087*t26282 + t26321 + t26353) + t22628*t26181*(t26197*t26282 + t26324 + t26356))*var2[0] + (t26227*(t26187*t26282 + t26307 + t26342) + t26215*(-1.*t26197*t26282 + t26312 + t26346))*var2[1] + (t26215*(-1.*t22628*t26087*t26282 + t26297 + t26333) + t22628*t26181*(-1.*t26187*t26282 + t26300 + t26336))*var2[2];
  p_output1[5]=(t22628*t26185*(-1.*t22628*t26273 + t26353) + t26094*(-1.*t26094*t26185*t26273 + t26194*t26280 + t26356))*var2[0] + (t22628*t26177*(t26094*t26185*t26273 + t26346 + t26381) + t22628*t26185*(-1.*t26094*t26177*t26273 + t26342 + t26386))*var2[1] + (t22628*t26177*(t22628*t26273 + t26333) + t26094*(t26094*t26177*t26273 - 1.*t26185*t26280 + t26336))*var2[2];
  p_output1[6]=(-0.1575*t26177 - 0.2255*t26194)*var2[0] + (t26185*(-1.*t26185*t26271 + t26381) + t26194*(t26177*t26271 + t26386))*var2[1] + 0.068*t26185*var2[2];
  p_output1[7]=(0.325*t26175 - 1.*t26162*t26260 - 1.*t26175*t26269)*var2[0] + (-0.325*t26162 - 1.*t26175*t26260 + t26162*t26269)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
