/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:45 GMT+02:00
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
  double t176;
  double t2041;
  double t1032;
  double t2709;
  double t2783;
  double t2705;
  double t3022;
  double t1376;
  double t6273;
  double t6281;
  double t6287;
  double t2590;
  double t6257;
  double t6458;
  double t6472;
  double t6483;
  double t1809;
  double t2621;
  double t2623;
  double t6503;
  double t6498;
  double t2715;
  double t3309;
  double t5816;
  double t6303;
  double t6304;
  double t6307;
  double t6485;
  double t6486;
  double t6487;
  double t6505;
  double t6507;
  double t6508;
  double t6615;
  double t6618;
  double t6620;
  double t6628;
  double t6640;
  double t6642;
  double t6651;
  double t6653;
  double t6661;
  double t6670;
  double t6673;
  double t6676;
  double t6272;
  double t6320;
  double t6404;
  double t6711;
  double t6712;
  double t6714;
  double t6719;
  double t6720;
  double t6722;
  double t6723;
  double t6724;
  double t6725;
  double t6726;
  double t6728;
  double t6731;
  double t6741;
  double t6745;
  double t6752;
  double t6754;
  double t6717;
  double t6718;
  double t6746;
  double t6750;
  double t6759;
  double t6760;
  double t6762;
  double t6763;
  double t6768;
  double t6772;
  double t6775;
  double t6751;
  double t6756;
  double t6757;
  double t6767;
  double t6778;
  double t6780;
  double t6785;
  double t6788;
  double t6793;
  double t6445;
  double t6488;
  double t6492;
  double t6758;
  double t6813;
  double t6845;
  double t6869;
  double t6896;
  double t6910;
  double t6996;
  double t7001;
  t176 = Cos(var1[4]);
  t2041 = Cos(var1[15]);
  t1032 = Cos(var1[5]);
  t2709 = Cos(var1[17]);
  t2783 = Sin(var1[16]);
  t2705 = Cos(var1[16]);
  t3022 = Sin(var1[17]);
  t1376 = Sin(var1[15]);
  t6273 = -1.*t2709*t2783;
  t6281 = t2705*t3022;
  t6287 = t6273 + t6281;
  t2590 = Sin(var1[5]);
  t6257 = Sin(var1[4]);
  t6458 = -1.*t2705*t2709;
  t6472 = -1.*t2783*t3022;
  t6483 = t6458 + t6472;
  t1809 = t1032*t1376;
  t2621 = t2041*t2590;
  t2623 = t1809 + t2621;
  t6503 = Cos(var1[3]);
  t6498 = Sin(var1[3]);
  t2715 = t2705*t2709;
  t3309 = t2783*t3022;
  t5816 = t2715 + t3309;
  t6303 = t2041*t1032*t6287;
  t6304 = -1.*t1376*t6287*t2590;
  t6307 = t6303 + t6304;
  t6485 = t2041*t1032*t6483;
  t6486 = -1.*t1376*t6483*t2590;
  t6487 = t6485 + t6486;
  t6505 = -1.*t2041*t1032;
  t6507 = t1376*t2590;
  t6508 = t6505 + t6507;
  t6615 = t1032*t1376*t6287;
  t6618 = t2041*t6287*t2590;
  t6620 = t6615 + t6618;
  t6628 = t176*t5816;
  t6640 = -1.*t6257*t6307;
  t6642 = t6628 + t6640;
  t6651 = t1032*t1376*t6483;
  t6653 = t2041*t6483*t2590;
  t6661 = t6651 + t6653;
  t6670 = t176*t6287;
  t6673 = -1.*t6257*t6487;
  t6676 = t6670 + t6673;
  t6272 = t5816*t6257;
  t6320 = t176*t6307;
  t6404 = t6272 + t6320;
  t6711 = -1.*t2041;
  t6712 = 1. + t6711;
  t6714 = -0.15121*t6712;
  t6719 = -1.*t2705;
  t6720 = 1. + t6719;
  t6722 = -0.28121*t6720;
  t6723 = -1.*t2709;
  t6724 = 1. + t6723;
  t6725 = -0.50321*t6724;
  t6726 = -0.19821*t2709;
  t6728 = t6725 + t6726;
  t6731 = t2705*t6728;
  t6741 = 0.305*t2783*t3022;
  t6745 = t6722 + t6731 + t6741;
  t6752 = t2041*t6745;
  t6754 = t6714 + t6752;
  t6717 = -0.15121*t2041;
  t6718 = 0.15121*t1376;
  t6746 = t1376*t6745;
  t6750 = t6714 + t6717 + t6718 + t6746;
  t6759 = 0.28121*t2783;
  t6760 = t6728*t2783;
  t6762 = -0.305*t2705*t3022;
  t6763 = t6759 + t6760 + t6762;
  t6768 = t1032*t6754;
  t6772 = -1.*t6750*t2590;
  t6775 = t6768 + t6772;
  t6751 = t1032*t6750;
  t6756 = t6754*t2590;
  t6757 = t6751 + t6756;
  t6767 = t6763*t6257;
  t6778 = t176*t6775;
  t6780 = t6767 + t6778;
  t6785 = t176*t6763;
  t6788 = -1.*t6257*t6775;
  t6793 = t6785 + t6788;
  t6445 = t6287*t6257;
  t6488 = t176*t6487;
  t6492 = t6445 + t6488;
  t6758 = -1.*t6508*t6757;
  t6813 = t6620*t6757;
  t6845 = t6508*t6757;
  t6869 = -1.*t6661*t6757;
  t6896 = -1.*t6620*t6757;
  t6910 = t6661*t6757;
  t6996 = -1.*t6763*t5816;
  t7001 = t6763*t6287;
  p_output1[0]=t6492*var2[0] + t176*t2623*var2[1] + t6404*var2[2];
  p_output1[1]=(t6503*t6661 - 1.*t6498*t6676)*var2[0] + (t2623*t6257*t6498 + t6503*t6508)*var2[1] + (t6503*t6620 - 1.*t6498*t6642)*var2[2];
  p_output1[2]=(t6498*t6661 + t6503*t6676)*var2[0] + (-1.*t2623*t6257*t6503 + t6498*t6508)*var2[1] + (t6498*t6620 + t6503*t6642)*var2[2];
  p_output1[3]=(t6404*(t6758 - 1.*t176*t2623*t6780 + t2623*t6257*t6793) + t176*t2623*(t6404*t6780 + t6642*t6793 + t6813))*var2[0] + (t6492*(-1.*t6404*t6780 - 1.*t6642*t6793 + t6896) + t6404*(t6492*t6780 + t6676*t6793 + t6910))*var2[1] + (t6492*(t176*t2623*t6780 - 1.*t2623*t6257*t6793 + t6845) + t176*t2623*(-1.*t6492*t6780 - 1.*t6676*t6793 + t6869))*var2[2];
  p_output1[4]=(t6620*(t6758 - 1.*t2623*t6775) + t6508*(t5816*t6763 + t6307*t6775 + t6813))*var2[0] + (t6661*(-1.*t6307*t6775 + t6896 + t6996) + t6620*(t6487*t6775 + t6910 + t7001))*var2[1] + (t6661*(t2623*t6775 + t6845) + t6508*(-1.*t6287*t6763 - 1.*t6487*t6775 + t6869))*var2[2];
  p_output1[5]=t5816*(t2041*t6750 - 1.*t1376*t6754)*var2[0] + (t6287*(-1.*t1376*t6287*t6750 - 1.*t2041*t6287*t6754 + t6996) + t5816*(t1376*t6483*t6750 + t2041*t6483*t6754 + t7001))*var2[1] + t6287*(-1.*t2041*t6750 + t1376*t6754)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t5816 - 0.15121*t6483)*var2[0] + (-0.15121 + t6287*(-1.*t6287*t6745 + t6996) + t5816*(t6483*t6745 + t7001))*var2[1];
  p_output1[16]=(0.28121*t3022 - 0.305*t2709*t3022 + t3022*t6728)*var2[0] + (0.28121*t2709 + 0.305*Power(t3022,2) + t2709*t6728)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
