/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:13 GMT+02:00
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
  double t11978;
  double t7432;
  double t7890;
  double t12011;
  double t11945;
  double t12061;
  double t12077;
  double t27158;
  double t20747;
  double t69;
  double t26939;
  double t27160;
  double t26942;
  double t26943;
  double t27140;
  double t26940;
  double t27157;
  double t27167;
  double t27168;
  double t27453;
  double t27464;
  double t27406;
  double t27407;
  double t27421;
  double t27429;
  double t27440;
  double t27442;
  double t27454;
  double t27455;
  double t27457;
  double t27521;
  double t27522;
  double t27528;
  double t27548;
  double t27552;
  double t27559;
  double t27583;
  double t27584;
  double t27588;
  double t27590;
  double t27591;
  double t27595;
  double t27405;
  double t27451;
  double t27452;
  double t27624;
  double t27625;
  double t27626;
  double t27628;
  double t27629;
  double t27630;
  double t27631;
  double t27632;
  double t27633;
  double t27382;
  double t27402;
  double t27403;
  double t27623;
  double t27627;
  double t27634;
  double t27635;
  double t27639;
  double t27640;
  double t27641;
  double t27642;
  double t27643;
  double t27644;
  double t27619;
  double t27620;
  double t27621;
  double t27622;
  double t27636;
  double t27637;
  double t27650;
  double t27654;
  double t27658;
  double t27661;
  double t27663;
  double t27664;
  double t27638;
  double t27645;
  double t27647;
  double t27659;
  double t27665;
  double t27666;
  double t27668;
  double t27669;
  double t27670;
  double t26914;
  double t27174;
  double t27178;
  double t27649;
  double t27674;
  double t27680;
  double t27685;
  double t27691;
  double t27700;
  double t27711;
  double t27715;
  double t27724;
  double t27720;
  double t27729;
  double t27739;
  double t27770;
  double t27765;
  t11978 = Cos(var1[10]);
  t7432 = Cos(var1[11]);
  t7890 = Sin(var1[10]);
  t12011 = Sin(var1[11]);
  t11945 = t7432*t7890;
  t12061 = -1.*t11978*t12011;
  t12077 = t11945 + t12061;
  t27158 = Sin(var1[9]);
  t20747 = Sin(var1[4]);
  t69 = Cos(var1[9]);
  t26939 = Cos(var1[4]);
  t27160 = Sin(var1[5]);
  t26942 = t11978*t7432;
  t26943 = t7890*t12011;
  t27140 = t26942 + t26943;
  t26940 = Cos(var1[5]);
  t27157 = t26940*t27140;
  t27167 = t27158*t12077*t27160;
  t27168 = t27157 + t27167;
  t27453 = Cos(var1[3]);
  t27464 = Sin(var1[3]);
  t27406 = -1.*t7432*t7890;
  t27407 = t11978*t12011;
  t27421 = t27406 + t27407;
  t27429 = t26940*t27421;
  t27440 = t27158*t27140*t27160;
  t27442 = t27429 + t27440;
  t27454 = -1.*t26940*t27158*t12077;
  t27455 = t27140*t27160;
  t27457 = t27454 + t27455;
  t27521 = t69*t26939*t12077;
  t27522 = -1.*t20747*t27168;
  t27528 = t27521 + t27522;
  t27548 = t26939*t27158;
  t27552 = t69*t20747*t27160;
  t27559 = t27548 + t27552;
  t27583 = -1.*t26940*t27158*t27140;
  t27584 = t27421*t27160;
  t27588 = t27583 + t27584;
  t27590 = t69*t26939*t27140;
  t27591 = -1.*t20747*t27442;
  t27595 = t27590 + t27591;
  t27405 = t69*t27140*t20747;
  t27451 = t26939*t27442;
  t27452 = t27405 + t27451;
  t27624 = -0.0641*t7432;
  t27625 = -0.28*t12011;
  t27626 = t27624 + t27625;
  t27628 = -1.*t7432;
  t27629 = 1. + t27628;
  t27630 = -0.575*t27629;
  t27631 = -0.295*t7432;
  t27632 = -0.0641*t12011;
  t27633 = t27630 + t27631 + t27632;
  t27382 = t27158*t20747;
  t27402 = -1.*t69*t26939*t27160;
  t27403 = t27382 + t27402;
  t27623 = 0.325*t7890;
  t27627 = t11978*t27626;
  t27634 = t7890*t27633;
  t27635 = t27623 + t27627 + t27634;
  t27639 = -1.*t11978;
  t27640 = 1. + t27639;
  t27641 = -0.325*t27640;
  t27642 = -1.*t7890*t27626;
  t27643 = t11978*t27633;
  t27644 = t27641 + t27642 + t27643;
  t27619 = -1.*t69;
  t27620 = 1. + t27619;
  t27621 = 0.1575*t27620;
  t27622 = 0.2255*t69;
  t27636 = -1.*t27158*t27635;
  t27637 = t27621 + t27622 + t27636;
  t27650 = 0.068*t27158;
  t27654 = t69*t27635;
  t27658 = t27650 + t27654;
  t27661 = t26940*t27644;
  t27663 = -1.*t27637*t27160;
  t27664 = t27661 + t27663;
  t27638 = t26940*t27637;
  t27645 = t27644*t27160;
  t27647 = t27638 + t27645;
  t27659 = t27658*t20747;
  t27665 = t26939*t27664;
  t27666 = t27659 + t27665;
  t27668 = t26939*t27658;
  t27669 = -1.*t20747*t27664;
  t27670 = t27668 + t27669;
  t26914 = t69*t12077*t20747;
  t27174 = t26939*t27168;
  t27178 = t26914 + t27174;
  t27649 = -1.*t69*t26940*t27647;
  t27674 = t27647*t27588;
  t27680 = t27647*t27457;
  t27685 = -1.*t27647*t27588;
  t27691 = t69*t26940*t27647;
  t27700 = -1.*t27647*t27457;
  t27711 = -1.*t27158*t27658;
  t27715 = t69*t27658*t27140;
  t27724 = -1.*t69*t27658*t27140;
  t27720 = t69*t27658*t12077;
  t27729 = t27158*t27658;
  t27739 = -1.*t69*t27658*t12077;
  t27770 = t27644*t27140;
  t27765 = -1.*t27644*t27421;
  p_output1[0]=t27178;
  p_output1[1]=t27403;
  p_output1[2]=t27452;
  p_output1[3]=t27453*t27457 - 1.*t27464*t27528;
  p_output1[4]=-1.*t27464*t27559 + t26940*t27453*t69;
  p_output1[5]=t27453*t27588 - 1.*t27464*t27595;
  p_output1[6]=t27457*t27464 + t27453*t27528;
  p_output1[7]=t27453*t27559 + t26940*t27464*t69;
  p_output1[8]=t27464*t27588 + t27453*t27595;
  p_output1[9]=t27452*(t27649 - 1.*t27403*t27666 - 1.*t27559*t27670) + t27403*(t27452*t27666 + t27595*t27670 + t27674);
  p_output1[10]=t27452*(t27178*t27666 + t27528*t27670 + t27680) + t27178*(-1.*t27452*t27666 - 1.*t27595*t27670 + t27685);
  p_output1[11]=t27178*(t27403*t27666 + t27559*t27670 + t27691) + t27403*(-1.*t27178*t27666 - 1.*t27528*t27670 + t27700);
  p_output1[12]=t26940*(t27442*t27664 + t27674 + t27715)*t69 + t27588*(t27649 + t27711 + t27160*t27664*t69);
  p_output1[13]=t27588*(t27168*t27664 + t27680 + t27720) + t27457*(-1.*t27442*t27664 + t27685 + t27724);
  p_output1[14]=t26940*(-1.*t27168*t27664 + t27700 + t27739)*t69 + t27457*(t27691 + t27729 - 1.*t27160*t27664*t69);
  p_output1[15]=t27158*(-1.*t27140*t27158*t27637 + t27421*t27644 + t27715) + t27140*t69*(t27711 - 1.*t27637*t69);
  p_output1[16]=t12077*(t27140*t27158*t27637 + t27724 + t27765)*t69 + t27140*(-1.*t12077*t27158*t27637 + t27720 + t27770)*t69;
  p_output1[17]=t27158*(t12077*t27158*t27637 - 1.*t27140*t27644 + t27739) + t12077*t69*(t27729 + t27637*t69);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t12077 - 0.2255*t27421;
  p_output1[28]=t27140*(-1.*t27140*t27635 + t27765) + t27421*(t12077*t27635 + t27770);
  p_output1[29]=0.068*t27140;
  p_output1[30]=-0.325*t12011 - 1.*t12011*t27633 - 1.*t27626*t7432;
  p_output1[31]=0;
  p_output1[32]=-1.*t12011*t27626 + 0.325*t7432 + t27633*t7432;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
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
