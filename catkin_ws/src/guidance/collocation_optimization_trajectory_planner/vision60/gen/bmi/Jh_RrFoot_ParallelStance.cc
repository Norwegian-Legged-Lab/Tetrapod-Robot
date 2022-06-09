/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:59 GMT+02:00
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
  double t1661;
  double t1385;
  double t1393;
  double t1777;
  double t1658;
  double t3530;
  double t3539;
  double t6614;
  double t4131;
  double t339;
  double t5234;
  double t6620;
  double t5290;
  double t6559;
  double t6569;
  double t5246;
  double t6570;
  double t6622;
  double t6634;
  double t7550;
  double t7632;
  double t7276;
  double t7292;
  double t7329;
  double t7444;
  double t7518;
  double t7530;
  double t7613;
  double t7615;
  double t7621;
  double t7643;
  double t7657;
  double t7840;
  double t8106;
  double t8158;
  double t8516;
  double t8702;
  double t9111;
  double t9113;
  double t9203;
  double t9206;
  double t9210;
  double t7274;
  double t7533;
  double t7547;
  double t10050;
  double t10055;
  double t10082;
  double t10306;
  double t10307;
  double t10446;
  double t10466;
  double t10490;
  double t10500;
  double t6881;
  double t6920;
  double t6923;
  double t10040;
  double t10297;
  double t10501;
  double t10502;
  double t15525;
  double t21041;
  double t24707;
  double t25145;
  double t33686;
  double t34985;
  double t9803;
  double t9951;
  double t9973;
  double t10009;
  double t10544;
  double t10546;
  double t37784;
  double t37994;
  double t38451;
  double t40802;
  double t40805;
  double t41917;
  double t10555;
  double t35823;
  double t36355;
  double t40767;
  double t42311;
  double t43065;
  double t43241;
  double t43383;
  double t43676;
  double t4641;
  double t6636;
  double t6667;
  double t36356;
  double t44542;
  double t44681;
  double t44836;
  double t44886;
  double t44900;
  double t44974;
  double t45011;
  double t45046;
  double t45033;
  double t45053;
  double t45060;
  double t45089;
  double t45084;
  t1661 = Cos(var1[16]);
  t1385 = Cos(var1[17]);
  t1393 = Sin(var1[16]);
  t1777 = Sin(var1[17]);
  t1658 = t1385*t1393;
  t3530 = -1.*t1661*t1777;
  t3539 = t1658 + t3530;
  t6614 = Sin(var1[15]);
  t4131 = Sin(var1[4]);
  t339 = Cos(var1[15]);
  t5234 = Cos(var1[4]);
  t6620 = Sin(var1[5]);
  t5290 = t1661*t1385;
  t6559 = t1393*t1777;
  t6569 = t5290 + t6559;
  t5246 = Cos(var1[5]);
  t6570 = t5246*t6569;
  t6622 = t6614*t3539*t6620;
  t6634 = t6570 + t6622;
  t7550 = Cos(var1[3]);
  t7632 = Sin(var1[3]);
  t7276 = -1.*t1385*t1393;
  t7292 = t1661*t1777;
  t7329 = t7276 + t7292;
  t7444 = t5246*t7329;
  t7518 = t6614*t6569*t6620;
  t7530 = t7444 + t7518;
  t7613 = -1.*t5246*t6614*t3539;
  t7615 = t6569*t6620;
  t7621 = t7613 + t7615;
  t7643 = t339*t5234*t3539;
  t7657 = -1.*t4131*t6634;
  t7840 = t7643 + t7657;
  t8106 = t5234*t6614;
  t8158 = t339*t4131*t6620;
  t8516 = t8106 + t8158;
  t8702 = -1.*t5246*t6614*t6569;
  t9111 = t7329*t6620;
  t9113 = t8702 + t9111;
  t9203 = t339*t5234*t6569;
  t9206 = -1.*t4131*t7530;
  t9210 = t9203 + t9206;
  t7274 = t339*t6569*t4131;
  t7533 = t5234*t7530;
  t7547 = t7274 + t7533;
  t10050 = -0.0641*t1385;
  t10055 = -0.28*t1777;
  t10082 = t10050 + t10055;
  t10306 = -1.*t1385;
  t10307 = 1. + t10306;
  t10446 = -0.575*t10307;
  t10466 = -0.295*t1385;
  t10490 = -0.0641*t1777;
  t10500 = t10446 + t10466 + t10490;
  t6881 = t6614*t4131;
  t6920 = -1.*t339*t5234*t6620;
  t6923 = t6881 + t6920;
  t10040 = 0.325*t1393;
  t10297 = t1661*t10082;
  t10501 = t1393*t10500;
  t10502 = t10040 + t10297 + t10501;
  t15525 = -1.*t1661;
  t21041 = 1. + t15525;
  t24707 = -0.325*t21041;
  t25145 = -1.*t1393*t10082;
  t33686 = t1661*t10500;
  t34985 = t24707 + t25145 + t33686;
  t9803 = -1.*t339;
  t9951 = 1. + t9803;
  t9973 = -0.1575*t9951;
  t10009 = -0.2255*t339;
  t10544 = -1.*t6614*t10502;
  t10546 = t9973 + t10009 + t10544;
  t37784 = -0.068*t6614;
  t37994 = t339*t10502;
  t38451 = t37784 + t37994;
  t40802 = t5246*t34985;
  t40805 = -1.*t10546*t6620;
  t41917 = t40802 + t40805;
  t10555 = t5246*t10546;
  t35823 = t34985*t6620;
  t36355 = t10555 + t35823;
  t40767 = t38451*t4131;
  t42311 = t5234*t41917;
  t43065 = t40767 + t42311;
  t43241 = t5234*t38451;
  t43383 = -1.*t4131*t41917;
  t43676 = t43241 + t43383;
  t4641 = t339*t3539*t4131;
  t6636 = t5234*t6634;
  t6667 = t4641 + t6636;
  t36356 = -1.*t339*t5246*t36355;
  t44542 = t36355*t9113;
  t44681 = t36355*t7621;
  t44836 = -1.*t36355*t9113;
  t44886 = t339*t5246*t36355;
  t44900 = -1.*t36355*t7621;
  t44974 = -1.*t6614*t38451;
  t45011 = t339*t38451*t6569;
  t45046 = -1.*t339*t38451*t6569;
  t45033 = t339*t38451*t3539;
  t45053 = t6614*t38451;
  t45060 = -1.*t339*t38451*t3539;
  t45089 = t34985*t6569;
  t45084 = -1.*t34985*t7329;
  p_output1[0]=t6667;
  p_output1[1]=t6923;
  p_output1[2]=t7547;
  p_output1[3]=t7550*t7621 - 1.*t7632*t7840;
  p_output1[4]=t339*t5246*t7550 - 1.*t7632*t8516;
  p_output1[5]=t7550*t9113 - 1.*t7632*t9210;
  p_output1[6]=t7621*t7632 + t7550*t7840;
  p_output1[7]=t339*t5246*t7632 + t7550*t8516;
  p_output1[8]=t7632*t9113 + t7550*t9210;
  p_output1[9]=t7547*(t36356 - 1.*t43065*t6923 - 1.*t43676*t8516) + t6923*(t44542 + t43065*t7547 + t43676*t9210);
  p_output1[10]=t7547*(t44681 + t43065*t6667 + t43676*t7840) + t6667*(t44836 - 1.*t43065*t7547 - 1.*t43676*t9210);
  p_output1[11]=t6923*(t44900 - 1.*t43065*t6667 - 1.*t43676*t7840) + t6667*(t44886 + t43065*t6923 + t43676*t8516);
  p_output1[12]=t339*t5246*(t44542 + t45011 + t41917*t7530) + (t36356 + t44974 + t339*t41917*t6620)*t9113;
  p_output1[13]=(t44836 + t45046 - 1.*t41917*t7530)*t7621 + (t44681 + t45033 + t41917*t6634)*t9113;
  p_output1[14]=t339*t5246*(t44900 + t45060 - 1.*t41917*t6634) + (t44886 + t45053 - 1.*t339*t41917*t6620)*t7621;
  p_output1[15]=t339*(-1.*t10546*t339 + t44974)*t6569 + t6614*(t45011 - 1.*t10546*t6569*t6614 + t34985*t7329);
  p_output1[16]=t339*t6569*(t45033 + t45089 - 1.*t10546*t3539*t6614) + t339*t3539*(t45046 + t45084 + t10546*t6569*t6614);
  p_output1[17]=t339*t3539*(t10546*t339 + t45053) + t6614*(t45060 - 1.*t34985*t6569 + t10546*t3539*t6614);
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
  p_output1[45]=0.1575*t3539 + 0.2255*t7329;
  p_output1[46]=t6569*(t45084 - 1.*t10502*t6569) + (t10502*t3539 + t45089)*t7329;
  p_output1[47]=-0.068*t6569;
  p_output1[48]=-1.*t10082*t1385 - 0.325*t1777 - 1.*t10500*t1777;
  p_output1[49]=0;
  p_output1[50]=0.325*t1385 + t10500*t1385 - 1.*t10082*t1777;
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
