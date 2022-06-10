/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:14 GMT+02:00
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
  double t1180;
  double t452;
  double t456;
  double t1196;
  double t3091;
  double t3147;
  double t3297;
  double t1833;
  double t2722;
  double t3301;
  double t1983;
  double t3313;
  double t1611;
  double t1168;
  double t1197;
  double t1200;
  double t3299;
  double t3419;
  double t3492;
  double t5979;
  double t4484;
  double t4545;
  double t4621;
  double t5385;
  double t4969;
  double t5146;
  double t5286;
  double t5308;
  double t5322;
  double t5345;
  double t5557;
  double t5832;
  double t5893;
  double t6005;
  double t6117;
  double t6594;
  double t7204;
  double t7205;
  double t7277;
  double t7344;
  double t7366;
  double t7367;
  double t7384;
  double t7409;
  double t7413;
  double t5304;
  double t5361;
  double t5372;
  double t7666;
  double t7687;
  double t7929;
  double t7949;
  double t8014;
  double t8051;
  double t8062;
  double t8070;
  double t8074;
  double t8109;
  double t8148;
  double t8158;
  double t8159;
  double t8208;
  double t8211;
  double t8221;
  double t7696;
  double t7741;
  double t7893;
  double t8168;
  double t8172;
  double t8339;
  double t8378;
  double t8394;
  double t8398;
  double t8477;
  double t8481;
  double t8505;
  double t8187;
  double t8234;
  double t8242;
  double t8434;
  double t8514;
  double t8516;
  double t8717;
  double t8755;
  double t8758;
  double t1648;
  double t3928;
  double t4463;
  double t8334;
  double t8813;
  double t8940;
  double t9005;
  double t9311;
  double t9441;
  double t9687;
  double t10098;
  t1180 = Cos(var1[10]);
  t452 = Cos(var1[11]);
  t456 = Sin(var1[10]);
  t1196 = Sin(var1[11]);
  t3091 = -1.*t1180*t452;
  t3147 = -1.*t456*t1196;
  t3297 = t3091 + t3147;
  t1833 = Cos(var1[4]);
  t2722 = Cos(var1[5]);
  t3301 = Sin(var1[9]);
  t1983 = Cos(var1[9]);
  t3313 = Sin(var1[5]);
  t1611 = Sin(var1[4]);
  t1168 = -1.*t452*t456;
  t1197 = t1180*t1196;
  t1200 = t1168 + t1197;
  t3299 = t1983*t2722*t3297;
  t3419 = -1.*t3301*t3297*t3313;
  t3492 = t3299 + t3419;
  t5979 = Sin(var1[3]);
  t4484 = t2722*t3301;
  t4545 = t1983*t3313;
  t4621 = t4484 + t4545;
  t5385 = Cos(var1[3]);
  t4969 = t1180*t452;
  t5146 = t456*t1196;
  t5286 = t4969 + t5146;
  t5308 = t1983*t2722*t1200;
  t5322 = -1.*t3301*t1200*t3313;
  t5345 = t5308 + t5322;
  t5557 = t2722*t3301*t3297;
  t5832 = t1983*t3297*t3313;
  t5893 = t5557 + t5832;
  t6005 = t1833*t1200;
  t6117 = -1.*t1611*t3492;
  t6594 = t6005 + t6117;
  t7204 = -1.*t1983*t2722;
  t7205 = t3301*t3313;
  t7277 = t7204 + t7205;
  t7344 = t2722*t3301*t1200;
  t7366 = t1983*t1200*t3313;
  t7367 = t7344 + t7366;
  t7384 = t1833*t5286;
  t7409 = -1.*t1611*t5345;
  t7413 = t7384 + t7409;
  t5304 = t5286*t1611;
  t5361 = t1833*t5345;
  t5372 = t5304 + t5361;
  t7666 = -1.*t1983;
  t7687 = 1. + t7666;
  t7929 = -1.*t1180;
  t7949 = 1. + t7929;
  t8014 = -0.28121*t7949;
  t8051 = -1.*t452;
  t8062 = 1. + t8051;
  t8070 = -0.50321*t8062;
  t8074 = -0.19821*t452;
  t8109 = t8070 + t8074;
  t8148 = t1180*t8109;
  t8158 = 0.305*t456*t1196;
  t8159 = t8014 + t8148 + t8158;
  t8208 = -0.15121*t7687;
  t8211 = t1983*t8159;
  t8221 = t8208 + t8211;
  t7696 = 0.15121*t7687;
  t7741 = 0.15121*t1983;
  t7893 = 0.15121*t3301;
  t8168 = t3301*t8159;
  t8172 = t7696 + t7741 + t7893 + t8168;
  t8339 = 0.28121*t456;
  t8378 = t8109*t456;
  t8394 = -0.305*t1180*t1196;
  t8398 = t8339 + t8378 + t8394;
  t8477 = t2722*t8221;
  t8481 = -1.*t8172*t3313;
  t8505 = t8477 + t8481;
  t8187 = t2722*t8172;
  t8234 = t8221*t3313;
  t8242 = t8187 + t8234;
  t8434 = t8398*t1611;
  t8514 = t1833*t8505;
  t8516 = t8434 + t8514;
  t8717 = t1833*t8398;
  t8755 = -1.*t1611*t8505;
  t8758 = t8717 + t8755;
  t1648 = t1200*t1611;
  t3928 = t1833*t3492;
  t4463 = t1648 + t3928;
  t8334 = -1.*t7277*t8242;
  t8813 = t7367*t8242;
  t8940 = -1.*t7367*t8242;
  t9005 = t5893*t8242;
  t9311 = t7277*t8242;
  t9441 = -1.*t5893*t8242;
  t9687 = -1.*t8398*t5286;
  t10098 = t8398*t1200;
  p_output1[0]=t4463;
  p_output1[1]=t1833*t4621;
  p_output1[2]=t5372;
  p_output1[3]=t5385*t5893 - 1.*t5979*t6594;
  p_output1[4]=t1611*t4621*t5979 + t5385*t7277;
  p_output1[5]=t5385*t7367 - 1.*t5979*t7413;
  p_output1[6]=t5893*t5979 + t5385*t6594;
  p_output1[7]=-1.*t1611*t4621*t5385 + t5979*t7277;
  p_output1[8]=t5979*t7367 + t5385*t7413;
  p_output1[9]=t5372*(t8334 - 1.*t1833*t4621*t8516 + t1611*t4621*t8758) + t1833*t4621*(t5372*t8516 + t7413*t8758 + t8813);
  p_output1[10]=t4463*(-1.*t5372*t8516 - 1.*t7413*t8758 + t8940) + t5372*(t4463*t8516 + t6594*t8758 + t9005);
  p_output1[11]=t4463*(t1833*t4621*t8516 - 1.*t1611*t4621*t8758 + t9311) + t1833*t4621*(-1.*t4463*t8516 - 1.*t6594*t8758 + t9441);
  p_output1[12]=t7367*(t8334 - 1.*t4621*t8505) + t7277*(t5286*t8398 + t5345*t8505 + t8813);
  p_output1[13]=t7367*(t10098 + t3492*t8505 + t9005) + t5893*(-1.*t5345*t8505 + t8940 + t9687);
  p_output1[14]=t5893*(t4621*t8505 + t9311) + t7277*(-1.*t1200*t8398 - 1.*t3492*t8505 + t9441);
  p_output1[15]=t5286*(t1983*t8172 - 1.*t3301*t8221);
  p_output1[16]=t5286*(t10098 + t3297*t3301*t8172 + t1983*t3297*t8221) + t1200*(-1.*t1200*t3301*t8172 - 1.*t1200*t1983*t8221 + t9687);
  p_output1[17]=t1200*(-1.*t1983*t8172 + t3301*t8221);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t3297 + 0.15121*t5286;
  p_output1[28]=-0.15121 + t5286*(t10098 + t3297*t8159) + t1200*(-1.*t1200*t8159 + t9687);
  p_output1[29]=0;
  p_output1[30]=0.28121*t1196 - 0.305*t1196*t452 + t1196*t8109;
  p_output1[31]=0;
  p_output1[32]=0.305*Power(t1196,2) + 0.28121*t452 + t452*t8109;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
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

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
