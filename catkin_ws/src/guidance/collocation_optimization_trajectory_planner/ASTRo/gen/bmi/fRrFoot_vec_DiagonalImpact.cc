/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:24 GMT+02:00
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
  double t2796;
  double t4166;
  double t2970;
  double t8850;
  double t8852;
  double t8838;
  double t8856;
  double t4129;
  double t8870;
  double t8871;
  double t8872;
  double t4167;
  double t8862;
  double t8881;
  double t8882;
  double t8883;
  double t4165;
  double t4187;
  double t8777;
  double t8936;
  double t8933;
  double t8851;
  double t8860;
  double t8861;
  double t8873;
  double t8874;
  double t8875;
  double t8885;
  double t8886;
  double t8887;
  double t8937;
  double t8938;
  double t8939;
  double t8944;
  double t8945;
  double t8947;
  double t8949;
  double t8950;
  double t8951;
  double t8956;
  double t8957;
  double t8959;
  double t8961;
  double t8962;
  double t8963;
  double t8866;
  double t8876;
  double t8877;
  double t8981;
  double t8982;
  double t8983;
  double t8987;
  double t8989;
  double t8990;
  double t8991;
  double t8992;
  double t8993;
  double t8994;
  double t8995;
  double t8996;
  double t8997;
  double t8998;
  double t9002;
  double t9003;
  double t8985;
  double t8986;
  double t8999;
  double t9000;
  double t9007;
  double t9008;
  double t9009;
  double t9010;
  double t9012;
  double t9013;
  double t9014;
  double t9001;
  double t9004;
  double t9005;
  double t9011;
  double t9015;
  double t9016;
  double t9018;
  double t9019;
  double t9020;
  double t8880;
  double t8888;
  double t8927;
  double t9006;
  double t9024;
  double t9031;
  double t9036;
  double t9043;
  double t9048;
  double t9074;
  double t9078;
  t2796 = Cos(var1[4]);
  t4166 = Cos(var1[15]);
  t2970 = Cos(var1[5]);
  t8850 = Cos(var1[17]);
  t8852 = Sin(var1[16]);
  t8838 = Cos(var1[16]);
  t8856 = Sin(var1[17]);
  t4129 = Sin(var1[15]);
  t8870 = -1.*t8850*t8852;
  t8871 = t8838*t8856;
  t8872 = t8870 + t8871;
  t4167 = Sin(var1[5]);
  t8862 = Sin(var1[4]);
  t8881 = -1.*t8838*t8850;
  t8882 = -1.*t8852*t8856;
  t8883 = t8881 + t8882;
  t4165 = t2970*t4129;
  t4187 = t4166*t4167;
  t8777 = t4165 + t4187;
  t8936 = Cos(var1[3]);
  t8933 = Sin(var1[3]);
  t8851 = t8838*t8850;
  t8860 = t8852*t8856;
  t8861 = t8851 + t8860;
  t8873 = t4166*t2970*t8872;
  t8874 = -1.*t4129*t8872*t4167;
  t8875 = t8873 + t8874;
  t8885 = t4166*t2970*t8883;
  t8886 = -1.*t4129*t8883*t4167;
  t8887 = t8885 + t8886;
  t8937 = -1.*t4166*t2970;
  t8938 = t4129*t4167;
  t8939 = t8937 + t8938;
  t8944 = t2970*t4129*t8872;
  t8945 = t4166*t8872*t4167;
  t8947 = t8944 + t8945;
  t8949 = t2796*t8861;
  t8950 = -1.*t8862*t8875;
  t8951 = t8949 + t8950;
  t8956 = t2970*t4129*t8883;
  t8957 = t4166*t8883*t4167;
  t8959 = t8956 + t8957;
  t8961 = t2796*t8872;
  t8962 = -1.*t8862*t8887;
  t8963 = t8961 + t8962;
  t8866 = t8861*t8862;
  t8876 = t2796*t8875;
  t8877 = t8866 + t8876;
  t8981 = -1.*t4166;
  t8982 = 1. + t8981;
  t8983 = -0.15121*t8982;
  t8987 = -1.*t8838;
  t8989 = 1. + t8987;
  t8990 = -0.28121*t8989;
  t8991 = -1.*t8850;
  t8992 = 1. + t8991;
  t8993 = -0.50321*t8992;
  t8994 = -0.19821*t8850;
  t8995 = t8993 + t8994;
  t8996 = t8838*t8995;
  t8997 = 0.305*t8852*t8856;
  t8998 = t8990 + t8996 + t8997;
  t9002 = t4166*t8998;
  t9003 = t8983 + t9002;
  t8985 = -0.15121*t4166;
  t8986 = 0.15121*t4129;
  t8999 = t4129*t8998;
  t9000 = t8983 + t8985 + t8986 + t8999;
  t9007 = 0.28121*t8852;
  t9008 = t8995*t8852;
  t9009 = -0.305*t8838*t8856;
  t9010 = t9007 + t9008 + t9009;
  t9012 = t2970*t9003;
  t9013 = -1.*t9000*t4167;
  t9014 = t9012 + t9013;
  t9001 = t2970*t9000;
  t9004 = t9003*t4167;
  t9005 = t9001 + t9004;
  t9011 = t9010*t8862;
  t9015 = t2796*t9014;
  t9016 = t9011 + t9015;
  t9018 = t2796*t9010;
  t9019 = -1.*t8862*t9014;
  t9020 = t9018 + t9019;
  t8880 = t8872*t8862;
  t8888 = t2796*t8887;
  t8927 = t8880 + t8888;
  t9006 = -1.*t8939*t9005;
  t9024 = t8947*t9005;
  t9031 = t8939*t9005;
  t9036 = -1.*t8959*t9005;
  t9043 = -1.*t8947*t9005;
  t9048 = t8959*t9005;
  t9074 = -1.*t9010*t8861;
  t9078 = t9010*t8872;
  p_output1[0]=t8927*var2[0] + t2796*t8777*var2[1] + t8877*var2[2];
  p_output1[1]=(t8936*t8959 - 1.*t8933*t8963)*var2[0] + (t8777*t8862*t8933 + t8936*t8939)*var2[1] + (t8936*t8947 - 1.*t8933*t8951)*var2[2];
  p_output1[2]=(t8933*t8959 + t8936*t8963)*var2[0] + (-1.*t8777*t8862*t8936 + t8933*t8939)*var2[1] + (t8933*t8947 + t8936*t8951)*var2[2];
  p_output1[3]=(t8877*(t9006 - 1.*t2796*t8777*t9016 + t8777*t8862*t9020) + t2796*t8777*(t8877*t9016 + t8951*t9020 + t9024))*var2[0] + (t8927*(-1.*t8877*t9016 - 1.*t8951*t9020 + t9043) + t8877*(t8927*t9016 + t8963*t9020 + t9048))*var2[1] + (t8927*(t2796*t8777*t9016 - 1.*t8777*t8862*t9020 + t9031) + t2796*t8777*(-1.*t8927*t9016 - 1.*t8963*t9020 + t9036))*var2[2];
  p_output1[4]=(t8947*(t9006 - 1.*t8777*t9014) + t8939*(t8861*t9010 + t8875*t9014 + t9024))*var2[0] + (t8959*(-1.*t8875*t9014 + t9043 + t9074) + t8947*(t8887*t9014 + t9048 + t9078))*var2[1] + (t8959*(t8777*t9014 + t9031) + t8939*(-1.*t8872*t9010 - 1.*t8887*t9014 + t9036))*var2[2];
  p_output1[5]=t8861*(t4166*t9000 - 1.*t4129*t9003)*var2[0] + (t8872*(-1.*t4129*t8872*t9000 - 1.*t4166*t8872*t9003 + t9074) + t8861*(t4129*t8883*t9000 + t4166*t8883*t9003 + t9078))*var2[1] + t8872*(-1.*t4166*t9000 + t4129*t9003)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t8861 - 0.15121*t8883)*var2[0] + (-0.15121 + t8872*(-1.*t8872*t8998 + t9074) + t8861*(t8883*t8998 + t9078))*var2[1];
  p_output1[16]=(0.28121*t8856 - 0.305*t8850*t8856 + t8856*t8995)*var2[0] + (0.28121*t8850 + 0.305*Power(t8856,2) + t8850*t8995)*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
