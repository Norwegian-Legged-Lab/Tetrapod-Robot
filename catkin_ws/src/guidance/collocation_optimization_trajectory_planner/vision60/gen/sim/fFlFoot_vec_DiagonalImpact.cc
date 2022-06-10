/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:26 GMT+02:00
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
  double t9413;
  double t9417;
  double t9401;
  double t9414;
  double t9418;
  double t9559;
  double t9574;
  double t9578;
  double t9579;
  double t9580;
  double t9582;
  double t9585;
  double t9594;
  double t9596;
  double t9599;
  double t9593;
  double t9634;
  double t9638;
  double t9590;
  double t9600;
  double t9601;
  double t9609;
  double t9611;
  double t9612;
  double t9613;
  double t9614;
  double t9617;
  double t9640;
  double t9642;
  double t9644;
  double t9652;
  double t9653;
  double t9654;
  double t9656;
  double t9659;
  double t9661;
  double t9676;
  double t9680;
  double t9684;
  double t9692;
  double t9694;
  double t9699;
  double t9808;
  double t9809;
  double t9820;
  double t9824;
  double t9830;
  double t9831;
  double t9832;
  double t9842;
  double t9844;
  double t9807;
  double t9821;
  double t9852;
  double t9856;
  double t9416;
  double t9542;
  double t9557;
  double t9792;
  double t9797;
  double t9800;
  double t9806;
  double t9857;
  double t9858;
  double t9859;
  double t9860;
  double t9862;
  double t9863;
  double t9864;
  double t9866;
  double t9867;
  double t9870;
  double t9873;
  double t9876;
  double t9877;
  double t9880;
  double t9587;
  double t9603;
  double t9606;
  double t9897;
  double t9902;
  double t9903;
  double t9891;
  double t9893;
  double t9894;
  double t9874;
  double t9882;
  double t9885;
  double t9608;
  double t9618;
  double t9629;
  double t9904;
  double t9919;
  double t9944;
  double t9949;
  double t9970;
  double t9977;
  double t10023;
  double t10027;
  double t9990;
  double t9994;
  double t10010;
  double t10005;
  double t10067;
  double t10059;
  t9413 = Cos(var1[6]);
  t9417 = Sin(var1[4]);
  t9401 = Cos(var1[4]);
  t9414 = Sin(var1[5]);
  t9418 = Sin(var1[6]);
  t9559 = Cos(var1[8]);
  t9574 = Sin(var1[7]);
  t9578 = t9559*t9574;
  t9579 = Cos(var1[7]);
  t9580 = Sin(var1[8]);
  t9582 = -1.*t9579*t9580;
  t9585 = t9578 + t9582;
  t9594 = t9579*t9559;
  t9596 = t9574*t9580;
  t9599 = t9594 + t9596;
  t9593 = Cos(var1[5]);
  t9634 = Cos(var1[3]);
  t9638 = Sin(var1[3]);
  t9590 = t9414*t9418*t9585;
  t9600 = t9593*t9599;
  t9601 = t9590 + t9600;
  t9609 = -1.*t9559*t9574;
  t9611 = t9579*t9580;
  t9612 = t9609 + t9611;
  t9613 = t9593*t9612;
  t9614 = t9414*t9418*t9599;
  t9617 = t9613 + t9614;
  t9640 = t9413*t9417*t9414;
  t9642 = t9401*t9418;
  t9644 = t9640 + t9642;
  t9652 = -1.*t9593*t9418*t9585;
  t9653 = t9414*t9599;
  t9654 = t9652 + t9653;
  t9656 = t9401*t9413*t9585;
  t9659 = -1.*t9417*t9601;
  t9661 = t9656 + t9659;
  t9676 = t9414*t9612;
  t9680 = -1.*t9593*t9418*t9599;
  t9684 = t9676 + t9680;
  t9692 = t9401*t9413*t9599;
  t9694 = -1.*t9417*t9617;
  t9699 = t9692 + t9694;
  t9808 = -0.0641*t9559;
  t9809 = -0.28*t9580;
  t9820 = t9808 + t9809;
  t9824 = -1.*t9559;
  t9830 = 1. + t9824;
  t9831 = 0.075*t9830;
  t9832 = 0.355*t9559;
  t9842 = -0.0641*t9580;
  t9844 = t9831 + t9832 + t9842;
  t9807 = -0.325*t9574;
  t9821 = t9579*t9820;
  t9852 = t9574*t9844;
  t9856 = t9807 + t9821 + t9852;
  t9416 = -1.*t9401*t9413*t9414;
  t9542 = t9417*t9418;
  t9557 = t9416 + t9542;
  t9792 = -1.*t9413;
  t9797 = 1. + t9792;
  t9800 = 0.1575*t9797;
  t9806 = 0.2255*t9413;
  t9857 = -1.*t9418*t9856;
  t9858 = t9800 + t9806 + t9857;
  t9859 = -1.*t9414*t9858;
  t9860 = -1.*t9579;
  t9862 = 1. + t9860;
  t9863 = 0.325*t9862;
  t9864 = -1.*t9574*t9820;
  t9866 = t9579*t9844;
  t9867 = t9863 + t9864 + t9866;
  t9870 = t9593*t9867;
  t9873 = t9859 + t9870;
  t9876 = 0.068*t9418;
  t9877 = t9413*t9856;
  t9880 = t9876 + t9877;
  t9587 = t9413*t9417*t9585;
  t9603 = t9401*t9601;
  t9606 = t9587 + t9603;
  t9897 = t9593*t9858;
  t9902 = t9414*t9867;
  t9903 = t9897 + t9902;
  t9891 = t9401*t9873;
  t9893 = t9417*t9880;
  t9894 = t9891 + t9893;
  t9874 = -1.*t9417*t9873;
  t9882 = t9401*t9880;
  t9885 = t9874 + t9882;
  t9608 = t9413*t9417*t9599;
  t9618 = t9401*t9617;
  t9629 = t9608 + t9618;
  t9904 = t9593*t9413*t9903;
  t9919 = -1.*t9903*t9654;
  t9944 = t9903*t9654;
  t9949 = -1.*t9903*t9684;
  t9970 = -1.*t9593*t9413*t9903;
  t9977 = t9903*t9684;
  t10023 = -1.*t9418*t9880;
  t10027 = t9413*t9880*t9599;
  t9990 = t9418*t9880;
  t9994 = -1.*t9413*t9880*t9585;
  t10010 = -1.*t9413*t9880*t9599;
  t10005 = t9413*t9880*t9585;
  t10067 = t9867*t9599;
  t10059 = -1.*t9867*t9612;
  p_output1[0]=t9606*var2[0] + t9557*var2[1] + t9629*var2[2];
  p_output1[1]=(t9634*t9654 - 1.*t9638*t9661)*var2[0] + (t9413*t9593*t9634 - 1.*t9638*t9644)*var2[1] + (t9634*t9684 - 1.*t9638*t9699)*var2[2];
  p_output1[2]=(t9638*t9654 + t9634*t9661)*var2[0] + (t9413*t9593*t9638 + t9634*t9644)*var2[1] + (t9638*t9684 + t9634*t9699)*var2[2];
  p_output1[3]=(t9629*(-1.*t9644*t9885 - 1.*t9557*t9894 + t9970) + t9557*(t9699*t9885 + t9629*t9894 + t9977))*var2[0] + (t9629*(t9661*t9885 + t9606*t9894 + t9944) + t9606*(-1.*t9699*t9885 - 1.*t9629*t9894 + t9949))*var2[1] + (t9606*(t9644*t9885 + t9557*t9894 + t9904) + t9557*(-1.*t9661*t9885 - 1.*t9606*t9894 + t9919))*var2[2];
  p_output1[4]=(t9684*(t10023 + t9413*t9414*t9873 + t9970) + t9413*t9593*(t10027 + t9617*t9873 + t9977))*var2[0] + (t9684*(t10005 + t9601*t9873 + t9944) + t9654*(t10010 - 1.*t9617*t9873 + t9949))*var2[1] + (t9654*(-1.*t9413*t9414*t9873 + t9904 + t9990) + t9413*t9593*(-1.*t9601*t9873 + t9919 + t9994))*var2[2];
  p_output1[5]=(t9413*t9599*(t10023 - 1.*t9413*t9858) + t9418*(t10027 - 1.*t9418*t9599*t9858 + t9612*t9867))*var2[0] + (t9413*t9599*(t10005 + t10067 - 1.*t9418*t9585*t9858) + t9413*t9585*(t10010 + t10059 + t9418*t9599*t9858))*var2[1] + (t9413*t9585*(t9413*t9858 + t9990) + t9418*(t9418*t9585*t9858 - 1.*t9599*t9867 + t9994))*var2[2];
  p_output1[6]=(-0.1575*t9585 - 0.2255*t9612)*var2[0] + (t9612*(t10067 + t9585*t9856) + t9599*(t10059 - 1.*t9599*t9856))*var2[1] + 0.068*t9599*var2[2];
  p_output1[7]=(0.325*t9580 - 1.*t9559*t9820 - 1.*t9580*t9844)*var2[0] + (-0.325*t9559 - 1.*t9580*t9820 + t9559*t9844)*var2[2];
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
