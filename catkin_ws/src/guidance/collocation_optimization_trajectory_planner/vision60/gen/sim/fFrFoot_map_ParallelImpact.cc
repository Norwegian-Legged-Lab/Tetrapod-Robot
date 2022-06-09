/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:38 GMT+02:00
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
  double t8259;
  double t3867;
  double t5343;
  double t8314;
  double t5715;
  double t8387;
  double t8389;
  double t8400;
  double t8420;
  double t8404;
  double t8409;
  double t8414;
  double t8434;
  double t3750;
  double t8399;
  double t8391;
  double t8415;
  double t8436;
  double t8437;
  double t8457;
  double t8442;
  double t8446;
  double t8447;
  double t8440;
  double t8462;
  double t8464;
  double t8465;
  double t8558;
  double t8560;
  double t8561;
  double t8564;
  double t8565;
  double t8566;
  double t8567;
  double t8569;
  double t8570;
  double t8557;
  double t8562;
  double t8571;
  double t8572;
  double t8577;
  double t8579;
  double t8580;
  double t8583;
  double t8584;
  double t8585;
  double t8552;
  double t8553;
  double t8554;
  double t8556;
  double t8573;
  double t8574;
  double t8594;
  double t8595;
  double t8596;
  double t8599;
  double t8600;
  double t8604;
  double t8590;
  double t8591;
  double t8593;
  double t8575;
  double t8586;
  double t8587;
  double t8542;
  double t8544;
  double t8545;
  double t8597;
  double t8606;
  double t8607;
  double t8541;
  double t8546;
  double t8547;
  double t8548;
  double t8549;
  double t8551;
  double t8614;
  double t8619;
  double t8620;
  double t8630;
  double t8634;
  double t8638;
  double t8589;
  double t8639;
  double t8656;
  double t8662;
  double t8609;
  double t8610;
  double t8611;
  double t8397;
  double t8438;
  double t8439;
  double t8641;
  double t8642;
  double t8643;
  double t8700;
  double t8705;
  double t8717;
  double t8712;
  double t8728;
  double t8723;
  double t8745;
  double t8752;
  double t8758;
  double t8762;
  t8259 = Cos(var1[13]);
  t3867 = Cos(var1[14]);
  t5343 = Sin(var1[13]);
  t8314 = Sin(var1[14]);
  t5715 = t3867*t5343;
  t8387 = -1.*t8259*t8314;
  t8389 = t5715 + t8387;
  t8400 = Cos(var1[5]);
  t8420 = Sin(var1[12]);
  t8404 = t8259*t3867;
  t8409 = t5343*t8314;
  t8414 = t8404 + t8409;
  t8434 = Sin(var1[5]);
  t3750 = Cos(var1[12]);
  t8399 = Cos(var1[4]);
  t8391 = Sin(var1[4]);
  t8415 = t8400*t8414;
  t8436 = t8420*t8389*t8434;
  t8437 = t8415 + t8436;
  t8457 = Sin(var1[3]);
  t8442 = -1.*t8400*t8420*t8389;
  t8446 = t8414*t8434;
  t8447 = t8442 + t8446;
  t8440 = Cos(var1[3]);
  t8462 = t3750*t8399*t8389;
  t8464 = -1.*t8391*t8437;
  t8465 = t8462 + t8464;
  t8558 = -0.0641*t3867;
  t8560 = -0.28*t8314;
  t8561 = t8558 + t8560;
  t8564 = -1.*t3867;
  t8565 = 1. + t8564;
  t8566 = 0.075*t8565;
  t8567 = 0.355*t3867;
  t8569 = -0.0641*t8314;
  t8570 = t8566 + t8567 + t8569;
  t8557 = -0.325*t5343;
  t8562 = t8259*t8561;
  t8571 = t5343*t8570;
  t8572 = t8557 + t8562 + t8571;
  t8577 = -1.*t8259;
  t8579 = 1. + t8577;
  t8580 = 0.325*t8579;
  t8583 = -1.*t5343*t8561;
  t8584 = t8259*t8570;
  t8585 = t8580 + t8583 + t8584;
  t8552 = -1.*t3750;
  t8553 = 1. + t8552;
  t8554 = -0.1575*t8553;
  t8556 = -0.2255*t3750;
  t8573 = -1.*t8420*t8572;
  t8574 = t8554 + t8556 + t8573;
  t8594 = -0.068*t8420;
  t8595 = t3750*t8572;
  t8596 = t8594 + t8595;
  t8599 = t8400*t8585;
  t8600 = -1.*t8574*t8434;
  t8604 = t8599 + t8600;
  t8590 = t8420*t8391;
  t8591 = -1.*t3750*t8399*t8434;
  t8593 = t8590 + t8591;
  t8575 = t8400*t8574;
  t8586 = t8585*t8434;
  t8587 = t8575 + t8586;
  t8542 = -1.*t3867*t5343;
  t8544 = t8259*t8314;
  t8545 = t8542 + t8544;
  t8597 = t8596*t8391;
  t8606 = t8399*t8604;
  t8607 = t8597 + t8606;
  t8541 = t3750*t8414*t8391;
  t8546 = t8400*t8545;
  t8547 = t8420*t8414*t8434;
  t8548 = t8546 + t8547;
  t8549 = t8399*t8548;
  t8551 = t8541 + t8549;
  t8614 = t8399*t8596;
  t8619 = -1.*t8391*t8604;
  t8620 = t8614 + t8619;
  t8630 = -1.*t8400*t8420*t8414;
  t8634 = t8545*t8434;
  t8638 = t8630 + t8634;
  t8589 = -1.*t3750*t8400*t8587;
  t8639 = t8587*t8638;
  t8656 = -1.*t8420*t8596;
  t8662 = t3750*t8596*t8414;
  t8609 = t8399*t8420;
  t8610 = t3750*t8391*t8434;
  t8611 = t8609 + t8610;
  t8397 = t3750*t8389*t8391;
  t8438 = t8399*t8437;
  t8439 = t8397 + t8438;
  t8641 = t3750*t8399*t8414;
  t8642 = -1.*t8391*t8548;
  t8643 = t8641 + t8642;
  t8700 = t8587*t8447;
  t8705 = -1.*t8587*t8638;
  t8717 = -1.*t3750*t8596*t8414;
  t8712 = t3750*t8596*t8389;
  t8728 = t8585*t8414;
  t8723 = -1.*t8585*t8545;
  t8745 = t3750*t8400*t8587;
  t8752 = -1.*t8587*t8447;
  t8758 = t8420*t8596;
  t8762 = -1.*t3750*t8596*t8389;
  p_output1[0]=t8439;
  p_output1[1]=t8440*t8447 - 1.*t8457*t8465;
  p_output1[2]=t8447*t8457 + t8440*t8465;
  p_output1[3]=t8551*(t8589 - 1.*t8593*t8607 - 1.*t8611*t8620) + t8593*(t8551*t8607 + t8639 + t8620*t8643);
  p_output1[4]=t8638*(t8589 + t3750*t8434*t8604 + t8656) + t3750*t8400*(t8548*t8604 + t8639 + t8662);
  p_output1[5]=t3750*t8414*(-1.*t3750*t8574 + t8656) + t8420*(-1.*t8414*t8420*t8574 + t8545*t8585 + t8662);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t8389 + 0.2255*t8545;
  p_output1[13]=0.325*t8314 - 1.*t3867*t8561 - 1.*t8314*t8570;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t8593;
  p_output1[19]=t3750*t8400*t8440 - 1.*t8457*t8611;
  p_output1[20]=t3750*t8400*t8457 + t8440*t8611;
  p_output1[21]=t8551*(t8439*t8607 + t8465*t8620 + t8700) + t8439*(-1.*t8551*t8607 - 1.*t8620*t8643 + t8705);
  p_output1[22]=t8638*(t8437*t8604 + t8700 + t8712) + t8447*(-1.*t8548*t8604 + t8705 + t8717);
  p_output1[23]=t3750*t8389*(t8414*t8420*t8574 + t8717 + t8723) + t3750*t8414*(-1.*t8389*t8420*t8574 + t8712 + t8728);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t8414*(-1.*t8414*t8572 + t8723) + t8545*(t8389*t8572 + t8728);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8551;
  p_output1[37]=t8440*t8638 - 1.*t8457*t8643;
  p_output1[38]=t8457*t8638 + t8440*t8643;
  p_output1[39]=t8439*(t8593*t8607 + t8611*t8620 + t8745) + t8593*(-1.*t8439*t8607 - 1.*t8465*t8620 + t8752);
  p_output1[40]=t8447*(-1.*t3750*t8434*t8604 + t8745 + t8758) + t3750*t8400*(-1.*t8437*t8604 + t8752 + t8762);
  p_output1[41]=t3750*t8389*(t3750*t8574 + t8758) + t8420*(t8389*t8420*t8574 - 1.*t8414*t8585 + t8762);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t8414;
  p_output1[49]=-0.325*t3867 - 1.*t8314*t8561 + t3867*t8570;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
