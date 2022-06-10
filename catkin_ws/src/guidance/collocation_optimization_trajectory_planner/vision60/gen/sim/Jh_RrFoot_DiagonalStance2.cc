/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:34 GMT+02:00
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
  double t2815;
  double t1234;
  double t2193;
  double t3450;
  double t2427;
  double t4252;
  double t4280;
  double t6178;
  double t4561;
  double t330;
  double t6074;
  double t6179;
  double t6107;
  double t6148;
  double t6154;
  double t6085;
  double t6159;
  double t6186;
  double t6188;
  double t6422;
  double t6433;
  double t6354;
  double t6356;
  double t6371;
  double t6380;
  double t6397;
  double t6410;
  double t6425;
  double t6426;
  double t6427;
  double t6434;
  double t6436;
  double t6437;
  double t6468;
  double t6478;
  double t6479;
  double t6503;
  double t6504;
  double t6505;
  double t6507;
  double t6510;
  double t6511;
  double t6352;
  double t6411;
  double t6421;
  double t6584;
  double t6587;
  double t6589;
  double t6593;
  double t6594;
  double t6597;
  double t6599;
  double t6600;
  double t6601;
  double t6287;
  double t6322;
  double t6350;
  double t6581;
  double t6591;
  double t6602;
  double t6603;
  double t6613;
  double t6615;
  double t6616;
  double t6617;
  double t6618;
  double t6619;
  double t6575;
  double t6576;
  double t6577;
  double t6580;
  double t6604;
  double t6608;
  double t6625;
  double t6626;
  double t6636;
  double t6643;
  double t6644;
  double t6651;
  double t6612;
  double t6620;
  double t6621;
  double t6641;
  double t6652;
  double t6654;
  double t6657;
  double t6658;
  double t6659;
  double t6045;
  double t6189;
  double t6250;
  double t6623;
  double t6664;
  double t6671;
  double t6680;
  double t6688;
  double t6703;
  double t6717;
  double t6723;
  double t6734;
  double t6729;
  double t6740;
  double t6748;
  double t6790;
  double t6779;
  t2815 = Cos(var1[16]);
  t1234 = Cos(var1[17]);
  t2193 = Sin(var1[16]);
  t3450 = Sin(var1[17]);
  t2427 = t1234*t2193;
  t4252 = -1.*t2815*t3450;
  t4280 = t2427 + t4252;
  t6178 = Sin(var1[15]);
  t4561 = Sin(var1[4]);
  t330 = Cos(var1[15]);
  t6074 = Cos(var1[4]);
  t6179 = Sin(var1[5]);
  t6107 = t2815*t1234;
  t6148 = t2193*t3450;
  t6154 = t6107 + t6148;
  t6085 = Cos(var1[5]);
  t6159 = t6085*t6154;
  t6186 = t6178*t4280*t6179;
  t6188 = t6159 + t6186;
  t6422 = Cos(var1[3]);
  t6433 = Sin(var1[3]);
  t6354 = -1.*t1234*t2193;
  t6356 = t2815*t3450;
  t6371 = t6354 + t6356;
  t6380 = t6085*t6371;
  t6397 = t6178*t6154*t6179;
  t6410 = t6380 + t6397;
  t6425 = -1.*t6085*t6178*t4280;
  t6426 = t6154*t6179;
  t6427 = t6425 + t6426;
  t6434 = t330*t6074*t4280;
  t6436 = -1.*t4561*t6188;
  t6437 = t6434 + t6436;
  t6468 = t6074*t6178;
  t6478 = t330*t4561*t6179;
  t6479 = t6468 + t6478;
  t6503 = -1.*t6085*t6178*t6154;
  t6504 = t6371*t6179;
  t6505 = t6503 + t6504;
  t6507 = t330*t6074*t6154;
  t6510 = -1.*t4561*t6410;
  t6511 = t6507 + t6510;
  t6352 = t330*t6154*t4561;
  t6411 = t6074*t6410;
  t6421 = t6352 + t6411;
  t6584 = -0.0641*t1234;
  t6587 = -0.28*t3450;
  t6589 = t6584 + t6587;
  t6593 = -1.*t1234;
  t6594 = 1. + t6593;
  t6597 = -0.575*t6594;
  t6599 = -0.295*t1234;
  t6600 = -0.0641*t3450;
  t6601 = t6597 + t6599 + t6600;
  t6287 = t6178*t4561;
  t6322 = -1.*t330*t6074*t6179;
  t6350 = t6287 + t6322;
  t6581 = 0.325*t2193;
  t6591 = t2815*t6589;
  t6602 = t2193*t6601;
  t6603 = t6581 + t6591 + t6602;
  t6613 = -1.*t2815;
  t6615 = 1. + t6613;
  t6616 = -0.325*t6615;
  t6617 = -1.*t2193*t6589;
  t6618 = t2815*t6601;
  t6619 = t6616 + t6617 + t6618;
  t6575 = -1.*t330;
  t6576 = 1. + t6575;
  t6577 = -0.1575*t6576;
  t6580 = -0.2255*t330;
  t6604 = -1.*t6178*t6603;
  t6608 = t6577 + t6580 + t6604;
  t6625 = -0.068*t6178;
  t6626 = t330*t6603;
  t6636 = t6625 + t6626;
  t6643 = t6085*t6619;
  t6644 = -1.*t6608*t6179;
  t6651 = t6643 + t6644;
  t6612 = t6085*t6608;
  t6620 = t6619*t6179;
  t6621 = t6612 + t6620;
  t6641 = t6636*t4561;
  t6652 = t6074*t6651;
  t6654 = t6641 + t6652;
  t6657 = t6074*t6636;
  t6658 = -1.*t4561*t6651;
  t6659 = t6657 + t6658;
  t6045 = t330*t4280*t4561;
  t6189 = t6074*t6188;
  t6250 = t6045 + t6189;
  t6623 = -1.*t330*t6085*t6621;
  t6664 = t6621*t6505;
  t6671 = t6621*t6427;
  t6680 = -1.*t6621*t6505;
  t6688 = t330*t6085*t6621;
  t6703 = -1.*t6621*t6427;
  t6717 = -1.*t6178*t6636;
  t6723 = t330*t6636*t6154;
  t6734 = -1.*t330*t6636*t6154;
  t6729 = t330*t6636*t4280;
  t6740 = t6178*t6636;
  t6748 = -1.*t330*t6636*t4280;
  t6790 = t6619*t6154;
  t6779 = -1.*t6619*t6371;
  p_output1[0]=t6250;
  p_output1[1]=t6350;
  p_output1[2]=t6421;
  p_output1[3]=t6422*t6427 - 1.*t6433*t6437;
  p_output1[4]=t330*t6085*t6422 - 1.*t6433*t6479;
  p_output1[5]=t6422*t6505 - 1.*t6433*t6511;
  p_output1[6]=t6427*t6433 + t6422*t6437;
  p_output1[7]=t330*t6085*t6433 + t6422*t6479;
  p_output1[8]=t6433*t6505 + t6422*t6511;
  p_output1[9]=t6421*(t6623 - 1.*t6350*t6654 - 1.*t6479*t6659) + t6350*(t6421*t6654 + t6511*t6659 + t6664);
  p_output1[10]=t6421*(t6250*t6654 + t6437*t6659 + t6671) + t6250*(-1.*t6421*t6654 - 1.*t6511*t6659 + t6680);
  p_output1[11]=t6250*(t6350*t6654 + t6479*t6659 + t6688) + t6350*(-1.*t6250*t6654 - 1.*t6437*t6659 + t6703);
  p_output1[12]=t6505*(t6623 + t330*t6179*t6651 + t6717) + t330*t6085*(t6410*t6651 + t6664 + t6723);
  p_output1[13]=t6505*(t6188*t6651 + t6671 + t6729) + t6427*(-1.*t6410*t6651 + t6680 + t6734);
  p_output1[14]=t6427*(-1.*t330*t6179*t6651 + t6688 + t6740) + t330*t6085*(-1.*t6188*t6651 + t6703 + t6748);
  p_output1[15]=t330*t6154*(-1.*t330*t6608 + t6717) + t6178*(-1.*t6154*t6178*t6608 + t6371*t6619 + t6723);
  p_output1[16]=t330*t4280*(t6154*t6178*t6608 + t6734 + t6779) + t330*t6154*(-1.*t4280*t6178*t6608 + t6729 + t6790);
  p_output1[17]=t330*t4280*(t330*t6608 + t6740) + t6178*(t4280*t6178*t6608 - 1.*t6154*t6619 + t6748);
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
  p_output1[45]=0.1575*t4280 + 0.2255*t6371;
  p_output1[46]=t6154*(-1.*t6154*t6603 + t6779) + t6371*(t4280*t6603 + t6790);
  p_output1[47]=-0.068*t6154;
  p_output1[48]=-0.325*t3450 - 1.*t1234*t6589 - 1.*t3450*t6601;
  p_output1[49]=0;
  p_output1[50]=0.325*t1234 - 1.*t3450*t6589 + t1234*t6601;
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
