/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:39 GMT+02:00
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
  double t8783;
  double t3371;
  double t8794;
  double t8814;
  double t8804;
  double t8808;
  double t8816;
  double t3368;
  double t8813;
  double t8820;
  double t8826;
  double t8795;
  double t8829;
  double t8831;
  double t8832;
  double t8828;
  double t8897;
  double t8899;
  double t8833;
  double t8834;
  double t8836;
  double t8841;
  double t8842;
  double t8843;
  double t8844;
  double t8887;
  double t8891;
  double t8900;
  double t8902;
  double t8903;
  double t8908;
  double t8909;
  double t8910;
  double t8912;
  double t8914;
  double t8915;
  double t8920;
  double t8921;
  double t8922;
  double t8924;
  double t8925;
  double t8927;
  double t8827;
  double t8837;
  double t8838;
  double t8955;
  double t8956;
  double t8957;
  double t8959;
  double t8960;
  double t8961;
  double t8962;
  double t8963;
  double t8964;
  double t5059;
  double t8797;
  double t8802;
  double t8954;
  double t8958;
  double t8965;
  double t8966;
  double t8970;
  double t8971;
  double t8972;
  double t8973;
  double t8974;
  double t8976;
  double t8949;
  double t8951;
  double t8952;
  double t8953;
  double t8967;
  double t8968;
  double t8981;
  double t8982;
  double t8983;
  double t8985;
  double t8986;
  double t8987;
  double t8969;
  double t8977;
  double t8978;
  double t8984;
  double t8988;
  double t8989;
  double t8991;
  double t8992;
  double t8993;
  double t8840;
  double t8892;
  double t8893;
  double t8979;
  double t8997;
  double t9004;
  double t9009;
  double t9016;
  double t9021;
  double t9049;
  double t9053;
  double t9029;
  double t9033;
  double t9043;
  double t9039;
  double t9083;
  double t9078;
  t8783 = Cos(var1[15]);
  t3371 = Sin(var1[4]);
  t8794 = Cos(var1[4]);
  t8814 = Cos(var1[16]);
  t8804 = Cos(var1[17]);
  t8808 = Sin(var1[16]);
  t8816 = Sin(var1[17]);
  t3368 = Sin(var1[15]);
  t8813 = t8804*t8808;
  t8820 = -1.*t8814*t8816;
  t8826 = t8813 + t8820;
  t8795 = Sin(var1[5]);
  t8829 = t8814*t8804;
  t8831 = t8808*t8816;
  t8832 = t8829 + t8831;
  t8828 = Cos(var1[5]);
  t8897 = Cos(var1[3]);
  t8899 = Sin(var1[3]);
  t8833 = t8828*t8832;
  t8834 = t3368*t8826*t8795;
  t8836 = t8833 + t8834;
  t8841 = -1.*t8804*t8808;
  t8842 = t8814*t8816;
  t8843 = t8841 + t8842;
  t8844 = t8828*t8843;
  t8887 = t3368*t8832*t8795;
  t8891 = t8844 + t8887;
  t8900 = t8794*t3368;
  t8902 = t8783*t3371*t8795;
  t8903 = t8900 + t8902;
  t8908 = -1.*t8828*t3368*t8826;
  t8909 = t8832*t8795;
  t8910 = t8908 + t8909;
  t8912 = t8783*t8794*t8826;
  t8914 = -1.*t3371*t8836;
  t8915 = t8912 + t8914;
  t8920 = -1.*t8828*t3368*t8832;
  t8921 = t8843*t8795;
  t8922 = t8920 + t8921;
  t8924 = t8783*t8794*t8832;
  t8925 = -1.*t3371*t8891;
  t8927 = t8924 + t8925;
  t8827 = t8783*t8826*t3371;
  t8837 = t8794*t8836;
  t8838 = t8827 + t8837;
  t8955 = -0.0641*t8804;
  t8956 = -0.28*t8816;
  t8957 = t8955 + t8956;
  t8959 = -1.*t8804;
  t8960 = 1. + t8959;
  t8961 = -0.575*t8960;
  t8962 = -0.295*t8804;
  t8963 = -0.0641*t8816;
  t8964 = t8961 + t8962 + t8963;
  t5059 = t3368*t3371;
  t8797 = -1.*t8783*t8794*t8795;
  t8802 = t5059 + t8797;
  t8954 = 0.325*t8808;
  t8958 = t8814*t8957;
  t8965 = t8808*t8964;
  t8966 = t8954 + t8958 + t8965;
  t8970 = -1.*t8814;
  t8971 = 1. + t8970;
  t8972 = -0.325*t8971;
  t8973 = -1.*t8808*t8957;
  t8974 = t8814*t8964;
  t8976 = t8972 + t8973 + t8974;
  t8949 = -1.*t8783;
  t8951 = 1. + t8949;
  t8952 = -0.1575*t8951;
  t8953 = -0.2255*t8783;
  t8967 = -1.*t3368*t8966;
  t8968 = t8952 + t8953 + t8967;
  t8981 = -0.068*t3368;
  t8982 = t8783*t8966;
  t8983 = t8981 + t8982;
  t8985 = t8828*t8976;
  t8986 = -1.*t8968*t8795;
  t8987 = t8985 + t8986;
  t8969 = t8828*t8968;
  t8977 = t8976*t8795;
  t8978 = t8969 + t8977;
  t8984 = t8983*t3371;
  t8988 = t8794*t8987;
  t8989 = t8984 + t8988;
  t8991 = t8794*t8983;
  t8992 = -1.*t3371*t8987;
  t8993 = t8991 + t8992;
  t8840 = t8783*t8832*t3371;
  t8892 = t8794*t8891;
  t8893 = t8840 + t8892;
  t8979 = t8783*t8828*t8978;
  t8997 = -1.*t8978*t8910;
  t9004 = t8978*t8910;
  t9009 = -1.*t8978*t8922;
  t9016 = -1.*t8783*t8828*t8978;
  t9021 = t8978*t8922;
  t9049 = -1.*t3368*t8983;
  t9053 = t8783*t8983*t8832;
  t9029 = t3368*t8983;
  t9033 = -1.*t8783*t8983*t8826;
  t9043 = -1.*t8783*t8983*t8832;
  t9039 = t8783*t8983*t8826;
  t9083 = t8976*t8832;
  t9078 = -1.*t8976*t8843;
  p_output1[0]=t8838*var2[0] + t8802*var2[1] + t8893*var2[2];
  p_output1[1]=(t8897*t8910 - 1.*t8899*t8915)*var2[0] + (t8783*t8828*t8897 - 1.*t8899*t8903)*var2[1] + (t8897*t8922 - 1.*t8899*t8927)*var2[2];
  p_output1[2]=(t8899*t8910 + t8897*t8915)*var2[0] + (t8783*t8828*t8899 + t8897*t8903)*var2[1] + (t8899*t8922 + t8897*t8927)*var2[2];
  p_output1[3]=(t8893*(-1.*t8802*t8989 - 1.*t8903*t8993 + t9016) + t8802*(t8893*t8989 + t8927*t8993 + t9021))*var2[0] + (t8893*(t8838*t8989 + t8915*t8993 + t9004) + t8838*(-1.*t8893*t8989 - 1.*t8927*t8993 + t9009))*var2[1] + (t8838*(t8979 + t8802*t8989 + t8903*t8993) + t8802*(-1.*t8838*t8989 - 1.*t8915*t8993 + t8997))*var2[2];
  p_output1[4]=(t8922*(t8783*t8795*t8987 + t9016 + t9049) + t8783*t8828*(t8891*t8987 + t9021 + t9053))*var2[0] + (t8922*(t8836*t8987 + t9004 + t9039) + t8910*(-1.*t8891*t8987 + t9009 + t9043))*var2[1] + (t8910*(t8979 - 1.*t8783*t8795*t8987 + t9029) + t8783*t8828*(-1.*t8836*t8987 + t8997 + t9033))*var2[2];
  p_output1[5]=(t8783*t8832*(-1.*t8783*t8968 + t9049) + t3368*(-1.*t3368*t8832*t8968 + t8843*t8976 + t9053))*var2[0] + (t8783*t8826*(t3368*t8832*t8968 + t9043 + t9078) + t8783*t8832*(-1.*t3368*t8826*t8968 + t9039 + t9083))*var2[1] + (t8783*t8826*(t8783*t8968 + t9029) + t3368*(t3368*t8826*t8968 - 1.*t8832*t8976 + t9033))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t8826 + 0.2255*t8843)*var2[0] + (t8832*(-1.*t8832*t8966 + t9078) + t8843*(t8826*t8966 + t9083))*var2[1] - 0.068*t8832*var2[2];
  p_output1[16]=(-0.325*t8816 - 1.*t8804*t8957 - 1.*t8816*t8964)*var2[0] + (0.325*t8804 - 1.*t8816*t8957 + t8804*t8964)*var2[2];
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
