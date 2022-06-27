/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:19 GMT+02:00
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
  double t6444;
  double t6442;
  double t6445;
  double t6526;
  double t6516;
  double t6521;
  double t6527;
  double t6437;
  double t6525;
  double t6528;
  double t6530;
  double t6446;
  double t6534;
  double t6535;
  double t6536;
  double t6532;
  double t6554;
  double t6556;
  double t6537;
  double t6538;
  double t6539;
  double t6544;
  double t6545;
  double t6546;
  double t6547;
  double t6548;
  double t6549;
  double t6557;
  double t6558;
  double t6560;
  double t6565;
  double t6566;
  double t6567;
  double t6569;
  double t6571;
  double t6572;
  double t6577;
  double t6578;
  double t6580;
  double t6582;
  double t6583;
  double t6585;
  double t6531;
  double t6540;
  double t6541;
  double t6610;
  double t6611;
  double t6613;
  double t6615;
  double t6617;
  double t6618;
  double t6619;
  double t6620;
  double t6621;
  double t6443;
  double t6505;
  double t6514;
  double t6609;
  double t6614;
  double t6622;
  double t6623;
  double t6627;
  double t6628;
  double t6629;
  double t6630;
  double t6631;
  double t6632;
  double t6604;
  double t6605;
  double t6607;
  double t6608;
  double t6624;
  double t6625;
  double t6636;
  double t6637;
  double t6638;
  double t6640;
  double t6641;
  double t6642;
  double t6626;
  double t6633;
  double t6634;
  double t6639;
  double t6643;
  double t6644;
  double t6646;
  double t6647;
  double t6648;
  double t6543;
  double t6550;
  double t6551;
  double t6635;
  double t6652;
  double t6659;
  double t6664;
  double t6671;
  double t6676;
  double t6704;
  double t6708;
  double t6684;
  double t6688;
  double t6698;
  double t6694;
  double t6738;
  double t6733;
  t6444 = Cos(var1[12]);
  t6442 = Sin(var1[4]);
  t6445 = Cos(var1[4]);
  t6526 = Cos(var1[13]);
  t6516 = Cos(var1[14]);
  t6521 = Sin(var1[13]);
  t6527 = Sin(var1[14]);
  t6437 = Sin(var1[12]);
  t6525 = t6516*t6521;
  t6528 = -1.*t6526*t6527;
  t6530 = t6525 + t6528;
  t6446 = Sin(var1[5]);
  t6534 = t6526*t6516;
  t6535 = t6521*t6527;
  t6536 = t6534 + t6535;
  t6532 = Cos(var1[5]);
  t6554 = Cos(var1[3]);
  t6556 = Sin(var1[3]);
  t6537 = t6532*t6536;
  t6538 = t6437*t6530*t6446;
  t6539 = t6537 + t6538;
  t6544 = -1.*t6516*t6521;
  t6545 = t6526*t6527;
  t6546 = t6544 + t6545;
  t6547 = t6532*t6546;
  t6548 = t6437*t6536*t6446;
  t6549 = t6547 + t6548;
  t6557 = t6445*t6437;
  t6558 = t6444*t6442*t6446;
  t6560 = t6557 + t6558;
  t6565 = -1.*t6532*t6437*t6530;
  t6566 = t6536*t6446;
  t6567 = t6565 + t6566;
  t6569 = t6444*t6445*t6530;
  t6571 = -1.*t6442*t6539;
  t6572 = t6569 + t6571;
  t6577 = -1.*t6532*t6437*t6536;
  t6578 = t6546*t6446;
  t6580 = t6577 + t6578;
  t6582 = t6444*t6445*t6536;
  t6583 = -1.*t6442*t6549;
  t6585 = t6582 + t6583;
  t6531 = t6444*t6530*t6442;
  t6540 = t6445*t6539;
  t6541 = t6531 + t6540;
  t6610 = -0.0641*t6516;
  t6611 = -0.28*t6527;
  t6613 = t6610 + t6611;
  t6615 = -1.*t6516;
  t6617 = 1. + t6615;
  t6618 = 0.075*t6617;
  t6619 = 0.355*t6516;
  t6620 = -0.0641*t6527;
  t6621 = t6618 + t6619 + t6620;
  t6443 = t6437*t6442;
  t6505 = -1.*t6444*t6445*t6446;
  t6514 = t6443 + t6505;
  t6609 = -0.325*t6521;
  t6614 = t6526*t6613;
  t6622 = t6521*t6621;
  t6623 = t6609 + t6614 + t6622;
  t6627 = -1.*t6526;
  t6628 = 1. + t6627;
  t6629 = 0.325*t6628;
  t6630 = -1.*t6521*t6613;
  t6631 = t6526*t6621;
  t6632 = t6629 + t6630 + t6631;
  t6604 = -1.*t6444;
  t6605 = 1. + t6604;
  t6607 = -0.1575*t6605;
  t6608 = -0.2255*t6444;
  t6624 = -1.*t6437*t6623;
  t6625 = t6607 + t6608 + t6624;
  t6636 = -0.068*t6437;
  t6637 = t6444*t6623;
  t6638 = t6636 + t6637;
  t6640 = t6532*t6632;
  t6641 = -1.*t6625*t6446;
  t6642 = t6640 + t6641;
  t6626 = t6532*t6625;
  t6633 = t6632*t6446;
  t6634 = t6626 + t6633;
  t6639 = t6638*t6442;
  t6643 = t6445*t6642;
  t6644 = t6639 + t6643;
  t6646 = t6445*t6638;
  t6647 = -1.*t6442*t6642;
  t6648 = t6646 + t6647;
  t6543 = t6444*t6536*t6442;
  t6550 = t6445*t6549;
  t6551 = t6543 + t6550;
  t6635 = t6444*t6532*t6634;
  t6652 = -1.*t6634*t6567;
  t6659 = t6634*t6567;
  t6664 = -1.*t6634*t6580;
  t6671 = -1.*t6444*t6532*t6634;
  t6676 = t6634*t6580;
  t6704 = -1.*t6437*t6638;
  t6708 = t6444*t6638*t6536;
  t6684 = t6437*t6638;
  t6688 = -1.*t6444*t6638*t6530;
  t6698 = -1.*t6444*t6638*t6536;
  t6694 = t6444*t6638*t6530;
  t6738 = t6632*t6536;
  t6733 = -1.*t6632*t6546;
  p_output1[0]=t6541*var2[0] + t6514*var2[1] + t6551*var2[2];
  p_output1[1]=(t6554*t6567 - 1.*t6556*t6572)*var2[0] + (t6444*t6532*t6554 - 1.*t6556*t6560)*var2[1] + (t6554*t6580 - 1.*t6556*t6585)*var2[2];
  p_output1[2]=(t6556*t6567 + t6554*t6572)*var2[0] + (t6444*t6532*t6556 + t6554*t6560)*var2[1] + (t6556*t6580 + t6554*t6585)*var2[2];
  p_output1[3]=(t6551*(-1.*t6514*t6644 - 1.*t6560*t6648 + t6671) + t6514*(t6551*t6644 + t6585*t6648 + t6676))*var2[0] + (t6551*(t6541*t6644 + t6572*t6648 + t6659) + t6541*(-1.*t6551*t6644 - 1.*t6585*t6648 + t6664))*var2[1] + (t6541*(t6635 + t6514*t6644 + t6560*t6648) + t6514*(-1.*t6541*t6644 - 1.*t6572*t6648 + t6652))*var2[2];
  p_output1[4]=(t6580*(t6444*t6446*t6642 + t6671 + t6704) + t6444*t6532*(t6549*t6642 + t6676 + t6708))*var2[0] + (t6580*(t6539*t6642 + t6659 + t6694) + t6567*(-1.*t6549*t6642 + t6664 + t6698))*var2[1] + (t6567*(t6635 - 1.*t6444*t6446*t6642 + t6684) + t6444*t6532*(-1.*t6539*t6642 + t6652 + t6688))*var2[2];
  p_output1[5]=(t6444*t6536*(-1.*t6444*t6625 + t6704) + t6437*(-1.*t6437*t6536*t6625 + t6546*t6632 + t6708))*var2[0] + (t6444*t6530*(t6437*t6536*t6625 + t6698 + t6733) + t6444*t6536*(-1.*t6437*t6530*t6625 + t6694 + t6738))*var2[1] + (t6444*t6530*(t6444*t6625 + t6684) + t6437*(t6437*t6530*t6625 - 1.*t6536*t6632 + t6688))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t6530 + 0.2255*t6546)*var2[0] + (t6536*(-1.*t6536*t6623 + t6733) + t6546*(t6530*t6623 + t6738))*var2[1] - 0.068*t6536*var2[2];
  p_output1[13]=(0.325*t6527 - 1.*t6516*t6613 - 1.*t6527*t6621)*var2[0] + (-0.325*t6516 - 1.*t6527*t6613 + t6516*t6621)*var2[2];
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
