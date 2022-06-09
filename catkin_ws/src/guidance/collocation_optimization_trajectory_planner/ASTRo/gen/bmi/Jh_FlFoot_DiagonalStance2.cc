/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:42 GMT+02:00
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
  double t5464;
  double t5452;
  double t5462;
  double t5465;
  double t5533;
  double t5534;
  double t5536;
  double t5525;
  double t5532;
  double t5538;
  double t5531;
  double t5545;
  double t5312;
  double t5568;
  double t5569;
  double t5570;
  double t5463;
  double t5466;
  double t5473;
  double t5537;
  double t5550;
  double t5551;
  double t5592;
  double t5554;
  double t5558;
  double t5559;
  double t5584;
  double t5571;
  double t5572;
  double t5574;
  double t5585;
  double t5586;
  double t5587;
  double t5596;
  double t5600;
  double t5601;
  double t5605;
  double t5606;
  double t5607;
  double t5610;
  double t5611;
  double t5612;
  double t5614;
  double t5615;
  double t5616;
  double t5567;
  double t5579;
  double t5583;
  double t5628;
  double t5629;
  double t5630;
  double t5631;
  double t5632;
  double t5633;
  double t5634;
  double t5635;
  double t5636;
  double t5637;
  double t5638;
  double t5639;
  double t5640;
  double t5641;
  double t5642;
  double t5643;
  double t5645;
  double t5646;
  double t5647;
  double t5648;
  double t5652;
  double t5653;
  double t5654;
  double t5655;
  double t5657;
  double t5658;
  double t5659;
  double t5644;
  double t5649;
  double t5650;
  double t5656;
  double t5660;
  double t5661;
  double t5663;
  double t5664;
  double t5665;
  double t5478;
  double t5552;
  double t5553;
  double t5651;
  double t5669;
  double t5675;
  double t5680;
  double t5686;
  double t5691;
  double t5705;
  double t5709;
  t5464 = Cos(var1[7]);
  t5452 = Cos(var1[8]);
  t5462 = Sin(var1[7]);
  t5465 = Sin(var1[8]);
  t5533 = t5464*t5452;
  t5534 = t5462*t5465;
  t5536 = t5533 + t5534;
  t5525 = Cos(var1[4]);
  t5532 = Cos(var1[6]);
  t5538 = Sin(var1[5]);
  t5531 = Cos(var1[5]);
  t5545 = Sin(var1[6]);
  t5312 = Sin(var1[4]);
  t5568 = t5452*t5462;
  t5569 = -1.*t5464*t5465;
  t5570 = t5568 + t5569;
  t5463 = -1.*t5452*t5462;
  t5466 = t5464*t5465;
  t5473 = t5463 + t5466;
  t5537 = t5531*t5532*t5536;
  t5550 = -1.*t5538*t5545*t5536;
  t5551 = t5537 + t5550;
  t5592 = Sin(var1[3]);
  t5554 = -1.*t5532*t5538;
  t5558 = -1.*t5531*t5545;
  t5559 = t5554 + t5558;
  t5584 = Cos(var1[3]);
  t5571 = t5531*t5532*t5570;
  t5572 = -1.*t5538*t5545*t5570;
  t5574 = t5571 + t5572;
  t5585 = t5532*t5538*t5536;
  t5586 = t5531*t5545*t5536;
  t5587 = t5585 + t5586;
  t5596 = t5525*t5473;
  t5600 = -1.*t5312*t5551;
  t5601 = t5596 + t5600;
  t5605 = t5531*t5532;
  t5606 = -1.*t5538*t5545;
  t5607 = t5605 + t5606;
  t5610 = t5532*t5538*t5570;
  t5611 = t5531*t5545*t5570;
  t5612 = t5610 + t5611;
  t5614 = t5525*t5536;
  t5615 = -1.*t5312*t5574;
  t5616 = t5614 + t5615;
  t5567 = t5312*t5536;
  t5579 = t5525*t5574;
  t5583 = t5567 + t5579;
  t5628 = -1.*t5532;
  t5629 = 1. + t5628;
  t5630 = 0.15121*t5629;
  t5631 = -1.*t5464;
  t5632 = 1. + t5631;
  t5633 = 0.28121*t5632;
  t5634 = -1.*t5452;
  t5635 = 1. + t5634;
  t5636 = 0.50321*t5635;
  t5637 = 0.19821*t5452;
  t5638 = t5636 + t5637;
  t5639 = t5464*t5638;
  t5640 = -0.305*t5462*t5465;
  t5641 = t5633 + t5639 + t5640;
  t5642 = t5532*t5641;
  t5643 = t5630 + t5642;
  t5645 = 0.15121*t5532;
  t5646 = -0.15121*t5545;
  t5647 = t5545*t5641;
  t5648 = t5630 + t5645 + t5646 + t5647;
  t5652 = 0.28121*t5462;
  t5653 = -1.*t5638*t5462;
  t5654 = -0.305*t5464*t5465;
  t5655 = t5652 + t5653 + t5654;
  t5657 = t5531*t5643;
  t5658 = -1.*t5538*t5648;
  t5659 = t5657 + t5658;
  t5644 = t5538*t5643;
  t5649 = t5531*t5648;
  t5650 = t5644 + t5649;
  t5656 = t5312*t5655;
  t5660 = t5525*t5659;
  t5661 = t5656 + t5660;
  t5663 = t5525*t5655;
  t5664 = -1.*t5312*t5659;
  t5665 = t5663 + t5664;
  t5478 = t5312*t5473;
  t5552 = t5525*t5551;
  t5553 = t5478 + t5552;
  t5651 = -1.*t5607*t5650;
  t5669 = t5612*t5650;
  t5675 = -1.*t5612*t5650;
  t5680 = t5587*t5650;
  t5686 = t5607*t5650;
  t5691 = -1.*t5587*t5650;
  t5705 = -1.*t5655*t5536;
  t5709 = t5655*t5473;
  p_output1[0]=t5553;
  p_output1[1]=t5525*t5559;
  p_output1[2]=t5583;
  p_output1[3]=t5584*t5587 - 1.*t5592*t5601;
  p_output1[4]=t5312*t5559*t5592 + t5584*t5607;
  p_output1[5]=t5584*t5612 - 1.*t5592*t5616;
  p_output1[6]=t5587*t5592 + t5584*t5601;
  p_output1[7]=-1.*t5312*t5559*t5584 + t5592*t5607;
  p_output1[8]=t5592*t5612 + t5584*t5616;
  p_output1[9]=t5583*(t5651 - 1.*t5525*t5559*t5661 + t5312*t5559*t5665) + t5525*t5559*(t5583*t5661 + t5616*t5665 + t5669);
  p_output1[10]=t5553*(-1.*t5583*t5661 - 1.*t5616*t5665 + t5675) + t5583*(t5553*t5661 + t5601*t5665 + t5680);
  p_output1[11]=t5553*(t5525*t5559*t5661 - 1.*t5312*t5559*t5665 + t5686) + t5525*t5559*(-1.*t5553*t5661 - 1.*t5601*t5665 + t5691);
  p_output1[12]=t5612*(t5651 - 1.*t5559*t5659) + t5607*(t5536*t5655 + t5574*t5659 + t5669);
  p_output1[13]=t5587*(-1.*t5574*t5659 + t5675 + t5705) + t5612*(t5551*t5659 + t5680 + t5709);
  p_output1[14]=t5587*(t5559*t5659 + t5686) + t5607*(-1.*t5473*t5655 - 1.*t5551*t5659 + t5691);
  p_output1[15]=t5536*(t5545*t5643 - 1.*t5532*t5648);
  p_output1[16]=t5473*(-1.*t5532*t5570*t5643 - 1.*t5545*t5570*t5648 + t5705) + t5536*(t5532*t5536*t5643 + t5536*t5545*t5648 + t5709);
  p_output1[17]=t5473*(-1.*t5545*t5643 + t5532*t5648);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t5473*(-1.*t5570*t5641 + t5705) + t5536*(t5536*t5641 + t5709);
  p_output1[20]=0.15121*t5473 + 0.15121*t5570;
  p_output1[21]=0.28121*t5465 - 0.305*t5452*t5465 - 1.*t5465*t5638;
  p_output1[22]=0;
  p_output1[23]=0.28121*t5452 + 0.305*Power(t5465,2) - 1.*t5452*t5638;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
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

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
