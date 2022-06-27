/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:17 GMT+02:00
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
  double t7447;
  double t5027;
  double t5467;
  double t8156;
  double t7245;
  double t8162;
  double t14792;
  double t21149;
  double t21164;
  double t21155;
  double t21156;
  double t21160;
  double t21165;
  double t861;
  double t21140;
  double t20670;
  double t21162;
  double t21168;
  double t21169;
  double t23506;
  double t21399;
  double t21407;
  double t23441;
  double t21191;
  double t23507;
  double t23515;
  double t23517;
  double t23679;
  double t23680;
  double t23681;
  double t23696;
  double t23697;
  double t23698;
  double t23700;
  double t23705;
  double t23706;
  double t23673;
  double t23691;
  double t23707;
  double t23709;
  double t23719;
  double t23722;
  double t23723;
  double t23724;
  double t23733;
  double t23734;
  double t23586;
  double t23587;
  double t23589;
  double t23652;
  double t23710;
  double t23711;
  double t23749;
  double t23750;
  double t23751;
  double t23753;
  double t23754;
  double t23756;
  double t23738;
  double t23741;
  double t23747;
  double t23712;
  double t23735;
  double t23736;
  double t23535;
  double t23536;
  double t23537;
  double t23752;
  double t23757;
  double t23759;
  double t23533;
  double t23546;
  double t23561;
  double t23563;
  double t23566;
  double t23577;
  double t23768;
  double t23773;
  double t23774;
  double t23796;
  double t23797;
  double t23798;
  double t23737;
  double t23799;
  double t23839;
  double t23854;
  double t23765;
  double t23766;
  double t23767;
  double t20853;
  double t21174;
  double t21183;
  double t23801;
  double t23805;
  double t23809;
  double t23891;
  double t23898;
  double t23918;
  double t23912;
  double t23929;
  double t23924;
  double t23948;
  double t23957;
  double t23978;
  double t23988;
  t7447 = Cos(var1[16]);
  t5027 = Cos(var1[17]);
  t5467 = Sin(var1[16]);
  t8156 = Sin(var1[17]);
  t7245 = t5027*t5467;
  t8162 = -1.*t7447*t8156;
  t14792 = t7245 + t8162;
  t21149 = Cos(var1[5]);
  t21164 = Sin(var1[15]);
  t21155 = t7447*t5027;
  t21156 = t5467*t8156;
  t21160 = t21155 + t21156;
  t21165 = Sin(var1[5]);
  t861 = Cos(var1[15]);
  t21140 = Cos(var1[4]);
  t20670 = Sin(var1[4]);
  t21162 = t21149*t21160;
  t21168 = t21164*t14792*t21165;
  t21169 = t21162 + t21168;
  t23506 = Sin(var1[3]);
  t21399 = -1.*t21149*t21164*t14792;
  t21407 = t21160*t21165;
  t23441 = t21399 + t21407;
  t21191 = Cos(var1[3]);
  t23507 = t861*t21140*t14792;
  t23515 = -1.*t20670*t21169;
  t23517 = t23507 + t23515;
  t23679 = -0.0641*t5027;
  t23680 = -0.28*t8156;
  t23681 = t23679 + t23680;
  t23696 = -1.*t5027;
  t23697 = 1. + t23696;
  t23698 = -0.575*t23697;
  t23700 = -0.295*t5027;
  t23705 = -0.0641*t8156;
  t23706 = t23698 + t23700 + t23705;
  t23673 = 0.325*t5467;
  t23691 = t7447*t23681;
  t23707 = t5467*t23706;
  t23709 = t23673 + t23691 + t23707;
  t23719 = -1.*t7447;
  t23722 = 1. + t23719;
  t23723 = -0.325*t23722;
  t23724 = -1.*t5467*t23681;
  t23733 = t7447*t23706;
  t23734 = t23723 + t23724 + t23733;
  t23586 = -1.*t861;
  t23587 = 1. + t23586;
  t23589 = -0.1575*t23587;
  t23652 = -0.2255*t861;
  t23710 = -1.*t21164*t23709;
  t23711 = t23589 + t23652 + t23710;
  t23749 = -0.068*t21164;
  t23750 = t861*t23709;
  t23751 = t23749 + t23750;
  t23753 = t21149*t23734;
  t23754 = -1.*t23711*t21165;
  t23756 = t23753 + t23754;
  t23738 = t21164*t20670;
  t23741 = -1.*t861*t21140*t21165;
  t23747 = t23738 + t23741;
  t23712 = t21149*t23711;
  t23735 = t23734*t21165;
  t23736 = t23712 + t23735;
  t23535 = -1.*t5027*t5467;
  t23536 = t7447*t8156;
  t23537 = t23535 + t23536;
  t23752 = t23751*t20670;
  t23757 = t21140*t23756;
  t23759 = t23752 + t23757;
  t23533 = t861*t21160*t20670;
  t23546 = t21149*t23537;
  t23561 = t21164*t21160*t21165;
  t23563 = t23546 + t23561;
  t23566 = t21140*t23563;
  t23577 = t23533 + t23566;
  t23768 = t21140*t23751;
  t23773 = -1.*t20670*t23756;
  t23774 = t23768 + t23773;
  t23796 = -1.*t21149*t21164*t21160;
  t23797 = t23537*t21165;
  t23798 = t23796 + t23797;
  t23737 = -1.*t861*t21149*t23736;
  t23799 = t23736*t23798;
  t23839 = -1.*t21164*t23751;
  t23854 = t861*t23751*t21160;
  t23765 = t21140*t21164;
  t23766 = t861*t20670*t21165;
  t23767 = t23765 + t23766;
  t20853 = t861*t14792*t20670;
  t21174 = t21140*t21169;
  t21183 = t20853 + t21174;
  t23801 = t861*t21140*t21160;
  t23805 = -1.*t20670*t23563;
  t23809 = t23801 + t23805;
  t23891 = t23736*t23441;
  t23898 = -1.*t23736*t23798;
  t23918 = -1.*t861*t23751*t21160;
  t23912 = t861*t23751*t14792;
  t23929 = t23734*t21160;
  t23924 = -1.*t23734*t23537;
  t23948 = t861*t21149*t23736;
  t23957 = -1.*t23736*t23441;
  t23978 = t21164*t23751;
  t23988 = -1.*t861*t23751*t14792;
  p_output1[0]=t21183;
  p_output1[1]=t21191*t23441 - 1.*t23506*t23517;
  p_output1[2]=t23441*t23506 + t21191*t23517;
  p_output1[3]=t23577*(t23737 - 1.*t23747*t23759 - 1.*t23767*t23774) + t23747*(t23577*t23759 + t23799 + t23774*t23809);
  p_output1[4]=t21149*(t23563*t23756 + t23799 + t23854)*t861 + t23798*(t23737 + t23839 + t21165*t23756*t861);
  p_output1[5]=t21164*(-1.*t21160*t21164*t23711 + t23537*t23734 + t23854) + t21160*t861*(t23839 - 1.*t23711*t861);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t14792 + 0.2255*t23537;
  p_output1[16]=-1.*t23681*t5027 - 0.325*t8156 - 1.*t23706*t8156;
  p_output1[17]=-0.0641;
  p_output1[18]=t23747;
  p_output1[19]=-1.*t23506*t23767 + t21149*t21191*t861;
  p_output1[20]=t21191*t23767 + t21149*t23506*t861;
  p_output1[21]=t23577*(t21183*t23759 + t23517*t23774 + t23891) + t21183*(-1.*t23577*t23759 - 1.*t23774*t23809 + t23898);
  p_output1[22]=t23798*(t21169*t23756 + t23891 + t23912) + t23441*(-1.*t23563*t23756 + t23898 + t23918);
  p_output1[23]=t14792*(t21160*t21164*t23711 + t23918 + t23924)*t861 + t21160*(-1.*t14792*t21164*t23711 + t23912 + t23929)*t861;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t21160*(-1.*t21160*t23709 + t23924) + t23537*(t14792*t23709 + t23929);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t23577;
  p_output1[37]=t21191*t23798 - 1.*t23506*t23809;
  p_output1[38]=t23506*t23798 + t21191*t23809;
  p_output1[39]=t21183*(t23747*t23759 + t23767*t23774 + t23948) + t23747*(-1.*t21183*t23759 - 1.*t23517*t23774 + t23957);
  p_output1[40]=t21149*(-1.*t21169*t23756 + t23957 + t23988)*t861 + t23441*(t23948 + t23978 - 1.*t21165*t23756*t861);
  p_output1[41]=t21164*(t14792*t21164*t23711 - 1.*t21160*t23734 + t23988) + t14792*t861*(t23978 + t23711*t861);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t21160;
  p_output1[52]=0.325*t5027 + t23706*t5027 - 1.*t23681*t8156;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
