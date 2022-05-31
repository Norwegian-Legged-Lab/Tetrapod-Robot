/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:57 GMT+02:00
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
  double t33483;
  double t33429;
  double t33474;
  double t33488;
  double t56740;
  double t56741;
  double t56742;
  double t56739;
  double t56748;
  double t56731;
  double t56752;
  double t56711;
  double t33477;
  double t33503;
  double t56679;
  double t56709;
  double t56743;
  double t56753;
  double t56754;
  double t56769;
  double t56760;
  double t56761;
  double t56762;
  double t56758;
  double t56770;
  double t56772;
  double t56773;
  double t56784;
  double t56787;
  double t56789;
  double t56806;
  double t56812;
  double t56822;
  double t56823;
  double t56826;
  double t56827;
  double t56829;
  double t56830;
  double t56831;
  double t56832;
  double t56833;
  double t56834;
  double t56835;
  double t56839;
  double t56840;
  double t56841;
  double t56814;
  double t56816;
  double t56819;
  double t56836;
  double t56837;
  double t56846;
  double t56848;
  double t56849;
  double t56853;
  double t56854;
  double t56855;
  double t56858;
  double t56860;
  double t56862;
  double t56864;
  double t56838;
  double t56842;
  double t56843;
  double t56783;
  double t56790;
  double t56792;
  double t56793;
  double t56799;
  double t56800;
  double t56859;
  double t56865;
  double t56866;
  double t56869;
  double t56871;
  double t56872;
  double t56876;
  double t56877;
  double t56878;
  double t56803;
  double t56804;
  double t56805;
  double t56844;
  double t56879;
  double t56710;
  double t56756;
  double t56757;
  double t56883;
  double t56884;
  double t56885;
  double t56943;
  double t56955;
  double t56964;
  double t56972;
  double t57006;
  double t57013;
  t33483 = Cos(var1[13]);
  t33429 = Cos(var1[14]);
  t33474 = Sin(var1[13]);
  t33488 = Sin(var1[14]);
  t56740 = t33483*t33429;
  t56741 = t33474*t33488;
  t56742 = t56740 + t56741;
  t56739 = Cos(var1[5]);
  t56748 = Sin(var1[12]);
  t56731 = Cos(var1[12]);
  t56752 = Sin(var1[5]);
  t56711 = Cos(var1[4]);
  t33477 = -1.*t33429*t33474;
  t33503 = t33483*t33488;
  t56679 = t33477 + t33503;
  t56709 = Sin(var1[4]);
  t56743 = t56731*t56739*t56742;
  t56753 = -1.*t56748*t56742*t56752;
  t56754 = t56743 + t56753;
  t56769 = Sin(var1[3]);
  t56760 = t56739*t56748*t56742;
  t56761 = t56731*t56742*t56752;
  t56762 = t56760 + t56761;
  t56758 = Cos(var1[3]);
  t56770 = t56711*t56679;
  t56772 = -1.*t56709*t56754;
  t56773 = t56770 + t56772;
  t56784 = t33429*t33474;
  t56787 = -1.*t33483*t33488;
  t56789 = t56784 + t56787;
  t56806 = -1.*t56731;
  t56812 = 1. + t56806;
  t56822 = -1.*t33483;
  t56823 = 1. + t56822;
  t56826 = 0.28121*t56823;
  t56827 = -1.*t33429;
  t56829 = 1. + t56827;
  t56830 = 0.50321*t56829;
  t56831 = 0.19821*t33429;
  t56832 = t56830 + t56831;
  t56833 = t33483*t56832;
  t56834 = -0.305*t33474*t33488;
  t56835 = t56826 + t56833 + t56834;
  t56839 = 0.15121*t56812;
  t56840 = t56731*t56835;
  t56841 = t56839 + t56840;
  t56814 = -0.15121*t56812;
  t56816 = -0.15121*t56731;
  t56819 = -0.15121*t56748;
  t56836 = t56748*t56835;
  t56837 = t56814 + t56816 + t56819 + t56836;
  t56846 = -1.*t56739*t56748;
  t56848 = -1.*t56731*t56752;
  t56849 = t56846 + t56848;
  t56853 = 0.28121*t33474;
  t56854 = -1.*t56832*t33474;
  t56855 = -0.305*t33483*t33488;
  t56858 = t56853 + t56854 + t56855;
  t56860 = t56739*t56841;
  t56862 = -1.*t56837*t56752;
  t56864 = t56860 + t56862;
  t56838 = t56739*t56837;
  t56842 = t56841*t56752;
  t56843 = t56838 + t56842;
  t56783 = t56742*t56709;
  t56790 = t56731*t56739*t56789;
  t56792 = -1.*t56748*t56789*t56752;
  t56793 = t56790 + t56792;
  t56799 = t56711*t56793;
  t56800 = t56783 + t56799;
  t56859 = t56858*t56709;
  t56865 = t56711*t56864;
  t56866 = t56859 + t56865;
  t56869 = t56711*t56858;
  t56871 = -1.*t56709*t56864;
  t56872 = t56869 + t56871;
  t56876 = t56739*t56748*t56789;
  t56877 = t56731*t56789*t56752;
  t56878 = t56876 + t56877;
  t56803 = t56731*t56739;
  t56804 = -1.*t56748*t56752;
  t56805 = t56803 + t56804;
  t56844 = -1.*t56805*t56843;
  t56879 = t56878*t56843;
  t56710 = t56679*t56709;
  t56756 = t56711*t56754;
  t56757 = t56710 + t56756;
  t56883 = t56711*t56742;
  t56884 = -1.*t56709*t56793;
  t56885 = t56883 + t56884;
  t56943 = -1.*t56878*t56843;
  t56955 = t56762*t56843;
  t56964 = -1.*t56858*t56742;
  t56972 = t56858*t56679;
  t57006 = t56805*t56843;
  t57013 = -1.*t56762*t56843;
  p_output1[0]=t56757;
  p_output1[1]=t56758*t56762 - 1.*t56769*t56773;
  p_output1[2]=t56762*t56769 + t56758*t56773;
  p_output1[3]=t56800*(t56844 - 1.*t56711*t56849*t56866 + t56709*t56849*t56872) + t56711*t56849*(t56800*t56866 + t56879 + t56872*t56885);
  p_output1[4]=(t56844 - 1.*t56849*t56864)*t56878 + t56805*(t56742*t56858 + t56793*t56864 + t56879);
  p_output1[5]=t56742*(-1.*t56731*t56837 + t56748*t56841);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t33488 - 0.305*t33429*t33488 - 1.*t33488*t56832;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t56711*t56849;
  p_output1[19]=t56758*t56805 + t56709*t56769*t56849;
  p_output1[20]=t56769*t56805 - 1.*t56709*t56758*t56849;
  p_output1[21]=t56757*(-1.*t56800*t56866 - 1.*t56872*t56885 + t56943) + t56800*(t56757*t56866 + t56773*t56872 + t56955);
  p_output1[22]=t56762*(-1.*t56793*t56864 + t56943 + t56964) + t56878*(t56754*t56864 + t56955 + t56972);
  p_output1[23]=t56679*(-1.*t56748*t56789*t56837 - 1.*t56731*t56789*t56841 + t56964) + t56742*(t56742*t56748*t56837 + t56731*t56742*t56841 + t56972);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t56679*(-1.*t56789*t56835 + t56964) + t56742*(t56742*t56835 + t56972);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t56800;
  p_output1[37]=t56758*t56878 - 1.*t56769*t56885;
  p_output1[38]=t56769*t56878 + t56758*t56885;
  p_output1[39]=t56757*(t56711*t56849*t56866 - 1.*t56709*t56849*t56872 + t57006) + t56711*t56849*(-1.*t56757*t56866 - 1.*t56773*t56872 + t57013);
  p_output1[40]=t56762*(t56849*t56864 + t57006) + t56805*(-1.*t56679*t56858 - 1.*t56754*t56864 + t57013);
  p_output1[41]=t56679*(t56731*t56837 - 1.*t56748*t56841);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t56679 - 0.15121*t56789;
  p_output1[49]=0.28121*t33429 + 0.305*Power(t33488,2) - 1.*t33429*t56832;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
