/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:36 GMT+02:00
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
  double t7320;
  double t3993;
  double t4069;
  double t9435;
  double t23632;
  double t23667;
  double t23718;
  double t23631;
  double t23777;
  double t23301;
  double t23838;
  double t22981;
  double t5607;
  double t10380;
  double t10790;
  double t3887;
  double t23763;
  double t23912;
  double t23922;
  double t24030;
  double t24013;
  double t24025;
  double t24027;
  double t24004;
  double t24031;
  double t24052;
  double t24071;
  double t24174;
  double t24185;
  double t24321;
  double t24415;
  double t24425;
  double t24428;
  double t24433;
  double t24434;
  double t24438;
  double t24445;
  double t24446;
  double t24447;
  double t24448;
  double t24450;
  double t24457;
  double t24458;
  double t24459;
  double t24462;
  double t24464;
  double t24467;
  double t24473;
  double t24482;
  double t24487;
  double t24509;
  double t24513;
  double t24518;
  double t24526;
  double t24528;
  double t24530;
  double t24535;
  double t24537;
  double t24542;
  double t24548;
  double t24466;
  double t24490;
  double t24493;
  double t24158;
  double t24340;
  double t24349;
  double t24357;
  double t24369;
  double t24372;
  double t24536;
  double t24556;
  double t24559;
  double t24563;
  double t24566;
  double t24579;
  double t24591;
  double t24594;
  double t24595;
  double t24374;
  double t24379;
  double t24385;
  double t24508;
  double t24596;
  double t14526;
  double t23928;
  double t23984;
  double t24601;
  double t24603;
  double t24604;
  double t24676;
  double t24684;
  double t24696;
  double t24704;
  double t24776;
  double t24782;
  t7320 = Cos(var1[7]);
  t3993 = Cos(var1[8]);
  t4069 = Sin(var1[7]);
  t9435 = Sin(var1[8]);
  t23632 = t7320*t3993;
  t23667 = t4069*t9435;
  t23718 = t23632 + t23667;
  t23631 = Cos(var1[6]);
  t23777 = Sin(var1[5]);
  t23301 = Cos(var1[5]);
  t23838 = Sin(var1[6]);
  t22981 = Cos(var1[4]);
  t5607 = -1.*t3993*t4069;
  t10380 = t7320*t9435;
  t10790 = t5607 + t10380;
  t3887 = Sin(var1[4]);
  t23763 = t23301*t23631*t23718;
  t23912 = -1.*t23777*t23838*t23718;
  t23922 = t23763 + t23912;
  t24030 = Sin(var1[3]);
  t24013 = t23631*t23777*t23718;
  t24025 = t23301*t23838*t23718;
  t24027 = t24013 + t24025;
  t24004 = Cos(var1[3]);
  t24031 = t22981*t10790;
  t24052 = -1.*t3887*t23922;
  t24071 = t24031 + t24052;
  t24174 = t3993*t4069;
  t24185 = -1.*t7320*t9435;
  t24321 = t24174 + t24185;
  t24415 = -1.*t23631;
  t24425 = 1. + t24415;
  t24428 = 0.15121*t24425;
  t24433 = -1.*t7320;
  t24434 = 1. + t24433;
  t24438 = 0.28121*t24434;
  t24445 = -1.*t3993;
  t24446 = 1. + t24445;
  t24447 = 0.50321*t24446;
  t24448 = 0.19821*t3993;
  t24450 = t24447 + t24448;
  t24457 = t7320*t24450;
  t24458 = -0.305*t4069*t9435;
  t24459 = t24438 + t24457 + t24458;
  t24462 = t23631*t24459;
  t24464 = t24428 + t24462;
  t24467 = 0.15121*t23631;
  t24473 = -0.15121*t23838;
  t24482 = t23838*t24459;
  t24487 = t24428 + t24467 + t24473 + t24482;
  t24509 = -1.*t23631*t23777;
  t24513 = -1.*t23301*t23838;
  t24518 = t24509 + t24513;
  t24526 = 0.28121*t4069;
  t24528 = -1.*t24450*t4069;
  t24530 = -0.305*t7320*t9435;
  t24535 = t24526 + t24528 + t24530;
  t24537 = t23301*t24464;
  t24542 = -1.*t23777*t24487;
  t24548 = t24537 + t24542;
  t24466 = t23777*t24464;
  t24490 = t23301*t24487;
  t24493 = t24466 + t24490;
  t24158 = t3887*t23718;
  t24340 = t23301*t23631*t24321;
  t24349 = -1.*t23777*t23838*t24321;
  t24357 = t24340 + t24349;
  t24369 = t22981*t24357;
  t24372 = t24158 + t24369;
  t24536 = t3887*t24535;
  t24556 = t22981*t24548;
  t24559 = t24536 + t24556;
  t24563 = t22981*t24535;
  t24566 = -1.*t3887*t24548;
  t24579 = t24563 + t24566;
  t24591 = t23631*t23777*t24321;
  t24594 = t23301*t23838*t24321;
  t24595 = t24591 + t24594;
  t24374 = t23301*t23631;
  t24379 = -1.*t23777*t23838;
  t24385 = t24374 + t24379;
  t24508 = -1.*t24385*t24493;
  t24596 = t24595*t24493;
  t14526 = t3887*t10790;
  t23928 = t22981*t23922;
  t23984 = t14526 + t23928;
  t24601 = t22981*t23718;
  t24603 = -1.*t3887*t24357;
  t24604 = t24601 + t24603;
  t24676 = -1.*t24595*t24493;
  t24684 = t24027*t24493;
  t24696 = -1.*t24535*t23718;
  t24704 = t24535*t10790;
  t24776 = t24385*t24493;
  t24782 = -1.*t24027*t24493;
  p_output1[0]=t23984;
  p_output1[1]=t24004*t24027 - 1.*t24030*t24071;
  p_output1[2]=t24027*t24030 + t24004*t24071;
  p_output1[3]=t22981*t24518*(t24372*t24559 + t24596 + t24579*t24604) + t24372*(t24508 - 1.*t22981*t24518*t24559 + t24518*t24579*t3887);
  p_output1[4]=(t24508 - 1.*t24518*t24548)*t24595 + t24385*(t23718*t24535 + t24357*t24548 + t24596);
  p_output1[5]=t23718*(t23838*t24464 - 1.*t23631*t24487);
  p_output1[6]=0;
  p_output1[7]=0.28121*t9435 - 1.*t24450*t9435 - 0.305*t3993*t9435;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t22981*t24518;
  p_output1[19]=t24004*t24385 + t24030*t24518*t3887;
  p_output1[20]=t24030*t24385 - 1.*t24004*t24518*t3887;
  p_output1[21]=t23984*(-1.*t24372*t24559 - 1.*t24579*t24604 + t24676) + t24372*(t23984*t24559 + t24071*t24579 + t24684);
  p_output1[22]=t24027*(-1.*t24357*t24548 + t24676 + t24696) + t24595*(t23922*t24548 + t24684 + t24704);
  p_output1[23]=t10790*(-1.*t23631*t24321*t24464 - 1.*t23838*t24321*t24487 + t24696) + t23718*(t23631*t23718*t24464 + t23718*t23838*t24487 + t24704);
  p_output1[24]=-0.15121 + t10790*(-1.*t24321*t24459 + t24696) + t23718*(t23718*t24459 + t24704);
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
  p_output1[36]=t24372;
  p_output1[37]=t24004*t24595 - 1.*t24030*t24604;
  p_output1[38]=t24030*t24595 + t24004*t24604;
  p_output1[39]=t22981*t24518*(-1.*t23984*t24559 - 1.*t24071*t24579 + t24782) + t23984*(t22981*t24518*t24559 + t24776 - 1.*t24518*t24579*t3887);
  p_output1[40]=t24027*(t24518*t24548 + t24776) + t24385*(-1.*t10790*t24535 - 1.*t23922*t24548 + t24782);
  p_output1[41]=t10790*(-1.*t23838*t24464 + t23631*t24487);
  p_output1[42]=0.15121*t10790 + 0.15121*t24321;
  p_output1[43]=0.28121*t3993 - 1.*t24450*t3993 + 0.305*Power(t9435,2);
  p_output1[44]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
