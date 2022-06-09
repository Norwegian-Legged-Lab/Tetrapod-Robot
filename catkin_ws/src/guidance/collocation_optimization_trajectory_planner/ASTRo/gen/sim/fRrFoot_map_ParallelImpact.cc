/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:19 GMT+02:00
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
  double t4817;
  double t4388;
  double t4798;
  double t4818;
  double t5379;
  double t5394;
  double t5395;
  double t5368;
  double t5408;
  double t5365;
  double t5409;
  double t5316;
  double t4804;
  double t5268;
  double t5276;
  double t5277;
  double t5401;
  double t5419;
  double t5777;
  double t17794;
  double t17621;
  double t17677;
  double t17681;
  double t17619;
  double t17798;
  double t17799;
  double t17800;
  double t17830;
  double t17831;
  double t17832;
  double t17835;
  double t17836;
  double t17837;
  double t17838;
  double t17839;
  double t17840;
  double t17842;
  double t17843;
  double t17844;
  double t17845;
  double t17847;
  double t17852;
  double t17854;
  double t17833;
  double t17834;
  double t17848;
  double t17849;
  double t17860;
  double t17861;
  double t17862;
  double t17863;
  double t17864;
  double t17865;
  double t17866;
  double t17868;
  double t17869;
  double t17870;
  double t17851;
  double t17855;
  double t17857;
  double t17818;
  double t17819;
  double t17820;
  double t17821;
  double t17822;
  double t17823;
  double t17824;
  double t17825;
  double t17826;
  double t17867;
  double t17871;
  double t17872;
  double t17874;
  double t17875;
  double t17876;
  double t17880;
  double t17881;
  double t17882;
  double t17827;
  double t17828;
  double t17829;
  double t17859;
  double t17883;
  double t5312;
  double t14177;
  double t17607;
  double t17886;
  double t17887;
  double t17888;
  double t17921;
  double t17926;
  double t17932;
  double t17936;
  double t17966;
  double t17971;
  t4817 = Cos(var1[16]);
  t4388 = Cos(var1[17]);
  t4798 = Sin(var1[16]);
  t4818 = Sin(var1[17]);
  t5379 = -1.*t4817*t4388;
  t5394 = -1.*t4798*t4818;
  t5395 = t5379 + t5394;
  t5368 = Cos(var1[5]);
  t5408 = Sin(var1[15]);
  t5365 = Cos(var1[15]);
  t5409 = Sin(var1[5]);
  t5316 = Cos(var1[4]);
  t4804 = -1.*t4388*t4798;
  t5268 = t4817*t4818;
  t5276 = t4804 + t5268;
  t5277 = Sin(var1[4]);
  t5401 = t5365*t5368*t5395;
  t5419 = -1.*t5408*t5395*t5409;
  t5777 = t5401 + t5419;
  t17794 = Sin(var1[3]);
  t17621 = t5368*t5408*t5395;
  t17677 = t5365*t5395*t5409;
  t17681 = t17621 + t17677;
  t17619 = Cos(var1[3]);
  t17798 = t5316*t5276;
  t17799 = -1.*t5277*t5777;
  t17800 = t17798 + t17799;
  t17830 = -1.*t5365;
  t17831 = 1. + t17830;
  t17832 = -0.15121*t17831;
  t17835 = -1.*t4817;
  t17836 = 1. + t17835;
  t17837 = -0.28121*t17836;
  t17838 = -1.*t4388;
  t17839 = 1. + t17838;
  t17840 = -0.50321*t17839;
  t17842 = -0.19821*t4388;
  t17843 = t17840 + t17842;
  t17844 = t4817*t17843;
  t17845 = 0.305*t4798*t4818;
  t17847 = t17837 + t17844 + t17845;
  t17852 = t5365*t17847;
  t17854 = t17832 + t17852;
  t17833 = -0.15121*t5365;
  t17834 = 0.15121*t5408;
  t17848 = t5408*t17847;
  t17849 = t17832 + t17833 + t17834 + t17848;
  t17860 = t5368*t5408;
  t17861 = t5365*t5409;
  t17862 = t17860 + t17861;
  t17863 = 0.28121*t4798;
  t17864 = t17843*t4798;
  t17865 = -0.305*t4817*t4818;
  t17866 = t17863 + t17864 + t17865;
  t17868 = t5368*t17854;
  t17869 = -1.*t17849*t5409;
  t17870 = t17868 + t17869;
  t17851 = t5368*t17849;
  t17855 = t17854*t5409;
  t17857 = t17851 + t17855;
  t17818 = t4817*t4388;
  t17819 = t4798*t4818;
  t17820 = t17818 + t17819;
  t17821 = t17820*t5277;
  t17822 = t5365*t5368*t5276;
  t17823 = -1.*t5408*t5276*t5409;
  t17824 = t17822 + t17823;
  t17825 = t5316*t17824;
  t17826 = t17821 + t17825;
  t17867 = t17866*t5277;
  t17871 = t5316*t17870;
  t17872 = t17867 + t17871;
  t17874 = t5316*t17866;
  t17875 = -1.*t5277*t17870;
  t17876 = t17874 + t17875;
  t17880 = t5368*t5408*t5276;
  t17881 = t5365*t5276*t5409;
  t17882 = t17880 + t17881;
  t17827 = -1.*t5365*t5368;
  t17828 = t5408*t5409;
  t17829 = t17827 + t17828;
  t17859 = -1.*t17829*t17857;
  t17883 = t17882*t17857;
  t5312 = t5276*t5277;
  t14177 = t5316*t5777;
  t17607 = t5312 + t14177;
  t17886 = t5316*t17820;
  t17887 = -1.*t5277*t17824;
  t17888 = t17886 + t17887;
  t17921 = -1.*t17882*t17857;
  t17926 = t17681*t17857;
  t17932 = -1.*t17866*t17820;
  t17936 = t17866*t5276;
  t17966 = t17829*t17857;
  t17971 = -1.*t17681*t17857;
  p_output1[0]=t17607;
  p_output1[1]=t17619*t17681 - 1.*t17794*t17800;
  p_output1[2]=t17681*t17794 + t17619*t17800;
  p_output1[3]=t17862*(t17826*t17872 + t17883 + t17876*t17888)*t5316 + t17826*(t17859 + t17862*t17876*t5277 - 1.*t17862*t17872*t5316);
  p_output1[4]=(t17859 - 1.*t17862*t17870)*t17882 + t17829*(t17820*t17866 + t17824*t17870 + t17883);
  p_output1[5]=t17820*(t17849*t5365 - 1.*t17854*t5408);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t17820 - 0.15121*t5395;
  p_output1[16]=0.28121*t4818 + t17843*t4818 - 0.305*t4388*t4818;
  p_output1[17]=0;
  p_output1[18]=t17862*t5316;
  p_output1[19]=t17619*t17829 + t17794*t17862*t5277;
  p_output1[20]=t17794*t17829 - 1.*t17619*t17862*t5277;
  p_output1[21]=t17607*(-1.*t17826*t17872 - 1.*t17876*t17888 + t17921) + t17826*(t17607*t17872 + t17800*t17876 + t17926);
  p_output1[22]=t17681*(-1.*t17824*t17870 + t17921 + t17932) + t17882*(t17926 + t17936 + t17870*t5777);
  p_output1[23]=t5276*(t17932 - 1.*t17854*t5276*t5365 - 1.*t17849*t5276*t5408) + t17820*(t17936 + t17854*t5365*t5395 + t17849*t5395*t5408);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t5276*(t17932 - 1.*t17847*t5276) + t17820*(t17936 + t17847*t5395);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17826;
  p_output1[37]=t17619*t17882 - 1.*t17794*t17888;
  p_output1[38]=t17794*t17882 + t17619*t17888;
  p_output1[39]=t17862*(-1.*t17607*t17872 - 1.*t17800*t17876 + t17971)*t5316 + t17607*(t17966 - 1.*t17862*t17876*t5277 + t17862*t17872*t5316);
  p_output1[40]=t17681*(t17862*t17870 + t17966) + t17829*(t17971 - 1.*t17866*t5276 - 1.*t17870*t5777);
  p_output1[41]=t5276*(-1.*t17849*t5365 + t17854*t5408);
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
  p_output1[52]=0.28121*t4388 + t17843*t4388 + 0.305*Power(t4818,2);
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
