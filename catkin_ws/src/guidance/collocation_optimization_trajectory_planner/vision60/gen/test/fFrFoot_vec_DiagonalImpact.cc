/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:46 GMT+02:00
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
  double t26942;
  double t24343;
  double t26943;
  double t27429;
  double t27402;
  double t27405;
  double t27440;
  double t11945;
  double t27407;
  double t27451;
  double t27455;
  double t27157;
  double t27552;
  double t27584;
  double t27590;
  double t27548;
  double t27680;
  double t30339;
  double t27591;
  double t27622;
  double t27625;
  double t27642;
  double t27643;
  double t27645;
  double t27650;
  double t27654;
  double t27659;
  double t30344;
  double t30345;
  double t30346;
  double t30415;
  double t30417;
  double t30418;
  double t30427;
  double t30428;
  double t30429;
  double t30434;
  double t30436;
  double t30437;
  double t30439;
  double t30440;
  double t30441;
  double t27521;
  double t27627;
  double t27632;
  double t30465;
  double t30467;
  double t30468;
  double t30470;
  double t30471;
  double t30473;
  double t30474;
  double t30475;
  double t30477;
  double t26914;
  double t27167;
  double t27174;
  double t30464;
  double t30469;
  double t30478;
  double t30479;
  double t30484;
  double t30485;
  double t30487;
  double t30488;
  double t30489;
  double t30490;
  double t30459;
  double t30460;
  double t30462;
  double t30463;
  double t30480;
  double t30482;
  double t30494;
  double t30495;
  double t30496;
  double t30498;
  double t30499;
  double t30500;
  double t30483;
  double t30491;
  double t30492;
  double t30497;
  double t30501;
  double t30502;
  double t30505;
  double t30506;
  double t30507;
  double t27638;
  double t27661;
  double t27665;
  double t30493;
  double t30512;
  double t30521;
  double t30526;
  double t30533;
  double t30538;
  double t30566;
  double t30570;
  double t30546;
  double t30550;
  double t30560;
  double t30556;
  double t30600;
  double t30595;
  t26942 = Cos(var1[12]);
  t24343 = Sin(var1[4]);
  t26943 = Cos(var1[4]);
  t27429 = Cos(var1[13]);
  t27402 = Cos(var1[14]);
  t27405 = Sin(var1[13]);
  t27440 = Sin(var1[14]);
  t11945 = Sin(var1[12]);
  t27407 = t27402*t27405;
  t27451 = -1.*t27429*t27440;
  t27455 = t27407 + t27451;
  t27157 = Sin(var1[5]);
  t27552 = t27429*t27402;
  t27584 = t27405*t27440;
  t27590 = t27552 + t27584;
  t27548 = Cos(var1[5]);
  t27680 = Cos(var1[3]);
  t30339 = Sin(var1[3]);
  t27591 = t27548*t27590;
  t27622 = t11945*t27455*t27157;
  t27625 = t27591 + t27622;
  t27642 = -1.*t27402*t27405;
  t27643 = t27429*t27440;
  t27645 = t27642 + t27643;
  t27650 = t27548*t27645;
  t27654 = t11945*t27590*t27157;
  t27659 = t27650 + t27654;
  t30344 = t26943*t11945;
  t30345 = t26942*t24343*t27157;
  t30346 = t30344 + t30345;
  t30415 = -1.*t27548*t11945*t27455;
  t30417 = t27590*t27157;
  t30418 = t30415 + t30417;
  t30427 = t26942*t26943*t27455;
  t30428 = -1.*t24343*t27625;
  t30429 = t30427 + t30428;
  t30434 = -1.*t27548*t11945*t27590;
  t30436 = t27645*t27157;
  t30437 = t30434 + t30436;
  t30439 = t26942*t26943*t27590;
  t30440 = -1.*t24343*t27659;
  t30441 = t30439 + t30440;
  t27521 = t26942*t27455*t24343;
  t27627 = t26943*t27625;
  t27632 = t27521 + t27627;
  t30465 = -0.0641*t27402;
  t30467 = -0.28*t27440;
  t30468 = t30465 + t30467;
  t30470 = -1.*t27402;
  t30471 = 1. + t30470;
  t30473 = 0.075*t30471;
  t30474 = 0.355*t27402;
  t30475 = -0.0641*t27440;
  t30477 = t30473 + t30474 + t30475;
  t26914 = t11945*t24343;
  t27167 = -1.*t26942*t26943*t27157;
  t27174 = t26914 + t27167;
  t30464 = -0.325*t27405;
  t30469 = t27429*t30468;
  t30478 = t27405*t30477;
  t30479 = t30464 + t30469 + t30478;
  t30484 = -1.*t27429;
  t30485 = 1. + t30484;
  t30487 = 0.325*t30485;
  t30488 = -1.*t27405*t30468;
  t30489 = t27429*t30477;
  t30490 = t30487 + t30488 + t30489;
  t30459 = -1.*t26942;
  t30460 = 1. + t30459;
  t30462 = -0.1575*t30460;
  t30463 = -0.2255*t26942;
  t30480 = -1.*t11945*t30479;
  t30482 = t30462 + t30463 + t30480;
  t30494 = -0.068*t11945;
  t30495 = t26942*t30479;
  t30496 = t30494 + t30495;
  t30498 = t27548*t30490;
  t30499 = -1.*t30482*t27157;
  t30500 = t30498 + t30499;
  t30483 = t27548*t30482;
  t30491 = t30490*t27157;
  t30492 = t30483 + t30491;
  t30497 = t30496*t24343;
  t30501 = t26943*t30500;
  t30502 = t30497 + t30501;
  t30505 = t26943*t30496;
  t30506 = -1.*t24343*t30500;
  t30507 = t30505 + t30506;
  t27638 = t26942*t27590*t24343;
  t27661 = t26943*t27659;
  t27665 = t27638 + t27661;
  t30493 = t26942*t27548*t30492;
  t30512 = -1.*t30492*t30418;
  t30521 = t30492*t30418;
  t30526 = -1.*t30492*t30437;
  t30533 = -1.*t26942*t27548*t30492;
  t30538 = t30492*t30437;
  t30566 = -1.*t11945*t30496;
  t30570 = t26942*t30496*t27590;
  t30546 = t11945*t30496;
  t30550 = -1.*t26942*t30496*t27455;
  t30560 = -1.*t26942*t30496*t27590;
  t30556 = t26942*t30496*t27455;
  t30600 = t30490*t27590;
  t30595 = -1.*t30490*t27645;
  p_output1[0]=t27632*var2[0] + t27174*var2[1] + t27665*var2[2];
  p_output1[1]=(t27680*t30418 - 1.*t30339*t30429)*var2[0] + (t26942*t27548*t27680 - 1.*t30339*t30346)*var2[1] + (t27680*t30437 - 1.*t30339*t30441)*var2[2];
  p_output1[2]=(t30339*t30418 + t27680*t30429)*var2[0] + (t26942*t27548*t30339 + t27680*t30346)*var2[1] + (t30339*t30437 + t27680*t30441)*var2[2];
  p_output1[3]=(t27665*(-1.*t27174*t30502 - 1.*t30346*t30507 + t30533) + t27174*(t27665*t30502 + t30441*t30507 + t30538))*var2[0] + (t27665*(t27632*t30502 + t30429*t30507 + t30521) + t27632*(-1.*t27665*t30502 - 1.*t30441*t30507 + t30526))*var2[1] + (t27632*(t30493 + t27174*t30502 + t30346*t30507) + t27174*(-1.*t27632*t30502 - 1.*t30429*t30507 + t30512))*var2[2];
  p_output1[4]=(t30437*(t26942*t27157*t30500 + t30533 + t30566) + t26942*t27548*(t27659*t30500 + t30538 + t30570))*var2[0] + (t30437*(t27625*t30500 + t30521 + t30556) + t30418*(-1.*t27659*t30500 + t30526 + t30560))*var2[1] + (t30418*(t30493 - 1.*t26942*t27157*t30500 + t30546) + t26942*t27548*(-1.*t27625*t30500 + t30512 + t30550))*var2[2];
  p_output1[5]=(t26942*t27590*(-1.*t26942*t30482 + t30566) + t11945*(-1.*t11945*t27590*t30482 + t27645*t30490 + t30570))*var2[0] + (t26942*t27455*(t11945*t27590*t30482 + t30560 + t30595) + t26942*t27590*(-1.*t11945*t27455*t30482 + t30556 + t30600))*var2[1] + (t26942*t27455*(t26942*t30482 + t30546) + t11945*(t11945*t27455*t30482 - 1.*t27590*t30490 + t30550))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t27455 + 0.2255*t27645)*var2[0] + (t27590*(-1.*t27590*t30479 + t30595) + t27645*(t27455*t30479 + t30600))*var2[1] - 0.068*t27590*var2[2];
  p_output1[13]=(0.325*t27440 - 1.*t27402*t30468 - 1.*t27440*t30477)*var2[0] + (-0.325*t27402 - 1.*t27440*t30468 + t27402*t30477)*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
