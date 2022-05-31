/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:26 GMT+02:00
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
  double t8229;
  double t15474;
  double t9647;
  double t15530;
  double t15560;
  double t15529;
  double t15564;
  double t9773;
  double t15598;
  double t15599;
  double t15608;
  double t15500;
  double t15594;
  double t15621;
  double t15623;
  double t15625;
  double t15240;
  double t15505;
  double t15511;
  double t15712;
  double t15709;
  double t15540;
  double t15568;
  double t15576;
  double t15609;
  double t15610;
  double t15612;
  double t15626;
  double t15629;
  double t15698;
  double t15714;
  double t15716;
  double t15719;
  double t15724;
  double t15725;
  double t15726;
  double t15728;
  double t15729;
  double t15731;
  double t15736;
  double t15737;
  double t15738;
  double t15740;
  double t15741;
  double t15742;
  double t15596;
  double t15613;
  double t15614;
  double t15814;
  double t15819;
  double t15823;
  double t15830;
  double t15831;
  double t15832;
  double t15837;
  double t15838;
  double t15840;
  double t15842;
  double t15843;
  double t15844;
  double t15845;
  double t15846;
  double t15851;
  double t15853;
  double t15824;
  double t15829;
  double t15847;
  double t15849;
  double t15858;
  double t15859;
  double t15860;
  double t15861;
  double t15863;
  double t15864;
  double t15865;
  double t15850;
  double t15855;
  double t15856;
  double t15862;
  double t15866;
  double t15867;
  double t15869;
  double t15870;
  double t15871;
  double t15617;
  double t15702;
  double t15703;
  double t15857;
  double t15875;
  double t15887;
  double t15892;
  double t15899;
  double t15904;
  double t15932;
  double t15936;
  t8229 = Cos(var1[4]);
  t15474 = Cos(var1[15]);
  t9647 = Cos(var1[5]);
  t15530 = Cos(var1[17]);
  t15560 = Sin(var1[16]);
  t15529 = Cos(var1[16]);
  t15564 = Sin(var1[17]);
  t9773 = Sin(var1[15]);
  t15598 = -1.*t15530*t15560;
  t15599 = t15529*t15564;
  t15608 = t15598 + t15599;
  t15500 = Sin(var1[5]);
  t15594 = Sin(var1[4]);
  t15621 = -1.*t15529*t15530;
  t15623 = -1.*t15560*t15564;
  t15625 = t15621 + t15623;
  t15240 = t9647*t9773;
  t15505 = t15474*t15500;
  t15511 = t15240 + t15505;
  t15712 = Cos(var1[3]);
  t15709 = Sin(var1[3]);
  t15540 = t15529*t15530;
  t15568 = t15560*t15564;
  t15576 = t15540 + t15568;
  t15609 = t15474*t9647*t15608;
  t15610 = -1.*t9773*t15608*t15500;
  t15612 = t15609 + t15610;
  t15626 = t15474*t9647*t15625;
  t15629 = -1.*t9773*t15625*t15500;
  t15698 = t15626 + t15629;
  t15714 = -1.*t15474*t9647;
  t15716 = t9773*t15500;
  t15719 = t15714 + t15716;
  t15724 = t9647*t9773*t15608;
  t15725 = t15474*t15608*t15500;
  t15726 = t15724 + t15725;
  t15728 = t8229*t15576;
  t15729 = -1.*t15594*t15612;
  t15731 = t15728 + t15729;
  t15736 = t9647*t9773*t15625;
  t15737 = t15474*t15625*t15500;
  t15738 = t15736 + t15737;
  t15740 = t8229*t15608;
  t15741 = -1.*t15594*t15698;
  t15742 = t15740 + t15741;
  t15596 = t15576*t15594;
  t15613 = t8229*t15612;
  t15614 = t15596 + t15613;
  t15814 = -1.*t15474;
  t15819 = 1. + t15814;
  t15823 = -0.15121*t15819;
  t15830 = -1.*t15529;
  t15831 = 1. + t15830;
  t15832 = -0.28121*t15831;
  t15837 = -1.*t15530;
  t15838 = 1. + t15837;
  t15840 = -0.50321*t15838;
  t15842 = -0.23321*t15530;
  t15843 = t15840 + t15842;
  t15844 = t15529*t15843;
  t15845 = 0.27*t15560*t15564;
  t15846 = t15832 + t15844 + t15845;
  t15851 = t15474*t15846;
  t15853 = t15823 + t15851;
  t15824 = -0.15121*t15474;
  t15829 = 0.15121*t9773;
  t15847 = t9773*t15846;
  t15849 = t15823 + t15824 + t15829 + t15847;
  t15858 = 0.28121*t15560;
  t15859 = t15843*t15560;
  t15860 = -0.27*t15529*t15564;
  t15861 = t15858 + t15859 + t15860;
  t15863 = t9647*t15853;
  t15864 = -1.*t15849*t15500;
  t15865 = t15863 + t15864;
  t15850 = t9647*t15849;
  t15855 = t15853*t15500;
  t15856 = t15850 + t15855;
  t15862 = t15861*t15594;
  t15866 = t8229*t15865;
  t15867 = t15862 + t15866;
  t15869 = t8229*t15861;
  t15870 = -1.*t15594*t15865;
  t15871 = t15869 + t15870;
  t15617 = t15608*t15594;
  t15702 = t8229*t15698;
  t15703 = t15617 + t15702;
  t15857 = -1.*t15719*t15856;
  t15875 = t15726*t15856;
  t15887 = t15719*t15856;
  t15892 = -1.*t15738*t15856;
  t15899 = -1.*t15726*t15856;
  t15904 = t15738*t15856;
  t15932 = -1.*t15861*t15576;
  t15936 = t15861*t15608;
  p_output1[0]=t15703*var2[0] + t15511*t8229*var2[1] + t15614*var2[2];
  p_output1[1]=(t15712*t15738 - 1.*t15709*t15742)*var2[0] + (t15511*t15594*t15709 + t15712*t15719)*var2[1] + (t15712*t15726 - 1.*t15709*t15731)*var2[2];
  p_output1[2]=(t15709*t15738 + t15712*t15742)*var2[0] + (-1.*t15511*t15594*t15712 + t15709*t15719)*var2[1] + (t15709*t15726 + t15712*t15731)*var2[2];
  p_output1[3]=(t15511*(t15614*t15867 + t15731*t15871 + t15875)*t8229 + t15614*(t15857 + t15511*t15594*t15871 - 1.*t15511*t15867*t8229))*var2[0] + (t15703*(-1.*t15614*t15867 - 1.*t15731*t15871 + t15899) + t15614*(t15703*t15867 + t15742*t15871 + t15904))*var2[1] + (t15511*(-1.*t15703*t15867 - 1.*t15742*t15871 + t15892)*t8229 + t15703*(-1.*t15511*t15594*t15871 + t15887 + t15511*t15867*t8229))*var2[2];
  p_output1[4]=(t15726*(t15857 - 1.*t15511*t15865) + t15719*(t15576*t15861 + t15612*t15865 + t15875))*var2[0] + (t15738*(-1.*t15612*t15865 + t15899 + t15932) + t15726*(t15698*t15865 + t15904 + t15936))*var2[1] + (t15738*(t15511*t15865 + t15887) + t15719*(-1.*t15608*t15861 - 1.*t15698*t15865 + t15892))*var2[2];
  p_output1[5]=t15576*(t15474*t15849 - 1.*t15853*t9773)*var2[0] + (t15608*(-1.*t15474*t15608*t15853 + t15932 - 1.*t15608*t15849*t9773) + t15576*(t15474*t15625*t15853 + t15936 + t15625*t15849*t9773))*var2[1] + t15608*(-1.*t15474*t15849 + t15853*t9773)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t15576 - 0.15121*t15625)*var2[0] + (-0.15121 + t15608*(-1.*t15608*t15846 + t15932) + t15576*(t15625*t15846 + t15936))*var2[1];
  p_output1[16]=(0.28121*t15564 - 0.27*t15530*t15564 + t15564*t15843)*var2[0] + (0.28121*t15530 + 0.27*Power(t15564,2) + t15530*t15843)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
