/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:58 GMT+02:00
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
  double t7729;
  double t7707;
  double t7711;
  double t7730;
  double t7723;
  double t8010;
  double t8062;
  double t8096;
  double t8104;
  double t8097;
  double t8098;
  double t8101;
  double t8110;
  double t7650;
  double t8088;
  double t8081;
  double t8103;
  double t8128;
  double t8149;
  double t8197;
  double t8179;
  double t8184;
  double t8185;
  double t8173;
  double t8203;
  double t8219;
  double t8224;
  double t8607;
  double t8613;
  double t8648;
  double t8650;
  double t8665;
  double t8669;
  double t8706;
  double t8711;
  double t8716;
  double t8606;
  double t8649;
  double t8717;
  double t8740;
  double t8756;
  double t8776;
  double t8777;
  double t8781;
  double t8782;
  double t8789;
  double t8501;
  double t8506;
  double t8589;
  double t8605;
  double t8741;
  double t8748;
  double t8812;
  double t8815;
  double t8827;
  double t8830;
  double t8835;
  double t8880;
  double t8807;
  double t8809;
  double t8811;
  double t8750;
  double t8790;
  double t8791;
  double t8441;
  double t8460;
  double t8474;
  double t8829;
  double t8881;
  double t8887;
  double t8417;
  double t8476;
  double t8479;
  double t8480;
  double t8483;
  double t8499;
  double t8936;
  double t9004;
  double t9008;
  double t9144;
  double t9162;
  double t9191;
  double t8806;
  double t9197;
  double t9324;
  double t9334;
  double t8891;
  double t8894;
  double t8895;
  double t8082;
  double t8152;
  double t8167;
  double t9209;
  double t9210;
  double t9233;
  double t9506;
  double t9581;
  double t9598;
  double t9589;
  double t9643;
  double t9612;
  double t9851;
  double t13125;
  double t20407;
  double t22284;
  t7729 = Cos(var1[16]);
  t7707 = Cos(var1[17]);
  t7711 = Sin(var1[16]);
  t7730 = Sin(var1[17]);
  t7723 = t7707*t7711;
  t8010 = -1.*t7729*t7730;
  t8062 = t7723 + t8010;
  t8096 = Cos(var1[5]);
  t8104 = Sin(var1[15]);
  t8097 = t7729*t7707;
  t8098 = t7711*t7730;
  t8101 = t8097 + t8098;
  t8110 = Sin(var1[5]);
  t7650 = Cos(var1[15]);
  t8088 = Cos(var1[4]);
  t8081 = Sin(var1[4]);
  t8103 = t8096*t8101;
  t8128 = t8104*t8062*t8110;
  t8149 = t8103 + t8128;
  t8197 = Sin(var1[3]);
  t8179 = -1.*t8096*t8104*t8062;
  t8184 = t8101*t8110;
  t8185 = t8179 + t8184;
  t8173 = Cos(var1[3]);
  t8203 = t7650*t8088*t8062;
  t8219 = -1.*t8081*t8149;
  t8224 = t8203 + t8219;
  t8607 = -0.0641*t7707;
  t8613 = -0.28*t7730;
  t8648 = t8607 + t8613;
  t8650 = -1.*t7707;
  t8665 = 1. + t8650;
  t8669 = -0.575*t8665;
  t8706 = -0.295*t7707;
  t8711 = -0.0641*t7730;
  t8716 = t8669 + t8706 + t8711;
  t8606 = 0.325*t7711;
  t8649 = t7729*t8648;
  t8717 = t7711*t8716;
  t8740 = t8606 + t8649 + t8717;
  t8756 = -1.*t7729;
  t8776 = 1. + t8756;
  t8777 = -0.325*t8776;
  t8781 = -1.*t7711*t8648;
  t8782 = t7729*t8716;
  t8789 = t8777 + t8781 + t8782;
  t8501 = -1.*t7650;
  t8506 = 1. + t8501;
  t8589 = -0.1575*t8506;
  t8605 = -0.2255*t7650;
  t8741 = -1.*t8104*t8740;
  t8748 = t8589 + t8605 + t8741;
  t8812 = -0.068*t8104;
  t8815 = t7650*t8740;
  t8827 = t8812 + t8815;
  t8830 = t8096*t8789;
  t8835 = -1.*t8748*t8110;
  t8880 = t8830 + t8835;
  t8807 = t8104*t8081;
  t8809 = -1.*t7650*t8088*t8110;
  t8811 = t8807 + t8809;
  t8750 = t8096*t8748;
  t8790 = t8789*t8110;
  t8791 = t8750 + t8790;
  t8441 = -1.*t7707*t7711;
  t8460 = t7729*t7730;
  t8474 = t8441 + t8460;
  t8829 = t8827*t8081;
  t8881 = t8088*t8880;
  t8887 = t8829 + t8881;
  t8417 = t7650*t8101*t8081;
  t8476 = t8096*t8474;
  t8479 = t8104*t8101*t8110;
  t8480 = t8476 + t8479;
  t8483 = t8088*t8480;
  t8499 = t8417 + t8483;
  t8936 = t8088*t8827;
  t9004 = -1.*t8081*t8880;
  t9008 = t8936 + t9004;
  t9144 = -1.*t8096*t8104*t8101;
  t9162 = t8474*t8110;
  t9191 = t9144 + t9162;
  t8806 = -1.*t7650*t8096*t8791;
  t9197 = t8791*t9191;
  t9324 = -1.*t8104*t8827;
  t9334 = t7650*t8827*t8101;
  t8891 = t8088*t8104;
  t8894 = t7650*t8081*t8110;
  t8895 = t8891 + t8894;
  t8082 = t7650*t8062*t8081;
  t8152 = t8088*t8149;
  t8167 = t8082 + t8152;
  t9209 = t7650*t8088*t8101;
  t9210 = -1.*t8081*t8480;
  t9233 = t9209 + t9210;
  t9506 = t8791*t8185;
  t9581 = -1.*t8791*t9191;
  t9598 = -1.*t7650*t8827*t8101;
  t9589 = t7650*t8827*t8062;
  t9643 = t8789*t8101;
  t9612 = -1.*t8789*t8474;
  t9851 = t7650*t8096*t8791;
  t13125 = -1.*t8791*t8185;
  t20407 = t8104*t8827;
  t22284 = -1.*t7650*t8827*t8062;
  p_output1[0]=t8167;
  p_output1[1]=t8173*t8185 - 1.*t8197*t8224;
  p_output1[2]=t8185*t8197 + t8173*t8224;
  p_output1[3]=t8499*(t8806 - 1.*t8811*t8887 - 1.*t8895*t9008) + t8811*(t8499*t8887 + t9197 + t9008*t9233);
  p_output1[4]=t9191*(t8806 + t7650*t8110*t8880 + t9324) + t7650*t8096*(t8480*t8880 + t9197 + t9334);
  p_output1[5]=t7650*t8101*(-1.*t7650*t8748 + t9324) + t8104*(-1.*t8101*t8104*t8748 + t8474*t8789 + t9334);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t8062 + 0.2255*t8474;
  p_output1[16]=-0.325*t7730 - 1.*t7707*t8648 - 1.*t7730*t8716;
  p_output1[17]=-0.0641;
  p_output1[18]=t8811;
  p_output1[19]=t7650*t8096*t8173 - 1.*t8197*t8895;
  p_output1[20]=t7650*t8096*t8197 + t8173*t8895;
  p_output1[21]=t8499*(t8167*t8887 + t8224*t9008 + t9506) + t8167*(-1.*t8499*t8887 - 1.*t9008*t9233 + t9581);
  p_output1[22]=t9191*(t8149*t8880 + t9506 + t9589) + t8185*(-1.*t8480*t8880 + t9581 + t9598);
  p_output1[23]=t7650*t8062*(t8101*t8104*t8748 + t9598 + t9612) + t7650*t8101*(-1.*t8062*t8104*t8748 + t9589 + t9643);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t8101*(-1.*t8101*t8740 + t9612) + t8474*(t8062*t8740 + t9643);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8499;
  p_output1[37]=t8173*t9191 - 1.*t8197*t9233;
  p_output1[38]=t8197*t9191 + t8173*t9233;
  p_output1[39]=t8811*(t13125 - 1.*t8167*t8887 - 1.*t8224*t9008) + t8167*(t8811*t8887 + t8895*t9008 + t9851);
  p_output1[40]=t7650*t8096*(t13125 + t22284 - 1.*t8149*t8880) + t8185*(t20407 - 1.*t7650*t8110*t8880 + t9851);
  p_output1[41]=t7650*t8062*(t20407 + t7650*t8748) + t8104*(t22284 + t8062*t8104*t8748 - 1.*t8101*t8789);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t8101;
  p_output1[52]=0.325*t7707 - 1.*t7730*t8648 + t7707*t8716;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
