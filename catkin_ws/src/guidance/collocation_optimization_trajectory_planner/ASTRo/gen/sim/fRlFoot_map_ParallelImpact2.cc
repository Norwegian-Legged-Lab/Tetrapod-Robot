/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:45 GMT+02:00
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
  double t7003;
  double t2742;
  double t6435;
  double t7361;
  double t25500;
  double t25511;
  double t25514;
  double t25498;
  double t25814;
  double t25468;
  double t25819;
  double t24645;
  double t6635;
  double t7574;
  double t11840;
  double t24270;
  double t25515;
  double t25821;
  double t25822;
  double t25844;
  double t25840;
  double t25841;
  double t25842;
  double t25839;
  double t25845;
  double t25846;
  double t25847;
  double t25873;
  double t25875;
  double t25880;
  double t25881;
  double t25882;
  double t25883;
  double t25889;
  double t25892;
  double t25893;
  double t25895;
  double t25901;
  double t25914;
  double t25915;
  double t25926;
  double t25927;
  double t25928;
  double t25876;
  double t25877;
  double t25879;
  double t25917;
  double t25921;
  double t25944;
  double t25946;
  double t25954;
  double t25964;
  double t25975;
  double t25976;
  double t25992;
  double t26005;
  double t26006;
  double t26007;
  double t25923;
  double t25931;
  double t25936;
  double t25853;
  double t25854;
  double t25855;
  double t25856;
  double t25859;
  double t25861;
  double t25863;
  double t25864;
  double t25865;
  double t26001;
  double t26008;
  double t26009;
  double t26012;
  double t26014;
  double t26019;
  double t26031;
  double t26037;
  double t26060;
  double t25866;
  double t25870;
  double t25871;
  double t25941;
  double t26064;
  double t24644;
  double t25833;
  double t25837;
  double t26068;
  double t26074;
  double t26075;
  double t26131;
  double t26139;
  double t26150;
  double t26172;
  double t26236;
  double t26255;
  t7003 = Cos(var1[10]);
  t2742 = Cos(var1[11]);
  t6435 = Sin(var1[10]);
  t7361 = Sin(var1[11]);
  t25500 = -1.*t7003*t2742;
  t25511 = -1.*t6435*t7361;
  t25514 = t25500 + t25511;
  t25498 = Cos(var1[5]);
  t25814 = Sin(var1[9]);
  t25468 = Cos(var1[9]);
  t25819 = Sin(var1[5]);
  t24645 = Cos(var1[4]);
  t6635 = -1.*t2742*t6435;
  t7574 = t7003*t7361;
  t11840 = t6635 + t7574;
  t24270 = Sin(var1[4]);
  t25515 = t25468*t25498*t25514;
  t25821 = -1.*t25814*t25514*t25819;
  t25822 = t25515 + t25821;
  t25844 = Sin(var1[3]);
  t25840 = t25498*t25814*t25514;
  t25841 = t25468*t25514*t25819;
  t25842 = t25840 + t25841;
  t25839 = Cos(var1[3]);
  t25845 = t24645*t11840;
  t25846 = -1.*t24270*t25822;
  t25847 = t25845 + t25846;
  t25873 = -1.*t25468;
  t25875 = 1. + t25873;
  t25880 = -1.*t7003;
  t25881 = 1. + t25880;
  t25882 = -0.28121*t25881;
  t25883 = -1.*t2742;
  t25889 = 1. + t25883;
  t25892 = -0.50321*t25889;
  t25893 = -0.19821*t2742;
  t25895 = t25892 + t25893;
  t25901 = t7003*t25895;
  t25914 = 0.305*t6435*t7361;
  t25915 = t25882 + t25901 + t25914;
  t25926 = -0.15121*t25875;
  t25927 = t25468*t25915;
  t25928 = t25926 + t25927;
  t25876 = 0.15121*t25875;
  t25877 = 0.15121*t25468;
  t25879 = 0.15121*t25814;
  t25917 = t25814*t25915;
  t25921 = t25876 + t25877 + t25879 + t25917;
  t25944 = t25498*t25814;
  t25946 = t25468*t25819;
  t25954 = t25944 + t25946;
  t25964 = 0.28121*t6435;
  t25975 = t25895*t6435;
  t25976 = -0.305*t7003*t7361;
  t25992 = t25964 + t25975 + t25976;
  t26005 = t25498*t25928;
  t26006 = -1.*t25921*t25819;
  t26007 = t26005 + t26006;
  t25923 = t25498*t25921;
  t25931 = t25928*t25819;
  t25936 = t25923 + t25931;
  t25853 = t7003*t2742;
  t25854 = t6435*t7361;
  t25855 = t25853 + t25854;
  t25856 = t25855*t24270;
  t25859 = t25468*t25498*t11840;
  t25861 = -1.*t25814*t11840*t25819;
  t25863 = t25859 + t25861;
  t25864 = t24645*t25863;
  t25865 = t25856 + t25864;
  t26001 = t25992*t24270;
  t26008 = t24645*t26007;
  t26009 = t26001 + t26008;
  t26012 = t24645*t25992;
  t26014 = -1.*t24270*t26007;
  t26019 = t26012 + t26014;
  t26031 = t25498*t25814*t11840;
  t26037 = t25468*t11840*t25819;
  t26060 = t26031 + t26037;
  t25866 = -1.*t25468*t25498;
  t25870 = t25814*t25819;
  t25871 = t25866 + t25870;
  t25941 = -1.*t25871*t25936;
  t26064 = t26060*t25936;
  t24644 = t11840*t24270;
  t25833 = t24645*t25822;
  t25837 = t24644 + t25833;
  t26068 = t24645*t25855;
  t26074 = -1.*t24270*t25863;
  t26075 = t26068 + t26074;
  t26131 = -1.*t26060*t25936;
  t26139 = t25842*t25936;
  t26150 = -1.*t25992*t25855;
  t26172 = t25992*t11840;
  t26236 = t25871*t25936;
  t26255 = -1.*t25842*t25936;
  p_output1[0]=t25837;
  p_output1[1]=t25839*t25842 - 1.*t25844*t25847;
  p_output1[2]=t25842*t25844 + t25839*t25847;
  p_output1[3]=t25865*(t25941 - 1.*t24645*t25954*t26009 + t24270*t25954*t26019) + t24645*t25954*(t25865*t26009 + t26064 + t26019*t26075);
  p_output1[4]=(t25941 - 1.*t25954*t26007)*t26060 + t25871*(t25855*t25992 + t25863*t26007 + t26064);
  p_output1[5]=t25855*(t25468*t25921 - 1.*t25814*t25928);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t25514 + 0.15121*t25855;
  p_output1[10]=0.28121*t7361 + t25895*t7361 - 0.305*t2742*t7361;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t24645*t25954;
  p_output1[19]=t25839*t25871 + t24270*t25844*t25954;
  p_output1[20]=t25844*t25871 - 1.*t24270*t25839*t25954;
  p_output1[21]=t25837*(-1.*t25865*t26009 - 1.*t26019*t26075 + t26131) + t25865*(t25837*t26009 + t25847*t26019 + t26139);
  p_output1[22]=t25842*(-1.*t25863*t26007 + t26131 + t26150) + t26060*(t25822*t26007 + t26139 + t26172);
  p_output1[23]=t11840*(-1.*t11840*t25814*t25921 - 1.*t11840*t25468*t25928 + t26150) + t25855*(t25514*t25814*t25921 + t25468*t25514*t25928 + t26172);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t11840*(-1.*t11840*t25915 + t26150) + t25855*(t25514*t25915 + t26172);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t25865;
  p_output1[37]=t25839*t26060 - 1.*t25844*t26075;
  p_output1[38]=t25844*t26060 + t25839*t26075;
  p_output1[39]=t25837*(t24645*t25954*t26009 - 1.*t24270*t25954*t26019 + t26236) + t24645*t25954*(-1.*t25837*t26009 - 1.*t25847*t26019 + t26255);
  p_output1[40]=t25842*(t25954*t26007 + t26236) + t25871*(-1.*t11840*t25992 - 1.*t25822*t26007 + t26255);
  p_output1[41]=t11840*(-1.*t25468*t25921 + t25814*t25928);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2742 + t25895*t2742 + 0.305*Power(t7361,2);
  p_output1[47]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
