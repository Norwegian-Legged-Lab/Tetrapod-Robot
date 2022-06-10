/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:41 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t11435;
  double t24935;
  double t24636;
  double t25122;
  double t25133;
  double t25106;
  double t25139;
  double t24890;
  double t25157;
  double t25160;
  double t25162;
  double t24959;
  double t25150;
  double t25184;
  double t25188;
  double t25189;
  double t24934;
  double t24981;
  double t24998;
  double t25390;
  double t25386;
  double t25131;
  double t25144;
  double t25145;
  double t25164;
  double t25168;
  double t25170;
  double t25352;
  double t25369;
  double t25373;
  double t25393;
  double t25394;
  double t25395;
  double t25411;
  double t25426;
  double t25432;
  double t25437;
  double t25438;
  double t25439;
  double t25447;
  double t25452;
  double t25455;
  double t25473;
  double t25476;
  double t25480;
  double t25154;
  double t25172;
  double t25174;
  double t25551;
  double t25563;
  double t25566;
  double t25576;
  double t25578;
  double t25596;
  double t25603;
  double t25604;
  double t25607;
  double t25608;
  double t25609;
  double t25610;
  double t25611;
  double t25612;
  double t25635;
  double t25638;
  double t25567;
  double t25572;
  double t25619;
  double t25622;
  double t25652;
  double t25658;
  double t25668;
  double t25670;
  double t25674;
  double t25676;
  double t25681;
  double t25629;
  double t25646;
  double t25647;
  double t25673;
  double t25682;
  double t25683;
  double t25687;
  double t25689;
  double t25694;
  double t25181;
  double t25374;
  double t25378;
  double t25651;
  double t25705;
  double t25750;
  double t25766;
  double t25780;
  double t25786;
  double t25824;
  double t25832;
  t11435 = Cos(var1[4]);
  t24935 = Cos(var1[15]);
  t24636 = Cos(var1[5]);
  t25122 = Cos(var1[17]);
  t25133 = Sin(var1[16]);
  t25106 = Cos(var1[16]);
  t25139 = Sin(var1[17]);
  t24890 = Sin(var1[15]);
  t25157 = -1.*t25122*t25133;
  t25160 = t25106*t25139;
  t25162 = t25157 + t25160;
  t24959 = Sin(var1[5]);
  t25150 = Sin(var1[4]);
  t25184 = -1.*t25106*t25122;
  t25188 = -1.*t25133*t25139;
  t25189 = t25184 + t25188;
  t24934 = t24636*t24890;
  t24981 = t24935*t24959;
  t24998 = t24934 + t24981;
  t25390 = Cos(var1[3]);
  t25386 = Sin(var1[3]);
  t25131 = t25106*t25122;
  t25144 = t25133*t25139;
  t25145 = t25131 + t25144;
  t25164 = t24935*t24636*t25162;
  t25168 = -1.*t24890*t25162*t24959;
  t25170 = t25164 + t25168;
  t25352 = t24935*t24636*t25189;
  t25369 = -1.*t24890*t25189*t24959;
  t25373 = t25352 + t25369;
  t25393 = -1.*t24935*t24636;
  t25394 = t24890*t24959;
  t25395 = t25393 + t25394;
  t25411 = t24636*t24890*t25162;
  t25426 = t24935*t25162*t24959;
  t25432 = t25411 + t25426;
  t25437 = t11435*t25145;
  t25438 = -1.*t25150*t25170;
  t25439 = t25437 + t25438;
  t25447 = t24636*t24890*t25189;
  t25452 = t24935*t25189*t24959;
  t25455 = t25447 + t25452;
  t25473 = t11435*t25162;
  t25476 = -1.*t25150*t25373;
  t25480 = t25473 + t25476;
  t25154 = t25145*t25150;
  t25172 = t11435*t25170;
  t25174 = t25154 + t25172;
  t25551 = -1.*t24935;
  t25563 = 1. + t25551;
  t25566 = -0.15121*t25563;
  t25576 = -1.*t25106;
  t25578 = 1. + t25576;
  t25596 = -0.28121*t25578;
  t25603 = -1.*t25122;
  t25604 = 1. + t25603;
  t25607 = -0.50321*t25604;
  t25608 = -0.19821*t25122;
  t25609 = t25607 + t25608;
  t25610 = t25106*t25609;
  t25611 = 0.305*t25133*t25139;
  t25612 = t25596 + t25610 + t25611;
  t25635 = t24935*t25612;
  t25638 = t25566 + t25635;
  t25567 = -0.15121*t24935;
  t25572 = 0.15121*t24890;
  t25619 = t24890*t25612;
  t25622 = t25566 + t25567 + t25572 + t25619;
  t25652 = 0.28121*t25133;
  t25658 = t25609*t25133;
  t25668 = -0.305*t25106*t25139;
  t25670 = t25652 + t25658 + t25668;
  t25674 = t24636*t25638;
  t25676 = -1.*t25622*t24959;
  t25681 = t25674 + t25676;
  t25629 = t24636*t25622;
  t25646 = t25638*t24959;
  t25647 = t25629 + t25646;
  t25673 = t25670*t25150;
  t25682 = t11435*t25681;
  t25683 = t25673 + t25682;
  t25687 = t11435*t25670;
  t25689 = -1.*t25150*t25681;
  t25694 = t25687 + t25689;
  t25181 = t25162*t25150;
  t25374 = t11435*t25373;
  t25378 = t25181 + t25374;
  t25651 = -1.*t25395*t25647;
  t25705 = t25432*t25647;
  t25750 = t25395*t25647;
  t25766 = -1.*t25455*t25647;
  t25780 = -1.*t25432*t25647;
  t25786 = t25455*t25647;
  t25824 = -1.*t25670*t25145;
  t25832 = t25670*t25162;
  p_output1[0]=t25378*var2[0] + t11435*t24998*var2[1] + t25174*var2[2];
  p_output1[1]=(t25390*t25455 - 1.*t25386*t25480)*var2[0] + (t24998*t25150*t25386 + t25390*t25395)*var2[1] + (t25390*t25432 - 1.*t25386*t25439)*var2[2];
  p_output1[2]=(t25386*t25455 + t25390*t25480)*var2[0] + (-1.*t24998*t25150*t25390 + t25386*t25395)*var2[1] + (t25386*t25432 + t25390*t25439)*var2[2];
  p_output1[3]=(t25174*(t25651 - 1.*t11435*t24998*t25683 + t24998*t25150*t25694) + t11435*t24998*(t25174*t25683 + t25439*t25694 + t25705))*var2[0] + (t25378*(-1.*t25174*t25683 - 1.*t25439*t25694 + t25780) + t25174*(t25378*t25683 + t25480*t25694 + t25786))*var2[1] + (t25378*(t11435*t24998*t25683 - 1.*t24998*t25150*t25694 + t25750) + t11435*t24998*(-1.*t25378*t25683 - 1.*t25480*t25694 + t25766))*var2[2];
  p_output1[4]=(t25432*(t25651 - 1.*t24998*t25681) + t25395*(t25145*t25670 + t25170*t25681 + t25705))*var2[0] + (t25455*(-1.*t25170*t25681 + t25780 + t25824) + t25432*(t25373*t25681 + t25786 + t25832))*var2[1] + (t25455*(t24998*t25681 + t25750) + t25395*(-1.*t25162*t25670 - 1.*t25373*t25681 + t25766))*var2[2];
  p_output1[5]=t25145*(t24935*t25622 - 1.*t24890*t25638)*var2[0] + (t25162*(-1.*t24890*t25162*t25622 - 1.*t24935*t25162*t25638 + t25824) + t25145*(t24890*t25189*t25622 + t24935*t25189*t25638 + t25832))*var2[1] + t25162*(-1.*t24935*t25622 + t24890*t25638)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t25145 - 0.15121*t25189)*var2[0] + (-0.15121 + t25162*(-1.*t25162*t25612 + t25824) + t25145*(t25189*t25612 + t25832))*var2[1];
  p_output1[16]=(0.28121*t25139 - 0.305*t25122*t25139 + t25139*t25609)*var2[0] + (0.28121*t25122 + 0.305*Power(t25139,2) + t25122*t25609)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
