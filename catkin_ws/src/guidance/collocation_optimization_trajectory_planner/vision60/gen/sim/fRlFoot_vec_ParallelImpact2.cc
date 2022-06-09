/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:47 GMT+02:00
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
  double t5112;
  double t5015;
  double t9306;
  double t9426;
  double t9419;
  double t9420;
  double t9431;
  double t4592;
  double t9421;
  double t9432;
  double t9433;
  double t9401;
  double t9445;
  double t9446;
  double t9447;
  double t9444;
  double t9512;
  double t9514;
  double t9449;
  double t9450;
  double t9451;
  double t9456;
  double t9457;
  double t9458;
  double t9459;
  double t9460;
  double t9461;
  double t9515;
  double t9516;
  double t9517;
  double t9522;
  double t9524;
  double t9525;
  double t9527;
  double t9528;
  double t9529;
  double t9534;
  double t9536;
  double t9537;
  double t9539;
  double t9540;
  double t9541;
  double t9439;
  double t9452;
  double t9453;
  double t9570;
  double t9571;
  double t9572;
  double t9574;
  double t9575;
  double t9576;
  double t9577;
  double t9578;
  double t9579;
  double t5110;
  double t9411;
  double t9412;
  double t9569;
  double t9573;
  double t9580;
  double t9581;
  double t9585;
  double t9586;
  double t9587;
  double t9588;
  double t9589;
  double t9590;
  double t9563;
  double t9565;
  double t9566;
  double t9568;
  double t9582;
  double t9583;
  double t9595;
  double t9596;
  double t9598;
  double t9600;
  double t9601;
  double t9602;
  double t9584;
  double t9591;
  double t9593;
  double t9599;
  double t9603;
  double t9604;
  double t9606;
  double t9607;
  double t9608;
  double t9455;
  double t9500;
  double t9504;
  double t9594;
  double t9612;
  double t9619;
  double t9624;
  double t9631;
  double t9636;
  double t9664;
  double t9668;
  double t9644;
  double t9648;
  double t9658;
  double t9654;
  double t9698;
  double t9693;
  t5112 = Cos(var1[9]);
  t5015 = Sin(var1[4]);
  t9306 = Cos(var1[4]);
  t9426 = Cos(var1[10]);
  t9419 = Cos(var1[11]);
  t9420 = Sin(var1[10]);
  t9431 = Sin(var1[11]);
  t4592 = Sin(var1[9]);
  t9421 = t9419*t9420;
  t9432 = -1.*t9426*t9431;
  t9433 = t9421 + t9432;
  t9401 = Sin(var1[5]);
  t9445 = t9426*t9419;
  t9446 = t9420*t9431;
  t9447 = t9445 + t9446;
  t9444 = Cos(var1[5]);
  t9512 = Cos(var1[3]);
  t9514 = Sin(var1[3]);
  t9449 = t9444*t9447;
  t9450 = t4592*t9433*t9401;
  t9451 = t9449 + t9450;
  t9456 = -1.*t9419*t9420;
  t9457 = t9426*t9431;
  t9458 = t9456 + t9457;
  t9459 = t9444*t9458;
  t9460 = t4592*t9447*t9401;
  t9461 = t9459 + t9460;
  t9515 = t9306*t4592;
  t9516 = t5112*t5015*t9401;
  t9517 = t9515 + t9516;
  t9522 = -1.*t9444*t4592*t9433;
  t9524 = t9447*t9401;
  t9525 = t9522 + t9524;
  t9527 = t5112*t9306*t9433;
  t9528 = -1.*t5015*t9451;
  t9529 = t9527 + t9528;
  t9534 = -1.*t9444*t4592*t9447;
  t9536 = t9458*t9401;
  t9537 = t9534 + t9536;
  t9539 = t5112*t9306*t9447;
  t9540 = -1.*t5015*t9461;
  t9541 = t9539 + t9540;
  t9439 = t5112*t9433*t5015;
  t9452 = t9306*t9451;
  t9453 = t9439 + t9452;
  t9570 = -0.0641*t9419;
  t9571 = -0.28*t9431;
  t9572 = t9570 + t9571;
  t9574 = -1.*t9419;
  t9575 = 1. + t9574;
  t9576 = -0.575*t9575;
  t9577 = -0.295*t9419;
  t9578 = -0.0641*t9431;
  t9579 = t9576 + t9577 + t9578;
  t5110 = t4592*t5015;
  t9411 = -1.*t5112*t9306*t9401;
  t9412 = t5110 + t9411;
  t9569 = 0.325*t9420;
  t9573 = t9426*t9572;
  t9580 = t9420*t9579;
  t9581 = t9569 + t9573 + t9580;
  t9585 = -1.*t9426;
  t9586 = 1. + t9585;
  t9587 = -0.325*t9586;
  t9588 = -1.*t9420*t9572;
  t9589 = t9426*t9579;
  t9590 = t9587 + t9588 + t9589;
  t9563 = -1.*t5112;
  t9565 = 1. + t9563;
  t9566 = 0.1575*t9565;
  t9568 = 0.2255*t5112;
  t9582 = -1.*t4592*t9581;
  t9583 = t9566 + t9568 + t9582;
  t9595 = 0.068*t4592;
  t9596 = t5112*t9581;
  t9598 = t9595 + t9596;
  t9600 = t9444*t9590;
  t9601 = -1.*t9583*t9401;
  t9602 = t9600 + t9601;
  t9584 = t9444*t9583;
  t9591 = t9590*t9401;
  t9593 = t9584 + t9591;
  t9599 = t9598*t5015;
  t9603 = t9306*t9602;
  t9604 = t9599 + t9603;
  t9606 = t9306*t9598;
  t9607 = -1.*t5015*t9602;
  t9608 = t9606 + t9607;
  t9455 = t5112*t9447*t5015;
  t9500 = t9306*t9461;
  t9504 = t9455 + t9500;
  t9594 = t5112*t9444*t9593;
  t9612 = -1.*t9593*t9525;
  t9619 = t9593*t9525;
  t9624 = -1.*t9593*t9537;
  t9631 = -1.*t5112*t9444*t9593;
  t9636 = t9593*t9537;
  t9664 = -1.*t4592*t9598;
  t9668 = t5112*t9598*t9447;
  t9644 = t4592*t9598;
  t9648 = -1.*t5112*t9598*t9433;
  t9658 = -1.*t5112*t9598*t9447;
  t9654 = t5112*t9598*t9433;
  t9698 = t9590*t9447;
  t9693 = -1.*t9590*t9458;
  p_output1[0]=t9453*var2[0] + t9412*var2[1] + t9504*var2[2];
  p_output1[1]=(t9512*t9525 - 1.*t9514*t9529)*var2[0] + (t5112*t9444*t9512 - 1.*t9514*t9517)*var2[1] + (t9512*t9537 - 1.*t9514*t9541)*var2[2];
  p_output1[2]=(t9514*t9525 + t9512*t9529)*var2[0] + (t5112*t9444*t9514 + t9512*t9517)*var2[1] + (t9514*t9537 + t9512*t9541)*var2[2];
  p_output1[3]=(t9504*(-1.*t9412*t9604 - 1.*t9517*t9608 + t9631) + t9412*(t9504*t9604 + t9541*t9608 + t9636))*var2[0] + (t9504*(t9453*t9604 + t9529*t9608 + t9619) + t9453*(-1.*t9504*t9604 - 1.*t9541*t9608 + t9624))*var2[1] + (t9453*(t9594 + t9412*t9604 + t9517*t9608) + t9412*(-1.*t9453*t9604 - 1.*t9529*t9608 + t9612))*var2[2];
  p_output1[4]=(t9537*(t5112*t9401*t9602 + t9631 + t9664) + t5112*t9444*(t9461*t9602 + t9636 + t9668))*var2[0] + (t9537*(t9451*t9602 + t9619 + t9654) + t9525*(-1.*t9461*t9602 + t9624 + t9658))*var2[1] + (t9525*(t9594 - 1.*t5112*t9401*t9602 + t9644) + t5112*t9444*(-1.*t9451*t9602 + t9612 + t9648))*var2[2];
  p_output1[5]=(t5112*t9447*(-1.*t5112*t9583 + t9664) + t4592*(-1.*t4592*t9447*t9583 + t9458*t9590 + t9668))*var2[0] + (t5112*t9433*(t4592*t9447*t9583 + t9658 + t9693) + t5112*t9447*(-1.*t4592*t9433*t9583 + t9654 + t9698))*var2[1] + (t5112*t9433*(t5112*t9583 + t9644) + t4592*(t4592*t9433*t9583 - 1.*t9447*t9590 + t9648))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t9433 - 0.2255*t9458)*var2[0] + (t9447*(-1.*t9447*t9581 + t9693) + t9458*(t9433*t9581 + t9698))*var2[1] + 0.068*t9447*var2[2];
  p_output1[10]=(-0.325*t9431 - 1.*t9419*t9572 - 1.*t9431*t9579)*var2[0] + (0.325*t9419 - 1.*t9431*t9572 + t9419*t9579)*var2[2];
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
