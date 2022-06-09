/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:51 GMT+02:00
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
  double t4598;
  double t4576;
  double t4583;
  double t4607;
  double t4589;
  double t4609;
  double t4610;
  double t4704;
  double t4622;
  double t4512;
  double t4694;
  double t4705;
  double t4700;
  double t4701;
  double t4702;
  double t4695;
  double t4703;
  double t4706;
  double t4707;
  double t4754;
  double t4766;
  double t4733;
  double t4734;
  double t4738;
  double t4742;
  double t4750;
  double t4751;
  double t4759;
  double t4760;
  double t4761;
  double t4767;
  double t4768;
  double t4772;
  double t4789;
  double t4793;
  double t4799;
  double t4808;
  double t4809;
  double t4810;
  double t4812;
  double t4813;
  double t4814;
  double t4732;
  double t4752;
  double t4753;
  double t4833;
  double t4837;
  double t4841;
  double t4844;
  double t4846;
  double t4847;
  double t4848;
  double t4849;
  double t4850;
  double t4722;
  double t4726;
  double t4731;
  double t4832;
  double t4842;
  double t4851;
  double t4852;
  double t4856;
  double t4857;
  double t4858;
  double t4859;
  double t4860;
  double t4861;
  double t4826;
  double t4827;
  double t4828;
  double t4830;
  double t4853;
  double t4854;
  double t4865;
  double t4866;
  double t4867;
  double t4869;
  double t4870;
  double t4871;
  double t4855;
  double t4862;
  double t4863;
  double t4868;
  double t4872;
  double t4873;
  double t4875;
  double t4879;
  double t4880;
  double t4677;
  double t4711;
  double t4713;
  double t4864;
  double t4886;
  double t4896;
  double t4901;
  double t4907;
  double t4912;
  double t4927;
  double t4934;
  double t4950;
  double t4943;
  double t4955;
  double t4963;
  double t5001;
  double t4993;
  t4598 = Cos(var1[16]);
  t4576 = Cos(var1[17]);
  t4583 = Sin(var1[16]);
  t4607 = Sin(var1[17]);
  t4589 = t4576*t4583;
  t4609 = -1.*t4598*t4607;
  t4610 = t4589 + t4609;
  t4704 = Sin(var1[15]);
  t4622 = Sin(var1[4]);
  t4512 = Cos(var1[15]);
  t4694 = Cos(var1[4]);
  t4705 = Sin(var1[5]);
  t4700 = t4598*t4576;
  t4701 = t4583*t4607;
  t4702 = t4700 + t4701;
  t4695 = Cos(var1[5]);
  t4703 = t4695*t4702;
  t4706 = t4704*t4610*t4705;
  t4707 = t4703 + t4706;
  t4754 = Cos(var1[3]);
  t4766 = Sin(var1[3]);
  t4733 = -1.*t4576*t4583;
  t4734 = t4598*t4607;
  t4738 = t4733 + t4734;
  t4742 = t4695*t4738;
  t4750 = t4704*t4702*t4705;
  t4751 = t4742 + t4750;
  t4759 = -1.*t4695*t4704*t4610;
  t4760 = t4702*t4705;
  t4761 = t4759 + t4760;
  t4767 = t4512*t4694*t4610;
  t4768 = -1.*t4622*t4707;
  t4772 = t4767 + t4768;
  t4789 = t4694*t4704;
  t4793 = t4512*t4622*t4705;
  t4799 = t4789 + t4793;
  t4808 = -1.*t4695*t4704*t4702;
  t4809 = t4738*t4705;
  t4810 = t4808 + t4809;
  t4812 = t4512*t4694*t4702;
  t4813 = -1.*t4622*t4751;
  t4814 = t4812 + t4813;
  t4732 = t4512*t4702*t4622;
  t4752 = t4694*t4751;
  t4753 = t4732 + t4752;
  t4833 = -0.0641*t4576;
  t4837 = -0.28*t4607;
  t4841 = t4833 + t4837;
  t4844 = -1.*t4576;
  t4846 = 1. + t4844;
  t4847 = -0.575*t4846;
  t4848 = -0.295*t4576;
  t4849 = -0.0641*t4607;
  t4850 = t4847 + t4848 + t4849;
  t4722 = t4704*t4622;
  t4726 = -1.*t4512*t4694*t4705;
  t4731 = t4722 + t4726;
  t4832 = 0.325*t4583;
  t4842 = t4598*t4841;
  t4851 = t4583*t4850;
  t4852 = t4832 + t4842 + t4851;
  t4856 = -1.*t4598;
  t4857 = 1. + t4856;
  t4858 = -0.325*t4857;
  t4859 = -1.*t4583*t4841;
  t4860 = t4598*t4850;
  t4861 = t4858 + t4859 + t4860;
  t4826 = -1.*t4512;
  t4827 = 1. + t4826;
  t4828 = -0.1575*t4827;
  t4830 = -0.2255*t4512;
  t4853 = -1.*t4704*t4852;
  t4854 = t4828 + t4830 + t4853;
  t4865 = -0.068*t4704;
  t4866 = t4512*t4852;
  t4867 = t4865 + t4866;
  t4869 = t4695*t4861;
  t4870 = -1.*t4854*t4705;
  t4871 = t4869 + t4870;
  t4855 = t4695*t4854;
  t4862 = t4861*t4705;
  t4863 = t4855 + t4862;
  t4868 = t4867*t4622;
  t4872 = t4694*t4871;
  t4873 = t4868 + t4872;
  t4875 = t4694*t4867;
  t4879 = -1.*t4622*t4871;
  t4880 = t4875 + t4879;
  t4677 = t4512*t4610*t4622;
  t4711 = t4694*t4707;
  t4713 = t4677 + t4711;
  t4864 = -1.*t4512*t4695*t4863;
  t4886 = t4863*t4810;
  t4896 = t4863*t4761;
  t4901 = -1.*t4863*t4810;
  t4907 = t4512*t4695*t4863;
  t4912 = -1.*t4863*t4761;
  t4927 = -1.*t4704*t4867;
  t4934 = t4512*t4867*t4702;
  t4950 = -1.*t4512*t4867*t4702;
  t4943 = t4512*t4867*t4610;
  t4955 = t4704*t4867;
  t4963 = -1.*t4512*t4867*t4610;
  t5001 = t4861*t4702;
  t4993 = -1.*t4861*t4738;
  p_output1[0]=t4713;
  p_output1[1]=t4731;
  p_output1[2]=t4753;
  p_output1[3]=t4754*t4761 - 1.*t4766*t4772;
  p_output1[4]=t4512*t4695*t4754 - 1.*t4766*t4799;
  p_output1[5]=t4754*t4810 - 1.*t4766*t4814;
  p_output1[6]=t4761*t4766 + t4754*t4772;
  p_output1[7]=t4512*t4695*t4766 + t4754*t4799;
  p_output1[8]=t4766*t4810 + t4754*t4814;
  p_output1[9]=t4753*(t4864 - 1.*t4731*t4873 - 1.*t4799*t4880) + t4731*(t4753*t4873 + t4814*t4880 + t4886);
  p_output1[10]=t4753*(t4713*t4873 + t4772*t4880 + t4896) + t4713*(-1.*t4753*t4873 - 1.*t4814*t4880 + t4901);
  p_output1[11]=t4713*(t4731*t4873 + t4799*t4880 + t4907) + t4731*(-1.*t4713*t4873 - 1.*t4772*t4880 + t4912);
  p_output1[12]=t4810*(t4864 + t4512*t4705*t4871 + t4927) + t4512*t4695*(t4751*t4871 + t4886 + t4934);
  p_output1[13]=t4810*(t4707*t4871 + t4896 + t4943) + t4761*(-1.*t4751*t4871 + t4901 + t4950);
  p_output1[14]=t4761*(-1.*t4512*t4705*t4871 + t4907 + t4955) + t4512*t4695*(-1.*t4707*t4871 + t4912 + t4963);
  p_output1[15]=t4512*t4702*(-1.*t4512*t4854 + t4927) + t4704*(-1.*t4702*t4704*t4854 + t4738*t4861 + t4934);
  p_output1[16]=t4512*t4610*(t4702*t4704*t4854 + t4950 + t4993) + t4512*t4702*(-1.*t4610*t4704*t4854 + t4943 + t5001);
  p_output1[17]=t4512*t4610*(t4512*t4854 + t4955) + t4704*(t4610*t4704*t4854 - 1.*t4702*t4861 + t4963);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.1575*t4610 + 0.2255*t4738;
  p_output1[46]=t4702*(-1.*t4702*t4852 + t4993) + t4738*(t4610*t4852 + t5001);
  p_output1[47]=-0.068*t4702;
  p_output1[48]=-0.325*t4607 - 1.*t4576*t4841 - 1.*t4607*t4850;
  p_output1[49]=0;
  p_output1[50]=0.325*t4576 - 1.*t4607*t4841 + t4576*t4850;
  p_output1[51]=-0.0641;
  p_output1[52]=0;
  p_output1[53]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
