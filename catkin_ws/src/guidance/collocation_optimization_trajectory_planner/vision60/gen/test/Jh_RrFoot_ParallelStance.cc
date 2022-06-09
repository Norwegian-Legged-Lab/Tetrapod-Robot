/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:30 GMT+02:00
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
  double t4967;
  double t4910;
  double t4923;
  double t4973;
  double t4963;
  double t4974;
  double t4991;
  double t28684;
  double t23526;
  double t3432;
  double t28665;
  double t28685;
  double t28668;
  double t28680;
  double t28682;
  double t28666;
  double t28683;
  double t28693;
  double t28694;
  double t28832;
  double t28841;
  double t28798;
  double t28799;
  double t28813;
  double t28821;
  double t28825;
  double t28826;
  double t28833;
  double t28834;
  double t28835;
  double t28842;
  double t28843;
  double t28847;
  double t28858;
  double t28859;
  double t28863;
  double t28880;
  double t28881;
  double t28882;
  double t28887;
  double t28888;
  double t28889;
  double t28797;
  double t28827;
  double t28828;
  double t28921;
  double t28922;
  double t28923;
  double t28925;
  double t28926;
  double t28927;
  double t28928;
  double t28929;
  double t28930;
  double t28732;
  double t28783;
  double t28792;
  double t28920;
  double t28924;
  double t28931;
  double t28932;
  double t28936;
  double t28937;
  double t28938;
  double t28939;
  double t28940;
  double t28941;
  double t28914;
  double t28916;
  double t28918;
  double t28919;
  double t28933;
  double t28934;
  double t28945;
  double t28946;
  double t28947;
  double t28949;
  double t28951;
  double t28953;
  double t28935;
  double t28942;
  double t28943;
  double t28948;
  double t28954;
  double t28958;
  double t28963;
  double t28965;
  double t28967;
  double t23770;
  double t28695;
  double t28719;
  double t28944;
  double t28971;
  double t28977;
  double t28982;
  double t28988;
  double t28993;
  double t29003;
  double t29009;
  double t29021;
  double t29017;
  double t29026;
  double t29030;
  double t29064;
  double t29055;
  t4967 = Cos(var1[16]);
  t4910 = Cos(var1[17]);
  t4923 = Sin(var1[16]);
  t4973 = Sin(var1[17]);
  t4963 = t4910*t4923;
  t4974 = -1.*t4967*t4973;
  t4991 = t4963 + t4974;
  t28684 = Sin(var1[15]);
  t23526 = Sin(var1[4]);
  t3432 = Cos(var1[15]);
  t28665 = Cos(var1[4]);
  t28685 = Sin(var1[5]);
  t28668 = t4967*t4910;
  t28680 = t4923*t4973;
  t28682 = t28668 + t28680;
  t28666 = Cos(var1[5]);
  t28683 = t28666*t28682;
  t28693 = t28684*t4991*t28685;
  t28694 = t28683 + t28693;
  t28832 = Cos(var1[3]);
  t28841 = Sin(var1[3]);
  t28798 = -1.*t4910*t4923;
  t28799 = t4967*t4973;
  t28813 = t28798 + t28799;
  t28821 = t28666*t28813;
  t28825 = t28684*t28682*t28685;
  t28826 = t28821 + t28825;
  t28833 = -1.*t28666*t28684*t4991;
  t28834 = t28682*t28685;
  t28835 = t28833 + t28834;
  t28842 = t3432*t28665*t4991;
  t28843 = -1.*t23526*t28694;
  t28847 = t28842 + t28843;
  t28858 = t28665*t28684;
  t28859 = t3432*t23526*t28685;
  t28863 = t28858 + t28859;
  t28880 = -1.*t28666*t28684*t28682;
  t28881 = t28813*t28685;
  t28882 = t28880 + t28881;
  t28887 = t3432*t28665*t28682;
  t28888 = -1.*t23526*t28826;
  t28889 = t28887 + t28888;
  t28797 = t3432*t28682*t23526;
  t28827 = t28665*t28826;
  t28828 = t28797 + t28827;
  t28921 = -0.0641*t4910;
  t28922 = -0.28*t4973;
  t28923 = t28921 + t28922;
  t28925 = -1.*t4910;
  t28926 = 1. + t28925;
  t28927 = -0.575*t28926;
  t28928 = -0.295*t4910;
  t28929 = -0.0641*t4973;
  t28930 = t28927 + t28928 + t28929;
  t28732 = t28684*t23526;
  t28783 = -1.*t3432*t28665*t28685;
  t28792 = t28732 + t28783;
  t28920 = 0.325*t4923;
  t28924 = t4967*t28923;
  t28931 = t4923*t28930;
  t28932 = t28920 + t28924 + t28931;
  t28936 = -1.*t4967;
  t28937 = 1. + t28936;
  t28938 = -0.325*t28937;
  t28939 = -1.*t4923*t28923;
  t28940 = t4967*t28930;
  t28941 = t28938 + t28939 + t28940;
  t28914 = -1.*t3432;
  t28916 = 1. + t28914;
  t28918 = -0.1575*t28916;
  t28919 = -0.2255*t3432;
  t28933 = -1.*t28684*t28932;
  t28934 = t28918 + t28919 + t28933;
  t28945 = -0.068*t28684;
  t28946 = t3432*t28932;
  t28947 = t28945 + t28946;
  t28949 = t28666*t28941;
  t28951 = -1.*t28934*t28685;
  t28953 = t28949 + t28951;
  t28935 = t28666*t28934;
  t28942 = t28941*t28685;
  t28943 = t28935 + t28942;
  t28948 = t28947*t23526;
  t28954 = t28665*t28953;
  t28958 = t28948 + t28954;
  t28963 = t28665*t28947;
  t28965 = -1.*t23526*t28953;
  t28967 = t28963 + t28965;
  t23770 = t3432*t4991*t23526;
  t28695 = t28665*t28694;
  t28719 = t23770 + t28695;
  t28944 = -1.*t3432*t28666*t28943;
  t28971 = t28943*t28882;
  t28977 = t28943*t28835;
  t28982 = -1.*t28943*t28882;
  t28988 = t3432*t28666*t28943;
  t28993 = -1.*t28943*t28835;
  t29003 = -1.*t28684*t28947;
  t29009 = t3432*t28947*t28682;
  t29021 = -1.*t3432*t28947*t28682;
  t29017 = t3432*t28947*t4991;
  t29026 = t28684*t28947;
  t29030 = -1.*t3432*t28947*t4991;
  t29064 = t28941*t28682;
  t29055 = -1.*t28941*t28813;
  p_output1[0]=t28719;
  p_output1[1]=t28792;
  p_output1[2]=t28828;
  p_output1[3]=t28832*t28835 - 1.*t28841*t28847;
  p_output1[4]=-1.*t28841*t28863 + t28666*t28832*t3432;
  p_output1[5]=t28832*t28882 - 1.*t28841*t28889;
  p_output1[6]=t28835*t28841 + t28832*t28847;
  p_output1[7]=t28832*t28863 + t28666*t28841*t3432;
  p_output1[8]=t28841*t28882 + t28832*t28889;
  p_output1[9]=t28828*(t28944 - 1.*t28792*t28958 - 1.*t28863*t28967) + t28792*(t28828*t28958 + t28889*t28967 + t28971);
  p_output1[10]=t28828*(t28719*t28958 + t28847*t28967 + t28977) + t28719*(-1.*t28828*t28958 - 1.*t28889*t28967 + t28982);
  p_output1[11]=t28719*(t28792*t28958 + t28863*t28967 + t28988) + t28792*(-1.*t28719*t28958 - 1.*t28847*t28967 + t28993);
  p_output1[12]=t28666*(t28826*t28953 + t28971 + t29009)*t3432 + t28882*(t28944 + t29003 + t28685*t28953*t3432);
  p_output1[13]=t28882*(t28694*t28953 + t28977 + t29017) + t28835*(-1.*t28826*t28953 + t28982 + t29021);
  p_output1[14]=t28666*(-1.*t28694*t28953 + t28993 + t29030)*t3432 + t28835*(t28988 + t29026 - 1.*t28685*t28953*t3432);
  p_output1[15]=t28684*(-1.*t28682*t28684*t28934 + t28813*t28941 + t29009) + t28682*t3432*(t29003 - 1.*t28934*t3432);
  p_output1[16]=(t28682*t28684*t28934 + t29021 + t29055)*t3432*t4991 + t28682*t3432*(t29017 + t29064 - 1.*t28684*t28934*t4991);
  p_output1[17]=t3432*(t29026 + t28934*t3432)*t4991 + t28684*(-1.*t28682*t28941 + t29030 + t28684*t28934*t4991);
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
  p_output1[45]=0.2255*t28813 + 0.1575*t4991;
  p_output1[46]=t28682*(-1.*t28682*t28932 + t29055) + t28813*(t29064 + t28932*t4991);
  p_output1[47]=-0.068*t28682;
  p_output1[48]=-1.*t28923*t4910 - 0.325*t4973 - 1.*t28930*t4973;
  p_output1[49]=0;
  p_output1[50]=0.325*t4910 + t28930*t4910 - 1.*t28923*t4973;
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
