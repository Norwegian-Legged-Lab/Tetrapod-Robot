/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:22 GMT+02:00
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
  double t2610;
  double t514;
  double t809;
  double t5891;
  double t937;
  double t5916;
  double t6172;
  double t6926;
  double t7112;
  double t7048;
  double t7067;
  double t7068;
  double t7114;
  double t71;
  double t6231;
  double t6218;
  double t7102;
  double t7121;
  double t7130;
  double t7251;
  double t7192;
  double t7235;
  double t7239;
  double t7185;
  double t7271;
  double t7326;
  double t7355;
  double t7553;
  double t7554;
  double t7563;
  double t7576;
  double t7581;
  double t7586;
  double t7589;
  double t7595;
  double t7663;
  double t7552;
  double t7567;
  double t7669;
  double t7672;
  double t7687;
  double t7700;
  double t7701;
  double t7705;
  double t7712;
  double t7714;
  double t7500;
  double t7501;
  double t7502;
  double t7550;
  double t7676;
  double t7680;
  double t7762;
  double t7771;
  double t7778;
  double t7812;
  double t7819;
  double t7822;
  double t7730;
  double t7742;
  double t7755;
  double t7683;
  double t7721;
  double t7723;
  double t7425;
  double t7434;
  double t7441;
  double t7807;
  double t7825;
  double t7845;
  double t7421;
  double t7460;
  double t7461;
  double t7463;
  double t7497;
  double t7498;
  double t7940;
  double t7949;
  double t7951;
  double t7974;
  double t7977;
  double t7978;
  double t7724;
  double t7980;
  double t8010;
  double t8025;
  double t7885;
  double t7901;
  double t7937;
  double t6225;
  double t7149;
  double t7167;
  double t7982;
  double t7987;
  double t7988;
  double t8198;
  double t8234;
  double t8316;
  double t8288;
  double t8377;
  double t8349;
  double t8447;
  double t8462;
  double t8485;
  double t8553;
  t2610 = Cos(var1[16]);
  t514 = Cos(var1[17]);
  t809 = Sin(var1[16]);
  t5891 = Sin(var1[17]);
  t937 = t514*t809;
  t5916 = -1.*t2610*t5891;
  t6172 = t937 + t5916;
  t6926 = Cos(var1[5]);
  t7112 = Sin(var1[15]);
  t7048 = t2610*t514;
  t7067 = t809*t5891;
  t7068 = t7048 + t7067;
  t7114 = Sin(var1[5]);
  t71 = Cos(var1[15]);
  t6231 = Cos(var1[4]);
  t6218 = Sin(var1[4]);
  t7102 = t6926*t7068;
  t7121 = t7112*t6172*t7114;
  t7130 = t7102 + t7121;
  t7251 = Sin(var1[3]);
  t7192 = -1.*t6926*t7112*t6172;
  t7235 = t7068*t7114;
  t7239 = t7192 + t7235;
  t7185 = Cos(var1[3]);
  t7271 = t71*t6231*t6172;
  t7326 = -1.*t6218*t7130;
  t7355 = t7271 + t7326;
  t7553 = -0.0641*t514;
  t7554 = -0.28*t5891;
  t7563 = t7553 + t7554;
  t7576 = -1.*t514;
  t7581 = 1. + t7576;
  t7586 = -0.575*t7581;
  t7589 = -0.295*t514;
  t7595 = -0.0641*t5891;
  t7663 = t7586 + t7589 + t7595;
  t7552 = 0.325*t809;
  t7567 = t2610*t7563;
  t7669 = t809*t7663;
  t7672 = t7552 + t7567 + t7669;
  t7687 = -1.*t2610;
  t7700 = 1. + t7687;
  t7701 = -0.325*t7700;
  t7705 = -1.*t809*t7563;
  t7712 = t2610*t7663;
  t7714 = t7701 + t7705 + t7712;
  t7500 = -1.*t71;
  t7501 = 1. + t7500;
  t7502 = -0.1575*t7501;
  t7550 = -0.2255*t71;
  t7676 = -1.*t7112*t7672;
  t7680 = t7502 + t7550 + t7676;
  t7762 = -0.068*t7112;
  t7771 = t71*t7672;
  t7778 = t7762 + t7771;
  t7812 = t6926*t7714;
  t7819 = -1.*t7680*t7114;
  t7822 = t7812 + t7819;
  t7730 = t7112*t6218;
  t7742 = -1.*t71*t6231*t7114;
  t7755 = t7730 + t7742;
  t7683 = t6926*t7680;
  t7721 = t7714*t7114;
  t7723 = t7683 + t7721;
  t7425 = -1.*t514*t809;
  t7434 = t2610*t5891;
  t7441 = t7425 + t7434;
  t7807 = t7778*t6218;
  t7825 = t6231*t7822;
  t7845 = t7807 + t7825;
  t7421 = t71*t7068*t6218;
  t7460 = t6926*t7441;
  t7461 = t7112*t7068*t7114;
  t7463 = t7460 + t7461;
  t7497 = t6231*t7463;
  t7498 = t7421 + t7497;
  t7940 = t6231*t7778;
  t7949 = -1.*t6218*t7822;
  t7951 = t7940 + t7949;
  t7974 = -1.*t6926*t7112*t7068;
  t7977 = t7441*t7114;
  t7978 = t7974 + t7977;
  t7724 = -1.*t71*t6926*t7723;
  t7980 = t7723*t7978;
  t8010 = -1.*t7112*t7778;
  t8025 = t71*t7778*t7068;
  t7885 = t6231*t7112;
  t7901 = t71*t6218*t7114;
  t7937 = t7885 + t7901;
  t6225 = t71*t6172*t6218;
  t7149 = t6231*t7130;
  t7167 = t6225 + t7149;
  t7982 = t71*t6231*t7068;
  t7987 = -1.*t6218*t7463;
  t7988 = t7982 + t7987;
  t8198 = t7723*t7239;
  t8234 = -1.*t7723*t7978;
  t8316 = -1.*t71*t7778*t7068;
  t8288 = t71*t7778*t6172;
  t8377 = t7714*t7068;
  t8349 = -1.*t7714*t7441;
  t8447 = t71*t6926*t7723;
  t8462 = -1.*t7723*t7239;
  t8485 = t7112*t7778;
  t8553 = -1.*t71*t7778*t6172;
  p_output1[0]=t7167;
  p_output1[1]=t7185*t7239 - 1.*t7251*t7355;
  p_output1[2]=t7239*t7251 + t7185*t7355;
  p_output1[3]=t7498*(t7724 - 1.*t7755*t7845 - 1.*t7937*t7951) + t7755*(t7498*t7845 + t7980 + t7951*t7988);
  p_output1[4]=t7978*(t7724 + t71*t7114*t7822 + t8010) + t6926*t71*(t7463*t7822 + t7980 + t8025);
  p_output1[5]=t7068*t71*(-1.*t71*t7680 + t8010) + t7112*(-1.*t7068*t7112*t7680 + t7441*t7714 + t8025);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t6172 + 0.2255*t7441;
  p_output1[16]=-0.325*t5891 - 1.*t514*t7563 - 1.*t5891*t7663;
  p_output1[17]=-0.0641;
  p_output1[18]=t7755;
  p_output1[19]=t6926*t71*t7185 - 1.*t7251*t7937;
  p_output1[20]=t6926*t71*t7251 + t7185*t7937;
  p_output1[21]=t7498*(t7167*t7845 + t7355*t7951 + t8198) + t7167*(-1.*t7498*t7845 - 1.*t7951*t7988 + t8234);
  p_output1[22]=t7978*(t7130*t7822 + t8198 + t8288) + t7239*(-1.*t7463*t7822 + t8234 + t8316);
  p_output1[23]=t6172*t71*(t7068*t7112*t7680 + t8316 + t8349) + t7068*t71*(-1.*t6172*t7112*t7680 + t8288 + t8377);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t7068*(-1.*t7068*t7672 + t8349) + t7441*(t6172*t7672 + t8377);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7498;
  p_output1[37]=t7185*t7978 - 1.*t7251*t7988;
  p_output1[38]=t7251*t7978 + t7185*t7988;
  p_output1[39]=t7167*(t7755*t7845 + t7937*t7951 + t8447) + t7755*(-1.*t7167*t7845 - 1.*t7355*t7951 + t8462);
  p_output1[40]=t7239*(-1.*t71*t7114*t7822 + t8447 + t8485) + t6926*t71*(-1.*t7130*t7822 + t8462 + t8553);
  p_output1[41]=t6172*t71*(t71*t7680 + t8485) + t7112*(t6172*t7112*t7680 - 1.*t7068*t7714 + t8553);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t7068;
  p_output1[52]=0.325*t514 - 1.*t5891*t7563 + t514*t7663;
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
