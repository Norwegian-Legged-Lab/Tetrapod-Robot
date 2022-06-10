/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:46 GMT+02:00
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
  double t2481;
  double t751;
  double t894;
  double t2719;
  double t3537;
  double t3539;
  double t3543;
  double t3517;
  double t4214;
  double t3428;
  double t4633;
  double t3425;
  double t1431;
  double t2744;
  double t3028;
  double t3278;
  double t4148;
  double t5244;
  double t6647;
  double t6992;
  double t6693;
  double t6695;
  double t6696;
  double t6692;
  double t6997;
  double t6998;
  double t7010;
  double t7057;
  double t7058;
  double t7072;
  double t7074;
  double t7075;
  double t7077;
  double t7080;
  double t7087;
  double t7088;
  double t7089;
  double t7093;
  double t7097;
  double t7101;
  double t7111;
  double t7112;
  double t7115;
  double t7064;
  double t7069;
  double t7071;
  double t7105;
  double t7107;
  double t7122;
  double t7126;
  double t7127;
  double t7128;
  double t7130;
  double t7136;
  double t7144;
  double t7148;
  double t7150;
  double t7151;
  double t7108;
  double t7117;
  double t7120;
  double t7034;
  double t7037;
  double t7038;
  double t7040;
  double t7043;
  double t7045;
  double t7047;
  double t7048;
  double t7051;
  double t7145;
  double t7154;
  double t7155;
  double t7160;
  double t7161;
  double t7164;
  double t7174;
  double t7176;
  double t7177;
  double t7052;
  double t7053;
  double t7054;
  double t7121;
  double t7183;
  double t3424;
  double t6680;
  double t6691;
  double t7185;
  double t7194;
  double t7199;
  double t7253;
  double t7258;
  double t7273;
  double t7283;
  double t7330;
  double t7343;
  t2481 = Cos(var1[10]);
  t751 = Cos(var1[11]);
  t894 = Sin(var1[10]);
  t2719 = Sin(var1[11]);
  t3537 = -1.*t2481*t751;
  t3539 = -1.*t894*t2719;
  t3543 = t3537 + t3539;
  t3517 = Cos(var1[5]);
  t4214 = Sin(var1[9]);
  t3428 = Cos(var1[9]);
  t4633 = Sin(var1[5]);
  t3425 = Cos(var1[4]);
  t1431 = -1.*t751*t894;
  t2744 = t2481*t2719;
  t3028 = t1431 + t2744;
  t3278 = Sin(var1[4]);
  t4148 = t3428*t3517*t3543;
  t5244 = -1.*t4214*t3543*t4633;
  t6647 = t4148 + t5244;
  t6992 = Sin(var1[3]);
  t6693 = t3517*t4214*t3543;
  t6695 = t3428*t3543*t4633;
  t6696 = t6693 + t6695;
  t6692 = Cos(var1[3]);
  t6997 = t3425*t3028;
  t6998 = -1.*t3278*t6647;
  t7010 = t6997 + t6998;
  t7057 = -1.*t3428;
  t7058 = 1. + t7057;
  t7072 = -1.*t2481;
  t7074 = 1. + t7072;
  t7075 = -0.28121*t7074;
  t7077 = -1.*t751;
  t7080 = 1. + t7077;
  t7087 = -0.50321*t7080;
  t7088 = -0.19821*t751;
  t7089 = t7087 + t7088;
  t7093 = t2481*t7089;
  t7097 = 0.305*t894*t2719;
  t7101 = t7075 + t7093 + t7097;
  t7111 = -0.15121*t7058;
  t7112 = t3428*t7101;
  t7115 = t7111 + t7112;
  t7064 = 0.15121*t7058;
  t7069 = 0.15121*t3428;
  t7071 = 0.15121*t4214;
  t7105 = t4214*t7101;
  t7107 = t7064 + t7069 + t7071 + t7105;
  t7122 = t3517*t4214;
  t7126 = t3428*t4633;
  t7127 = t7122 + t7126;
  t7128 = 0.28121*t894;
  t7130 = t7089*t894;
  t7136 = -0.305*t2481*t2719;
  t7144 = t7128 + t7130 + t7136;
  t7148 = t3517*t7115;
  t7150 = -1.*t7107*t4633;
  t7151 = t7148 + t7150;
  t7108 = t3517*t7107;
  t7117 = t7115*t4633;
  t7120 = t7108 + t7117;
  t7034 = t2481*t751;
  t7037 = t894*t2719;
  t7038 = t7034 + t7037;
  t7040 = t7038*t3278;
  t7043 = t3428*t3517*t3028;
  t7045 = -1.*t4214*t3028*t4633;
  t7047 = t7043 + t7045;
  t7048 = t3425*t7047;
  t7051 = t7040 + t7048;
  t7145 = t7144*t3278;
  t7154 = t3425*t7151;
  t7155 = t7145 + t7154;
  t7160 = t3425*t7144;
  t7161 = -1.*t3278*t7151;
  t7164 = t7160 + t7161;
  t7174 = t3517*t4214*t3028;
  t7176 = t3428*t3028*t4633;
  t7177 = t7174 + t7176;
  t7052 = -1.*t3428*t3517;
  t7053 = t4214*t4633;
  t7054 = t7052 + t7053;
  t7121 = -1.*t7054*t7120;
  t7183 = t7177*t7120;
  t3424 = t3028*t3278;
  t6680 = t3425*t6647;
  t6691 = t3424 + t6680;
  t7185 = t3425*t7038;
  t7194 = -1.*t3278*t7047;
  t7199 = t7185 + t7194;
  t7253 = -1.*t7177*t7120;
  t7258 = t6696*t7120;
  t7273 = -1.*t7144*t7038;
  t7283 = t7144*t3028;
  t7330 = t7054*t7120;
  t7343 = -1.*t6696*t7120;
  p_output1[0]=t6691;
  p_output1[1]=t6692*t6696 - 1.*t6992*t7010;
  p_output1[2]=t6696*t6992 + t6692*t7010;
  p_output1[3]=t7051*(t7121 - 1.*t3425*t7127*t7155 + t3278*t7127*t7164) + t3425*t7127*(t7051*t7155 + t7183 + t7164*t7199);
  p_output1[4]=(t7121 - 1.*t7127*t7151)*t7177 + t7054*(t7038*t7144 + t7047*t7151 + t7183);
  p_output1[5]=t7038*(t3428*t7107 - 1.*t4214*t7115);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t3543 + 0.15121*t7038;
  p_output1[10]=0.28121*t2719 + t2719*t7089 - 0.305*t2719*t751;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3425*t7127;
  p_output1[19]=t6692*t7054 + t3278*t6992*t7127;
  p_output1[20]=t6992*t7054 - 1.*t3278*t6692*t7127;
  p_output1[21]=t6691*(-1.*t7051*t7155 - 1.*t7164*t7199 + t7253) + t7051*(t6691*t7155 + t7010*t7164 + t7258);
  p_output1[22]=t6696*(-1.*t7047*t7151 + t7253 + t7273) + t7177*(t6647*t7151 + t7258 + t7283);
  p_output1[23]=t3028*(-1.*t3028*t4214*t7107 - 1.*t3028*t3428*t7115 + t7273) + t7038*(t3543*t4214*t7107 + t3428*t3543*t7115 + t7283);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t3028*(-1.*t3028*t7101 + t7273) + t7038*(t3543*t7101 + t7283);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7051;
  p_output1[37]=t6692*t7177 - 1.*t6992*t7199;
  p_output1[38]=t6992*t7177 + t6692*t7199;
  p_output1[39]=t6691*(t3425*t7127*t7155 - 1.*t3278*t7127*t7164 + t7330) + t3425*t7127*(-1.*t6691*t7155 - 1.*t7010*t7164 + t7343);
  p_output1[40]=t6696*(t7127*t7151 + t7330) + t7054*(-1.*t3028*t7144 - 1.*t6647*t7151 + t7343);
  p_output1[41]=t3028*(-1.*t3428*t7107 + t4214*t7115);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.305*Power(t2719,2) + 0.28121*t751 + t7089*t751;
  p_output1[47]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
