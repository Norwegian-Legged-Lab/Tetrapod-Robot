/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:21 GMT+02:00
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
  double t3475;
  double t3467;
  double t3471;
  double t3476;
  double t3472;
  double t3866;
  double t4823;
  double t5055;
  double t5107;
  double t5058;
  double t5063;
  double t5068;
  double t5108;
  double t3408;
  double t5033;
  double t4909;
  double t5069;
  double t5159;
  double t5160;
  double t5484;
  double t5338;
  double t5441;
  double t5477;
  double t5239;
  double t5485;
  double t5488;
  double t5490;
  double t5846;
  double t5854;
  double t5855;
  double t5862;
  double t5865;
  double t5878;
  double t5882;
  double t5894;
  double t5895;
  double t5845;
  double t5858;
  double t6561;
  double t6568;
  double t6608;
  double t6609;
  double t6611;
  double t6617;
  double t6618;
  double t6619;
  double t5707;
  double t5708;
  double t5714;
  double t5832;
  double t6587;
  double t6588;
  double t6632;
  double t6633;
  double t6634;
  double t6640;
  double t6642;
  double t6643;
  double t6629;
  double t6630;
  double t6631;
  double t6603;
  double t6621;
  double t6623;
  double t5678;
  double t5679;
  double t5683;
  double t6639;
  double t6648;
  double t6649;
  double t5674;
  double t5689;
  double t5690;
  double t5699;
  double t5703;
  double t5704;
  double t6669;
  double t6670;
  double t6672;
  double t6690;
  double t6694;
  double t6697;
  double t6628;
  double t6698;
  double t6722;
  double t6737;
  double t6651;
  double t6652;
  double t6654;
  double t4999;
  double t5192;
  double t5217;
  double t6709;
  double t6713;
  double t6714;
  double t6780;
  double t6785;
  double t6804;
  double t6794;
  double t6818;
  double t6812;
  double t6838;
  double t6854;
  double t6873;
  double t6887;
  t3475 = Cos(var1[16]);
  t3467 = Cos(var1[17]);
  t3471 = Sin(var1[16]);
  t3476 = Sin(var1[17]);
  t3472 = t3467*t3471;
  t3866 = -1.*t3475*t3476;
  t4823 = t3472 + t3866;
  t5055 = Cos(var1[5]);
  t5107 = Sin(var1[15]);
  t5058 = t3475*t3467;
  t5063 = t3471*t3476;
  t5068 = t5058 + t5063;
  t5108 = Sin(var1[5]);
  t3408 = Cos(var1[15]);
  t5033 = Cos(var1[4]);
  t4909 = Sin(var1[4]);
  t5069 = t5055*t5068;
  t5159 = t5107*t4823*t5108;
  t5160 = t5069 + t5159;
  t5484 = Sin(var1[3]);
  t5338 = -1.*t5055*t5107*t4823;
  t5441 = t5068*t5108;
  t5477 = t5338 + t5441;
  t5239 = Cos(var1[3]);
  t5485 = t3408*t5033*t4823;
  t5488 = -1.*t4909*t5160;
  t5490 = t5485 + t5488;
  t5846 = -0.0641*t3467;
  t5854 = -0.28*t3476;
  t5855 = t5846 + t5854;
  t5862 = -1.*t3467;
  t5865 = 1. + t5862;
  t5878 = -0.575*t5865;
  t5882 = -0.295*t3467;
  t5894 = -0.0641*t3476;
  t5895 = t5878 + t5882 + t5894;
  t5845 = 0.325*t3471;
  t5858 = t3475*t5855;
  t6561 = t3471*t5895;
  t6568 = t5845 + t5858 + t6561;
  t6608 = -1.*t3475;
  t6609 = 1. + t6608;
  t6611 = -0.325*t6609;
  t6617 = -1.*t3471*t5855;
  t6618 = t3475*t5895;
  t6619 = t6611 + t6617 + t6618;
  t5707 = -1.*t3408;
  t5708 = 1. + t5707;
  t5714 = -0.1575*t5708;
  t5832 = -0.2255*t3408;
  t6587 = -1.*t5107*t6568;
  t6588 = t5714 + t5832 + t6587;
  t6632 = -0.068*t5107;
  t6633 = t3408*t6568;
  t6634 = t6632 + t6633;
  t6640 = t5055*t6619;
  t6642 = -1.*t6588*t5108;
  t6643 = t6640 + t6642;
  t6629 = t5107*t4909;
  t6630 = -1.*t3408*t5033*t5108;
  t6631 = t6629 + t6630;
  t6603 = t5055*t6588;
  t6621 = t6619*t5108;
  t6623 = t6603 + t6621;
  t5678 = -1.*t3467*t3471;
  t5679 = t3475*t3476;
  t5683 = t5678 + t5679;
  t6639 = t6634*t4909;
  t6648 = t5033*t6643;
  t6649 = t6639 + t6648;
  t5674 = t3408*t5068*t4909;
  t5689 = t5055*t5683;
  t5690 = t5107*t5068*t5108;
  t5699 = t5689 + t5690;
  t5703 = t5033*t5699;
  t5704 = t5674 + t5703;
  t6669 = t5033*t6634;
  t6670 = -1.*t4909*t6643;
  t6672 = t6669 + t6670;
  t6690 = -1.*t5055*t5107*t5068;
  t6694 = t5683*t5108;
  t6697 = t6690 + t6694;
  t6628 = -1.*t3408*t5055*t6623;
  t6698 = t6623*t6697;
  t6722 = -1.*t5107*t6634;
  t6737 = t3408*t6634*t5068;
  t6651 = t5033*t5107;
  t6652 = t3408*t4909*t5108;
  t6654 = t6651 + t6652;
  t4999 = t3408*t4823*t4909;
  t5192 = t5033*t5160;
  t5217 = t4999 + t5192;
  t6709 = t3408*t5033*t5068;
  t6713 = -1.*t4909*t5699;
  t6714 = t6709 + t6713;
  t6780 = t6623*t5477;
  t6785 = -1.*t6623*t6697;
  t6804 = -1.*t3408*t6634*t5068;
  t6794 = t3408*t6634*t4823;
  t6818 = t6619*t5068;
  t6812 = -1.*t6619*t5683;
  t6838 = t3408*t5055*t6623;
  t6854 = -1.*t6623*t5477;
  t6873 = t5107*t6634;
  t6887 = -1.*t3408*t6634*t4823;
  p_output1[0]=t5217;
  p_output1[1]=t5239*t5477 - 1.*t5484*t5490;
  p_output1[2]=t5477*t5484 + t5239*t5490;
  p_output1[3]=t5704*(t6628 - 1.*t6631*t6649 - 1.*t6654*t6672) + t6631*(t5704*t6649 + t6698 + t6672*t6714);
  p_output1[4]=t6697*(t6628 + t3408*t5108*t6643 + t6722) + t3408*t5055*(t5699*t6643 + t6698 + t6737);
  p_output1[5]=t3408*t5068*(-1.*t3408*t6588 + t6722) + t5107*(-1.*t5068*t5107*t6588 + t5683*t6619 + t6737);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t4823 + 0.2255*t5683;
  p_output1[16]=-0.325*t3476 - 1.*t3467*t5855 - 1.*t3476*t5895;
  p_output1[17]=-0.0641;
  p_output1[18]=t6631;
  p_output1[19]=t3408*t5055*t5239 - 1.*t5484*t6654;
  p_output1[20]=t3408*t5055*t5484 + t5239*t6654;
  p_output1[21]=t5704*(t5217*t6649 + t5490*t6672 + t6780) + t5217*(-1.*t5704*t6649 - 1.*t6672*t6714 + t6785);
  p_output1[22]=t6697*(t5160*t6643 + t6780 + t6794) + t5477*(-1.*t5699*t6643 + t6785 + t6804);
  p_output1[23]=t3408*t4823*(t5068*t5107*t6588 + t6804 + t6812) + t3408*t5068*(-1.*t4823*t5107*t6588 + t6794 + t6818);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t5068*(-1.*t5068*t6568 + t6812) + t5683*(t4823*t6568 + t6818);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5704;
  p_output1[37]=t5239*t6697 - 1.*t5484*t6714;
  p_output1[38]=t5484*t6697 + t5239*t6714;
  p_output1[39]=t5217*(t6631*t6649 + t6654*t6672 + t6838) + t6631*(-1.*t5217*t6649 - 1.*t5490*t6672 + t6854);
  p_output1[40]=t5477*(-1.*t3408*t5108*t6643 + t6838 + t6873) + t3408*t5055*(-1.*t5160*t6643 + t6854 + t6887);
  p_output1[41]=t3408*t4823*(t3408*t6588 + t6873) + t5107*(t4823*t5107*t6588 - 1.*t5068*t6619 + t6887);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t5068;
  p_output1[52]=0.325*t3467 - 1.*t3476*t5855 + t3467*t5895;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
