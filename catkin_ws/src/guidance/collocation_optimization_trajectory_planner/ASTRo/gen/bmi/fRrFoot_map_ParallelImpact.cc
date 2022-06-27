/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:33 GMT+02:00
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
  double t5518;
  double t5470;
  double t5516;
  double t5520;
  double t5594;
  double t5595;
  double t5596;
  double t5593;
  double t5598;
  double t5589;
  double t5599;
  double t5584;
  double t5517;
  double t5521;
  double t5578;
  double t5582;
  double t5597;
  double t5600;
  double t5601;
  double t5609;
  double t5605;
  double t5606;
  double t5607;
  double t5604;
  double t5610;
  double t5611;
  double t5612;
  double t5633;
  double t5634;
  double t5636;
  double t5639;
  double t5640;
  double t5641;
  double t5642;
  double t5643;
  double t5644;
  double t5645;
  double t5646;
  double t5647;
  double t5648;
  double t5649;
  double t5653;
  double t5654;
  double t5637;
  double t5638;
  double t5650;
  double t5651;
  double t5658;
  double t5659;
  double t5660;
  double t5661;
  double t5663;
  double t5664;
  double t5665;
  double t5668;
  double t5669;
  double t5670;
  double t5652;
  double t5655;
  double t5656;
  double t5618;
  double t5619;
  double t5621;
  double t5622;
  double t5623;
  double t5624;
  double t5626;
  double t5627;
  double t5628;
  double t5666;
  double t5671;
  double t5672;
  double t5674;
  double t5675;
  double t5676;
  double t5680;
  double t5681;
  double t5682;
  double t5629;
  double t5630;
  double t5632;
  double t5657;
  double t5683;
  double t5583;
  double t5602;
  double t5603;
  double t5685;
  double t5686;
  double t5687;
  double t5718;
  double t5723;
  double t5729;
  double t5733;
  double t5760;
  double t5765;
  t5518 = Cos(var1[16]);
  t5470 = Cos(var1[17]);
  t5516 = Sin(var1[16]);
  t5520 = Sin(var1[17]);
  t5594 = -1.*t5518*t5470;
  t5595 = -1.*t5516*t5520;
  t5596 = t5594 + t5595;
  t5593 = Cos(var1[5]);
  t5598 = Sin(var1[15]);
  t5589 = Cos(var1[15]);
  t5599 = Sin(var1[5]);
  t5584 = Cos(var1[4]);
  t5517 = -1.*t5470*t5516;
  t5521 = t5518*t5520;
  t5578 = t5517 + t5521;
  t5582 = Sin(var1[4]);
  t5597 = t5589*t5593*t5596;
  t5600 = -1.*t5598*t5596*t5599;
  t5601 = t5597 + t5600;
  t5609 = Sin(var1[3]);
  t5605 = t5593*t5598*t5596;
  t5606 = t5589*t5596*t5599;
  t5607 = t5605 + t5606;
  t5604 = Cos(var1[3]);
  t5610 = t5584*t5578;
  t5611 = -1.*t5582*t5601;
  t5612 = t5610 + t5611;
  t5633 = -1.*t5589;
  t5634 = 1. + t5633;
  t5636 = -0.15121*t5634;
  t5639 = -1.*t5518;
  t5640 = 1. + t5639;
  t5641 = -0.28121*t5640;
  t5642 = -1.*t5470;
  t5643 = 1. + t5642;
  t5644 = -0.50321*t5643;
  t5645 = -0.19821*t5470;
  t5646 = t5644 + t5645;
  t5647 = t5518*t5646;
  t5648 = 0.305*t5516*t5520;
  t5649 = t5641 + t5647 + t5648;
  t5653 = t5589*t5649;
  t5654 = t5636 + t5653;
  t5637 = -0.15121*t5589;
  t5638 = 0.15121*t5598;
  t5650 = t5598*t5649;
  t5651 = t5636 + t5637 + t5638 + t5650;
  t5658 = t5593*t5598;
  t5659 = t5589*t5599;
  t5660 = t5658 + t5659;
  t5661 = 0.28121*t5516;
  t5663 = t5646*t5516;
  t5664 = -0.305*t5518*t5520;
  t5665 = t5661 + t5663 + t5664;
  t5668 = t5593*t5654;
  t5669 = -1.*t5651*t5599;
  t5670 = t5668 + t5669;
  t5652 = t5593*t5651;
  t5655 = t5654*t5599;
  t5656 = t5652 + t5655;
  t5618 = t5518*t5470;
  t5619 = t5516*t5520;
  t5621 = t5618 + t5619;
  t5622 = t5621*t5582;
  t5623 = t5589*t5593*t5578;
  t5624 = -1.*t5598*t5578*t5599;
  t5626 = t5623 + t5624;
  t5627 = t5584*t5626;
  t5628 = t5622 + t5627;
  t5666 = t5665*t5582;
  t5671 = t5584*t5670;
  t5672 = t5666 + t5671;
  t5674 = t5584*t5665;
  t5675 = -1.*t5582*t5670;
  t5676 = t5674 + t5675;
  t5680 = t5593*t5598*t5578;
  t5681 = t5589*t5578*t5599;
  t5682 = t5680 + t5681;
  t5629 = -1.*t5589*t5593;
  t5630 = t5598*t5599;
  t5632 = t5629 + t5630;
  t5657 = -1.*t5632*t5656;
  t5683 = t5682*t5656;
  t5583 = t5578*t5582;
  t5602 = t5584*t5601;
  t5603 = t5583 + t5602;
  t5685 = t5584*t5621;
  t5686 = -1.*t5582*t5626;
  t5687 = t5685 + t5686;
  t5718 = -1.*t5682*t5656;
  t5723 = t5607*t5656;
  t5729 = -1.*t5665*t5621;
  t5733 = t5665*t5578;
  t5760 = t5632*t5656;
  t5765 = -1.*t5607*t5656;
  p_output1[0]=t5603;
  p_output1[1]=t5604*t5607 - 1.*t5609*t5612;
  p_output1[2]=t5607*t5609 + t5604*t5612;
  p_output1[3]=t5628*(t5657 - 1.*t5584*t5660*t5672 + t5582*t5660*t5676) + t5584*t5660*(t5628*t5672 + t5683 + t5676*t5687);
  p_output1[4]=(t5657 - 1.*t5660*t5670)*t5682 + t5632*(t5621*t5665 + t5626*t5670 + t5683);
  p_output1[5]=t5621*(t5589*t5651 - 1.*t5598*t5654);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t5596 - 0.15121*t5621;
  p_output1[16]=0.28121*t5520 - 0.305*t5470*t5520 + t5520*t5646;
  p_output1[17]=0;
  p_output1[18]=t5584*t5660;
  p_output1[19]=t5604*t5632 + t5582*t5609*t5660;
  p_output1[20]=t5609*t5632 - 1.*t5582*t5604*t5660;
  p_output1[21]=t5603*(-1.*t5628*t5672 - 1.*t5676*t5687 + t5718) + t5628*(t5603*t5672 + t5612*t5676 + t5723);
  p_output1[22]=t5607*(-1.*t5626*t5670 + t5718 + t5729) + t5682*(t5601*t5670 + t5723 + t5733);
  p_output1[23]=t5578*(-1.*t5578*t5598*t5651 - 1.*t5578*t5589*t5654 + t5729) + t5621*(t5596*t5598*t5651 + t5589*t5596*t5654 + t5733);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t5578*(-1.*t5578*t5649 + t5729) + t5621*(t5596*t5649 + t5733);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5628;
  p_output1[37]=t5604*t5682 - 1.*t5609*t5687;
  p_output1[38]=t5609*t5682 + t5604*t5687;
  p_output1[39]=t5603*(t5584*t5660*t5672 - 1.*t5582*t5660*t5676 + t5760) + t5584*t5660*(-1.*t5603*t5672 - 1.*t5612*t5676 + t5765);
  p_output1[40]=t5607*(t5660*t5670 + t5760) + t5632*(-1.*t5578*t5665 - 1.*t5601*t5670 + t5765);
  p_output1[41]=t5578*(-1.*t5589*t5651 + t5598*t5654);
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
  p_output1[52]=0.28121*t5470 + 0.305*Power(t5520,2) + t5470*t5646;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
