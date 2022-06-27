/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:57 GMT+02:00
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
  double t28;
  double t2095;
  double t29;
  double t12517;
  double t16668;
  double t11759;
  double t16877;
  double t481;
  double t18715;
  double t18739;
  double t18741;
  double t2920;
  double t18709;
  double t18796;
  double t18797;
  double t18798;
  double t490;
  double t3123;
  double t3455;
  double t18809;
  double t18807;
  double t14731;
  double t17555;
  double t18673;
  double t18743;
  double t18759;
  double t18766;
  double t18800;
  double t18801;
  double t18802;
  double t18810;
  double t18811;
  double t18812;
  double t18859;
  double t18861;
  double t18863;
  double t18865;
  double t18866;
  double t18867;
  double t18872;
  double t18874;
  double t18875;
  double t18877;
  double t18889;
  double t18896;
  double t18710;
  double t18769;
  double t18770;
  double t18945;
  double t18946;
  double t18947;
  double t18950;
  double t18951;
  double t18952;
  double t18953;
  double t18954;
  double t18955;
  double t18956;
  double t18961;
  double t18962;
  double t18964;
  double t18968;
  double t18973;
  double t18974;
  double t18948;
  double t18949;
  double t18969;
  double t18970;
  double t18980;
  double t18981;
  double t18982;
  double t18983;
  double t18988;
  double t18989;
  double t18990;
  double t18972;
  double t18975;
  double t18977;
  double t18987;
  double t18991;
  double t18992;
  double t18998;
  double t18999;
  double t19000;
  double t18791;
  double t18803;
  double t18804;
  double t18979;
  double t19006;
  double t19014;
  double t19019;
  double t19026;
  double t19034;
  double t19064;
  double t19068;
  t28 = Cos(var1[4]);
  t2095 = Cos(var1[15]);
  t29 = Cos(var1[5]);
  t12517 = Cos(var1[17]);
  t16668 = Sin(var1[16]);
  t11759 = Cos(var1[16]);
  t16877 = Sin(var1[17]);
  t481 = Sin(var1[15]);
  t18715 = -1.*t12517*t16668;
  t18739 = t11759*t16877;
  t18741 = t18715 + t18739;
  t2920 = Sin(var1[5]);
  t18709 = Sin(var1[4]);
  t18796 = -1.*t11759*t12517;
  t18797 = -1.*t16668*t16877;
  t18798 = t18796 + t18797;
  t490 = t29*t481;
  t3123 = t2095*t2920;
  t3455 = t490 + t3123;
  t18809 = Cos(var1[3]);
  t18807 = Sin(var1[3]);
  t14731 = t11759*t12517;
  t17555 = t16668*t16877;
  t18673 = t14731 + t17555;
  t18743 = t2095*t29*t18741;
  t18759 = -1.*t481*t18741*t2920;
  t18766 = t18743 + t18759;
  t18800 = t2095*t29*t18798;
  t18801 = -1.*t481*t18798*t2920;
  t18802 = t18800 + t18801;
  t18810 = -1.*t2095*t29;
  t18811 = t481*t2920;
  t18812 = t18810 + t18811;
  t18859 = t29*t481*t18741;
  t18861 = t2095*t18741*t2920;
  t18863 = t18859 + t18861;
  t18865 = t28*t18673;
  t18866 = -1.*t18709*t18766;
  t18867 = t18865 + t18866;
  t18872 = t29*t481*t18798;
  t18874 = t2095*t18798*t2920;
  t18875 = t18872 + t18874;
  t18877 = t28*t18741;
  t18889 = -1.*t18709*t18802;
  t18896 = t18877 + t18889;
  t18710 = t18673*t18709;
  t18769 = t28*t18766;
  t18770 = t18710 + t18769;
  t18945 = -1.*t2095;
  t18946 = 1. + t18945;
  t18947 = -0.15121*t18946;
  t18950 = -1.*t11759;
  t18951 = 1. + t18950;
  t18952 = -0.28121*t18951;
  t18953 = -1.*t12517;
  t18954 = 1. + t18953;
  t18955 = -0.50321*t18954;
  t18956 = -0.19821*t12517;
  t18961 = t18955 + t18956;
  t18962 = t11759*t18961;
  t18964 = 0.305*t16668*t16877;
  t18968 = t18952 + t18962 + t18964;
  t18973 = t2095*t18968;
  t18974 = t18947 + t18973;
  t18948 = -0.15121*t2095;
  t18949 = 0.15121*t481;
  t18969 = t481*t18968;
  t18970 = t18947 + t18948 + t18949 + t18969;
  t18980 = 0.28121*t16668;
  t18981 = t18961*t16668;
  t18982 = -0.305*t11759*t16877;
  t18983 = t18980 + t18981 + t18982;
  t18988 = t29*t18974;
  t18989 = -1.*t18970*t2920;
  t18990 = t18988 + t18989;
  t18972 = t29*t18970;
  t18975 = t18974*t2920;
  t18977 = t18972 + t18975;
  t18987 = t18983*t18709;
  t18991 = t28*t18990;
  t18992 = t18987 + t18991;
  t18998 = t28*t18983;
  t18999 = -1.*t18709*t18990;
  t19000 = t18998 + t18999;
  t18791 = t18741*t18709;
  t18803 = t28*t18802;
  t18804 = t18791 + t18803;
  t18979 = -1.*t18812*t18977;
  t19006 = t18863*t18977;
  t19014 = t18812*t18977;
  t19019 = -1.*t18875*t18977;
  t19026 = -1.*t18863*t18977;
  t19034 = t18875*t18977;
  t19064 = -1.*t18983*t18673;
  t19068 = t18983*t18741;
  p_output1[0]=t18804*var2[0] + t28*t3455*var2[1] + t18770*var2[2];
  p_output1[1]=(t18809*t18875 - 1.*t18807*t18896)*var2[0] + (t18809*t18812 + t18709*t18807*t3455)*var2[1] + (t18809*t18863 - 1.*t18807*t18867)*var2[2];
  p_output1[2]=(t18807*t18875 + t18809*t18896)*var2[0] + (t18807*t18812 - 1.*t18709*t18809*t3455)*var2[1] + (t18807*t18863 + t18809*t18867)*var2[2];
  p_output1[3]=((t18770*t18992 + t18867*t19000 + t19006)*t28*t3455 + t18770*(t18979 + t18709*t19000*t3455 - 1.*t18992*t28*t3455))*var2[0] + (t18804*(-1.*t18770*t18992 - 1.*t18867*t19000 + t19026) + t18770*(t18804*t18992 + t18896*t19000 + t19034))*var2[1] + ((-1.*t18804*t18992 - 1.*t18896*t19000 + t19019)*t28*t3455 + t18804*(t19014 - 1.*t18709*t19000*t3455 + t18992*t28*t3455))*var2[2];
  p_output1[4]=(t18812*(t18673*t18983 + t18766*t18990 + t19006) + t18863*(t18979 - 1.*t18990*t3455))*var2[0] + (t18875*(-1.*t18766*t18990 + t19026 + t19064) + t18863*(t18802*t18990 + t19034 + t19068))*var2[1] + (t18812*(-1.*t18741*t18983 - 1.*t18802*t18990 + t19019) + t18875*(t19014 + t18990*t3455))*var2[2];
  p_output1[5]=t18673*(t18970*t2095 - 1.*t18974*t481)*var2[0] + (t18741*(t19064 - 1.*t18741*t18974*t2095 - 1.*t18741*t18970*t481) + t18673*(t19068 + t18798*t18974*t2095 + t18798*t18970*t481))*var2[1] + t18741*(-1.*t18970*t2095 + t18974*t481)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t18673 - 0.15121*t18798)*var2[0] + (-0.15121 + t18741*(-1.*t18741*t18968 + t19064) + t18673*(t18798*t18968 + t19068))*var2[1];
  p_output1[16]=(0.28121*t16877 - 0.305*t12517*t16877 + t16877*t18961)*var2[0] + (0.28121*t12517 + 0.305*Power(t16877,2) + t12517*t18961)*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
