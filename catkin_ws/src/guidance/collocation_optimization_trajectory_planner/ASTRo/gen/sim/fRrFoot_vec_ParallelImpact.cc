/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:20 GMT+02:00
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
  double t11997;
  double t20599;
  double t20504;
  double t20619;
  double t20622;
  double t20614;
  double t20626;
  double t20587;
  double t20634;
  double t20635;
  double t20636;
  double t20601;
  double t20632;
  double t20644;
  double t20645;
  double t20646;
  double t20598;
  double t20607;
  double t20608;
  double t20697;
  double t20695;
  double t20620;
  double t20630;
  double t20631;
  double t20637;
  double t20638;
  double t20639;
  double t20684;
  double t20688;
  double t20689;
  double t20699;
  double t20700;
  double t20701;
  double t20706;
  double t20707;
  double t20708;
  double t20711;
  double t20712;
  double t20713;
  double t20718;
  double t20719;
  double t20720;
  double t20722;
  double t20723;
  double t20724;
  double t20633;
  double t20640;
  double t20641;
  double t20743;
  double t20744;
  double t20746;
  double t20749;
  double t20750;
  double t20751;
  double t20752;
  double t20753;
  double t20754;
  double t20755;
  double t20756;
  double t20757;
  double t20758;
  double t20759;
  double t20763;
  double t20764;
  double t20747;
  double t20748;
  double t20760;
  double t20761;
  double t20768;
  double t20769;
  double t20770;
  double t20771;
  double t20773;
  double t20774;
  double t20775;
  double t20762;
  double t20765;
  double t20766;
  double t20772;
  double t20776;
  double t20777;
  double t20779;
  double t20780;
  double t20781;
  double t20643;
  double t20690;
  double t20692;
  double t20767;
  double t20785;
  double t20792;
  double t20797;
  double t20804;
  double t20810;
  double t20837;
  double t20841;
  t11997 = Cos(var1[4]);
  t20599 = Cos(var1[15]);
  t20504 = Cos(var1[5]);
  t20619 = Cos(var1[17]);
  t20622 = Sin(var1[16]);
  t20614 = Cos(var1[16]);
  t20626 = Sin(var1[17]);
  t20587 = Sin(var1[15]);
  t20634 = -1.*t20619*t20622;
  t20635 = t20614*t20626;
  t20636 = t20634 + t20635;
  t20601 = Sin(var1[5]);
  t20632 = Sin(var1[4]);
  t20644 = -1.*t20614*t20619;
  t20645 = -1.*t20622*t20626;
  t20646 = t20644 + t20645;
  t20598 = t20504*t20587;
  t20607 = t20599*t20601;
  t20608 = t20598 + t20607;
  t20697 = Cos(var1[3]);
  t20695 = Sin(var1[3]);
  t20620 = t20614*t20619;
  t20630 = t20622*t20626;
  t20631 = t20620 + t20630;
  t20637 = t20599*t20504*t20636;
  t20638 = -1.*t20587*t20636*t20601;
  t20639 = t20637 + t20638;
  t20684 = t20599*t20504*t20646;
  t20688 = -1.*t20587*t20646*t20601;
  t20689 = t20684 + t20688;
  t20699 = -1.*t20599*t20504;
  t20700 = t20587*t20601;
  t20701 = t20699 + t20700;
  t20706 = t20504*t20587*t20636;
  t20707 = t20599*t20636*t20601;
  t20708 = t20706 + t20707;
  t20711 = t11997*t20631;
  t20712 = -1.*t20632*t20639;
  t20713 = t20711 + t20712;
  t20718 = t20504*t20587*t20646;
  t20719 = t20599*t20646*t20601;
  t20720 = t20718 + t20719;
  t20722 = t11997*t20636;
  t20723 = -1.*t20632*t20689;
  t20724 = t20722 + t20723;
  t20633 = t20631*t20632;
  t20640 = t11997*t20639;
  t20641 = t20633 + t20640;
  t20743 = -1.*t20599;
  t20744 = 1. + t20743;
  t20746 = -0.15121*t20744;
  t20749 = -1.*t20614;
  t20750 = 1. + t20749;
  t20751 = -0.28121*t20750;
  t20752 = -1.*t20619;
  t20753 = 1. + t20752;
  t20754 = -0.50321*t20753;
  t20755 = -0.19821*t20619;
  t20756 = t20754 + t20755;
  t20757 = t20614*t20756;
  t20758 = 0.305*t20622*t20626;
  t20759 = t20751 + t20757 + t20758;
  t20763 = t20599*t20759;
  t20764 = t20746 + t20763;
  t20747 = -0.15121*t20599;
  t20748 = 0.15121*t20587;
  t20760 = t20587*t20759;
  t20761 = t20746 + t20747 + t20748 + t20760;
  t20768 = 0.28121*t20622;
  t20769 = t20756*t20622;
  t20770 = -0.305*t20614*t20626;
  t20771 = t20768 + t20769 + t20770;
  t20773 = t20504*t20764;
  t20774 = -1.*t20761*t20601;
  t20775 = t20773 + t20774;
  t20762 = t20504*t20761;
  t20765 = t20764*t20601;
  t20766 = t20762 + t20765;
  t20772 = t20771*t20632;
  t20776 = t11997*t20775;
  t20777 = t20772 + t20776;
  t20779 = t11997*t20771;
  t20780 = -1.*t20632*t20775;
  t20781 = t20779 + t20780;
  t20643 = t20636*t20632;
  t20690 = t11997*t20689;
  t20692 = t20643 + t20690;
  t20767 = -1.*t20701*t20766;
  t20785 = t20708*t20766;
  t20792 = t20701*t20766;
  t20797 = -1.*t20720*t20766;
  t20804 = -1.*t20708*t20766;
  t20810 = t20720*t20766;
  t20837 = -1.*t20771*t20631;
  t20841 = t20771*t20636;
  p_output1[0]=t20692*var2[0] + t11997*t20608*var2[1] + t20641*var2[2];
  p_output1[1]=(t20697*t20720 - 1.*t20695*t20724)*var2[0] + (t20608*t20632*t20695 + t20697*t20701)*var2[1] + (t20697*t20708 - 1.*t20695*t20713)*var2[2];
  p_output1[2]=(t20695*t20720 + t20697*t20724)*var2[0] + (-1.*t20608*t20632*t20697 + t20695*t20701)*var2[1] + (t20695*t20708 + t20697*t20713)*var2[2];
  p_output1[3]=(t20641*(t20767 - 1.*t11997*t20608*t20777 + t20608*t20632*t20781) + t11997*t20608*(t20641*t20777 + t20713*t20781 + t20785))*var2[0] + (t20692*(-1.*t20641*t20777 - 1.*t20713*t20781 + t20804) + t20641*(t20692*t20777 + t20724*t20781 + t20810))*var2[1] + (t20692*(t11997*t20608*t20777 - 1.*t20608*t20632*t20781 + t20792) + t11997*t20608*(-1.*t20692*t20777 - 1.*t20724*t20781 + t20797))*var2[2];
  p_output1[4]=(t20708*(t20767 - 1.*t20608*t20775) + t20701*(t20631*t20771 + t20639*t20775 + t20785))*var2[0] + (t20720*(-1.*t20639*t20775 + t20804 + t20837) + t20708*(t20689*t20775 + t20810 + t20841))*var2[1] + (t20720*(t20608*t20775 + t20792) + t20701*(-1.*t20636*t20771 - 1.*t20689*t20775 + t20797))*var2[2];
  p_output1[5]=t20631*(t20599*t20761 - 1.*t20587*t20764)*var2[0] + (t20636*(-1.*t20587*t20636*t20761 - 1.*t20599*t20636*t20764 + t20837) + t20631*(t20587*t20646*t20761 + t20599*t20646*t20764 + t20841))*var2[1] + t20636*(-1.*t20599*t20761 + t20587*t20764)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t20631 - 0.15121*t20646)*var2[0] + (-0.15121 + t20636*(-1.*t20636*t20759 + t20837) + t20631*(t20646*t20759 + t20841))*var2[1];
  p_output1[16]=(0.28121*t20626 - 0.305*t20619*t20626 + t20626*t20756)*var2[0] + (0.28121*t20619 + 0.305*Power(t20626,2) + t20619*t20756)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
