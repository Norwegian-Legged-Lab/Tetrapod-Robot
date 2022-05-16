/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:57 GMT+02:00
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
  double t28153;
  double t26997;
  double t28056;
  double t28166;
  double t28603;
  double t28624;
  double t45302;
  double t28602;
  double t54222;
  double t28582;
  double t54231;
  double t28578;
  double t28104;
  double t28532;
  double t28553;
  double t28565;
  double t51452;
  double t54232;
  double t54236;
  double t54660;
  double t54563;
  double t54570;
  double t54578;
  double t54529;
  double t54661;
  double t54662;
  double t54666;
  double t54743;
  double t54745;
  double t54750;
  double t54752;
  double t54753;
  double t54754;
  double t54755;
  double t54758;
  double t54759;
  double t54760;
  double t54762;
  double t54763;
  double t54766;
  double t54773;
  double t54774;
  double t54775;
  double t54746;
  double t54747;
  double t54748;
  double t54767;
  double t54768;
  double t54779;
  double t54780;
  double t54781;
  double t54783;
  double t54784;
  double t54785;
  double t54786;
  double t54790;
  double t54792;
  double t54794;
  double t54770;
  double t54776;
  double t54777;
  double t54679;
  double t54683;
  double t54685;
  double t54686;
  double t54730;
  double t54734;
  double t54735;
  double t54736;
  double t54738;
  double t54787;
  double t54795;
  double t54796;
  double t54799;
  double t54800;
  double t54801;
  double t54806;
  double t54807;
  double t54809;
  double t54740;
  double t54741;
  double t54742;
  double t54778;
  double t54810;
  double t28570;
  double t54241;
  double t54242;
  double t54814;
  double t54815;
  double t54816;
  double t54852;
  double t54858;
  double t54865;
  double t54869;
  double t54905;
  double t54911;
  t28153 = Cos(var1[10]);
  t26997 = Cos(var1[11]);
  t28056 = Sin(var1[10]);
  t28166 = Sin(var1[11]);
  t28603 = -1.*t28153*t26997;
  t28624 = -1.*t28056*t28166;
  t45302 = t28603 + t28624;
  t28602 = Cos(var1[5]);
  t54222 = Sin(var1[9]);
  t28582 = Cos(var1[9]);
  t54231 = Sin(var1[5]);
  t28578 = Cos(var1[4]);
  t28104 = -1.*t26997*t28056;
  t28532 = t28153*t28166;
  t28553 = t28104 + t28532;
  t28565 = Sin(var1[4]);
  t51452 = t28582*t28602*t45302;
  t54232 = -1.*t54222*t45302*t54231;
  t54236 = t51452 + t54232;
  t54660 = Sin(var1[3]);
  t54563 = t28602*t54222*t45302;
  t54570 = t28582*t45302*t54231;
  t54578 = t54563 + t54570;
  t54529 = Cos(var1[3]);
  t54661 = t28578*t28553;
  t54662 = -1.*t28565*t54236;
  t54666 = t54661 + t54662;
  t54743 = -1.*t28582;
  t54745 = 1. + t54743;
  t54750 = -1.*t28153;
  t54752 = 1. + t54750;
  t54753 = -0.28121*t54752;
  t54754 = -1.*t26997;
  t54755 = 1. + t54754;
  t54758 = -0.50321*t54755;
  t54759 = -0.23321*t26997;
  t54760 = t54758 + t54759;
  t54762 = t28153*t54760;
  t54763 = 0.27*t28056*t28166;
  t54766 = t54753 + t54762 + t54763;
  t54773 = -0.15121*t54745;
  t54774 = t28582*t54766;
  t54775 = t54773 + t54774;
  t54746 = 0.15121*t54745;
  t54747 = 0.15121*t28582;
  t54748 = 0.15121*t54222;
  t54767 = t54222*t54766;
  t54768 = t54746 + t54747 + t54748 + t54767;
  t54779 = t28602*t54222;
  t54780 = t28582*t54231;
  t54781 = t54779 + t54780;
  t54783 = 0.28121*t28056;
  t54784 = t54760*t28056;
  t54785 = -0.27*t28153*t28166;
  t54786 = t54783 + t54784 + t54785;
  t54790 = t28602*t54775;
  t54792 = -1.*t54768*t54231;
  t54794 = t54790 + t54792;
  t54770 = t28602*t54768;
  t54776 = t54775*t54231;
  t54777 = t54770 + t54776;
  t54679 = t28153*t26997;
  t54683 = t28056*t28166;
  t54685 = t54679 + t54683;
  t54686 = t54685*t28565;
  t54730 = t28582*t28602*t28553;
  t54734 = -1.*t54222*t28553*t54231;
  t54735 = t54730 + t54734;
  t54736 = t28578*t54735;
  t54738 = t54686 + t54736;
  t54787 = t54786*t28565;
  t54795 = t28578*t54794;
  t54796 = t54787 + t54795;
  t54799 = t28578*t54786;
  t54800 = -1.*t28565*t54794;
  t54801 = t54799 + t54800;
  t54806 = t28602*t54222*t28553;
  t54807 = t28582*t28553*t54231;
  t54809 = t54806 + t54807;
  t54740 = -1.*t28582*t28602;
  t54741 = t54222*t54231;
  t54742 = t54740 + t54741;
  t54778 = -1.*t54742*t54777;
  t54810 = t54809*t54777;
  t28570 = t28553*t28565;
  t54241 = t28578*t54236;
  t54242 = t28570 + t54241;
  t54814 = t28578*t54685;
  t54815 = -1.*t28565*t54735;
  t54816 = t54814 + t54815;
  t54852 = -1.*t54809*t54777;
  t54858 = t54578*t54777;
  t54865 = -1.*t54786*t54685;
  t54869 = t54786*t28553;
  t54905 = t54742*t54777;
  t54911 = -1.*t54578*t54777;
  p_output1[0]=t54242;
  p_output1[1]=t54529*t54578 - 1.*t54660*t54666;
  p_output1[2]=t54578*t54660 + t54529*t54666;
  p_output1[3]=t54738*(t54778 - 1.*t28578*t54781*t54796 + t28565*t54781*t54801) + t28578*t54781*(t54738*t54796 + t54810 + t54801*t54816);
  p_output1[4]=(t54778 - 1.*t54781*t54794)*t54809 + t54742*(t54685*t54786 + t54735*t54794 + t54810);
  p_output1[5]=t54685*(t28582*t54768 - 1.*t54222*t54775);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t45302 + 0.15121*t54685;
  p_output1[10]=0.28121*t28166 - 0.27*t26997*t28166 + t28166*t54760;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t28578*t54781;
  p_output1[19]=t54529*t54742 + t28565*t54660*t54781;
  p_output1[20]=t54660*t54742 - 1.*t28565*t54529*t54781;
  p_output1[21]=t54242*(-1.*t54738*t54796 - 1.*t54801*t54816 + t54852) + t54738*(t54242*t54796 + t54666*t54801 + t54858);
  p_output1[22]=t54578*(-1.*t54735*t54794 + t54852 + t54865) + t54809*(t54236*t54794 + t54858 + t54869);
  p_output1[23]=t28553*(-1.*t28553*t54222*t54768 - 1.*t28553*t28582*t54775 + t54865) + t54685*(t45302*t54222*t54768 + t28582*t45302*t54775 + t54869);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t28553*(-1.*t28553*t54766 + t54865) + t54685*(t45302*t54766 + t54869);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t54738;
  p_output1[37]=t54529*t54809 - 1.*t54660*t54816;
  p_output1[38]=t54660*t54809 + t54529*t54816;
  p_output1[39]=t54242*(t28578*t54781*t54796 - 1.*t28565*t54781*t54801 + t54905) + t28578*t54781*(-1.*t54242*t54796 - 1.*t54666*t54801 + t54911);
  p_output1[40]=t54578*(t54781*t54794 + t54905) + t54742*(-1.*t28553*t54786 - 1.*t54236*t54794 + t54911);
  p_output1[41]=t28553*(-1.*t28582*t54768 + t54222*t54775);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t26997 + 0.27*Power(t28166,2) + t26997*t54760;
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

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
