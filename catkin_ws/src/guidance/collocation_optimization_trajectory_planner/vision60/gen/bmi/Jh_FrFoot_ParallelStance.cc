/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:56 GMT+02:00
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
  double t41293;
  double t38847;
  double t41042;
  double t41459;
  double t41229;
  double t41499;
  double t41519;
  double t42431;
  double t41526;
  double t5866;
  double t41543;
  double t43726;
  double t41563;
  double t41575;
  double t41890;
  double t41553;
  double t41995;
  double t43735;
  double t43744;
  double t44027;
  double t44156;
  double t43847;
  double t43864;
  double t43884;
  double t43919;
  double t43956;
  double t43973;
  double t44047;
  double t44064;
  double t44081;
  double t44166;
  double t44186;
  double t44220;
  double t44276;
  double t44343;
  double t44485;
  double t44521;
  double t44525;
  double t44565;
  double t44585;
  double t44586;
  double t44587;
  double t43830;
  double t43993;
  double t44010;
  double t44766;
  double t44775;
  double t44777;
  double t44779;
  double t44782;
  double t44783;
  double t44787;
  double t44789;
  double t44791;
  double t43788;
  double t43801;
  double t43810;
  double t44749;
  double t44778;
  double t44795;
  double t44796;
  double t44819;
  double t44820;
  double t44821;
  double t44822;
  double t44826;
  double t44832;
  double t44711;
  double t44712;
  double t44714;
  double t44722;
  double t44797;
  double t44807;
  double t44843;
  double t44844;
  double t44845;
  double t44848;
  double t44850;
  double t44852;
  double t44818;
  double t44840;
  double t44841;
  double t44847;
  double t44854;
  double t44855;
  double t44857;
  double t44858;
  double t44859;
  double t41533;
  double t43766;
  double t43779;
  double t44842;
  double t44863;
  double t44877;
  double t44887;
  double t44893;
  double t44898;
  double t44907;
  double t44913;
  double t44922;
  double t44918;
  double t44927;
  double t44931;
  double t44963;
  double t44958;
  t41293 = Cos(var1[13]);
  t38847 = Cos(var1[14]);
  t41042 = Sin(var1[13]);
  t41459 = Sin(var1[14]);
  t41229 = t38847*t41042;
  t41499 = -1.*t41293*t41459;
  t41519 = t41229 + t41499;
  t42431 = Sin(var1[12]);
  t41526 = Sin(var1[4]);
  t5866 = Cos(var1[12]);
  t41543 = Cos(var1[4]);
  t43726 = Sin(var1[5]);
  t41563 = t41293*t38847;
  t41575 = t41042*t41459;
  t41890 = t41563 + t41575;
  t41553 = Cos(var1[5]);
  t41995 = t41553*t41890;
  t43735 = t42431*t41519*t43726;
  t43744 = t41995 + t43735;
  t44027 = Cos(var1[3]);
  t44156 = Sin(var1[3]);
  t43847 = -1.*t38847*t41042;
  t43864 = t41293*t41459;
  t43884 = t43847 + t43864;
  t43919 = t41553*t43884;
  t43956 = t42431*t41890*t43726;
  t43973 = t43919 + t43956;
  t44047 = -1.*t41553*t42431*t41519;
  t44064 = t41890*t43726;
  t44081 = t44047 + t44064;
  t44166 = t5866*t41543*t41519;
  t44186 = -1.*t41526*t43744;
  t44220 = t44166 + t44186;
  t44276 = t41543*t42431;
  t44343 = t5866*t41526*t43726;
  t44485 = t44276 + t44343;
  t44521 = -1.*t41553*t42431*t41890;
  t44525 = t43884*t43726;
  t44565 = t44521 + t44525;
  t44585 = t5866*t41543*t41890;
  t44586 = -1.*t41526*t43973;
  t44587 = t44585 + t44586;
  t43830 = t5866*t41890*t41526;
  t43993 = t41543*t43973;
  t44010 = t43830 + t43993;
  t44766 = -0.0641*t38847;
  t44775 = -0.28*t41459;
  t44777 = t44766 + t44775;
  t44779 = -1.*t38847;
  t44782 = 1. + t44779;
  t44783 = 0.075*t44782;
  t44787 = 0.355*t38847;
  t44789 = -0.0641*t41459;
  t44791 = t44783 + t44787 + t44789;
  t43788 = t42431*t41526;
  t43801 = -1.*t5866*t41543*t43726;
  t43810 = t43788 + t43801;
  t44749 = -0.325*t41042;
  t44778 = t41293*t44777;
  t44795 = t41042*t44791;
  t44796 = t44749 + t44778 + t44795;
  t44819 = -1.*t41293;
  t44820 = 1. + t44819;
  t44821 = 0.325*t44820;
  t44822 = -1.*t41042*t44777;
  t44826 = t41293*t44791;
  t44832 = t44821 + t44822 + t44826;
  t44711 = -1.*t5866;
  t44712 = 1. + t44711;
  t44714 = -0.1575*t44712;
  t44722 = -0.2255*t5866;
  t44797 = -1.*t42431*t44796;
  t44807 = t44714 + t44722 + t44797;
  t44843 = -0.068*t42431;
  t44844 = t5866*t44796;
  t44845 = t44843 + t44844;
  t44848 = t41553*t44832;
  t44850 = -1.*t44807*t43726;
  t44852 = t44848 + t44850;
  t44818 = t41553*t44807;
  t44840 = t44832*t43726;
  t44841 = t44818 + t44840;
  t44847 = t44845*t41526;
  t44854 = t41543*t44852;
  t44855 = t44847 + t44854;
  t44857 = t41543*t44845;
  t44858 = -1.*t41526*t44852;
  t44859 = t44857 + t44858;
  t41533 = t5866*t41519*t41526;
  t43766 = t41543*t43744;
  t43779 = t41533 + t43766;
  t44842 = -1.*t5866*t41553*t44841;
  t44863 = t44841*t44565;
  t44877 = t44841*t44081;
  t44887 = -1.*t44841*t44565;
  t44893 = t5866*t41553*t44841;
  t44898 = -1.*t44841*t44081;
  t44907 = -1.*t42431*t44845;
  t44913 = t5866*t44845*t41890;
  t44922 = -1.*t5866*t44845*t41890;
  t44918 = t5866*t44845*t41519;
  t44927 = t42431*t44845;
  t44931 = -1.*t5866*t44845*t41519;
  t44963 = t44832*t41890;
  t44958 = -1.*t44832*t43884;
  p_output1[0]=t43779;
  p_output1[1]=t43810;
  p_output1[2]=t44010;
  p_output1[3]=t44027*t44081 - 1.*t44156*t44220;
  p_output1[4]=-1.*t44156*t44485 + t41553*t44027*t5866;
  p_output1[5]=t44027*t44565 - 1.*t44156*t44587;
  p_output1[6]=t44081*t44156 + t44027*t44220;
  p_output1[7]=t44027*t44485 + t41553*t44156*t5866;
  p_output1[8]=t44156*t44565 + t44027*t44587;
  p_output1[9]=t44010*(t44842 - 1.*t43810*t44855 - 1.*t44485*t44859) + t43810*(t44010*t44855 + t44587*t44859 + t44863);
  p_output1[10]=t44010*(t43779*t44855 + t44220*t44859 + t44877) + t43779*(-1.*t44010*t44855 - 1.*t44587*t44859 + t44887);
  p_output1[11]=t43779*(t43810*t44855 + t44485*t44859 + t44893) + t43810*(-1.*t43779*t44855 - 1.*t44220*t44859 + t44898);
  p_output1[12]=t41553*(t43973*t44852 + t44863 + t44913)*t5866 + t44565*(t44842 + t44907 + t43726*t44852*t5866);
  p_output1[13]=t44565*(t43744*t44852 + t44877 + t44918) + t44081*(-1.*t43973*t44852 + t44887 + t44922);
  p_output1[14]=t41553*(-1.*t43744*t44852 + t44898 + t44931)*t5866 + t44081*(t44893 + t44927 - 1.*t43726*t44852*t5866);
  p_output1[15]=t42431*(-1.*t41890*t42431*t44807 + t43884*t44832 + t44913) + t41890*t5866*(t44907 - 1.*t44807*t5866);
  p_output1[16]=t41519*(t41890*t42431*t44807 + t44922 + t44958)*t5866 + t41890*(-1.*t41519*t42431*t44807 + t44918 + t44963)*t5866;
  p_output1[17]=t42431*(t41519*t42431*t44807 - 1.*t41890*t44832 + t44931) + t41519*t5866*(t44927 + t44807*t5866);
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
  p_output1[36]=0.1575*t41519 + 0.2255*t43884;
  p_output1[37]=t41890*(-1.*t41890*t44796 + t44958) + t43884*(t41519*t44796 + t44963);
  p_output1[38]=-0.068*t41890;
  p_output1[39]=0.325*t41459 - 1.*t38847*t44777 - 1.*t41459*t44791;
  p_output1[40]=0;
  p_output1[41]=-0.325*t38847 - 1.*t41459*t44777 + t38847*t44791;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
