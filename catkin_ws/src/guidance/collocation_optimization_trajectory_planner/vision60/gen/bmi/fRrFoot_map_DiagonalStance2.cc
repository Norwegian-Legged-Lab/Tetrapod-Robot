/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:36 GMT+02:00
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
  double t6657;
  double t6646;
  double t6654;
  double t6662;
  double t6655;
  double t6663;
  double t6770;
  double t6808;
  double t6820;
  double t6815;
  double t6816;
  double t6817;
  double t6822;
  double t3372;
  double t6795;
  double t6779;
  double t6819;
  double t6823;
  double t6825;
  double t6833;
  double t6829;
  double t6830;
  double t6831;
  double t6828;
  double t6834;
  double t6835;
  double t6836;
  double t6896;
  double t6897;
  double t6898;
  double t6907;
  double t6908;
  double t6910;
  double t6911;
  double t6912;
  double t6913;
  double t6895;
  double t6903;
  double t6915;
  double t6916;
  double t6936;
  double t6939;
  double t6940;
  double t6941;
  double t6943;
  double t6945;
  double t6885;
  double t6890;
  double t6891;
  double t6894;
  double t6921;
  double t6928;
  double t6961;
  double t6962;
  double t6963;
  double t6965;
  double t6967;
  double t6971;
  double t6955;
  double t6956;
  double t6960;
  double t6935;
  double t6946;
  double t6948;
  double t6846;
  double t6862;
  double t6863;
  double t6964;
  double t6974;
  double t6975;
  double t6845;
  double t6865;
  double t6866;
  double t6870;
  double t6875;
  double t6878;
  double t6983;
  double t6985;
  double t6994;
  double t7010;
  double t7011;
  double t7012;
  double t6949;
  double t7016;
  double t7025;
  double t7034;
  double t6979;
  double t6980;
  double t6981;
  double t6784;
  double t6826;
  double t6827;
  double t7018;
  double t7019;
  double t7020;
  double t7069;
  double t7074;
  double t7084;
  double t7080;
  double t7098;
  double t7091;
  double t7119;
  double t7126;
  double t7134;
  double t7138;
  t6657 = Cos(var1[16]);
  t6646 = Cos(var1[17]);
  t6654 = Sin(var1[16]);
  t6662 = Sin(var1[17]);
  t6655 = t6646*t6654;
  t6663 = -1.*t6657*t6662;
  t6770 = t6655 + t6663;
  t6808 = Cos(var1[5]);
  t6820 = Sin(var1[15]);
  t6815 = t6657*t6646;
  t6816 = t6654*t6662;
  t6817 = t6815 + t6816;
  t6822 = Sin(var1[5]);
  t3372 = Cos(var1[15]);
  t6795 = Cos(var1[4]);
  t6779 = Sin(var1[4]);
  t6819 = t6808*t6817;
  t6823 = t6820*t6770*t6822;
  t6825 = t6819 + t6823;
  t6833 = Sin(var1[3]);
  t6829 = -1.*t6808*t6820*t6770;
  t6830 = t6817*t6822;
  t6831 = t6829 + t6830;
  t6828 = Cos(var1[3]);
  t6834 = t3372*t6795*t6770;
  t6835 = -1.*t6779*t6825;
  t6836 = t6834 + t6835;
  t6896 = -0.0641*t6646;
  t6897 = -0.28*t6662;
  t6898 = t6896 + t6897;
  t6907 = -1.*t6646;
  t6908 = 1. + t6907;
  t6910 = -0.575*t6908;
  t6911 = -0.295*t6646;
  t6912 = -0.0641*t6662;
  t6913 = t6910 + t6911 + t6912;
  t6895 = 0.325*t6654;
  t6903 = t6657*t6898;
  t6915 = t6654*t6913;
  t6916 = t6895 + t6903 + t6915;
  t6936 = -1.*t6657;
  t6939 = 1. + t6936;
  t6940 = -0.325*t6939;
  t6941 = -1.*t6654*t6898;
  t6943 = t6657*t6913;
  t6945 = t6940 + t6941 + t6943;
  t6885 = -1.*t3372;
  t6890 = 1. + t6885;
  t6891 = -0.1575*t6890;
  t6894 = -0.2255*t3372;
  t6921 = -1.*t6820*t6916;
  t6928 = t6891 + t6894 + t6921;
  t6961 = -0.068*t6820;
  t6962 = t3372*t6916;
  t6963 = t6961 + t6962;
  t6965 = t6808*t6945;
  t6967 = -1.*t6928*t6822;
  t6971 = t6965 + t6967;
  t6955 = t6820*t6779;
  t6956 = -1.*t3372*t6795*t6822;
  t6960 = t6955 + t6956;
  t6935 = t6808*t6928;
  t6946 = t6945*t6822;
  t6948 = t6935 + t6946;
  t6846 = -1.*t6646*t6654;
  t6862 = t6657*t6662;
  t6863 = t6846 + t6862;
  t6964 = t6963*t6779;
  t6974 = t6795*t6971;
  t6975 = t6964 + t6974;
  t6845 = t3372*t6817*t6779;
  t6865 = t6808*t6863;
  t6866 = t6820*t6817*t6822;
  t6870 = t6865 + t6866;
  t6875 = t6795*t6870;
  t6878 = t6845 + t6875;
  t6983 = t6795*t6963;
  t6985 = -1.*t6779*t6971;
  t6994 = t6983 + t6985;
  t7010 = -1.*t6808*t6820*t6817;
  t7011 = t6863*t6822;
  t7012 = t7010 + t7011;
  t6949 = -1.*t3372*t6808*t6948;
  t7016 = t6948*t7012;
  t7025 = -1.*t6820*t6963;
  t7034 = t3372*t6963*t6817;
  t6979 = t6795*t6820;
  t6980 = t3372*t6779*t6822;
  t6981 = t6979 + t6980;
  t6784 = t3372*t6770*t6779;
  t6826 = t6795*t6825;
  t6827 = t6784 + t6826;
  t7018 = t3372*t6795*t6817;
  t7019 = -1.*t6779*t6870;
  t7020 = t7018 + t7019;
  t7069 = t6948*t6831;
  t7074 = -1.*t6948*t7012;
  t7084 = -1.*t3372*t6963*t6817;
  t7080 = t3372*t6963*t6770;
  t7098 = t6945*t6817;
  t7091 = -1.*t6945*t6863;
  t7119 = t3372*t6808*t6948;
  t7126 = -1.*t6948*t6831;
  t7134 = t6820*t6963;
  t7138 = -1.*t3372*t6963*t6770;
  p_output1[0]=t6827;
  p_output1[1]=t6828*t6831 - 1.*t6833*t6836;
  p_output1[2]=t6831*t6833 + t6828*t6836;
  p_output1[3]=t6878*(t6949 - 1.*t6960*t6975 - 1.*t6981*t6994) + t6960*(t6878*t6975 + t7016 + t6994*t7020);
  p_output1[4]=t7012*(t6949 + t3372*t6822*t6971 + t7025) + t3372*t6808*(t6870*t6971 + t7016 + t7034);
  p_output1[5]=t3372*t6817*(-1.*t3372*t6928 + t7025) + t6820*(-1.*t6817*t6820*t6928 + t6863*t6945 + t7034);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t6770 + 0.2255*t6863;
  p_output1[16]=-0.325*t6662 - 1.*t6646*t6898 - 1.*t6662*t6913;
  p_output1[17]=-0.0641;
  p_output1[18]=t6960;
  p_output1[19]=t3372*t6808*t6828 - 1.*t6833*t6981;
  p_output1[20]=t3372*t6808*t6833 + t6828*t6981;
  p_output1[21]=t6878*(t6827*t6975 + t6836*t6994 + t7069) + t6827*(-1.*t6878*t6975 - 1.*t6994*t7020 + t7074);
  p_output1[22]=t7012*(t6825*t6971 + t7069 + t7080) + t6831*(-1.*t6870*t6971 + t7074 + t7084);
  p_output1[23]=t3372*t6770*(t6817*t6820*t6928 + t7084 + t7091) + t3372*t6817*(-1.*t6770*t6820*t6928 + t7080 + t7098);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t6817*(-1.*t6817*t6916 + t7091) + t6863*(t6770*t6916 + t7098);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6878;
  p_output1[37]=t6828*t7012 - 1.*t6833*t7020;
  p_output1[38]=t6833*t7012 + t6828*t7020;
  p_output1[39]=t6827*(t6960*t6975 + t6981*t6994 + t7119) + t6960*(-1.*t6827*t6975 - 1.*t6836*t6994 + t7126);
  p_output1[40]=t6831*(-1.*t3372*t6822*t6971 + t7119 + t7134) + t3372*t6808*(-1.*t6825*t6971 + t7126 + t7138);
  p_output1[41]=t3372*t6770*(t3372*t6928 + t7134) + t6820*(t6770*t6820*t6928 - 1.*t6817*t6945 + t7138);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t6817;
  p_output1[52]=0.325*t6646 - 1.*t6662*t6898 + t6646*t6913;
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
