/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:41 GMT+02:00
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
  double t13144;
  double t5328;
  double t13148;
  double t21374;
  double t17241;
  double t20054;
  double t21661;
  double t5026;
  double t21366;
  double t21690;
  double t21697;
  double t13620;
  double t21732;
  double t21737;
  double t21741;
  double t21722;
  double t21800;
  double t21870;
  double t21752;
  double t21757;
  double t21758;
  double t21769;
  double t21773;
  double t21774;
  double t21780;
  double t21781;
  double t21787;
  double t21871;
  double t21872;
  double t21885;
  double t21905;
  double t21908;
  double t21910;
  double t21921;
  double t21923;
  double t21928;
  double t21941;
  double t21942;
  double t21944;
  double t21946;
  double t21952;
  double t21959;
  double t21698;
  double t21759;
  double t21761;
  double t22013;
  double t22015;
  double t22016;
  double t22021;
  double t22025;
  double t22029;
  double t22031;
  double t22032;
  double t22034;
  double t7011;
  double t14472;
  double t14898;
  double t22008;
  double t22020;
  double t22035;
  double t22037;
  double t22041;
  double t22042;
  double t22043;
  double t22044;
  double t22046;
  double t22048;
  double t22004;
  double t22005;
  double t22006;
  double t22007;
  double t22038;
  double t22039;
  double t22054;
  double t22055;
  double t22056;
  double t22059;
  double t22060;
  double t22061;
  double t22040;
  double t22049;
  double t22050;
  double t22058;
  double t22063;
  double t22064;
  double t22066;
  double t22067;
  double t22068;
  double t21767;
  double t21791;
  double t21792;
  double t22051;
  double t22072;
  double t22083;
  double t22090;
  double t22099;
  double t22104;
  double t22136;
  double t22143;
  double t22114;
  double t22120;
  double t22130;
  double t22126;
  double t22201;
  double t22193;
  t13144 = Cos(var1[9]);
  t5328 = Sin(var1[4]);
  t13148 = Cos(var1[4]);
  t21374 = Cos(var1[10]);
  t17241 = Cos(var1[11]);
  t20054 = Sin(var1[10]);
  t21661 = Sin(var1[11]);
  t5026 = Sin(var1[9]);
  t21366 = t17241*t20054;
  t21690 = -1.*t21374*t21661;
  t21697 = t21366 + t21690;
  t13620 = Sin(var1[5]);
  t21732 = t21374*t17241;
  t21737 = t20054*t21661;
  t21741 = t21732 + t21737;
  t21722 = Cos(var1[5]);
  t21800 = Cos(var1[3]);
  t21870 = Sin(var1[3]);
  t21752 = t21722*t21741;
  t21757 = t5026*t21697*t13620;
  t21758 = t21752 + t21757;
  t21769 = -1.*t17241*t20054;
  t21773 = t21374*t21661;
  t21774 = t21769 + t21773;
  t21780 = t21722*t21774;
  t21781 = t5026*t21741*t13620;
  t21787 = t21780 + t21781;
  t21871 = t13148*t5026;
  t21872 = t13144*t5328*t13620;
  t21885 = t21871 + t21872;
  t21905 = -1.*t21722*t5026*t21697;
  t21908 = t21741*t13620;
  t21910 = t21905 + t21908;
  t21921 = t13144*t13148*t21697;
  t21923 = -1.*t5328*t21758;
  t21928 = t21921 + t21923;
  t21941 = -1.*t21722*t5026*t21741;
  t21942 = t21774*t13620;
  t21944 = t21941 + t21942;
  t21946 = t13144*t13148*t21741;
  t21952 = -1.*t5328*t21787;
  t21959 = t21946 + t21952;
  t21698 = t13144*t21697*t5328;
  t21759 = t13148*t21758;
  t21761 = t21698 + t21759;
  t22013 = -0.0641*t17241;
  t22015 = -0.28*t21661;
  t22016 = t22013 + t22015;
  t22021 = -1.*t17241;
  t22025 = 1. + t22021;
  t22029 = -0.575*t22025;
  t22031 = -0.295*t17241;
  t22032 = -0.0641*t21661;
  t22034 = t22029 + t22031 + t22032;
  t7011 = t5026*t5328;
  t14472 = -1.*t13144*t13148*t13620;
  t14898 = t7011 + t14472;
  t22008 = 0.325*t20054;
  t22020 = t21374*t22016;
  t22035 = t20054*t22034;
  t22037 = t22008 + t22020 + t22035;
  t22041 = -1.*t21374;
  t22042 = 1. + t22041;
  t22043 = -0.325*t22042;
  t22044 = -1.*t20054*t22016;
  t22046 = t21374*t22034;
  t22048 = t22043 + t22044 + t22046;
  t22004 = -1.*t13144;
  t22005 = 1. + t22004;
  t22006 = 0.1575*t22005;
  t22007 = 0.2255*t13144;
  t22038 = -1.*t5026*t22037;
  t22039 = t22006 + t22007 + t22038;
  t22054 = 0.068*t5026;
  t22055 = t13144*t22037;
  t22056 = t22054 + t22055;
  t22059 = t21722*t22048;
  t22060 = -1.*t22039*t13620;
  t22061 = t22059 + t22060;
  t22040 = t21722*t22039;
  t22049 = t22048*t13620;
  t22050 = t22040 + t22049;
  t22058 = t22056*t5328;
  t22063 = t13148*t22061;
  t22064 = t22058 + t22063;
  t22066 = t13148*t22056;
  t22067 = -1.*t5328*t22061;
  t22068 = t22066 + t22067;
  t21767 = t13144*t21741*t5328;
  t21791 = t13148*t21787;
  t21792 = t21767 + t21791;
  t22051 = t13144*t21722*t22050;
  t22072 = -1.*t22050*t21910;
  t22083 = t22050*t21910;
  t22090 = -1.*t22050*t21944;
  t22099 = -1.*t13144*t21722*t22050;
  t22104 = t22050*t21944;
  t22136 = -1.*t5026*t22056;
  t22143 = t13144*t22056*t21741;
  t22114 = t5026*t22056;
  t22120 = -1.*t13144*t22056*t21697;
  t22130 = -1.*t13144*t22056*t21741;
  t22126 = t13144*t22056*t21697;
  t22201 = t22048*t21741;
  t22193 = -1.*t22048*t21774;
  p_output1[0]=t21761*var2[0] + t14898*var2[1] + t21792*var2[2];
  p_output1[1]=(t21800*t21910 - 1.*t21870*t21928)*var2[0] + (t13144*t21722*t21800 - 1.*t21870*t21885)*var2[1] + (t21800*t21944 - 1.*t21870*t21959)*var2[2];
  p_output1[2]=(t21870*t21910 + t21800*t21928)*var2[0] + (t13144*t21722*t21870 + t21800*t21885)*var2[1] + (t21870*t21944 + t21800*t21959)*var2[2];
  p_output1[3]=(t21792*(-1.*t14898*t22064 - 1.*t21885*t22068 + t22099) + t14898*(t21792*t22064 + t21959*t22068 + t22104))*var2[0] + (t21792*(t21761*t22064 + t21928*t22068 + t22083) + t21761*(-1.*t21792*t22064 - 1.*t21959*t22068 + t22090))*var2[1] + (t21761*(t22051 + t14898*t22064 + t21885*t22068) + t14898*(-1.*t21761*t22064 - 1.*t21928*t22068 + t22072))*var2[2];
  p_output1[4]=(t21944*(t13144*t13620*t22061 + t22099 + t22136) + t13144*t21722*(t21787*t22061 + t22104 + t22143))*var2[0] + (t21944*(t21758*t22061 + t22083 + t22126) + t21910*(-1.*t21787*t22061 + t22090 + t22130))*var2[1] + (t21910*(t22051 - 1.*t13144*t13620*t22061 + t22114) + t13144*t21722*(-1.*t21758*t22061 + t22072 + t22120))*var2[2];
  p_output1[5]=(t13144*t21741*(-1.*t13144*t22039 + t22136) + t5026*(t21774*t22048 + t22143 - 1.*t21741*t22039*t5026))*var2[0] + (t13144*t21741*(t22126 + t22201 - 1.*t21697*t22039*t5026) + t13144*t21697*(t22130 + t22193 + t21741*t22039*t5026))*var2[1] + (t13144*t21697*(t13144*t22039 + t22114) + t5026*(-1.*t21741*t22048 + t22120 + t21697*t22039*t5026))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t21697 - 0.2255*t21774)*var2[0] + (t21741*(-1.*t21741*t22037 + t22193) + t21774*(t21697*t22037 + t22201))*var2[1] + 0.068*t21741*var2[2];
  p_output1[10]=(-0.325*t21661 - 1.*t17241*t22016 - 1.*t21661*t22034)*var2[0] + (0.325*t17241 - 1.*t21661*t22016 + t17241*t22034)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
