/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:45 GMT+02:00
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
  double t8659;
  double t8653;
  double t8718;
  double t9489;
  double t9474;
  double t9476;
  double t12785;
  double t627;
  double t9488;
  double t22664;
  double t22682;
  double t8737;
  double t22705;
  double t22932;
  double t22937;
  double t22703;
  double t26222;
  double t26228;
  double t23006;
  double t23009;
  double t23016;
  double t26153;
  double t26190;
  double t26200;
  double t26201;
  double t26203;
  double t26208;
  double t26233;
  double t26235;
  double t26236;
  double t26240;
  double t26241;
  double t26242;
  double t26244;
  double t26245;
  double t26246;
  double t26250;
  double t26289;
  double t26293;
  double t26299;
  double t26301;
  double t26302;
  double t22683;
  double t23018;
  double t23095;
  double t26329;
  double t26330;
  double t26331;
  double t26334;
  double t26335;
  double t26337;
  double t26338;
  double t26339;
  double t26340;
  double t8657;
  double t9017;
  double t9200;
  double t26328;
  double t26332;
  double t26341;
  double t26343;
  double t26348;
  double t26349;
  double t26350;
  double t26351;
  double t26352;
  double t26354;
  double t26323;
  double t26325;
  double t26326;
  double t26327;
  double t26344;
  double t26345;
  double t26359;
  double t26360;
  double t26361;
  double t26363;
  double t26364;
  double t26365;
  double t26347;
  double t26355;
  double t26357;
  double t26362;
  double t26366;
  double t26367;
  double t26369;
  double t26370;
  double t26371;
  double t23218;
  double t26210;
  double t26211;
  double t26358;
  double t26375;
  double t26383;
  double t26389;
  double t26396;
  double t26401;
  double t26429;
  double t26433;
  double t26409;
  double t26413;
  double t26423;
  double t26419;
  double t26463;
  double t26458;
  t8659 = Cos(var1[15]);
  t8653 = Sin(var1[4]);
  t8718 = Cos(var1[4]);
  t9489 = Cos(var1[16]);
  t9474 = Cos(var1[17]);
  t9476 = Sin(var1[16]);
  t12785 = Sin(var1[17]);
  t627 = Sin(var1[15]);
  t9488 = t9474*t9476;
  t22664 = -1.*t9489*t12785;
  t22682 = t9488 + t22664;
  t8737 = Sin(var1[5]);
  t22705 = t9489*t9474;
  t22932 = t9476*t12785;
  t22937 = t22705 + t22932;
  t22703 = Cos(var1[5]);
  t26222 = Cos(var1[3]);
  t26228 = Sin(var1[3]);
  t23006 = t22703*t22937;
  t23009 = t627*t22682*t8737;
  t23016 = t23006 + t23009;
  t26153 = -1.*t9474*t9476;
  t26190 = t9489*t12785;
  t26200 = t26153 + t26190;
  t26201 = t22703*t26200;
  t26203 = t627*t22937*t8737;
  t26208 = t26201 + t26203;
  t26233 = t8718*t627;
  t26235 = t8659*t8653*t8737;
  t26236 = t26233 + t26235;
  t26240 = -1.*t22703*t627*t22682;
  t26241 = t22937*t8737;
  t26242 = t26240 + t26241;
  t26244 = t8659*t8718*t22682;
  t26245 = -1.*t8653*t23016;
  t26246 = t26244 + t26245;
  t26250 = -1.*t22703*t627*t22937;
  t26289 = t26200*t8737;
  t26293 = t26250 + t26289;
  t26299 = t8659*t8718*t22937;
  t26301 = -1.*t8653*t26208;
  t26302 = t26299 + t26301;
  t22683 = t8659*t22682*t8653;
  t23018 = t8718*t23016;
  t23095 = t22683 + t23018;
  t26329 = -0.0641*t9474;
  t26330 = -0.28*t12785;
  t26331 = t26329 + t26330;
  t26334 = -1.*t9474;
  t26335 = 1. + t26334;
  t26337 = -0.575*t26335;
  t26338 = -0.295*t9474;
  t26339 = -0.0641*t12785;
  t26340 = t26337 + t26338 + t26339;
  t8657 = t627*t8653;
  t9017 = -1.*t8659*t8718*t8737;
  t9200 = t8657 + t9017;
  t26328 = 0.325*t9476;
  t26332 = t9489*t26331;
  t26341 = t9476*t26340;
  t26343 = t26328 + t26332 + t26341;
  t26348 = -1.*t9489;
  t26349 = 1. + t26348;
  t26350 = -0.325*t26349;
  t26351 = -1.*t9476*t26331;
  t26352 = t9489*t26340;
  t26354 = t26350 + t26351 + t26352;
  t26323 = -1.*t8659;
  t26325 = 1. + t26323;
  t26326 = -0.1575*t26325;
  t26327 = -0.2255*t8659;
  t26344 = -1.*t627*t26343;
  t26345 = t26326 + t26327 + t26344;
  t26359 = -0.068*t627;
  t26360 = t8659*t26343;
  t26361 = t26359 + t26360;
  t26363 = t22703*t26354;
  t26364 = -1.*t26345*t8737;
  t26365 = t26363 + t26364;
  t26347 = t22703*t26345;
  t26355 = t26354*t8737;
  t26357 = t26347 + t26355;
  t26362 = t26361*t8653;
  t26366 = t8718*t26365;
  t26367 = t26362 + t26366;
  t26369 = t8718*t26361;
  t26370 = -1.*t8653*t26365;
  t26371 = t26369 + t26370;
  t23218 = t8659*t22937*t8653;
  t26210 = t8718*t26208;
  t26211 = t23218 + t26210;
  t26358 = t8659*t22703*t26357;
  t26375 = -1.*t26357*t26242;
  t26383 = t26357*t26242;
  t26389 = -1.*t26357*t26293;
  t26396 = -1.*t8659*t22703*t26357;
  t26401 = t26357*t26293;
  t26429 = -1.*t627*t26361;
  t26433 = t8659*t26361*t22937;
  t26409 = t627*t26361;
  t26413 = -1.*t8659*t26361*t22682;
  t26423 = -1.*t8659*t26361*t22937;
  t26419 = t8659*t26361*t22682;
  t26463 = t26354*t22937;
  t26458 = -1.*t26354*t26200;
  p_output1[0]=t23095*var2[0] + t9200*var2[1] + t26211*var2[2];
  p_output1[1]=(t26222*t26242 - 1.*t26228*t26246)*var2[0] + (-1.*t26228*t26236 + t22703*t26222*t8659)*var2[1] + (t26222*t26293 - 1.*t26228*t26302)*var2[2];
  p_output1[2]=(t26228*t26242 + t26222*t26246)*var2[0] + (t26222*t26236 + t22703*t26228*t8659)*var2[1] + (t26228*t26293 + t26222*t26302)*var2[2];
  p_output1[3]=((t26211*t26367 + t26302*t26371 + t26401)*t9200 + t26211*(-1.*t26236*t26371 + t26396 - 1.*t26367*t9200))*var2[0] + (t26211*(t23095*t26367 + t26246*t26371 + t26383) + t23095*(-1.*t26211*t26367 - 1.*t26302*t26371 + t26389))*var2[1] + ((-1.*t23095*t26367 - 1.*t26246*t26371 + t26375)*t9200 + t23095*(t26358 + t26236*t26371 + t26367*t9200))*var2[2];
  p_output1[4]=(t22703*(t26208*t26365 + t26401 + t26433)*t8659 + t26293*(t26396 + t26429 + t26365*t8659*t8737))*var2[0] + (t26293*(t23016*t26365 + t26383 + t26419) + t26242*(-1.*t26208*t26365 + t26389 + t26423))*var2[1] + (t22703*(-1.*t23016*t26365 + t26375 + t26413)*t8659 + t26242*(t26358 + t26409 - 1.*t26365*t8659*t8737))*var2[2];
  p_output1[5]=(t627*(t26200*t26354 + t26433 - 1.*t22937*t26345*t627) + t22937*t8659*(t26429 - 1.*t26345*t8659))*var2[0] + (t22937*(t26419 + t26463 - 1.*t22682*t26345*t627)*t8659 + t22682*(t26423 + t26458 + t22937*t26345*t627)*t8659)*var2[1] + (t627*(-1.*t22937*t26354 + t26413 + t22682*t26345*t627) + t22682*t8659*(t26409 + t26345*t8659))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t22682 + 0.2255*t26200)*var2[0] + (t22937*(-1.*t22937*t26343 + t26458) + t26200*(t22682*t26343 + t26463))*var2[1] - 0.068*t22937*var2[2];
  p_output1[16]=(-0.325*t12785 - 1.*t12785*t26340 - 1.*t26331*t9474)*var2[0] + (-1.*t12785*t26331 + 0.325*t9474 + t26340*t9474)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
