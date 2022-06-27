/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:04 GMT+02:00
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
  double t10196;
  double t6696;
  double t7134;
  double t10413;
  double t7920;
  double t10417;
  double t17930;
  double t23236;
  double t23040;
  double t1647;
  double t23106;
  double t23237;
  double t23145;
  double t23156;
  double t23228;
  double t23114;
  double t23235;
  double t23291;
  double t23295;
  double t23366;
  double t23371;
  double t23333;
  double t23339;
  double t23340;
  double t23341;
  double t23349;
  double t23350;
  double t23367;
  double t23368;
  double t23369;
  double t23372;
  double t23373;
  double t23374;
  double t23389;
  double t23393;
  double t23394;
  double t23397;
  double t23404;
  double t23408;
  double t23420;
  double t23424;
  double t23429;
  double t23327;
  double t23354;
  double t23362;
  double t23447;
  double t23448;
  double t23449;
  double t23451;
  double t23452;
  double t23453;
  double t23454;
  double t23455;
  double t23456;
  double t23304;
  double t23308;
  double t23318;
  double t23446;
  double t23450;
  double t23457;
  double t23458;
  double t23462;
  double t23463;
  double t23465;
  double t23467;
  double t23468;
  double t23472;
  double t23442;
  double t23443;
  double t23444;
  double t23445;
  double t23459;
  double t23460;
  double t23481;
  double t23482;
  double t23483;
  double t23485;
  double t23486;
  double t23487;
  double t23461;
  double t23476;
  double t23478;
  double t23484;
  double t23488;
  double t23489;
  double t23491;
  double t23492;
  double t23493;
  double t23105;
  double t23299;
  double t23303;
  double t23479;
  double t23497;
  double t23503;
  double t23508;
  double t23518;
  double t23528;
  double t23534;
  double t23538;
  double t23547;
  double t23543;
  double t23558;
  double t23562;
  double t23597;
  double t23588;
  t10196 = Cos(var1[16]);
  t6696 = Cos(var1[17]);
  t7134 = Sin(var1[16]);
  t10413 = Sin(var1[17]);
  t7920 = t6696*t7134;
  t10417 = -1.*t10196*t10413;
  t17930 = t7920 + t10417;
  t23236 = Sin(var1[15]);
  t23040 = Sin(var1[4]);
  t1647 = Cos(var1[15]);
  t23106 = Cos(var1[4]);
  t23237 = Sin(var1[5]);
  t23145 = t10196*t6696;
  t23156 = t7134*t10413;
  t23228 = t23145 + t23156;
  t23114 = Cos(var1[5]);
  t23235 = t23114*t23228;
  t23291 = t23236*t17930*t23237;
  t23295 = t23235 + t23291;
  t23366 = Cos(var1[3]);
  t23371 = Sin(var1[3]);
  t23333 = -1.*t6696*t7134;
  t23339 = t10196*t10413;
  t23340 = t23333 + t23339;
  t23341 = t23114*t23340;
  t23349 = t23236*t23228*t23237;
  t23350 = t23341 + t23349;
  t23367 = -1.*t23114*t23236*t17930;
  t23368 = t23228*t23237;
  t23369 = t23367 + t23368;
  t23372 = t1647*t23106*t17930;
  t23373 = -1.*t23040*t23295;
  t23374 = t23372 + t23373;
  t23389 = t23106*t23236;
  t23393 = t1647*t23040*t23237;
  t23394 = t23389 + t23393;
  t23397 = -1.*t23114*t23236*t23228;
  t23404 = t23340*t23237;
  t23408 = t23397 + t23404;
  t23420 = t1647*t23106*t23228;
  t23424 = -1.*t23040*t23350;
  t23429 = t23420 + t23424;
  t23327 = t1647*t23228*t23040;
  t23354 = t23106*t23350;
  t23362 = t23327 + t23354;
  t23447 = -0.0641*t6696;
  t23448 = -0.28*t10413;
  t23449 = t23447 + t23448;
  t23451 = -1.*t6696;
  t23452 = 1. + t23451;
  t23453 = -0.575*t23452;
  t23454 = -0.295*t6696;
  t23455 = -0.0641*t10413;
  t23456 = t23453 + t23454 + t23455;
  t23304 = t23236*t23040;
  t23308 = -1.*t1647*t23106*t23237;
  t23318 = t23304 + t23308;
  t23446 = 0.325*t7134;
  t23450 = t10196*t23449;
  t23457 = t7134*t23456;
  t23458 = t23446 + t23450 + t23457;
  t23462 = -1.*t10196;
  t23463 = 1. + t23462;
  t23465 = -0.325*t23463;
  t23467 = -1.*t7134*t23449;
  t23468 = t10196*t23456;
  t23472 = t23465 + t23467 + t23468;
  t23442 = -1.*t1647;
  t23443 = 1. + t23442;
  t23444 = -0.1575*t23443;
  t23445 = -0.2255*t1647;
  t23459 = -1.*t23236*t23458;
  t23460 = t23444 + t23445 + t23459;
  t23481 = -0.068*t23236;
  t23482 = t1647*t23458;
  t23483 = t23481 + t23482;
  t23485 = t23114*t23472;
  t23486 = -1.*t23460*t23237;
  t23487 = t23485 + t23486;
  t23461 = t23114*t23460;
  t23476 = t23472*t23237;
  t23478 = t23461 + t23476;
  t23484 = t23483*t23040;
  t23488 = t23106*t23487;
  t23489 = t23484 + t23488;
  t23491 = t23106*t23483;
  t23492 = -1.*t23040*t23487;
  t23493 = t23491 + t23492;
  t23105 = t1647*t17930*t23040;
  t23299 = t23106*t23295;
  t23303 = t23105 + t23299;
  t23479 = -1.*t1647*t23114*t23478;
  t23497 = t23478*t23408;
  t23503 = t23478*t23369;
  t23508 = -1.*t23478*t23408;
  t23518 = t1647*t23114*t23478;
  t23528 = -1.*t23478*t23369;
  t23534 = -1.*t23236*t23483;
  t23538 = t1647*t23483*t23228;
  t23547 = -1.*t1647*t23483*t23228;
  t23543 = t1647*t23483*t17930;
  t23558 = t23236*t23483;
  t23562 = -1.*t1647*t23483*t17930;
  t23597 = t23472*t23228;
  t23588 = -1.*t23472*t23340;
  p_output1[0]=t23303;
  p_output1[1]=t23318;
  p_output1[2]=t23362;
  p_output1[3]=t23366*t23369 - 1.*t23371*t23374;
  p_output1[4]=t1647*t23114*t23366 - 1.*t23371*t23394;
  p_output1[5]=t23366*t23408 - 1.*t23371*t23429;
  p_output1[6]=t23369*t23371 + t23366*t23374;
  p_output1[7]=t1647*t23114*t23371 + t23366*t23394;
  p_output1[8]=t23371*t23408 + t23366*t23429;
  p_output1[9]=t23362*(t23479 - 1.*t23318*t23489 - 1.*t23394*t23493) + t23318*(t23362*t23489 + t23429*t23493 + t23497);
  p_output1[10]=t23362*(t23303*t23489 + t23374*t23493 + t23503) + t23303*(-1.*t23362*t23489 - 1.*t23429*t23493 + t23508);
  p_output1[11]=t23303*(t23318*t23489 + t23394*t23493 + t23518) + t23318*(-1.*t23303*t23489 - 1.*t23374*t23493 + t23528);
  p_output1[12]=t23408*(t23479 + t1647*t23237*t23487 + t23534) + t1647*t23114*(t23350*t23487 + t23497 + t23538);
  p_output1[13]=t23408*(t23295*t23487 + t23503 + t23543) + t23369*(-1.*t23350*t23487 + t23508 + t23547);
  p_output1[14]=t23369*(-1.*t1647*t23237*t23487 + t23518 + t23558) + t1647*t23114*(-1.*t23295*t23487 + t23528 + t23562);
  p_output1[15]=t1647*t23228*(-1.*t1647*t23460 + t23534) + t23236*(-1.*t23228*t23236*t23460 + t23340*t23472 + t23538);
  p_output1[16]=t1647*t17930*(t23228*t23236*t23460 + t23547 + t23588) + t1647*t23228*(-1.*t17930*t23236*t23460 + t23543 + t23597);
  p_output1[17]=t1647*t17930*(t1647*t23460 + t23558) + t23236*(t17930*t23236*t23460 - 1.*t23228*t23472 + t23562);
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
  p_output1[45]=0.1575*t17930 + 0.2255*t23340;
  p_output1[46]=t23228*(-1.*t23228*t23458 + t23588) + t23340*(t17930*t23458 + t23597);
  p_output1[47]=-0.068*t23228;
  p_output1[48]=-0.325*t10413 - 1.*t10413*t23456 - 1.*t23449*t6696;
  p_output1[49]=0;
  p_output1[50]=-1.*t10413*t23449 + 0.325*t6696 + t23456*t6696;
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
