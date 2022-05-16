/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:05 GMT+02:00
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
  double t22875;
  double t3561;
  double t21794;
  double t25118;
  double t53620;
  double t53628;
  double t53634;
  double t53613;
  double t53619;
  double t53700;
  double t53618;
  double t53704;
  double t1227;
  double t53746;
  double t53747;
  double t53751;
  double t21970;
  double t25133;
  double t53588;
  double t53685;
  double t53705;
  double t53710;
  double t53779;
  double t53718;
  double t53731;
  double t53739;
  double t53766;
  double t53752;
  double t53757;
  double t53763;
  double t53767;
  double t53768;
  double t53769;
  double t53780;
  double t53781;
  double t53782;
  double t53798;
  double t53805;
  double t53807;
  double t53810;
  double t53811;
  double t53812;
  double t53814;
  double t53815;
  double t53816;
  double t53745;
  double t53764;
  double t53765;
  double t53828;
  double t53829;
  double t53830;
  double t53831;
  double t53832;
  double t53833;
  double t53834;
  double t53835;
  double t53836;
  double t53838;
  double t53839;
  double t53840;
  double t53841;
  double t53842;
  double t53843;
  double t53845;
  double t53847;
  double t53848;
  double t53849;
  double t53850;
  double t53854;
  double t53855;
  double t53856;
  double t53857;
  double t53859;
  double t53860;
  double t53861;
  double t53846;
  double t53851;
  double t53852;
  double t53858;
  double t53862;
  double t53863;
  double t53865;
  double t53866;
  double t53867;
  double t53608;
  double t53712;
  double t53717;
  double t53853;
  double t53871;
  double t53877;
  double t53882;
  double t53888;
  double t53893;
  double t53907;
  double t53911;
  t22875 = Cos(var1[7]);
  t3561 = Cos(var1[8]);
  t21794 = Sin(var1[7]);
  t25118 = Sin(var1[8]);
  t53620 = t22875*t3561;
  t53628 = t21794*t25118;
  t53634 = t53620 + t53628;
  t53613 = Cos(var1[4]);
  t53619 = Cos(var1[6]);
  t53700 = Sin(var1[5]);
  t53618 = Cos(var1[5]);
  t53704 = Sin(var1[6]);
  t1227 = Sin(var1[4]);
  t53746 = t3561*t21794;
  t53747 = -1.*t22875*t25118;
  t53751 = t53746 + t53747;
  t21970 = -1.*t3561*t21794;
  t25133 = t22875*t25118;
  t53588 = t21970 + t25133;
  t53685 = t53618*t53619*t53634;
  t53705 = -1.*t53700*t53704*t53634;
  t53710 = t53685 + t53705;
  t53779 = Sin(var1[3]);
  t53718 = -1.*t53619*t53700;
  t53731 = -1.*t53618*t53704;
  t53739 = t53718 + t53731;
  t53766 = Cos(var1[3]);
  t53752 = t53618*t53619*t53751;
  t53757 = -1.*t53700*t53704*t53751;
  t53763 = t53752 + t53757;
  t53767 = t53619*t53700*t53634;
  t53768 = t53618*t53704*t53634;
  t53769 = t53767 + t53768;
  t53780 = t53613*t53588;
  t53781 = -1.*t1227*t53710;
  t53782 = t53780 + t53781;
  t53798 = t53618*t53619;
  t53805 = -1.*t53700*t53704;
  t53807 = t53798 + t53805;
  t53810 = t53619*t53700*t53751;
  t53811 = t53618*t53704*t53751;
  t53812 = t53810 + t53811;
  t53814 = t53613*t53634;
  t53815 = -1.*t1227*t53763;
  t53816 = t53814 + t53815;
  t53745 = t1227*t53634;
  t53764 = t53613*t53763;
  t53765 = t53745 + t53764;
  t53828 = -1.*t53619;
  t53829 = 1. + t53828;
  t53830 = 0.15121*t53829;
  t53831 = -1.*t22875;
  t53832 = 1. + t53831;
  t53833 = 0.28121*t53832;
  t53834 = -1.*t3561;
  t53835 = 1. + t53834;
  t53836 = 0.50321*t53835;
  t53838 = 0.23321*t3561;
  t53839 = t53836 + t53838;
  t53840 = t22875*t53839;
  t53841 = -0.27*t21794*t25118;
  t53842 = t53833 + t53840 + t53841;
  t53843 = t53619*t53842;
  t53845 = t53830 + t53843;
  t53847 = 0.15121*t53619;
  t53848 = -0.15121*t53704;
  t53849 = t53704*t53842;
  t53850 = t53830 + t53847 + t53848 + t53849;
  t53854 = 0.28121*t21794;
  t53855 = -1.*t53839*t21794;
  t53856 = -0.27*t22875*t25118;
  t53857 = t53854 + t53855 + t53856;
  t53859 = t53618*t53845;
  t53860 = -1.*t53700*t53850;
  t53861 = t53859 + t53860;
  t53846 = t53700*t53845;
  t53851 = t53618*t53850;
  t53852 = t53846 + t53851;
  t53858 = t1227*t53857;
  t53862 = t53613*t53861;
  t53863 = t53858 + t53862;
  t53865 = t53613*t53857;
  t53866 = -1.*t1227*t53861;
  t53867 = t53865 + t53866;
  t53608 = t1227*t53588;
  t53712 = t53613*t53710;
  t53717 = t53608 + t53712;
  t53853 = -1.*t53807*t53852;
  t53871 = t53812*t53852;
  t53877 = -1.*t53812*t53852;
  t53882 = t53769*t53852;
  t53888 = t53807*t53852;
  t53893 = -1.*t53769*t53852;
  t53907 = -1.*t53857*t53634;
  t53911 = t53857*t53588;
  p_output1[0]=t53717;
  p_output1[1]=t53613*t53739;
  p_output1[2]=t53765;
  p_output1[3]=t53766*t53769 - 1.*t53779*t53782;
  p_output1[4]=t1227*t53739*t53779 + t53766*t53807;
  p_output1[5]=t53766*t53812 - 1.*t53779*t53816;
  p_output1[6]=t53769*t53779 + t53766*t53782;
  p_output1[7]=-1.*t1227*t53739*t53766 + t53779*t53807;
  p_output1[8]=t53779*t53812 + t53766*t53816;
  p_output1[9]=t53765*(t53853 - 1.*t53613*t53739*t53863 + t1227*t53739*t53867) + t53613*t53739*(t53765*t53863 + t53816*t53867 + t53871);
  p_output1[10]=t53717*(-1.*t53765*t53863 - 1.*t53816*t53867 + t53877) + t53765*(t53717*t53863 + t53782*t53867 + t53882);
  p_output1[11]=t53717*(t53613*t53739*t53863 - 1.*t1227*t53739*t53867 + t53888) + t53613*t53739*(-1.*t53717*t53863 - 1.*t53782*t53867 + t53893);
  p_output1[12]=t53812*(t53853 - 1.*t53739*t53861) + t53807*(t53634*t53857 + t53763*t53861 + t53871);
  p_output1[13]=t53769*(-1.*t53763*t53861 + t53877 + t53907) + t53812*(t53710*t53861 + t53882 + t53911);
  p_output1[14]=t53769*(t53739*t53861 + t53888) + t53807*(-1.*t53588*t53857 - 1.*t53710*t53861 + t53893);
  p_output1[15]=t53634*(t53704*t53845 - 1.*t53619*t53850);
  p_output1[16]=t53588*(-1.*t53619*t53751*t53845 - 1.*t53704*t53751*t53850 + t53907) + t53634*(t53619*t53634*t53845 + t53634*t53704*t53850 + t53911);
  p_output1[17]=t53588*(-1.*t53704*t53845 + t53619*t53850);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t53588*(-1.*t53751*t53842 + t53907) + t53634*(t53634*t53842 + t53911);
  p_output1[20]=0.15121*t53588 + 0.15121*t53751;
  p_output1[21]=0.28121*t25118 - 0.27*t25118*t3561 - 1.*t25118*t53839;
  p_output1[22]=0;
  p_output1[23]=0.27*Power(t25118,2) + 0.28121*t3561 - 1.*t3561*t53839;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.27;
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

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
