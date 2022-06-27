/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:13 GMT+02:00
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
  double t5604;
  double t5591;
  double t5606;
  double t5636;
  double t5628;
  double t5629;
  double t5644;
  double t5558;
  double t5631;
  double t5645;
  double t5646;
  double t5614;
  double t5650;
  double t5655;
  double t5656;
  double t5648;
  double t5763;
  double t5768;
  double t5662;
  double t5663;
  double t5664;
  double t5669;
  double t5671;
  double t5748;
  double t5754;
  double t5755;
  double t5756;
  double t5769;
  double t5770;
  double t5771;
  double t5776;
  double t5777;
  double t5778;
  double t5781;
  double t5782;
  double t5783;
  double t5788;
  double t5790;
  double t5791;
  double t5794;
  double t5795;
  double t5796;
  double t5647;
  double t5665;
  double t5666;
  double t5826;
  double t5827;
  double t5828;
  double t5830;
  double t5834;
  double t5835;
  double t5836;
  double t5837;
  double t5838;
  double t5603;
  double t5615;
  double t5617;
  double t5825;
  double t5829;
  double t5839;
  double t5840;
  double t5850;
  double t5851;
  double t5852;
  double t5860;
  double t5864;
  double t5868;
  double t5821;
  double t5822;
  double t5823;
  double t5824;
  double t5841;
  double t5844;
  double t5873;
  double t5874;
  double t5875;
  double t5880;
  double t5885;
  double t5886;
  double t5849;
  double t5869;
  double t5871;
  double t5876;
  double t5888;
  double t5889;
  double t5891;
  double t5892;
  double t5893;
  double t5668;
  double t5758;
  double t5759;
  double t5872;
  double t5903;
  double t5910;
  double t5917;
  double t5928;
  double t5933;
  double t5964;
  double t5968;
  double t5942;
  double t5947;
  double t5958;
  double t5954;
  double t6003;
  double t5996;
  t5604 = Cos(var1[15]);
  t5591 = Sin(var1[4]);
  t5606 = Cos(var1[4]);
  t5636 = Cos(var1[16]);
  t5628 = Cos(var1[17]);
  t5629 = Sin(var1[16]);
  t5644 = Sin(var1[17]);
  t5558 = Sin(var1[15]);
  t5631 = t5628*t5629;
  t5645 = -1.*t5636*t5644;
  t5646 = t5631 + t5645;
  t5614 = Sin(var1[5]);
  t5650 = t5636*t5628;
  t5655 = t5629*t5644;
  t5656 = t5650 + t5655;
  t5648 = Cos(var1[5]);
  t5763 = Cos(var1[3]);
  t5768 = Sin(var1[3]);
  t5662 = t5648*t5656;
  t5663 = t5558*t5646*t5614;
  t5664 = t5662 + t5663;
  t5669 = -1.*t5628*t5629;
  t5671 = t5636*t5644;
  t5748 = t5669 + t5671;
  t5754 = t5648*t5748;
  t5755 = t5558*t5656*t5614;
  t5756 = t5754 + t5755;
  t5769 = t5606*t5558;
  t5770 = t5604*t5591*t5614;
  t5771 = t5769 + t5770;
  t5776 = -1.*t5648*t5558*t5646;
  t5777 = t5656*t5614;
  t5778 = t5776 + t5777;
  t5781 = t5604*t5606*t5646;
  t5782 = -1.*t5591*t5664;
  t5783 = t5781 + t5782;
  t5788 = -1.*t5648*t5558*t5656;
  t5790 = t5748*t5614;
  t5791 = t5788 + t5790;
  t5794 = t5604*t5606*t5656;
  t5795 = -1.*t5591*t5756;
  t5796 = t5794 + t5795;
  t5647 = t5604*t5646*t5591;
  t5665 = t5606*t5664;
  t5666 = t5647 + t5665;
  t5826 = -0.0641*t5628;
  t5827 = -0.28*t5644;
  t5828 = t5826 + t5827;
  t5830 = -1.*t5628;
  t5834 = 1. + t5830;
  t5835 = -0.575*t5834;
  t5836 = -0.295*t5628;
  t5837 = -0.0641*t5644;
  t5838 = t5835 + t5836 + t5837;
  t5603 = t5558*t5591;
  t5615 = -1.*t5604*t5606*t5614;
  t5617 = t5603 + t5615;
  t5825 = 0.325*t5629;
  t5829 = t5636*t5828;
  t5839 = t5629*t5838;
  t5840 = t5825 + t5829 + t5839;
  t5850 = -1.*t5636;
  t5851 = 1. + t5850;
  t5852 = -0.325*t5851;
  t5860 = -1.*t5629*t5828;
  t5864 = t5636*t5838;
  t5868 = t5852 + t5860 + t5864;
  t5821 = -1.*t5604;
  t5822 = 1. + t5821;
  t5823 = -0.1575*t5822;
  t5824 = -0.2255*t5604;
  t5841 = -1.*t5558*t5840;
  t5844 = t5823 + t5824 + t5841;
  t5873 = -0.068*t5558;
  t5874 = t5604*t5840;
  t5875 = t5873 + t5874;
  t5880 = t5648*t5868;
  t5885 = -1.*t5844*t5614;
  t5886 = t5880 + t5885;
  t5849 = t5648*t5844;
  t5869 = t5868*t5614;
  t5871 = t5849 + t5869;
  t5876 = t5875*t5591;
  t5888 = t5606*t5886;
  t5889 = t5876 + t5888;
  t5891 = t5606*t5875;
  t5892 = -1.*t5591*t5886;
  t5893 = t5891 + t5892;
  t5668 = t5604*t5656*t5591;
  t5758 = t5606*t5756;
  t5759 = t5668 + t5758;
  t5872 = t5604*t5648*t5871;
  t5903 = -1.*t5871*t5778;
  t5910 = t5871*t5778;
  t5917 = -1.*t5871*t5791;
  t5928 = -1.*t5604*t5648*t5871;
  t5933 = t5871*t5791;
  t5964 = -1.*t5558*t5875;
  t5968 = t5604*t5875*t5656;
  t5942 = t5558*t5875;
  t5947 = -1.*t5604*t5875*t5646;
  t5958 = -1.*t5604*t5875*t5656;
  t5954 = t5604*t5875*t5646;
  t6003 = t5868*t5656;
  t5996 = -1.*t5868*t5748;
  p_output1[0]=t5666*var2[0] + t5617*var2[1] + t5759*var2[2];
  p_output1[1]=(t5763*t5778 - 1.*t5768*t5783)*var2[0] + (t5604*t5648*t5763 - 1.*t5768*t5771)*var2[1] + (t5763*t5791 - 1.*t5768*t5796)*var2[2];
  p_output1[2]=(t5768*t5778 + t5763*t5783)*var2[0] + (t5604*t5648*t5768 + t5763*t5771)*var2[1] + (t5768*t5791 + t5763*t5796)*var2[2];
  p_output1[3]=(t5759*(-1.*t5617*t5889 - 1.*t5771*t5893 + t5928) + t5617*(t5759*t5889 + t5796*t5893 + t5933))*var2[0] + (t5759*(t5666*t5889 + t5783*t5893 + t5910) + t5666*(-1.*t5759*t5889 - 1.*t5796*t5893 + t5917))*var2[1] + (t5666*(t5872 + t5617*t5889 + t5771*t5893) + t5617*(-1.*t5666*t5889 - 1.*t5783*t5893 + t5903))*var2[2];
  p_output1[4]=(t5791*(t5604*t5614*t5886 + t5928 + t5964) + t5604*t5648*(t5756*t5886 + t5933 + t5968))*var2[0] + (t5791*(t5664*t5886 + t5910 + t5954) + t5778*(-1.*t5756*t5886 + t5917 + t5958))*var2[1] + (t5778*(t5872 - 1.*t5604*t5614*t5886 + t5942) + t5604*t5648*(-1.*t5664*t5886 + t5903 + t5947))*var2[2];
  p_output1[5]=(t5604*t5656*(-1.*t5604*t5844 + t5964) + t5558*(-1.*t5558*t5656*t5844 + t5748*t5868 + t5968))*var2[0] + (t5604*t5646*(t5558*t5656*t5844 + t5958 + t5996) + t5604*t5656*(-1.*t5558*t5646*t5844 + t5954 + t6003))*var2[1] + (t5604*t5646*(t5604*t5844 + t5942) + t5558*(t5558*t5646*t5844 - 1.*t5656*t5868 + t5947))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t5646 + 0.2255*t5748)*var2[0] + (t5656*(-1.*t5656*t5840 + t5996) + t5748*(t5646*t5840 + t6003))*var2[1] - 0.068*t5656*var2[2];
  p_output1[16]=(-0.325*t5644 - 1.*t5628*t5828 - 1.*t5644*t5838)*var2[0] + (0.325*t5628 - 1.*t5644*t5828 + t5628*t5838)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
