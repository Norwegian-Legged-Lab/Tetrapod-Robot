/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:29 GMT+02:00
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
  double t806;
  double t1974;
  double t2649;
  double t2667;
  double t2760;
  double t3068;
  double t3106;
  double t3210;
  double t173;
  double t3707;
  double t457;
  double t5544;
  double t5565;
  double t5575;
  double t5606;
  double t5562;
  double t5546;
  double t5622;
  double t5624;
  double t5823;
  double t5837;
  double t5700;
  double t5702;
  double t5703;
  double t5706;
  double t5788;
  double t5816;
  double t5824;
  double t5827;
  double t5831;
  double t5843;
  double t5845;
  double t5851;
  double t5877;
  double t5882;
  double t5883;
  double t5900;
  double t5921;
  double t5923;
  double t5927;
  double t5931;
  double t5933;
  double t5976;
  double t5977;
  double t5978;
  double t5980;
  double t5981;
  double t5983;
  double t5988;
  double t5989;
  double t5990;
  double t5974;
  double t5979;
  double t5991;
  double t5993;
  double t5646;
  double t5671;
  double t5693;
  double t5963;
  double t5965;
  double t5966;
  double t5972;
  double t5994;
  double t5995;
  double t5997;
  double t5998;
  double t5999;
  double t6000;
  double t6001;
  double t6003;
  double t6009;
  double t6010;
  double t6012;
  double t6016;
  double t6018;
  double t6019;
  double t5698;
  double t5821;
  double t5822;
  double t6037;
  double t6038;
  double t6040;
  double t6030;
  double t6033;
  double t6035;
  double t6013;
  double t6022;
  double t6026;
  double t3125;
  double t5627;
  double t5640;
  double t6043;
  double t6048;
  double t6060;
  double t6075;
  double t6095;
  double t6098;
  double t6111;
  double t6145;
  double t6174;
  double t6157;
  double t6183;
  double t6187;
  double t6228;
  double t6216;
  t806 = Cos(var1[8]);
  t1974 = Sin(var1[7]);
  t2649 = t806*t1974;
  t2667 = Cos(var1[7]);
  t2760 = Sin(var1[8]);
  t3068 = -1.*t2667*t2760;
  t3106 = t2649 + t3068;
  t3210 = Cos(var1[4]);
  t173 = Cos(var1[6]);
  t3707 = Sin(var1[5]);
  t457 = Sin(var1[4]);
  t5544 = Sin(var1[6]);
  t5565 = t2667*t806;
  t5575 = t1974*t2760;
  t5606 = t5565 + t5575;
  t5562 = Cos(var1[5]);
  t5546 = t3707*t5544*t3106;
  t5622 = t5562*t5606;
  t5624 = t5546 + t5622;
  t5823 = Cos(var1[3]);
  t5837 = Sin(var1[3]);
  t5700 = -1.*t806*t1974;
  t5702 = t2667*t2760;
  t5703 = t5700 + t5702;
  t5706 = t5562*t5703;
  t5788 = t3707*t5544*t5606;
  t5816 = t5706 + t5788;
  t5824 = -1.*t5562*t5544*t3106;
  t5827 = t3707*t5606;
  t5831 = t5824 + t5827;
  t5843 = t3210*t173*t3106;
  t5845 = -1.*t457*t5624;
  t5851 = t5843 + t5845;
  t5877 = t173*t457*t3707;
  t5882 = t3210*t5544;
  t5883 = t5877 + t5882;
  t5900 = t3707*t5703;
  t5921 = -1.*t5562*t5544*t5606;
  t5923 = t5900 + t5921;
  t5927 = t3210*t173*t5606;
  t5931 = -1.*t457*t5816;
  t5933 = t5927 + t5931;
  t5976 = -0.0641*t806;
  t5977 = -0.28*t2760;
  t5978 = t5976 + t5977;
  t5980 = -1.*t806;
  t5981 = 1. + t5980;
  t5983 = 0.075*t5981;
  t5988 = 0.355*t806;
  t5989 = -0.0641*t2760;
  t5990 = t5983 + t5988 + t5989;
  t5974 = -0.325*t1974;
  t5979 = t2667*t5978;
  t5991 = t1974*t5990;
  t5993 = t5974 + t5979 + t5991;
  t5646 = -1.*t3210*t173*t3707;
  t5671 = t457*t5544;
  t5693 = t5646 + t5671;
  t5963 = -1.*t173;
  t5965 = 1. + t5963;
  t5966 = 0.1575*t5965;
  t5972 = 0.2255*t173;
  t5994 = -1.*t5544*t5993;
  t5995 = t5966 + t5972 + t5994;
  t5997 = -1.*t3707*t5995;
  t5998 = -1.*t2667;
  t5999 = 1. + t5998;
  t6000 = 0.325*t5999;
  t6001 = -1.*t1974*t5978;
  t6003 = t2667*t5990;
  t6009 = t6000 + t6001 + t6003;
  t6010 = t5562*t6009;
  t6012 = t5997 + t6010;
  t6016 = 0.068*t5544;
  t6018 = t173*t5993;
  t6019 = t6016 + t6018;
  t5698 = t173*t457*t5606;
  t5821 = t3210*t5816;
  t5822 = t5698 + t5821;
  t6037 = t5562*t5995;
  t6038 = t3707*t6009;
  t6040 = t6037 + t6038;
  t6030 = t3210*t6012;
  t6033 = t457*t6019;
  t6035 = t6030 + t6033;
  t6013 = -1.*t457*t6012;
  t6022 = t3210*t6019;
  t6026 = t6013 + t6022;
  t3125 = t173*t457*t3106;
  t5627 = t3210*t5624;
  t5640 = t3125 + t5627;
  t6043 = -1.*t5562*t173*t6040;
  t6048 = t6040*t5923;
  t6060 = t6040*t5831;
  t6075 = -1.*t6040*t5923;
  t6095 = t5562*t173*t6040;
  t6098 = -1.*t6040*t5831;
  t6111 = -1.*t5544*t6019;
  t6145 = t173*t6019*t5606;
  t6174 = -1.*t173*t6019*t5606;
  t6157 = t173*t6019*t3106;
  t6183 = t5544*t6019;
  t6187 = -1.*t173*t6019*t3106;
  t6228 = t6009*t5606;
  t6216 = -1.*t6009*t5703;
  p_output1[0]=t5640;
  p_output1[1]=t5693;
  p_output1[2]=t5822;
  p_output1[3]=t5823*t5831 - 1.*t5837*t5851;
  p_output1[4]=t173*t5562*t5823 - 1.*t5837*t5883;
  p_output1[5]=t5823*t5923 - 1.*t5837*t5933;
  p_output1[6]=t5831*t5837 + t5823*t5851;
  p_output1[7]=t173*t5562*t5837 + t5823*t5883;
  p_output1[8]=t5837*t5923 + t5823*t5933;
  p_output1[9]=t5822*(-1.*t5883*t6026 - 1.*t5693*t6035 + t6043) + t5693*(t5933*t6026 + t5822*t6035 + t6048);
  p_output1[10]=t5822*(t5851*t6026 + t5640*t6035 + t6060) + t5640*(-1.*t5933*t6026 - 1.*t5822*t6035 + t6075);
  p_output1[11]=t5640*(t5883*t6026 + t5693*t6035 + t6095) + t5693*(-1.*t5851*t6026 - 1.*t5640*t6035 + t6098);
  p_output1[12]=t5923*(t173*t3707*t6012 + t6043 + t6111) + t173*t5562*(t5816*t6012 + t6048 + t6145);
  p_output1[13]=t5923*(t5624*t6012 + t6060 + t6157) + t5831*(-1.*t5816*t6012 + t6075 + t6174);
  p_output1[14]=t5831*(-1.*t173*t3707*t6012 + t6095 + t6183) + t173*t5562*(-1.*t5624*t6012 + t6098 + t6187);
  p_output1[15]=t173*t5606*(-1.*t173*t5995 + t6111) + t5544*(-1.*t5544*t5606*t5995 + t5703*t6009 + t6145);
  p_output1[16]=t173*t3106*(t5544*t5606*t5995 + t6174 + t6216) + t173*t5606*(-1.*t3106*t5544*t5995 + t6157 + t6228);
  p_output1[17]=t173*t3106*(t173*t5995 + t6183) + t5544*(t3106*t5544*t5995 - 1.*t5606*t6009 + t6187);
  p_output1[18]=-0.1575*t3106 - 0.2255*t5703;
  p_output1[19]=t5606*(-1.*t5606*t5993 + t6216) + t5703*(t3106*t5993 + t6228);
  p_output1[20]=0.068*t5606;
  p_output1[21]=0.325*t2760 - 1.*t2760*t5990 - 1.*t5978*t806;
  p_output1[22]=0;
  p_output1[23]=-1.*t2760*t5978 - 0.325*t806 + t5990*t806;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
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

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
