/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:45 GMT+02:00
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
  double t9543;
  double t4956;
  double t4957;
  double t9550;
  double t4958;
  double t9551;
  double t9552;
  double t9670;
  double t9682;
  double t9671;
  double t9672;
  double t9677;
  double t9683;
  double t4729;
  double t9661;
  double t9554;
  double t9681;
  double t9684;
  double t9686;
  double t9696;
  double t9691;
  double t9692;
  double t9694;
  double t9690;
  double t9697;
  double t9699;
  double t9700;
  double t9721;
  double t9723;
  double t9724;
  double t9726;
  double t9727;
  double t9729;
  double t9730;
  double t9731;
  double t9733;
  double t9720;
  double t9725;
  double t9734;
  double t9735;
  double t9740;
  double t9741;
  double t9743;
  double t9744;
  double t9745;
  double t9746;
  double t9715;
  double t9716;
  double t9718;
  double t9719;
  double t9736;
  double t9738;
  double t9753;
  double t9754;
  double t9755;
  double t9757;
  double t9758;
  double t9760;
  double t9750;
  double t9751;
  double t9752;
  double t9739;
  double t9747;
  double t9748;
  double t9707;
  double t9708;
  double t9709;
  double t9756;
  double t9761;
  double t9762;
  double t9706;
  double t9710;
  double t9711;
  double t9712;
  double t9713;
  double t9714;
  double t9768;
  double t9769;
  double t9771;
  double t9776;
  double t9777;
  double t9778;
  double t9749;
  double t9779;
  double t9788;
  double t9792;
  double t9765;
  double t9766;
  double t9767;
  double t9555;
  double t9687;
  double t9688;
  double t9781;
  double t9782;
  double t9783;
  double t9818;
  double t9823;
  double t9833;
  double t9829;
  double t9843;
  double t9838;
  double t9860;
  double t9865;
  double t9871;
  double t9875;
  t9543 = Cos(var1[10]);
  t4956 = Cos(var1[11]);
  t4957 = Sin(var1[10]);
  t9550 = Sin(var1[11]);
  t4958 = t4956*t4957;
  t9551 = -1.*t9543*t9550;
  t9552 = t4958 + t9551;
  t9670 = Cos(var1[5]);
  t9682 = Sin(var1[9]);
  t9671 = t9543*t4956;
  t9672 = t4957*t9550;
  t9677 = t9671 + t9672;
  t9683 = Sin(var1[5]);
  t4729 = Cos(var1[9]);
  t9661 = Cos(var1[4]);
  t9554 = Sin(var1[4]);
  t9681 = t9670*t9677;
  t9684 = t9682*t9552*t9683;
  t9686 = t9681 + t9684;
  t9696 = Sin(var1[3]);
  t9691 = -1.*t9670*t9682*t9552;
  t9692 = t9677*t9683;
  t9694 = t9691 + t9692;
  t9690 = Cos(var1[3]);
  t9697 = t4729*t9661*t9552;
  t9699 = -1.*t9554*t9686;
  t9700 = t9697 + t9699;
  t9721 = -0.0641*t4956;
  t9723 = -0.28*t9550;
  t9724 = t9721 + t9723;
  t9726 = -1.*t4956;
  t9727 = 1. + t9726;
  t9729 = -0.575*t9727;
  t9730 = -0.295*t4956;
  t9731 = -0.0641*t9550;
  t9733 = t9729 + t9730 + t9731;
  t9720 = 0.325*t4957;
  t9725 = t9543*t9724;
  t9734 = t4957*t9733;
  t9735 = t9720 + t9725 + t9734;
  t9740 = -1.*t9543;
  t9741 = 1. + t9740;
  t9743 = -0.325*t9741;
  t9744 = -1.*t4957*t9724;
  t9745 = t9543*t9733;
  t9746 = t9743 + t9744 + t9745;
  t9715 = -1.*t4729;
  t9716 = 1. + t9715;
  t9718 = 0.1575*t9716;
  t9719 = 0.2255*t4729;
  t9736 = -1.*t9682*t9735;
  t9738 = t9718 + t9719 + t9736;
  t9753 = 0.068*t9682;
  t9754 = t4729*t9735;
  t9755 = t9753 + t9754;
  t9757 = t9670*t9746;
  t9758 = -1.*t9738*t9683;
  t9760 = t9757 + t9758;
  t9750 = t9682*t9554;
  t9751 = -1.*t4729*t9661*t9683;
  t9752 = t9750 + t9751;
  t9739 = t9670*t9738;
  t9747 = t9746*t9683;
  t9748 = t9739 + t9747;
  t9707 = -1.*t4956*t4957;
  t9708 = t9543*t9550;
  t9709 = t9707 + t9708;
  t9756 = t9755*t9554;
  t9761 = t9661*t9760;
  t9762 = t9756 + t9761;
  t9706 = t4729*t9677*t9554;
  t9710 = t9670*t9709;
  t9711 = t9682*t9677*t9683;
  t9712 = t9710 + t9711;
  t9713 = t9661*t9712;
  t9714 = t9706 + t9713;
  t9768 = t9661*t9755;
  t9769 = -1.*t9554*t9760;
  t9771 = t9768 + t9769;
  t9776 = -1.*t9670*t9682*t9677;
  t9777 = t9709*t9683;
  t9778 = t9776 + t9777;
  t9749 = -1.*t4729*t9670*t9748;
  t9779 = t9748*t9778;
  t9788 = -1.*t9682*t9755;
  t9792 = t4729*t9755*t9677;
  t9765 = t9661*t9682;
  t9766 = t4729*t9554*t9683;
  t9767 = t9765 + t9766;
  t9555 = t4729*t9552*t9554;
  t9687 = t9661*t9686;
  t9688 = t9555 + t9687;
  t9781 = t4729*t9661*t9677;
  t9782 = -1.*t9554*t9712;
  t9783 = t9781 + t9782;
  t9818 = t9748*t9694;
  t9823 = -1.*t9748*t9778;
  t9833 = -1.*t4729*t9755*t9677;
  t9829 = t4729*t9755*t9552;
  t9843 = t9746*t9677;
  t9838 = -1.*t9746*t9709;
  t9860 = t4729*t9670*t9748;
  t9865 = -1.*t9748*t9694;
  t9871 = t9682*t9755;
  t9875 = -1.*t4729*t9755*t9552;
  p_output1[0]=t9688;
  p_output1[1]=t9690*t9694 - 1.*t9696*t9700;
  p_output1[2]=t9694*t9696 + t9690*t9700;
  p_output1[3]=t9714*(t9749 - 1.*t9752*t9762 - 1.*t9767*t9771) + t9752*(t9714*t9762 + t9779 + t9771*t9783);
  p_output1[4]=t9778*(t9749 + t4729*t9683*t9760 + t9788) + t4729*t9670*(t9712*t9760 + t9779 + t9792);
  p_output1[5]=t4729*t9677*(-1.*t4729*t9738 + t9788) + t9682*(-1.*t9677*t9682*t9738 + t9709*t9746 + t9792);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t9552 - 0.2255*t9709;
  p_output1[10]=-0.325*t9550 - 1.*t4956*t9724 - 1.*t9550*t9733;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9752;
  p_output1[19]=t4729*t9670*t9690 - 1.*t9696*t9767;
  p_output1[20]=t4729*t9670*t9696 + t9690*t9767;
  p_output1[21]=t9714*(t9688*t9762 + t9700*t9771 + t9818) + t9688*(-1.*t9714*t9762 - 1.*t9771*t9783 + t9823);
  p_output1[22]=t9778*(t9686*t9760 + t9818 + t9829) + t9694*(-1.*t9712*t9760 + t9823 + t9833);
  p_output1[23]=t4729*t9552*(t9677*t9682*t9738 + t9833 + t9838) + t4729*t9677*(-1.*t9552*t9682*t9738 + t9829 + t9843);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t9677*(-1.*t9677*t9735 + t9838) + t9709*(t9552*t9735 + t9843);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9714;
  p_output1[37]=t9690*t9778 - 1.*t9696*t9783;
  p_output1[38]=t9696*t9778 + t9690*t9783;
  p_output1[39]=t9688*(t9752*t9762 + t9767*t9771 + t9860) + t9752*(-1.*t9688*t9762 - 1.*t9700*t9771 + t9865);
  p_output1[40]=t9694*(-1.*t4729*t9683*t9760 + t9860 + t9871) + t4729*t9670*(-1.*t9686*t9760 + t9865 + t9875);
  p_output1[41]=t4729*t9552*(t4729*t9738 + t9871) + t9682*(t9552*t9682*t9738 - 1.*t9677*t9746 + t9875);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t9677;
  p_output1[46]=0.325*t4956 - 1.*t9550*t9724 + t4956*t9733;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
