/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:31 GMT+02:00
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
  double t1723;
  double t9;
  double t949;
  double t2073;
  double t44512;
  double t44519;
  double t44520;
  double t40177;
  double t44539;
  double t40170;
  double t44556;
  double t40168;
  double t1102;
  double t40147;
  double t40160;
  double t40166;
  double t44526;
  double t44562;
  double t44569;
  double t44617;
  double t44604;
  double t44607;
  double t44608;
  double t44603;
  double t44623;
  double t44628;
  double t44629;
  double t45005;
  double t45023;
  double t45027;
  double t45062;
  double t45063;
  double t45070;
  double t45086;
  double t45092;
  double t45093;
  double t45102;
  double t45138;
  double t45146;
  double t45147;
  double t45148;
  double t45188;
  double t45198;
  double t45031;
  double t45054;
  double t45160;
  double t45166;
  double t45266;
  double t45267;
  double t45276;
  double t45293;
  double t45298;
  double t45299;
  double t45332;
  double t45338;
  double t45350;
  double t45357;
  double t45182;
  double t45261;
  double t45263;
  double t44681;
  double t44682;
  double t44693;
  double t44744;
  double t44757;
  double t44761;
  double t44762;
  double t44908;
  double t44961;
  double t45335;
  double t45366;
  double t45410;
  double t45437;
  double t45443;
  double t45448;
  double t45510;
  double t45520;
  double t45521;
  double t44970;
  double t44993;
  double t44996;
  double t45265;
  double t45537;
  double t40167;
  double t44571;
  double t44602;
  double t45541;
  double t45545;
  double t45564;
  double t45657;
  double t45664;
  double t45689;
  double t45698;
  double t45827;
  double t45836;
  t1723 = Cos(var1[16]);
  t9 = Cos(var1[17]);
  t949 = Sin(var1[16]);
  t2073 = Sin(var1[17]);
  t44512 = -1.*t1723*t9;
  t44519 = -1.*t949*t2073;
  t44520 = t44512 + t44519;
  t40177 = Cos(var1[5]);
  t44539 = Sin(var1[15]);
  t40170 = Cos(var1[15]);
  t44556 = Sin(var1[5]);
  t40168 = Cos(var1[4]);
  t1102 = -1.*t9*t949;
  t40147 = t1723*t2073;
  t40160 = t1102 + t40147;
  t40166 = Sin(var1[4]);
  t44526 = t40170*t40177*t44520;
  t44562 = -1.*t44539*t44520*t44556;
  t44569 = t44526 + t44562;
  t44617 = Sin(var1[3]);
  t44604 = t40177*t44539*t44520;
  t44607 = t40170*t44520*t44556;
  t44608 = t44604 + t44607;
  t44603 = Cos(var1[3]);
  t44623 = t40168*t40160;
  t44628 = -1.*t40166*t44569;
  t44629 = t44623 + t44628;
  t45005 = -1.*t40170;
  t45023 = 1. + t45005;
  t45027 = -0.15121*t45023;
  t45062 = -1.*t1723;
  t45063 = 1. + t45062;
  t45070 = -0.28121*t45063;
  t45086 = -1.*t9;
  t45092 = 1. + t45086;
  t45093 = -0.50321*t45092;
  t45102 = -0.23321*t9;
  t45138 = t45093 + t45102;
  t45146 = t1723*t45138;
  t45147 = 0.27*t949*t2073;
  t45148 = t45070 + t45146 + t45147;
  t45188 = t40170*t45148;
  t45198 = t45027 + t45188;
  t45031 = -0.15121*t40170;
  t45054 = 0.15121*t44539;
  t45160 = t44539*t45148;
  t45166 = t45027 + t45031 + t45054 + t45160;
  t45266 = t40177*t44539;
  t45267 = t40170*t44556;
  t45276 = t45266 + t45267;
  t45293 = 0.28121*t949;
  t45298 = t45138*t949;
  t45299 = -0.27*t1723*t2073;
  t45332 = t45293 + t45298 + t45299;
  t45338 = t40177*t45198;
  t45350 = -1.*t45166*t44556;
  t45357 = t45338 + t45350;
  t45182 = t40177*t45166;
  t45261 = t45198*t44556;
  t45263 = t45182 + t45261;
  t44681 = t1723*t9;
  t44682 = t949*t2073;
  t44693 = t44681 + t44682;
  t44744 = t44693*t40166;
  t44757 = t40170*t40177*t40160;
  t44761 = -1.*t44539*t40160*t44556;
  t44762 = t44757 + t44761;
  t44908 = t40168*t44762;
  t44961 = t44744 + t44908;
  t45335 = t45332*t40166;
  t45366 = t40168*t45357;
  t45410 = t45335 + t45366;
  t45437 = t40168*t45332;
  t45443 = -1.*t40166*t45357;
  t45448 = t45437 + t45443;
  t45510 = t40177*t44539*t40160;
  t45520 = t40170*t40160*t44556;
  t45521 = t45510 + t45520;
  t44970 = -1.*t40170*t40177;
  t44993 = t44539*t44556;
  t44996 = t44970 + t44993;
  t45265 = -1.*t44996*t45263;
  t45537 = t45521*t45263;
  t40167 = t40160*t40166;
  t44571 = t40168*t44569;
  t44602 = t40167 + t44571;
  t45541 = t40168*t44693;
  t45545 = -1.*t40166*t44762;
  t45564 = t45541 + t45545;
  t45657 = -1.*t45521*t45263;
  t45664 = t44608*t45263;
  t45689 = -1.*t45332*t44693;
  t45698 = t45332*t40160;
  t45827 = t44996*t45263;
  t45836 = -1.*t44608*t45263;
  p_output1[0]=t44602;
  p_output1[1]=t44603*t44608 - 1.*t44617*t44629;
  p_output1[2]=t44608*t44617 + t44603*t44629;
  p_output1[3]=t44961*(t45265 - 1.*t40168*t45276*t45410 + t40166*t45276*t45448) + t40168*t45276*(t44961*t45410 + t45537 + t45448*t45564);
  p_output1[4]=(t45265 - 1.*t45276*t45357)*t45521 + t44996*(t44693*t45332 + t44762*t45357 + t45537);
  p_output1[5]=t44693*(t40170*t45166 - 1.*t44539*t45198);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t44520 - 0.15121*t44693;
  p_output1[16]=0.28121*t2073 + t2073*t45138 - 0.27*t2073*t9;
  p_output1[17]=0;
  p_output1[18]=t40168*t45276;
  p_output1[19]=t44603*t44996 + t40166*t44617*t45276;
  p_output1[20]=t44617*t44996 - 1.*t40166*t44603*t45276;
  p_output1[21]=t44602*(-1.*t44961*t45410 - 1.*t45448*t45564 + t45657) + t44961*(t44602*t45410 + t44629*t45448 + t45664);
  p_output1[22]=t44608*(-1.*t44762*t45357 + t45657 + t45689) + t45521*(t44569*t45357 + t45664 + t45698);
  p_output1[23]=t40160*(-1.*t40160*t44539*t45166 - 1.*t40160*t40170*t45198 + t45689) + t44693*(t44520*t44539*t45166 + t40170*t44520*t45198 + t45698);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t40160*(-1.*t40160*t45148 + t45689) + t44693*(t44520*t45148 + t45698);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t44961;
  p_output1[37]=t44603*t45521 - 1.*t44617*t45564;
  p_output1[38]=t44617*t45521 + t44603*t45564;
  p_output1[39]=t44602*(t40168*t45276*t45410 - 1.*t40166*t45276*t45448 + t45827) + t40168*t45276*(-1.*t44602*t45410 - 1.*t44629*t45448 + t45836);
  p_output1[40]=t44608*(t45276*t45357 + t45827) + t44996*(-1.*t40160*t45332 - 1.*t44569*t45357 + t45836);
  p_output1[41]=t40160*(-1.*t40170*t45166 + t44539*t45198);
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
  p_output1[52]=0.27*Power(t2073,2) + 0.28121*t9 + t45138*t9;
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
