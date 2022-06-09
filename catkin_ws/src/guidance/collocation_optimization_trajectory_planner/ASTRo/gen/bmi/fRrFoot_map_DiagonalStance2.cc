/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:58 GMT+02:00
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
  double t6381;
  double t6336;
  double t6379;
  double t6388;
  double t6542;
  double t6543;
  double t6544;
  double t6541;
  double t6546;
  double t6536;
  double t6547;
  double t6524;
  double t6380;
  double t6389;
  double t6513;
  double t6522;
  double t6545;
  double t6548;
  double t6549;
  double t6557;
  double t6553;
  double t6554;
  double t6555;
  double t6552;
  double t6558;
  double t6559;
  double t6560;
  double t6583;
  double t6584;
  double t6586;
  double t6589;
  double t6590;
  double t6591;
  double t6592;
  double t6593;
  double t6594;
  double t6596;
  double t6597;
  double t6598;
  double t6600;
  double t6601;
  double t6605;
  double t6606;
  double t6587;
  double t6588;
  double t6602;
  double t6603;
  double t6610;
  double t6611;
  double t6612;
  double t6613;
  double t6625;
  double t6632;
  double t6636;
  double t6642;
  double t6643;
  double t6644;
  double t6604;
  double t6607;
  double t6608;
  double t6566;
  double t6567;
  double t6570;
  double t6571;
  double t6573;
  double t6574;
  double t6576;
  double t6577;
  double t6578;
  double t6640;
  double t6645;
  double t6646;
  double t6659;
  double t6660;
  double t6661;
  double t6668;
  double t6669;
  double t6670;
  double t6579;
  double t6580;
  double t6582;
  double t6609;
  double t6674;
  double t6523;
  double t6550;
  double t6551;
  double t6679;
  double t6680;
  double t6681;
  double t6724;
  double t6733;
  double t6741;
  double t6745;
  double t6776;
  double t6783;
  t6381 = Cos(var1[16]);
  t6336 = Cos(var1[17]);
  t6379 = Sin(var1[16]);
  t6388 = Sin(var1[17]);
  t6542 = -1.*t6381*t6336;
  t6543 = -1.*t6379*t6388;
  t6544 = t6542 + t6543;
  t6541 = Cos(var1[5]);
  t6546 = Sin(var1[15]);
  t6536 = Cos(var1[15]);
  t6547 = Sin(var1[5]);
  t6524 = Cos(var1[4]);
  t6380 = -1.*t6336*t6379;
  t6389 = t6381*t6388;
  t6513 = t6380 + t6389;
  t6522 = Sin(var1[4]);
  t6545 = t6536*t6541*t6544;
  t6548 = -1.*t6546*t6544*t6547;
  t6549 = t6545 + t6548;
  t6557 = Sin(var1[3]);
  t6553 = t6541*t6546*t6544;
  t6554 = t6536*t6544*t6547;
  t6555 = t6553 + t6554;
  t6552 = Cos(var1[3]);
  t6558 = t6524*t6513;
  t6559 = -1.*t6522*t6549;
  t6560 = t6558 + t6559;
  t6583 = -1.*t6536;
  t6584 = 1. + t6583;
  t6586 = -0.15121*t6584;
  t6589 = -1.*t6381;
  t6590 = 1. + t6589;
  t6591 = -0.28121*t6590;
  t6592 = -1.*t6336;
  t6593 = 1. + t6592;
  t6594 = -0.50321*t6593;
  t6596 = -0.19821*t6336;
  t6597 = t6594 + t6596;
  t6598 = t6381*t6597;
  t6600 = 0.305*t6379*t6388;
  t6601 = t6591 + t6598 + t6600;
  t6605 = t6536*t6601;
  t6606 = t6586 + t6605;
  t6587 = -0.15121*t6536;
  t6588 = 0.15121*t6546;
  t6602 = t6546*t6601;
  t6603 = t6586 + t6587 + t6588 + t6602;
  t6610 = t6541*t6546;
  t6611 = t6536*t6547;
  t6612 = t6610 + t6611;
  t6613 = 0.28121*t6379;
  t6625 = t6597*t6379;
  t6632 = -0.305*t6381*t6388;
  t6636 = t6613 + t6625 + t6632;
  t6642 = t6541*t6606;
  t6643 = -1.*t6603*t6547;
  t6644 = t6642 + t6643;
  t6604 = t6541*t6603;
  t6607 = t6606*t6547;
  t6608 = t6604 + t6607;
  t6566 = t6381*t6336;
  t6567 = t6379*t6388;
  t6570 = t6566 + t6567;
  t6571 = t6570*t6522;
  t6573 = t6536*t6541*t6513;
  t6574 = -1.*t6546*t6513*t6547;
  t6576 = t6573 + t6574;
  t6577 = t6524*t6576;
  t6578 = t6571 + t6577;
  t6640 = t6636*t6522;
  t6645 = t6524*t6644;
  t6646 = t6640 + t6645;
  t6659 = t6524*t6636;
  t6660 = -1.*t6522*t6644;
  t6661 = t6659 + t6660;
  t6668 = t6541*t6546*t6513;
  t6669 = t6536*t6513*t6547;
  t6670 = t6668 + t6669;
  t6579 = -1.*t6536*t6541;
  t6580 = t6546*t6547;
  t6582 = t6579 + t6580;
  t6609 = -1.*t6582*t6608;
  t6674 = t6670*t6608;
  t6523 = t6513*t6522;
  t6550 = t6524*t6549;
  t6551 = t6523 + t6550;
  t6679 = t6524*t6570;
  t6680 = -1.*t6522*t6576;
  t6681 = t6679 + t6680;
  t6724 = -1.*t6670*t6608;
  t6733 = t6555*t6608;
  t6741 = -1.*t6636*t6570;
  t6745 = t6636*t6513;
  t6776 = t6582*t6608;
  t6783 = -1.*t6555*t6608;
  p_output1[0]=t6551;
  p_output1[1]=t6552*t6555 - 1.*t6557*t6560;
  p_output1[2]=t6555*t6557 + t6552*t6560;
  p_output1[3]=t6578*(t6609 - 1.*t6524*t6612*t6646 + t6522*t6612*t6661) + t6524*t6612*(t6578*t6646 + t6674 + t6661*t6681);
  p_output1[4]=(t6609 - 1.*t6612*t6644)*t6670 + t6582*(t6570*t6636 + t6576*t6644 + t6674);
  p_output1[5]=t6570*(t6536*t6603 - 1.*t6546*t6606);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t6544 - 0.15121*t6570;
  p_output1[16]=0.28121*t6388 - 0.305*t6336*t6388 + t6388*t6597;
  p_output1[17]=0;
  p_output1[18]=t6524*t6612;
  p_output1[19]=t6552*t6582 + t6522*t6557*t6612;
  p_output1[20]=t6557*t6582 - 1.*t6522*t6552*t6612;
  p_output1[21]=t6551*(-1.*t6578*t6646 - 1.*t6661*t6681 + t6724) + t6578*(t6551*t6646 + t6560*t6661 + t6733);
  p_output1[22]=t6555*(-1.*t6576*t6644 + t6724 + t6741) + t6670*(t6549*t6644 + t6733 + t6745);
  p_output1[23]=t6513*(-1.*t6513*t6546*t6603 - 1.*t6513*t6536*t6606 + t6741) + t6570*(t6544*t6546*t6603 + t6536*t6544*t6606 + t6745);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t6513*(-1.*t6513*t6601 + t6741) + t6570*(t6544*t6601 + t6745);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6578;
  p_output1[37]=t6552*t6670 - 1.*t6557*t6681;
  p_output1[38]=t6557*t6670 + t6552*t6681;
  p_output1[39]=t6551*(t6524*t6612*t6646 - 1.*t6522*t6612*t6661 + t6776) + t6524*t6612*(-1.*t6551*t6646 - 1.*t6560*t6661 + t6783);
  p_output1[40]=t6555*(t6612*t6644 + t6776) + t6582*(-1.*t6513*t6636 - 1.*t6549*t6644 + t6783);
  p_output1[41]=t6513*(-1.*t6536*t6603 + t6546*t6606);
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
  p_output1[52]=0.28121*t6336 + 0.305*Power(t6388,2) + t6336*t6597;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
