/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:59 GMT+02:00
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
  double t9448;
  double t9437;
  double t9450;
  double t9476;
  double t9468;
  double t9470;
  double t9481;
  double t9410;
  double t9471;
  double t9482;
  double t9483;
  double t9456;
  double t9486;
  double t9487;
  double t9488;
  double t9485;
  double t9552;
  double t9555;
  double t9489;
  double t9490;
  double t9491;
  double t9497;
  double t9498;
  double t9536;
  double t9540;
  double t9545;
  double t9546;
  double t9556;
  double t9557;
  double t9558;
  double t9563;
  double t9564;
  double t9565;
  double t9567;
  double t9569;
  double t9570;
  double t9575;
  double t9576;
  double t9577;
  double t9579;
  double t9581;
  double t9582;
  double t9484;
  double t9492;
  double t9493;
  double t9610;
  double t9611;
  double t9612;
  double t9614;
  double t9615;
  double t9616;
  double t9617;
  double t9618;
  double t9619;
  double t9447;
  double t9457;
  double t9458;
  double t9609;
  double t9613;
  double t9620;
  double t9621;
  double t9625;
  double t9626;
  double t9627;
  double t9629;
  double t9630;
  double t9631;
  double t9605;
  double t9606;
  double t9607;
  double t9608;
  double t9622;
  double t9623;
  double t9636;
  double t9637;
  double t9638;
  double t9640;
  double t9641;
  double t9642;
  double t9624;
  double t9632;
  double t9634;
  double t9639;
  double t9643;
  double t9644;
  double t9646;
  double t9647;
  double t9648;
  double t9495;
  double t9548;
  double t9549;
  double t9635;
  double t9652;
  double t9659;
  double t9664;
  double t9671;
  double t9676;
  double t9704;
  double t9708;
  double t9684;
  double t9688;
  double t9698;
  double t9694;
  double t9738;
  double t9733;
  t9448 = Cos(var1[15]);
  t9437 = Sin(var1[4]);
  t9450 = Cos(var1[4]);
  t9476 = Cos(var1[16]);
  t9468 = Cos(var1[17]);
  t9470 = Sin(var1[16]);
  t9481 = Sin(var1[17]);
  t9410 = Sin(var1[15]);
  t9471 = t9468*t9470;
  t9482 = -1.*t9476*t9481;
  t9483 = t9471 + t9482;
  t9456 = Sin(var1[5]);
  t9486 = t9476*t9468;
  t9487 = t9470*t9481;
  t9488 = t9486 + t9487;
  t9485 = Cos(var1[5]);
  t9552 = Cos(var1[3]);
  t9555 = Sin(var1[3]);
  t9489 = t9485*t9488;
  t9490 = t9410*t9483*t9456;
  t9491 = t9489 + t9490;
  t9497 = -1.*t9468*t9470;
  t9498 = t9476*t9481;
  t9536 = t9497 + t9498;
  t9540 = t9485*t9536;
  t9545 = t9410*t9488*t9456;
  t9546 = t9540 + t9545;
  t9556 = t9450*t9410;
  t9557 = t9448*t9437*t9456;
  t9558 = t9556 + t9557;
  t9563 = -1.*t9485*t9410*t9483;
  t9564 = t9488*t9456;
  t9565 = t9563 + t9564;
  t9567 = t9448*t9450*t9483;
  t9569 = -1.*t9437*t9491;
  t9570 = t9567 + t9569;
  t9575 = -1.*t9485*t9410*t9488;
  t9576 = t9536*t9456;
  t9577 = t9575 + t9576;
  t9579 = t9448*t9450*t9488;
  t9581 = -1.*t9437*t9546;
  t9582 = t9579 + t9581;
  t9484 = t9448*t9483*t9437;
  t9492 = t9450*t9491;
  t9493 = t9484 + t9492;
  t9610 = -0.0641*t9468;
  t9611 = -0.28*t9481;
  t9612 = t9610 + t9611;
  t9614 = -1.*t9468;
  t9615 = 1. + t9614;
  t9616 = -0.575*t9615;
  t9617 = -0.295*t9468;
  t9618 = -0.0641*t9481;
  t9619 = t9616 + t9617 + t9618;
  t9447 = t9410*t9437;
  t9457 = -1.*t9448*t9450*t9456;
  t9458 = t9447 + t9457;
  t9609 = 0.325*t9470;
  t9613 = t9476*t9612;
  t9620 = t9470*t9619;
  t9621 = t9609 + t9613 + t9620;
  t9625 = -1.*t9476;
  t9626 = 1. + t9625;
  t9627 = -0.325*t9626;
  t9629 = -1.*t9470*t9612;
  t9630 = t9476*t9619;
  t9631 = t9627 + t9629 + t9630;
  t9605 = -1.*t9448;
  t9606 = 1. + t9605;
  t9607 = -0.1575*t9606;
  t9608 = -0.2255*t9448;
  t9622 = -1.*t9410*t9621;
  t9623 = t9607 + t9608 + t9622;
  t9636 = -0.068*t9410;
  t9637 = t9448*t9621;
  t9638 = t9636 + t9637;
  t9640 = t9485*t9631;
  t9641 = -1.*t9623*t9456;
  t9642 = t9640 + t9641;
  t9624 = t9485*t9623;
  t9632 = t9631*t9456;
  t9634 = t9624 + t9632;
  t9639 = t9638*t9437;
  t9643 = t9450*t9642;
  t9644 = t9639 + t9643;
  t9646 = t9450*t9638;
  t9647 = -1.*t9437*t9642;
  t9648 = t9646 + t9647;
  t9495 = t9448*t9488*t9437;
  t9548 = t9450*t9546;
  t9549 = t9495 + t9548;
  t9635 = t9448*t9485*t9634;
  t9652 = -1.*t9634*t9565;
  t9659 = t9634*t9565;
  t9664 = -1.*t9634*t9577;
  t9671 = -1.*t9448*t9485*t9634;
  t9676 = t9634*t9577;
  t9704 = -1.*t9410*t9638;
  t9708 = t9448*t9638*t9488;
  t9684 = t9410*t9638;
  t9688 = -1.*t9448*t9638*t9483;
  t9698 = -1.*t9448*t9638*t9488;
  t9694 = t9448*t9638*t9483;
  t9738 = t9631*t9488;
  t9733 = -1.*t9631*t9536;
  p_output1[0]=t9493*var2[0] + t9458*var2[1] + t9549*var2[2];
  p_output1[1]=(t9552*t9565 - 1.*t9555*t9570)*var2[0] + (t9448*t9485*t9552 - 1.*t9555*t9558)*var2[1] + (t9552*t9577 - 1.*t9555*t9582)*var2[2];
  p_output1[2]=(t9555*t9565 + t9552*t9570)*var2[0] + (t9448*t9485*t9555 + t9552*t9558)*var2[1] + (t9555*t9577 + t9552*t9582)*var2[2];
  p_output1[3]=(t9549*(-1.*t9458*t9644 - 1.*t9558*t9648 + t9671) + t9458*(t9549*t9644 + t9582*t9648 + t9676))*var2[0] + (t9549*(t9493*t9644 + t9570*t9648 + t9659) + t9493*(-1.*t9549*t9644 - 1.*t9582*t9648 + t9664))*var2[1] + (t9493*(t9635 + t9458*t9644 + t9558*t9648) + t9458*(-1.*t9493*t9644 - 1.*t9570*t9648 + t9652))*var2[2];
  p_output1[4]=(t9577*(t9448*t9456*t9642 + t9671 + t9704) + t9448*t9485*(t9546*t9642 + t9676 + t9708))*var2[0] + (t9577*(t9491*t9642 + t9659 + t9694) + t9565*(-1.*t9546*t9642 + t9664 + t9698))*var2[1] + (t9565*(t9635 - 1.*t9448*t9456*t9642 + t9684) + t9448*t9485*(-1.*t9491*t9642 + t9652 + t9688))*var2[2];
  p_output1[5]=(t9448*t9488*(-1.*t9448*t9623 + t9704) + t9410*(-1.*t9410*t9488*t9623 + t9536*t9631 + t9708))*var2[0] + (t9448*t9483*(t9410*t9488*t9623 + t9698 + t9733) + t9448*t9488*(-1.*t9410*t9483*t9623 + t9694 + t9738))*var2[1] + (t9448*t9483*(t9448*t9623 + t9684) + t9410*(t9410*t9483*t9623 - 1.*t9488*t9631 + t9688))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t9483 + 0.2255*t9536)*var2[0] + (t9488*(-1.*t9488*t9621 + t9733) + t9536*(t9483*t9621 + t9738))*var2[1] - 0.068*t9488*var2[2];
  p_output1[16]=(-0.325*t9481 - 1.*t9468*t9612 - 1.*t9481*t9619)*var2[0] + (0.325*t9468 - 1.*t9481*t9612 + t9468*t9619)*var2[2];
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
