/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:19 GMT+02:00
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
  double t5056;
  double t613;
  double t3045;
  double t15856;
  double t18479;
  double t18481;
  double t18493;
  double t18364;
  double t18447;
  double t18550;
  double t18395;
  double t18563;
  double t16394;
  double t4278;
  double t16376;
  double t16384;
  double t18510;
  double t18571;
  double t18671;
  double t19276;
  double t18800;
  double t18802;
  double t19054;
  double t19237;
  double t19119;
  double t19157;
  double t19158;
  double t19164;
  double t19187;
  double t19191;
  double t19254;
  double t19265;
  double t19267;
  double t19344;
  double t20115;
  double t25840;
  double t27239;
  double t27283;
  double t27284;
  double t27382;
  double t27403;
  double t27410;
  double t27507;
  double t27522;
  double t27527;
  double t19160;
  double t19192;
  double t19193;
  double t29618;
  double t29620;
  double t34641;
  double t34926;
  double t34942;
  double t34957;
  double t34967;
  double t35061;
  double t35062;
  double t35069;
  double t35208;
  double t35213;
  double t35225;
  double t35288;
  double t35497;
  double t35498;
  double t34650;
  double t34657;
  double t35469;
  double t35486;
  double t35555;
  double t35562;
  double t35563;
  double t35564;
  double t35711;
  double t36039;
  double t36067;
  double t35496;
  double t35501;
  double t35550;
  double t35571;
  double t36082;
  double t36108;
  double t36212;
  double t36377;
  double t36381;
  double t16419;
  double t18785;
  double t18788;
  double t35553;
  double t38030;
  double t39384;
  double t40224;
  double t41156;
  double t41278;
  double t43246;
  double t43404;
  t5056 = Cos(var1[16]);
  t613 = Cos(var1[17]);
  t3045 = Sin(var1[16]);
  t15856 = Sin(var1[17]);
  t18479 = -1.*t5056*t613;
  t18481 = -1.*t3045*t15856;
  t18493 = t18479 + t18481;
  t18364 = Cos(var1[4]);
  t18447 = Cos(var1[5]);
  t18550 = Sin(var1[15]);
  t18395 = Cos(var1[15]);
  t18563 = Sin(var1[5]);
  t16394 = Sin(var1[4]);
  t4278 = -1.*t613*t3045;
  t16376 = t5056*t15856;
  t16384 = t4278 + t16376;
  t18510 = t18395*t18447*t18493;
  t18571 = -1.*t18550*t18493*t18563;
  t18671 = t18510 + t18571;
  t19276 = Sin(var1[3]);
  t18800 = t18447*t18550;
  t18802 = t18395*t18563;
  t19054 = t18800 + t18802;
  t19237 = Cos(var1[3]);
  t19119 = t5056*t613;
  t19157 = t3045*t15856;
  t19158 = t19119 + t19157;
  t19164 = t18395*t18447*t16384;
  t19187 = -1.*t18550*t16384*t18563;
  t19191 = t19164 + t19187;
  t19254 = t18447*t18550*t18493;
  t19265 = t18395*t18493*t18563;
  t19267 = t19254 + t19265;
  t19344 = t18364*t16384;
  t20115 = -1.*t16394*t18671;
  t25840 = t19344 + t20115;
  t27239 = -1.*t18395*t18447;
  t27283 = t18550*t18563;
  t27284 = t27239 + t27283;
  t27382 = t18447*t18550*t16384;
  t27403 = t18395*t16384*t18563;
  t27410 = t27382 + t27403;
  t27507 = t18364*t19158;
  t27522 = -1.*t16394*t19191;
  t27527 = t27507 + t27522;
  t19160 = t19158*t16394;
  t19192 = t18364*t19191;
  t19193 = t19160 + t19192;
  t29618 = -1.*t18395;
  t29620 = 1. + t29618;
  t34641 = -0.15121*t29620;
  t34926 = -1.*t5056;
  t34942 = 1. + t34926;
  t34957 = -0.28121*t34942;
  t34967 = -1.*t613;
  t35061 = 1. + t34967;
  t35062 = -0.50321*t35061;
  t35069 = -0.23321*t613;
  t35208 = t35062 + t35069;
  t35213 = t5056*t35208;
  t35225 = 0.27*t3045*t15856;
  t35288 = t34957 + t35213 + t35225;
  t35497 = t18395*t35288;
  t35498 = t34641 + t35497;
  t34650 = -0.15121*t18395;
  t34657 = 0.15121*t18550;
  t35469 = t18550*t35288;
  t35486 = t34641 + t34650 + t34657 + t35469;
  t35555 = 0.28121*t3045;
  t35562 = t35208*t3045;
  t35563 = -0.27*t5056*t15856;
  t35564 = t35555 + t35562 + t35563;
  t35711 = t18447*t35498;
  t36039 = -1.*t35486*t18563;
  t36067 = t35711 + t36039;
  t35496 = t18447*t35486;
  t35501 = t35498*t18563;
  t35550 = t35496 + t35501;
  t35571 = t35564*t16394;
  t36082 = t18364*t36067;
  t36108 = t35571 + t36082;
  t36212 = t18364*t35564;
  t36377 = -1.*t16394*t36067;
  t36381 = t36212 + t36377;
  t16419 = t16384*t16394;
  t18785 = t18364*t18671;
  t18788 = t16419 + t18785;
  t35553 = -1.*t27284*t35550;
  t38030 = t27410*t35550;
  t39384 = -1.*t27410*t35550;
  t40224 = t19267*t35550;
  t41156 = t27284*t35550;
  t41278 = -1.*t19267*t35550;
  t43246 = -1.*t35564*t19158;
  t43404 = t35564*t16384;
  p_output1[0]=t18788;
  p_output1[1]=t18364*t19054;
  p_output1[2]=t19193;
  p_output1[3]=t19237*t19267 - 1.*t19276*t25840;
  p_output1[4]=t16394*t19054*t19276 + t19237*t27284;
  p_output1[5]=t19237*t27410 - 1.*t19276*t27527;
  p_output1[6]=t19267*t19276 + t19237*t25840;
  p_output1[7]=-1.*t16394*t19054*t19237 + t19276*t27284;
  p_output1[8]=t19276*t27410 + t19237*t27527;
  p_output1[9]=t19193*(t35553 - 1.*t18364*t19054*t36108 + t16394*t19054*t36381) + t18364*t19054*(t19193*t36108 + t27527*t36381 + t38030);
  p_output1[10]=t18788*(-1.*t19193*t36108 - 1.*t27527*t36381 + t39384) + t19193*(t18788*t36108 + t25840*t36381 + t40224);
  p_output1[11]=t18788*(t18364*t19054*t36108 - 1.*t16394*t19054*t36381 + t41156) + t18364*t19054*(-1.*t18788*t36108 - 1.*t25840*t36381 + t41278);
  p_output1[12]=t27410*(t35553 - 1.*t19054*t36067) + t27284*(t19158*t35564 + t19191*t36067 + t38030);
  p_output1[13]=t19267*(-1.*t19191*t36067 + t39384 + t43246) + t27410*(t18671*t36067 + t40224 + t43404);
  p_output1[14]=t19267*(t19054*t36067 + t41156) + t27284*(-1.*t16384*t35564 - 1.*t18671*t36067 + t41278);
  p_output1[15]=t19158*(t18395*t35486 - 1.*t18550*t35498);
  p_output1[16]=t16384*(-1.*t16384*t18550*t35486 - 1.*t16384*t18395*t35498 + t43246) + t19158*(t18493*t18550*t35486 + t18395*t18493*t35498 + t43404);
  p_output1[17]=t16384*(-1.*t18395*t35486 + t18550*t35498);
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
  p_output1[45]=-0.15121*t18493 - 0.15121*t19158;
  p_output1[46]=-0.15121 + t16384*(-1.*t16384*t35288 + t43246) + t19158*(t18493*t35288 + t43404);
  p_output1[47]=0;
  p_output1[48]=0.28121*t15856 + t15856*t35208 - 0.27*t15856*t613;
  p_output1[49]=0;
  p_output1[50]=0.27*Power(t15856,2) + 0.28121*t613 + t35208*t613;
  p_output1[51]=0;
  p_output1[52]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
