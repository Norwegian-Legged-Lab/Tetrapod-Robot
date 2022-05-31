/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:57 GMT+02:00
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
  double t17677;
  double t12708;
  double t17663;
  double t17679;
  double t17794;
  double t17795;
  double t17796;
  double t17790;
  double t17798;
  double t17783;
  double t17799;
  double t17782;
  double t17676;
  double t17680;
  double t17681;
  double t17777;
  double t17797;
  double t17800;
  double t17801;
  double t17809;
  double t17805;
  double t17806;
  double t17807;
  double t17804;
  double t17810;
  double t17811;
  double t17812;
  double t17833;
  double t17834;
  double t17839;
  double t17840;
  double t17841;
  double t17842;
  double t17843;
  double t17844;
  double t17845;
  double t17846;
  double t17847;
  double t17848;
  double t17849;
  double t17853;
  double t17854;
  double t17855;
  double t17835;
  double t17837;
  double t17838;
  double t17850;
  double t17851;
  double t17859;
  double t17860;
  double t17861;
  double t17862;
  double t17864;
  double t17865;
  double t17866;
  double t17869;
  double t17870;
  double t17871;
  double t17852;
  double t17856;
  double t17857;
  double t17818;
  double t17819;
  double t17820;
  double t17822;
  double t17823;
  double t17824;
  double t17825;
  double t17827;
  double t17828;
  double t17867;
  double t17872;
  double t17873;
  double t17875;
  double t17876;
  double t17877;
  double t17881;
  double t17882;
  double t17883;
  double t17829;
  double t17830;
  double t17831;
  double t17858;
  double t17884;
  double t17781;
  double t17802;
  double t17803;
  double t17886;
  double t17887;
  double t17888;
  double t17919;
  double t17924;
  double t17930;
  double t17934;
  double t17961;
  double t17966;
  t17677 = Cos(var1[10]);
  t12708 = Cos(var1[11]);
  t17663 = Sin(var1[10]);
  t17679 = Sin(var1[11]);
  t17794 = -1.*t17677*t12708;
  t17795 = -1.*t17663*t17679;
  t17796 = t17794 + t17795;
  t17790 = Cos(var1[5]);
  t17798 = Sin(var1[9]);
  t17783 = Cos(var1[9]);
  t17799 = Sin(var1[5]);
  t17782 = Cos(var1[4]);
  t17676 = -1.*t12708*t17663;
  t17680 = t17677*t17679;
  t17681 = t17676 + t17680;
  t17777 = Sin(var1[4]);
  t17797 = t17783*t17790*t17796;
  t17800 = -1.*t17798*t17796*t17799;
  t17801 = t17797 + t17800;
  t17809 = Sin(var1[3]);
  t17805 = t17790*t17798*t17796;
  t17806 = t17783*t17796*t17799;
  t17807 = t17805 + t17806;
  t17804 = Cos(var1[3]);
  t17810 = t17782*t17681;
  t17811 = -1.*t17777*t17801;
  t17812 = t17810 + t17811;
  t17833 = -1.*t17783;
  t17834 = 1. + t17833;
  t17839 = -1.*t17677;
  t17840 = 1. + t17839;
  t17841 = -0.28121*t17840;
  t17842 = -1.*t12708;
  t17843 = 1. + t17842;
  t17844 = -0.50321*t17843;
  t17845 = -0.23321*t12708;
  t17846 = t17844 + t17845;
  t17847 = t17677*t17846;
  t17848 = 0.27*t17663*t17679;
  t17849 = t17841 + t17847 + t17848;
  t17853 = -0.15121*t17834;
  t17854 = t17783*t17849;
  t17855 = t17853 + t17854;
  t17835 = 0.15121*t17834;
  t17837 = 0.15121*t17783;
  t17838 = 0.15121*t17798;
  t17850 = t17798*t17849;
  t17851 = t17835 + t17837 + t17838 + t17850;
  t17859 = t17790*t17798;
  t17860 = t17783*t17799;
  t17861 = t17859 + t17860;
  t17862 = 0.28121*t17663;
  t17864 = t17846*t17663;
  t17865 = -0.27*t17677*t17679;
  t17866 = t17862 + t17864 + t17865;
  t17869 = t17790*t17855;
  t17870 = -1.*t17851*t17799;
  t17871 = t17869 + t17870;
  t17852 = t17790*t17851;
  t17856 = t17855*t17799;
  t17857 = t17852 + t17856;
  t17818 = t17677*t12708;
  t17819 = t17663*t17679;
  t17820 = t17818 + t17819;
  t17822 = t17820*t17777;
  t17823 = t17783*t17790*t17681;
  t17824 = -1.*t17798*t17681*t17799;
  t17825 = t17823 + t17824;
  t17827 = t17782*t17825;
  t17828 = t17822 + t17827;
  t17867 = t17866*t17777;
  t17872 = t17782*t17871;
  t17873 = t17867 + t17872;
  t17875 = t17782*t17866;
  t17876 = -1.*t17777*t17871;
  t17877 = t17875 + t17876;
  t17881 = t17790*t17798*t17681;
  t17882 = t17783*t17681*t17799;
  t17883 = t17881 + t17882;
  t17829 = -1.*t17783*t17790;
  t17830 = t17798*t17799;
  t17831 = t17829 + t17830;
  t17858 = -1.*t17831*t17857;
  t17884 = t17883*t17857;
  t17781 = t17681*t17777;
  t17802 = t17782*t17801;
  t17803 = t17781 + t17802;
  t17886 = t17782*t17820;
  t17887 = -1.*t17777*t17825;
  t17888 = t17886 + t17887;
  t17919 = -1.*t17883*t17857;
  t17924 = t17807*t17857;
  t17930 = -1.*t17866*t17820;
  t17934 = t17866*t17681;
  t17961 = t17831*t17857;
  t17966 = -1.*t17807*t17857;
  p_output1[0]=t17803;
  p_output1[1]=t17804*t17807 - 1.*t17809*t17812;
  p_output1[2]=t17807*t17809 + t17804*t17812;
  p_output1[3]=t17828*(t17858 - 1.*t17782*t17861*t17873 + t17777*t17861*t17877) + t17782*t17861*(t17828*t17873 + t17884 + t17877*t17888);
  p_output1[4]=(t17858 - 1.*t17861*t17871)*t17883 + t17831*(t17820*t17866 + t17825*t17871 + t17884);
  p_output1[5]=t17820*(t17783*t17851 - 1.*t17798*t17855);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t17796 + 0.15121*t17820;
  p_output1[10]=0.28121*t17679 - 0.27*t12708*t17679 + t17679*t17846;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t17782*t17861;
  p_output1[19]=t17804*t17831 + t17777*t17809*t17861;
  p_output1[20]=t17809*t17831 - 1.*t17777*t17804*t17861;
  p_output1[21]=t17803*(-1.*t17828*t17873 - 1.*t17877*t17888 + t17919) + t17828*(t17803*t17873 + t17812*t17877 + t17924);
  p_output1[22]=t17807*(-1.*t17825*t17871 + t17919 + t17930) + t17883*(t17801*t17871 + t17924 + t17934);
  p_output1[23]=t17681*(-1.*t17681*t17798*t17851 - 1.*t17681*t17783*t17855 + t17930) + t17820*(t17796*t17798*t17851 + t17783*t17796*t17855 + t17934);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t17681*(-1.*t17681*t17849 + t17930) + t17820*(t17796*t17849 + t17934);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17828;
  p_output1[37]=t17804*t17883 - 1.*t17809*t17888;
  p_output1[38]=t17809*t17883 + t17804*t17888;
  p_output1[39]=t17803*(t17782*t17861*t17873 - 1.*t17777*t17861*t17877 + t17961) + t17782*t17861*(-1.*t17803*t17873 - 1.*t17812*t17877 + t17966);
  p_output1[40]=t17807*(t17861*t17871 + t17961) + t17831*(-1.*t17681*t17866 - 1.*t17801*t17871 + t17966);
  p_output1[41]=t17681*(-1.*t17783*t17851 + t17798*t17855);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t12708 + 0.27*Power(t17679,2) + t12708*t17846;
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
