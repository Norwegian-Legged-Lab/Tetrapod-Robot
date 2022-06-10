/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:38 GMT+02:00
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
  double t7426;
  double t2026;
  double t2083;
  double t8143;
  double t24154;
  double t24562;
  double t24584;
  double t24143;
  double t24588;
  double t24132;
  double t24597;
  double t24103;
  double t7129;
  double t11810;
  double t21055;
  double t24028;
  double t24585;
  double t24606;
  double t24608;
  double t24621;
  double t24612;
  double t24616;
  double t24617;
  double t24611;
  double t24625;
  double t24629;
  double t24632;
  double t24683;
  double t24686;
  double t24689;
  double t24693;
  double t24699;
  double t24701;
  double t24702;
  double t24707;
  double t24708;
  double t24710;
  double t24711;
  double t24713;
  double t24714;
  double t24718;
  double t24725;
  double t24726;
  double t24690;
  double t24692;
  double t24719;
  double t24721;
  double t24752;
  double t24755;
  double t24761;
  double t24762;
  double t24763;
  double t24765;
  double t24769;
  double t24771;
  double t24772;
  double t24773;
  double t24723;
  double t24739;
  double t24748;
  double t24646;
  double t24648;
  double t24649;
  double t24650;
  double t24652;
  double t24654;
  double t24664;
  double t24668;
  double t24670;
  double t24770;
  double t24778;
  double t24779;
  double t24781;
  double t24785;
  double t24786;
  double t24797;
  double t24807;
  double t24809;
  double t24677;
  double t24681;
  double t24682;
  double t24749;
  double t24818;
  double t24102;
  double t24609;
  double t24610;
  double t24829;
  double t24833;
  double t24834;
  double t25029;
  double t25088;
  double t25123;
  double t25135;
  double t25207;
  double t25220;
  t7426 = Cos(var1[16]);
  t2026 = Cos(var1[17]);
  t2083 = Sin(var1[16]);
  t8143 = Sin(var1[17]);
  t24154 = -1.*t7426*t2026;
  t24562 = -1.*t2083*t8143;
  t24584 = t24154 + t24562;
  t24143 = Cos(var1[5]);
  t24588 = Sin(var1[15]);
  t24132 = Cos(var1[15]);
  t24597 = Sin(var1[5]);
  t24103 = Cos(var1[4]);
  t7129 = -1.*t2026*t2083;
  t11810 = t7426*t8143;
  t21055 = t7129 + t11810;
  t24028 = Sin(var1[4]);
  t24585 = t24132*t24143*t24584;
  t24606 = -1.*t24588*t24584*t24597;
  t24608 = t24585 + t24606;
  t24621 = Sin(var1[3]);
  t24612 = t24143*t24588*t24584;
  t24616 = t24132*t24584*t24597;
  t24617 = t24612 + t24616;
  t24611 = Cos(var1[3]);
  t24625 = t24103*t21055;
  t24629 = -1.*t24028*t24608;
  t24632 = t24625 + t24629;
  t24683 = -1.*t24132;
  t24686 = 1. + t24683;
  t24689 = -0.15121*t24686;
  t24693 = -1.*t7426;
  t24699 = 1. + t24693;
  t24701 = -0.28121*t24699;
  t24702 = -1.*t2026;
  t24707 = 1. + t24702;
  t24708 = -0.50321*t24707;
  t24710 = -0.19821*t2026;
  t24711 = t24708 + t24710;
  t24713 = t7426*t24711;
  t24714 = 0.305*t2083*t8143;
  t24718 = t24701 + t24713 + t24714;
  t24725 = t24132*t24718;
  t24726 = t24689 + t24725;
  t24690 = -0.15121*t24132;
  t24692 = 0.15121*t24588;
  t24719 = t24588*t24718;
  t24721 = t24689 + t24690 + t24692 + t24719;
  t24752 = t24143*t24588;
  t24755 = t24132*t24597;
  t24761 = t24752 + t24755;
  t24762 = 0.28121*t2083;
  t24763 = t24711*t2083;
  t24765 = -0.305*t7426*t8143;
  t24769 = t24762 + t24763 + t24765;
  t24771 = t24143*t24726;
  t24772 = -1.*t24721*t24597;
  t24773 = t24771 + t24772;
  t24723 = t24143*t24721;
  t24739 = t24726*t24597;
  t24748 = t24723 + t24739;
  t24646 = t7426*t2026;
  t24648 = t2083*t8143;
  t24649 = t24646 + t24648;
  t24650 = t24649*t24028;
  t24652 = t24132*t24143*t21055;
  t24654 = -1.*t24588*t21055*t24597;
  t24664 = t24652 + t24654;
  t24668 = t24103*t24664;
  t24670 = t24650 + t24668;
  t24770 = t24769*t24028;
  t24778 = t24103*t24773;
  t24779 = t24770 + t24778;
  t24781 = t24103*t24769;
  t24785 = -1.*t24028*t24773;
  t24786 = t24781 + t24785;
  t24797 = t24143*t24588*t21055;
  t24807 = t24132*t21055*t24597;
  t24809 = t24797 + t24807;
  t24677 = -1.*t24132*t24143;
  t24681 = t24588*t24597;
  t24682 = t24677 + t24681;
  t24749 = -1.*t24682*t24748;
  t24818 = t24809*t24748;
  t24102 = t21055*t24028;
  t24609 = t24103*t24608;
  t24610 = t24102 + t24609;
  t24829 = t24103*t24649;
  t24833 = -1.*t24028*t24664;
  t24834 = t24829 + t24833;
  t25029 = -1.*t24809*t24748;
  t25088 = t24617*t24748;
  t25123 = -1.*t24769*t24649;
  t25135 = t24769*t21055;
  t25207 = t24682*t24748;
  t25220 = -1.*t24617*t24748;
  p_output1[0]=t24610;
  p_output1[1]=t24611*t24617 - 1.*t24621*t24632;
  p_output1[2]=t24617*t24621 + t24611*t24632;
  p_output1[3]=t24670*(t24749 - 1.*t24103*t24761*t24779 + t24028*t24761*t24786) + t24103*t24761*(t24670*t24779 + t24818 + t24786*t24834);
  p_output1[4]=(t24749 - 1.*t24761*t24773)*t24809 + t24682*(t24649*t24769 + t24664*t24773 + t24818);
  p_output1[5]=t24649*(t24132*t24721 - 1.*t24588*t24726);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t24584 - 0.15121*t24649;
  p_output1[16]=0.28121*t8143 - 0.305*t2026*t8143 + t24711*t8143;
  p_output1[17]=0;
  p_output1[18]=t24103*t24761;
  p_output1[19]=t24611*t24682 + t24028*t24621*t24761;
  p_output1[20]=t24621*t24682 - 1.*t24028*t24611*t24761;
  p_output1[21]=t24610*(-1.*t24670*t24779 - 1.*t24786*t24834 + t25029) + t24670*(t24610*t24779 + t24632*t24786 + t25088);
  p_output1[22]=t24617*(-1.*t24664*t24773 + t25029 + t25123) + t24809*(t24608*t24773 + t25088 + t25135);
  p_output1[23]=t21055*(-1.*t21055*t24588*t24721 - 1.*t21055*t24132*t24726 + t25123) + t24649*(t24584*t24588*t24721 + t24132*t24584*t24726 + t25135);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t21055*(-1.*t21055*t24718 + t25123) + t24649*(t24584*t24718 + t25135);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t24670;
  p_output1[37]=t24611*t24809 - 1.*t24621*t24834;
  p_output1[38]=t24621*t24809 + t24611*t24834;
  p_output1[39]=t24610*(t24103*t24761*t24779 - 1.*t24028*t24761*t24786 + t25207) + t24103*t24761*(-1.*t24610*t24779 - 1.*t24632*t24786 + t25220);
  p_output1[40]=t24617*(t24761*t24773 + t25207) + t24682*(-1.*t21055*t24769 - 1.*t24608*t24773 + t25220);
  p_output1[41]=t21055*(-1.*t24132*t24721 + t24588*t24726);
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
  p_output1[52]=0.28121*t2026 + t2026*t24711 + 0.305*Power(t8143,2);
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
