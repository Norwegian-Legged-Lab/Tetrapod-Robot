/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:49 GMT+02:00
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
  double t20662;
  double t8824;
  double t11765;
  double t20857;
  double t20432;
  double t21368;
  double t22724;
  double t22960;
  double t26623;
  double t22977;
  double t22987;
  double t26612;
  double t26625;
  double t8272;
  double t22903;
  double t22828;
  double t26622;
  double t26675;
  double t26677;
  double t26701;
  double t26689;
  double t26690;
  double t26694;
  double t26687;
  double t26702;
  double t26703;
  double t26704;
  double t26774;
  double t26775;
  double t26776;
  double t26779;
  double t26780;
  double t26781;
  double t26783;
  double t26784;
  double t26785;
  double t26773;
  double t26778;
  double t26786;
  double t26787;
  double t26792;
  double t26793;
  double t26795;
  double t26796;
  double t26797;
  double t26798;
  double t26768;
  double t26769;
  double t26771;
  double t26772;
  double t26788;
  double t26790;
  double t26807;
  double t26808;
  double t26809;
  double t26811;
  double t26813;
  double t26814;
  double t26803;
  double t26804;
  double t26805;
  double t26791;
  double t26799;
  double t26800;
  double t26713;
  double t26714;
  double t26715;
  double t26810;
  double t26815;
  double t26817;
  double t26711;
  double t26716;
  double t26717;
  double t26719;
  double t26763;
  double t26767;
  double t26823;
  double t26824;
  double t26825;
  double t26830;
  double t26831;
  double t26832;
  double t26801;
  double t26833;
  double t26842;
  double t26846;
  double t26819;
  double t26820;
  double t26821;
  double t22831;
  double t26678;
  double t26682;
  double t26835;
  double t26836;
  double t26837;
  double t26874;
  double t26879;
  double t26889;
  double t26885;
  double t26899;
  double t26894;
  double t26916;
  double t26921;
  double t26927;
  double t26931;
  t20662 = Cos(var1[13]);
  t8824 = Cos(var1[14]);
  t11765 = Sin(var1[13]);
  t20857 = Sin(var1[14]);
  t20432 = t8824*t11765;
  t21368 = -1.*t20662*t20857;
  t22724 = t20432 + t21368;
  t22960 = Cos(var1[5]);
  t26623 = Sin(var1[12]);
  t22977 = t20662*t8824;
  t22987 = t11765*t20857;
  t26612 = t22977 + t22987;
  t26625 = Sin(var1[5]);
  t8272 = Cos(var1[12]);
  t22903 = Cos(var1[4]);
  t22828 = Sin(var1[4]);
  t26622 = t22960*t26612;
  t26675 = t26623*t22724*t26625;
  t26677 = t26622 + t26675;
  t26701 = Sin(var1[3]);
  t26689 = -1.*t22960*t26623*t22724;
  t26690 = t26612*t26625;
  t26694 = t26689 + t26690;
  t26687 = Cos(var1[3]);
  t26702 = t8272*t22903*t22724;
  t26703 = -1.*t22828*t26677;
  t26704 = t26702 + t26703;
  t26774 = -0.0641*t8824;
  t26775 = -0.28*t20857;
  t26776 = t26774 + t26775;
  t26779 = -1.*t8824;
  t26780 = 1. + t26779;
  t26781 = 0.075*t26780;
  t26783 = 0.355*t8824;
  t26784 = -0.0641*t20857;
  t26785 = t26781 + t26783 + t26784;
  t26773 = -0.325*t11765;
  t26778 = t20662*t26776;
  t26786 = t11765*t26785;
  t26787 = t26773 + t26778 + t26786;
  t26792 = -1.*t20662;
  t26793 = 1. + t26792;
  t26795 = 0.325*t26793;
  t26796 = -1.*t11765*t26776;
  t26797 = t20662*t26785;
  t26798 = t26795 + t26796 + t26797;
  t26768 = -1.*t8272;
  t26769 = 1. + t26768;
  t26771 = -0.1575*t26769;
  t26772 = -0.2255*t8272;
  t26788 = -1.*t26623*t26787;
  t26790 = t26771 + t26772 + t26788;
  t26807 = -0.068*t26623;
  t26808 = t8272*t26787;
  t26809 = t26807 + t26808;
  t26811 = t22960*t26798;
  t26813 = -1.*t26790*t26625;
  t26814 = t26811 + t26813;
  t26803 = t26623*t22828;
  t26804 = -1.*t8272*t22903*t26625;
  t26805 = t26803 + t26804;
  t26791 = t22960*t26790;
  t26799 = t26798*t26625;
  t26800 = t26791 + t26799;
  t26713 = -1.*t8824*t11765;
  t26714 = t20662*t20857;
  t26715 = t26713 + t26714;
  t26810 = t26809*t22828;
  t26815 = t22903*t26814;
  t26817 = t26810 + t26815;
  t26711 = t8272*t26612*t22828;
  t26716 = t22960*t26715;
  t26717 = t26623*t26612*t26625;
  t26719 = t26716 + t26717;
  t26763 = t22903*t26719;
  t26767 = t26711 + t26763;
  t26823 = t22903*t26809;
  t26824 = -1.*t22828*t26814;
  t26825 = t26823 + t26824;
  t26830 = -1.*t22960*t26623*t26612;
  t26831 = t26715*t26625;
  t26832 = t26830 + t26831;
  t26801 = -1.*t8272*t22960*t26800;
  t26833 = t26800*t26832;
  t26842 = -1.*t26623*t26809;
  t26846 = t8272*t26809*t26612;
  t26819 = t22903*t26623;
  t26820 = t8272*t22828*t26625;
  t26821 = t26819 + t26820;
  t22831 = t8272*t22724*t22828;
  t26678 = t22903*t26677;
  t26682 = t22831 + t26678;
  t26835 = t8272*t22903*t26612;
  t26836 = -1.*t22828*t26719;
  t26837 = t26835 + t26836;
  t26874 = t26800*t26694;
  t26879 = -1.*t26800*t26832;
  t26889 = -1.*t8272*t26809*t26612;
  t26885 = t8272*t26809*t22724;
  t26899 = t26798*t26612;
  t26894 = -1.*t26798*t26715;
  t26916 = t8272*t22960*t26800;
  t26921 = -1.*t26800*t26694;
  t26927 = t26623*t26809;
  t26931 = -1.*t8272*t26809*t22724;
  p_output1[0]=t26682;
  p_output1[1]=t26687*t26694 - 1.*t26701*t26704;
  p_output1[2]=t26694*t26701 + t26687*t26704;
  p_output1[3]=t26767*(t26801 - 1.*t26805*t26817 - 1.*t26821*t26825) + t26805*(t26767*t26817 + t26833 + t26825*t26837);
  p_output1[4]=t22960*(t26719*t26814 + t26833 + t26846)*t8272 + t26832*(t26801 + t26842 + t26625*t26814*t8272);
  p_output1[5]=t26623*(-1.*t26612*t26623*t26790 + t26715*t26798 + t26846) + t26612*t8272*(t26842 - 1.*t26790*t8272);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t22724 + 0.2255*t26715;
  p_output1[13]=0.325*t20857 - 1.*t20857*t26785 - 1.*t26776*t8824;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t26805;
  p_output1[19]=-1.*t26701*t26821 + t22960*t26687*t8272;
  p_output1[20]=t26687*t26821 + t22960*t26701*t8272;
  p_output1[21]=t26767*(t26682*t26817 + t26704*t26825 + t26874) + t26682*(-1.*t26767*t26817 - 1.*t26825*t26837 + t26879);
  p_output1[22]=t26832*(t26677*t26814 + t26874 + t26885) + t26694*(-1.*t26719*t26814 + t26879 + t26889);
  p_output1[23]=t22724*(t26612*t26623*t26790 + t26889 + t26894)*t8272 + t26612*(-1.*t22724*t26623*t26790 + t26885 + t26899)*t8272;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t26612*(-1.*t26612*t26787 + t26894) + t26715*(t22724*t26787 + t26899);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t26767;
  p_output1[37]=t26687*t26832 - 1.*t26701*t26837;
  p_output1[38]=t26701*t26832 + t26687*t26837;
  p_output1[39]=t26682*(t26805*t26817 + t26821*t26825 + t26916) + t26805*(-1.*t26682*t26817 - 1.*t26704*t26825 + t26921);
  p_output1[40]=t22960*(-1.*t26677*t26814 + t26921 + t26931)*t8272 + t26694*(t26916 + t26927 - 1.*t26625*t26814*t8272);
  p_output1[41]=t26623*(t22724*t26623*t26790 - 1.*t26612*t26798 + t26931) + t22724*t8272*(t26927 + t26790*t8272);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t26612;
  p_output1[49]=-1.*t20857*t26776 - 0.325*t8824 + t26785*t8824;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
