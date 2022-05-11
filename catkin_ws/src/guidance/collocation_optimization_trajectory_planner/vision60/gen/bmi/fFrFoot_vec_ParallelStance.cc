/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:07 GMT+02:00
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
  double t5436;
  double t5425;
  double t5437;
  double t5569;
  double t5559;
  double t5560;
  double t5570;
  double t2650;
  double t5565;
  double t5571;
  double t5572;
  double t5439;
  double t5576;
  double t5580;
  double t5581;
  double t5575;
  double t5605;
  double t5607;
  double t5583;
  double t5585;
  double t5586;
  double t5595;
  double t5596;
  double t5597;
  double t5598;
  double t5599;
  double t5600;
  double t5608;
  double t5610;
  double t5611;
  double t5619;
  double t5621;
  double t5622;
  double t5624;
  double t5625;
  double t5627;
  double t5632;
  double t5633;
  double t5634;
  double t5637;
  double t5638;
  double t5639;
  double t5574;
  double t5587;
  double t5589;
  double t5692;
  double t5694;
  double t5695;
  double t5698;
  double t5702;
  double t5710;
  double t5711;
  double t5712;
  double t5713;
  double t5434;
  double t5444;
  double t5545;
  double t5687;
  double t5697;
  double t5717;
  double t5718;
  double t5722;
  double t5723;
  double t5724;
  double t5725;
  double t5726;
  double t5728;
  double t5672;
  double t5676;
  double t5677;
  double t5686;
  double t5719;
  double t5720;
  double t5736;
  double t5738;
  double t5739;
  double t5741;
  double t5744;
  double t5745;
  double t5721;
  double t5732;
  double t5733;
  double t5740;
  double t5746;
  double t5747;
  double t5751;
  double t5752;
  double t5753;
  double t5592;
  double t5601;
  double t5602;
  double t5734;
  double t5757;
  double t5767;
  double t5772;
  double t5779;
  double t5784;
  double t5815;
  double t5819;
  double t5793;
  double t5797;
  double t5807;
  double t5803;
  double t5870;
  double t5853;
  t5436 = Cos(var1[12]);
  t5425 = Sin(var1[4]);
  t5437 = Cos(var1[4]);
  t5569 = Cos(var1[13]);
  t5559 = Cos(var1[14]);
  t5560 = Sin(var1[13]);
  t5570 = Sin(var1[14]);
  t2650 = Sin(var1[12]);
  t5565 = t5559*t5560;
  t5571 = -1.*t5569*t5570;
  t5572 = t5565 + t5571;
  t5439 = Sin(var1[5]);
  t5576 = t5569*t5559;
  t5580 = t5560*t5570;
  t5581 = t5576 + t5580;
  t5575 = Cos(var1[5]);
  t5605 = Cos(var1[3]);
  t5607 = Sin(var1[3]);
  t5583 = t5575*t5581;
  t5585 = t2650*t5572*t5439;
  t5586 = t5583 + t5585;
  t5595 = -1.*t5559*t5560;
  t5596 = t5569*t5570;
  t5597 = t5595 + t5596;
  t5598 = t5575*t5597;
  t5599 = t2650*t5581*t5439;
  t5600 = t5598 + t5599;
  t5608 = t5437*t2650;
  t5610 = t5436*t5425*t5439;
  t5611 = t5608 + t5610;
  t5619 = -1.*t5575*t2650*t5572;
  t5621 = t5581*t5439;
  t5622 = t5619 + t5621;
  t5624 = t5436*t5437*t5572;
  t5625 = -1.*t5425*t5586;
  t5627 = t5624 + t5625;
  t5632 = -1.*t5575*t2650*t5581;
  t5633 = t5597*t5439;
  t5634 = t5632 + t5633;
  t5637 = t5436*t5437*t5581;
  t5638 = -1.*t5425*t5600;
  t5639 = t5637 + t5638;
  t5574 = t5436*t5572*t5425;
  t5587 = t5437*t5586;
  t5589 = t5574 + t5587;
  t5692 = -0.0641*t5559;
  t5694 = -0.28*t5570;
  t5695 = t5692 + t5694;
  t5698 = -1.*t5559;
  t5702 = 1. + t5698;
  t5710 = 0.075*t5702;
  t5711 = 0.355*t5559;
  t5712 = -0.0641*t5570;
  t5713 = t5710 + t5711 + t5712;
  t5434 = t2650*t5425;
  t5444 = -1.*t5436*t5437*t5439;
  t5545 = t5434 + t5444;
  t5687 = -0.325*t5560;
  t5697 = t5569*t5695;
  t5717 = t5560*t5713;
  t5718 = t5687 + t5697 + t5717;
  t5722 = -1.*t5569;
  t5723 = 1. + t5722;
  t5724 = 0.325*t5723;
  t5725 = -1.*t5560*t5695;
  t5726 = t5569*t5713;
  t5728 = t5724 + t5725 + t5726;
  t5672 = -1.*t5436;
  t5676 = 1. + t5672;
  t5677 = -0.1575*t5676;
  t5686 = -0.2255*t5436;
  t5719 = -1.*t2650*t5718;
  t5720 = t5677 + t5686 + t5719;
  t5736 = -0.068*t2650;
  t5738 = t5436*t5718;
  t5739 = t5736 + t5738;
  t5741 = t5575*t5728;
  t5744 = -1.*t5720*t5439;
  t5745 = t5741 + t5744;
  t5721 = t5575*t5720;
  t5732 = t5728*t5439;
  t5733 = t5721 + t5732;
  t5740 = t5739*t5425;
  t5746 = t5437*t5745;
  t5747 = t5740 + t5746;
  t5751 = t5437*t5739;
  t5752 = -1.*t5425*t5745;
  t5753 = t5751 + t5752;
  t5592 = t5436*t5581*t5425;
  t5601 = t5437*t5600;
  t5602 = t5592 + t5601;
  t5734 = t5436*t5575*t5733;
  t5757 = -1.*t5733*t5622;
  t5767 = t5733*t5622;
  t5772 = -1.*t5733*t5634;
  t5779 = -1.*t5436*t5575*t5733;
  t5784 = t5733*t5634;
  t5815 = -1.*t2650*t5739;
  t5819 = t5436*t5739*t5581;
  t5793 = t2650*t5739;
  t5797 = -1.*t5436*t5739*t5572;
  t5807 = -1.*t5436*t5739*t5581;
  t5803 = t5436*t5739*t5572;
  t5870 = t5728*t5581;
  t5853 = -1.*t5728*t5597;
  p_output1[0]=t5589*var2[0] + t5545*var2[1] + t5602*var2[2];
  p_output1[1]=(t5605*t5622 - 1.*t5607*t5627)*var2[0] + (t5436*t5575*t5605 - 1.*t5607*t5611)*var2[1] + (t5605*t5634 - 1.*t5607*t5639)*var2[2];
  p_output1[2]=(t5607*t5622 + t5605*t5627)*var2[0] + (t5436*t5575*t5607 + t5605*t5611)*var2[1] + (t5607*t5634 + t5605*t5639)*var2[2];
  p_output1[3]=(t5602*(-1.*t5545*t5747 - 1.*t5611*t5753 + t5779) + t5545*(t5602*t5747 + t5639*t5753 + t5784))*var2[0] + (t5602*(t5589*t5747 + t5627*t5753 + t5767) + t5589*(-1.*t5602*t5747 - 1.*t5639*t5753 + t5772))*var2[1] + (t5589*(t5734 + t5545*t5747 + t5611*t5753) + t5545*(-1.*t5589*t5747 - 1.*t5627*t5753 + t5757))*var2[2];
  p_output1[4]=(t5634*(t5436*t5439*t5745 + t5779 + t5815) + t5436*t5575*(t5600*t5745 + t5784 + t5819))*var2[0] + (t5634*(t5586*t5745 + t5767 + t5803) + t5622*(-1.*t5600*t5745 + t5772 + t5807))*var2[1] + (t5622*(t5734 - 1.*t5436*t5439*t5745 + t5793) + t5436*t5575*(-1.*t5586*t5745 + t5757 + t5797))*var2[2];
  p_output1[5]=(t5436*t5581*(-1.*t5436*t5720 + t5815) + t2650*(-1.*t2650*t5581*t5720 + t5597*t5728 + t5819))*var2[0] + (t5436*t5572*(t2650*t5581*t5720 + t5807 + t5853) + t5436*t5581*(-1.*t2650*t5572*t5720 + t5803 + t5870))*var2[1] + (t5436*t5572*(t5436*t5720 + t5793) + t2650*(t2650*t5572*t5720 - 1.*t5581*t5728 + t5797))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t5572 + 0.2255*t5597)*var2[0] + (t5581*(-1.*t5581*t5718 + t5853) + t5597*(t5572*t5718 + t5870))*var2[1] - 0.068*t5581*var2[2];
  p_output1[13]=(0.325*t5570 - 1.*t5559*t5695 - 1.*t5570*t5713)*var2[0] + (-0.325*t5559 - 1.*t5570*t5695 + t5559*t5713)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
