/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:59 GMT+02:00
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
  double t9364;
  double t7696;
  double t9408;
  double t9594;
  double t9571;
  double t9583;
  double t9595;
  double t4903;
  double t9591;
  double t9610;
  double t9638;
  double t9414;
  double t9648;
  double t9654;
  double t9684;
  double t9647;
  double t22596;
  double t22598;
  double t9691;
  double t9727;
  double t9732;
  double t9768;
  double t9790;
  double t9794;
  double t9848;
  double t10677;
  double t11775;
  double t22599;
  double t22603;
  double t22615;
  double t22624;
  double t22626;
  double t22628;
  double t22630;
  double t22635;
  double t22639;
  double t22659;
  double t22667;
  double t22668;
  double t22670;
  double t22671;
  double t22672;
  double t9646;
  double t9734;
  double t9759;
  double t22738;
  double t22739;
  double t22742;
  double t22747;
  double t22751;
  double t22755;
  double t22759;
  double t22763;
  double t22764;
  double t8890;
  double t9432;
  double t9505;
  double t22735;
  double t22743;
  double t22765;
  double t22766;
  double t22773;
  double t22774;
  double t22775;
  double t22776;
  double t22777;
  double t22778;
  double t22724;
  double t22725;
  double t22726;
  double t22734;
  double t22770;
  double t22771;
  double t22791;
  double t22793;
  double t22800;
  double t22802;
  double t22804;
  double t22806;
  double t22772;
  double t22779;
  double t22783;
  double t22801;
  double t22807;
  double t22810;
  double t22814;
  double t22815;
  double t22816;
  double t9764;
  double t22578;
  double t22587;
  double t22784;
  double t22822;
  double t22830;
  double t22838;
  double t22848;
  double t22856;
  double t22903;
  double t22930;
  double t22866;
  double t22873;
  double t22897;
  double t22893;
  double t23020;
  double t23011;
  t9364 = Cos(var1[15]);
  t7696 = Sin(var1[4]);
  t9408 = Cos(var1[4]);
  t9594 = Cos(var1[16]);
  t9571 = Cos(var1[17]);
  t9583 = Sin(var1[16]);
  t9595 = Sin(var1[17]);
  t4903 = Sin(var1[15]);
  t9591 = t9571*t9583;
  t9610 = -1.*t9594*t9595;
  t9638 = t9591 + t9610;
  t9414 = Sin(var1[5]);
  t9648 = t9594*t9571;
  t9654 = t9583*t9595;
  t9684 = t9648 + t9654;
  t9647 = Cos(var1[5]);
  t22596 = Cos(var1[3]);
  t22598 = Sin(var1[3]);
  t9691 = t9647*t9684;
  t9727 = t4903*t9638*t9414;
  t9732 = t9691 + t9727;
  t9768 = -1.*t9571*t9583;
  t9790 = t9594*t9595;
  t9794 = t9768 + t9790;
  t9848 = t9647*t9794;
  t10677 = t4903*t9684*t9414;
  t11775 = t9848 + t10677;
  t22599 = t9408*t4903;
  t22603 = t9364*t7696*t9414;
  t22615 = t22599 + t22603;
  t22624 = -1.*t9647*t4903*t9638;
  t22626 = t9684*t9414;
  t22628 = t22624 + t22626;
  t22630 = t9364*t9408*t9638;
  t22635 = -1.*t7696*t9732;
  t22639 = t22630 + t22635;
  t22659 = -1.*t9647*t4903*t9684;
  t22667 = t9794*t9414;
  t22668 = t22659 + t22667;
  t22670 = t9364*t9408*t9684;
  t22671 = -1.*t7696*t11775;
  t22672 = t22670 + t22671;
  t9646 = t9364*t9638*t7696;
  t9734 = t9408*t9732;
  t9759 = t9646 + t9734;
  t22738 = -0.0641*t9571;
  t22739 = -0.28*t9595;
  t22742 = t22738 + t22739;
  t22747 = -1.*t9571;
  t22751 = 1. + t22747;
  t22755 = -0.575*t22751;
  t22759 = -0.295*t9571;
  t22763 = -0.0641*t9595;
  t22764 = t22755 + t22759 + t22763;
  t8890 = t4903*t7696;
  t9432 = -1.*t9364*t9408*t9414;
  t9505 = t8890 + t9432;
  t22735 = 0.325*t9583;
  t22743 = t9594*t22742;
  t22765 = t9583*t22764;
  t22766 = t22735 + t22743 + t22765;
  t22773 = -1.*t9594;
  t22774 = 1. + t22773;
  t22775 = -0.325*t22774;
  t22776 = -1.*t9583*t22742;
  t22777 = t9594*t22764;
  t22778 = t22775 + t22776 + t22777;
  t22724 = -1.*t9364;
  t22725 = 1. + t22724;
  t22726 = -0.1575*t22725;
  t22734 = -0.2255*t9364;
  t22770 = -1.*t4903*t22766;
  t22771 = t22726 + t22734 + t22770;
  t22791 = -0.068*t4903;
  t22793 = t9364*t22766;
  t22800 = t22791 + t22793;
  t22802 = t9647*t22778;
  t22804 = -1.*t22771*t9414;
  t22806 = t22802 + t22804;
  t22772 = t9647*t22771;
  t22779 = t22778*t9414;
  t22783 = t22772 + t22779;
  t22801 = t22800*t7696;
  t22807 = t9408*t22806;
  t22810 = t22801 + t22807;
  t22814 = t9408*t22800;
  t22815 = -1.*t7696*t22806;
  t22816 = t22814 + t22815;
  t9764 = t9364*t9684*t7696;
  t22578 = t9408*t11775;
  t22587 = t9764 + t22578;
  t22784 = t9364*t9647*t22783;
  t22822 = -1.*t22783*t22628;
  t22830 = t22783*t22628;
  t22838 = -1.*t22783*t22668;
  t22848 = -1.*t9364*t9647*t22783;
  t22856 = t22783*t22668;
  t22903 = -1.*t4903*t22800;
  t22930 = t9364*t22800*t9684;
  t22866 = t4903*t22800;
  t22873 = -1.*t9364*t22800*t9638;
  t22897 = -1.*t9364*t22800*t9684;
  t22893 = t9364*t22800*t9638;
  t23020 = t22778*t9684;
  t23011 = -1.*t22778*t9794;
  p_output1[0]=t9759*var2[0] + t9505*var2[1] + t22587*var2[2];
  p_output1[1]=(t22596*t22628 - 1.*t22598*t22639)*var2[0] + (-1.*t22598*t22615 + t22596*t9364*t9647)*var2[1] + (t22596*t22668 - 1.*t22598*t22672)*var2[2];
  p_output1[2]=(t22598*t22628 + t22596*t22639)*var2[0] + (t22596*t22615 + t22598*t9364*t9647)*var2[1] + (t22598*t22668 + t22596*t22672)*var2[2];
  p_output1[3]=((t22587*t22810 + t22672*t22816 + t22856)*t9505 + t22587*(-1.*t22615*t22816 + t22848 - 1.*t22810*t9505))*var2[0] + ((-1.*t22587*t22810 - 1.*t22672*t22816 + t22838)*t9759 + t22587*(t22639*t22816 + t22830 + t22810*t9759))*var2[1] + ((t22784 + t22615*t22816 + t22810*t9505)*t9759 + t9505*(-1.*t22639*t22816 + t22822 - 1.*t22810*t9759))*var2[2];
  p_output1[4]=(t22668*(t22848 + t22903 + t22806*t9364*t9414) + (t11775*t22806 + t22856 + t22930)*t9364*t9647)*var2[0] + (t22628*(-1.*t11775*t22806 + t22838 + t22897) + t22668*(t22830 + t22893 + t22806*t9732))*var2[1] + (t22628*(t22784 + t22866 - 1.*t22806*t9364*t9414) + t9364*t9647*(t22822 + t22873 - 1.*t22806*t9732))*var2[2];
  p_output1[5]=(t9364*(t22903 - 1.*t22771*t9364)*t9684 + t4903*(t22930 - 1.*t22771*t4903*t9684 + t22778*t9794))*var2[0] + (t9364*(t22893 + t23020 - 1.*t22771*t4903*t9638)*t9684 + t9364*t9638*(t22897 + t23011 + t22771*t4903*t9684))*var2[1] + (t9364*(t22866 + t22771*t9364)*t9638 + t4903*(t22873 + t22771*t4903*t9638 - 1.*t22778*t9684))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t9638 + 0.2255*t9794)*var2[0] + (t9684*(t23011 - 1.*t22766*t9684) + (t23020 + t22766*t9638)*t9794)*var2[1] - 0.068*t9684*var2[2];
  p_output1[16]=(-1.*t22742*t9571 - 0.325*t9595 - 1.*t22764*t9595)*var2[0] + (0.325*t9571 + t22764*t9571 - 1.*t22742*t9595)*var2[2];
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
