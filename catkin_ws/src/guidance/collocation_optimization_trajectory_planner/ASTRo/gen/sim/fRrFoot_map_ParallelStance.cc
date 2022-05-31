/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:56 GMT+02:00
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
  double t14268;
  double t3626;
  double t5827;
  double t17065;
  double t30373;
  double t30454;
  double t31048;
  double t30354;
  double t31997;
  double t30254;
  double t32951;
  double t30243;
  double t9325;
  double t28146;
  double t28977;
  double t29571;
  double t31228;
  double t32966;
  double t33002;
  double t33431;
  double t33423;
  double t33426;
  double t33428;
  double t33409;
  double t33437;
  double t33452;
  double t33472;
  double t56629;
  double t56631;
  double t56632;
  double t56635;
  double t56636;
  double t56637;
  double t56638;
  double t56639;
  double t56641;
  double t56643;
  double t56645;
  double t56647;
  double t56648;
  double t56649;
  double t56654;
  double t56655;
  double t56633;
  double t56634;
  double t56650;
  double t56651;
  double t56660;
  double t56661;
  double t56664;
  double t56665;
  double t56666;
  double t56667;
  double t56670;
  double t56672;
  double t56673;
  double t56674;
  double t56653;
  double t56656;
  double t56657;
  double t56482;
  double t56493;
  double t56496;
  double t56497;
  double t56498;
  double t56499;
  double t56609;
  double t56614;
  double t56615;
  double t56671;
  double t56676;
  double t56677;
  double t56698;
  double t56702;
  double t56708;
  double t56712;
  double t56713;
  double t56714;
  double t56616;
  double t56622;
  double t56628;
  double t56659;
  double t56729;
  double t29614;
  double t33017;
  double t33102;
  double t56732;
  double t56733;
  double t56737;
  double t56791;
  double t56801;
  double t56813;
  double t56821;
  double t56857;
  double t56863;
  t14268 = Cos(var1[16]);
  t3626 = Cos(var1[17]);
  t5827 = Sin(var1[16]);
  t17065 = Sin(var1[17]);
  t30373 = -1.*t14268*t3626;
  t30454 = -1.*t5827*t17065;
  t31048 = t30373 + t30454;
  t30354 = Cos(var1[5]);
  t31997 = Sin(var1[15]);
  t30254 = Cos(var1[15]);
  t32951 = Sin(var1[5]);
  t30243 = Cos(var1[4]);
  t9325 = -1.*t3626*t5827;
  t28146 = t14268*t17065;
  t28977 = t9325 + t28146;
  t29571 = Sin(var1[4]);
  t31228 = t30254*t30354*t31048;
  t32966 = -1.*t31997*t31048*t32951;
  t33002 = t31228 + t32966;
  t33431 = Sin(var1[3]);
  t33423 = t30354*t31997*t31048;
  t33426 = t30254*t31048*t32951;
  t33428 = t33423 + t33426;
  t33409 = Cos(var1[3]);
  t33437 = t30243*t28977;
  t33452 = -1.*t29571*t33002;
  t33472 = t33437 + t33452;
  t56629 = -1.*t30254;
  t56631 = 1. + t56629;
  t56632 = -0.15121*t56631;
  t56635 = -1.*t14268;
  t56636 = 1. + t56635;
  t56637 = -0.28121*t56636;
  t56638 = -1.*t3626;
  t56639 = 1. + t56638;
  t56641 = -0.50321*t56639;
  t56643 = -0.19821*t3626;
  t56645 = t56641 + t56643;
  t56647 = t14268*t56645;
  t56648 = 0.305*t5827*t17065;
  t56649 = t56637 + t56647 + t56648;
  t56654 = t30254*t56649;
  t56655 = t56632 + t56654;
  t56633 = -0.15121*t30254;
  t56634 = 0.15121*t31997;
  t56650 = t31997*t56649;
  t56651 = t56632 + t56633 + t56634 + t56650;
  t56660 = t30354*t31997;
  t56661 = t30254*t32951;
  t56664 = t56660 + t56661;
  t56665 = 0.28121*t5827;
  t56666 = t56645*t5827;
  t56667 = -0.305*t14268*t17065;
  t56670 = t56665 + t56666 + t56667;
  t56672 = t30354*t56655;
  t56673 = -1.*t56651*t32951;
  t56674 = t56672 + t56673;
  t56653 = t30354*t56651;
  t56656 = t56655*t32951;
  t56657 = t56653 + t56656;
  t56482 = t14268*t3626;
  t56493 = t5827*t17065;
  t56496 = t56482 + t56493;
  t56497 = t56496*t29571;
  t56498 = t30254*t30354*t28977;
  t56499 = -1.*t31997*t28977*t32951;
  t56609 = t56498 + t56499;
  t56614 = t30243*t56609;
  t56615 = t56497 + t56614;
  t56671 = t56670*t29571;
  t56676 = t30243*t56674;
  t56677 = t56671 + t56676;
  t56698 = t30243*t56670;
  t56702 = -1.*t29571*t56674;
  t56708 = t56698 + t56702;
  t56712 = t30354*t31997*t28977;
  t56713 = t30254*t28977*t32951;
  t56714 = t56712 + t56713;
  t56616 = -1.*t30254*t30354;
  t56622 = t31997*t32951;
  t56628 = t56616 + t56622;
  t56659 = -1.*t56628*t56657;
  t56729 = t56714*t56657;
  t29614 = t28977*t29571;
  t33017 = t30243*t33002;
  t33102 = t29614 + t33017;
  t56732 = t30243*t56496;
  t56733 = -1.*t29571*t56609;
  t56737 = t56732 + t56733;
  t56791 = -1.*t56714*t56657;
  t56801 = t33428*t56657;
  t56813 = -1.*t56670*t56496;
  t56821 = t56670*t28977;
  t56857 = t56628*t56657;
  t56863 = -1.*t33428*t56657;
  p_output1[0]=t33102;
  p_output1[1]=t33409*t33428 - 1.*t33431*t33472;
  p_output1[2]=t33428*t33431 + t33409*t33472;
  p_output1[3]=t56615*(t56659 - 1.*t30243*t56664*t56677 + t29571*t56664*t56708) + t30243*t56664*(t56615*t56677 + t56729 + t56708*t56737);
  p_output1[4]=(t56659 - 1.*t56664*t56674)*t56714 + t56628*(t56496*t56670 + t56609*t56674 + t56729);
  p_output1[5]=t56496*(t30254*t56651 - 1.*t31997*t56655);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t31048 - 0.15121*t56496;
  p_output1[16]=0.28121*t17065 - 0.305*t17065*t3626 + t17065*t56645;
  p_output1[17]=0;
  p_output1[18]=t30243*t56664;
  p_output1[19]=t33409*t56628 + t29571*t33431*t56664;
  p_output1[20]=t33431*t56628 - 1.*t29571*t33409*t56664;
  p_output1[21]=t33102*(-1.*t56615*t56677 - 1.*t56708*t56737 + t56791) + t56615*(t33102*t56677 + t33472*t56708 + t56801);
  p_output1[22]=t33428*(-1.*t56609*t56674 + t56791 + t56813) + t56714*(t33002*t56674 + t56801 + t56821);
  p_output1[23]=t28977*(-1.*t28977*t31997*t56651 - 1.*t28977*t30254*t56655 + t56813) + t56496*(t31048*t31997*t56651 + t30254*t31048*t56655 + t56821);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t28977*(-1.*t28977*t56649 + t56813) + t56496*(t31048*t56649 + t56821);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t56615;
  p_output1[37]=t33409*t56714 - 1.*t33431*t56737;
  p_output1[38]=t33431*t56714 + t33409*t56737;
  p_output1[39]=t33102*(t30243*t56664*t56677 - 1.*t29571*t56664*t56708 + t56857) + t30243*t56664*(-1.*t33102*t56677 - 1.*t33472*t56708 + t56863);
  p_output1[40]=t33428*(t56664*t56674 + t56857) + t56628*(-1.*t28977*t56670 - 1.*t33002*t56674 + t56863);
  p_output1[41]=t28977*(-1.*t30254*t56651 + t31997*t56655);
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
  p_output1[52]=0.305*Power(t17065,2) + 0.28121*t3626 + t3626*t56645;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
