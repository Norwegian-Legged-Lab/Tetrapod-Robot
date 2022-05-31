/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:44 GMT+02:00
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
  double t9803;
  double t7759;
  double t7799;
  double t12694;
  double t13972;
  double t14357;
  double t14422;
  double t13954;
  double t14477;
  double t13949;
  double t14489;
  double t13946;
  double t9798;
  double t12754;
  double t13147;
  double t13935;
  double t14425;
  double t14508;
  double t14509;
  double t16036;
  double t14525;
  double t16017;
  double t16028;
  double t14519;
  double t16041;
  double t16042;
  double t16043;
  double t16294;
  double t16297;
  double t16305;
  double t16307;
  double t16308;
  double t16309;
  double t16329;
  double t16333;
  double t16334;
  double t16335;
  double t16336;
  double t16348;
  double t16349;
  double t16358;
  double t16359;
  double t16370;
  double t16298;
  double t16303;
  double t16304;
  double t16350;
  double t16355;
  double t16374;
  double t16375;
  double t16376;
  double t16377;
  double t16378;
  double t16379;
  double t16382;
  double t16394;
  double t16395;
  double t16397;
  double t16357;
  double t16371;
  double t16372;
  double t16201;
  double t16209;
  double t16210;
  double t16220;
  double t16221;
  double t16222;
  double t16270;
  double t16274;
  double t16275;
  double t16392;
  double t16401;
  double t16403;
  double t16411;
  double t16412;
  double t16437;
  double t16460;
  double t16461;
  double t16467;
  double t16287;
  double t16288;
  double t16289;
  double t16373;
  double t16468;
  double t13945;
  double t14512;
  double t14518;
  double t16475;
  double t16478;
  double t16479;
  double t16594;
  double t16607;
  double t16617;
  double t16622;
  double t16663;
  double t16668;
  t9803 = Cos(var1[10]);
  t7759 = Cos(var1[11]);
  t7799 = Sin(var1[10]);
  t12694 = Sin(var1[11]);
  t13972 = -1.*t9803*t7759;
  t14357 = -1.*t7799*t12694;
  t14422 = t13972 + t14357;
  t13954 = Cos(var1[5]);
  t14477 = Sin(var1[9]);
  t13949 = Cos(var1[9]);
  t14489 = Sin(var1[5]);
  t13946 = Cos(var1[4]);
  t9798 = -1.*t7759*t7799;
  t12754 = t9803*t12694;
  t13147 = t9798 + t12754;
  t13935 = Sin(var1[4]);
  t14425 = t13949*t13954*t14422;
  t14508 = -1.*t14477*t14422*t14489;
  t14509 = t14425 + t14508;
  t16036 = Sin(var1[3]);
  t14525 = t13954*t14477*t14422;
  t16017 = t13949*t14422*t14489;
  t16028 = t14525 + t16017;
  t14519 = Cos(var1[3]);
  t16041 = t13946*t13147;
  t16042 = -1.*t13935*t14509;
  t16043 = t16041 + t16042;
  t16294 = -1.*t13949;
  t16297 = 1. + t16294;
  t16305 = -1.*t9803;
  t16307 = 1. + t16305;
  t16308 = -0.28121*t16307;
  t16309 = -1.*t7759;
  t16329 = 1. + t16309;
  t16333 = -0.50321*t16329;
  t16334 = -0.23321*t7759;
  t16335 = t16333 + t16334;
  t16336 = t9803*t16335;
  t16348 = 0.27*t7799*t12694;
  t16349 = t16308 + t16336 + t16348;
  t16358 = -0.15121*t16297;
  t16359 = t13949*t16349;
  t16370 = t16358 + t16359;
  t16298 = 0.15121*t16297;
  t16303 = 0.15121*t13949;
  t16304 = 0.15121*t14477;
  t16350 = t14477*t16349;
  t16355 = t16298 + t16303 + t16304 + t16350;
  t16374 = t13954*t14477;
  t16375 = t13949*t14489;
  t16376 = t16374 + t16375;
  t16377 = 0.28121*t7799;
  t16378 = t16335*t7799;
  t16379 = -0.27*t9803*t12694;
  t16382 = t16377 + t16378 + t16379;
  t16394 = t13954*t16370;
  t16395 = -1.*t16355*t14489;
  t16397 = t16394 + t16395;
  t16357 = t13954*t16355;
  t16371 = t16370*t14489;
  t16372 = t16357 + t16371;
  t16201 = t9803*t7759;
  t16209 = t7799*t12694;
  t16210 = t16201 + t16209;
  t16220 = t16210*t13935;
  t16221 = t13949*t13954*t13147;
  t16222 = -1.*t14477*t13147*t14489;
  t16270 = t16221 + t16222;
  t16274 = t13946*t16270;
  t16275 = t16220 + t16274;
  t16392 = t16382*t13935;
  t16401 = t13946*t16397;
  t16403 = t16392 + t16401;
  t16411 = t13946*t16382;
  t16412 = -1.*t13935*t16397;
  t16437 = t16411 + t16412;
  t16460 = t13954*t14477*t13147;
  t16461 = t13949*t13147*t14489;
  t16467 = t16460 + t16461;
  t16287 = -1.*t13949*t13954;
  t16288 = t14477*t14489;
  t16289 = t16287 + t16288;
  t16373 = -1.*t16289*t16372;
  t16468 = t16467*t16372;
  t13945 = t13147*t13935;
  t14512 = t13946*t14509;
  t14518 = t13945 + t14512;
  t16475 = t13946*t16210;
  t16478 = -1.*t13935*t16270;
  t16479 = t16475 + t16478;
  t16594 = -1.*t16467*t16372;
  t16607 = t16028*t16372;
  t16617 = -1.*t16382*t16210;
  t16622 = t16382*t13147;
  t16663 = t16289*t16372;
  t16668 = -1.*t16028*t16372;
  p_output1[0]=t14518;
  p_output1[1]=t14519*t16028 - 1.*t16036*t16043;
  p_output1[2]=t16028*t16036 + t14519*t16043;
  p_output1[3]=t16275*(t16373 - 1.*t13946*t16376*t16403 + t13935*t16376*t16437) + t13946*t16376*(t16275*t16403 + t16468 + t16437*t16479);
  p_output1[4]=(t16373 - 1.*t16376*t16397)*t16467 + t16289*(t16210*t16382 + t16270*t16397 + t16468);
  p_output1[5]=t16210*(t13949*t16355 - 1.*t14477*t16370);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t14422 + 0.15121*t16210;
  p_output1[10]=0.28121*t12694 + t12694*t16335 - 0.27*t12694*t7759;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13946*t16376;
  p_output1[19]=t14519*t16289 + t13935*t16036*t16376;
  p_output1[20]=t16036*t16289 - 1.*t13935*t14519*t16376;
  p_output1[21]=t14518*(-1.*t16275*t16403 - 1.*t16437*t16479 + t16594) + t16275*(t14518*t16403 + t16043*t16437 + t16607);
  p_output1[22]=t16028*(-1.*t16270*t16397 + t16594 + t16617) + t16467*(t14509*t16397 + t16607 + t16622);
  p_output1[23]=t13147*(-1.*t13147*t14477*t16355 - 1.*t13147*t13949*t16370 + t16617) + t16210*(t14422*t14477*t16355 + t13949*t14422*t16370 + t16622);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t13147*(-1.*t13147*t16349 + t16617) + t16210*(t14422*t16349 + t16622);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16275;
  p_output1[37]=t14519*t16467 - 1.*t16036*t16479;
  p_output1[38]=t16036*t16467 + t14519*t16479;
  p_output1[39]=t14518*(t13946*t16376*t16403 - 1.*t13935*t16376*t16437 + t16663) + t13946*t16376*(-1.*t14518*t16403 - 1.*t16043*t16437 + t16668);
  p_output1[40]=t16028*(t16376*t16397 + t16663) + t16289*(-1.*t13147*t16382 - 1.*t14509*t16397 + t16668);
  p_output1[41]=t13147*(-1.*t13949*t16355 + t14477*t16370);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.27*Power(t12694,2) + 0.28121*t7759 + t16335*t7759;
  p_output1[47]=-0.27;
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

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
