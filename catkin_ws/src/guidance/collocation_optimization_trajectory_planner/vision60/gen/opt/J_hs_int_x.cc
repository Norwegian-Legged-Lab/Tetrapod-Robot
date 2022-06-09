/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:32 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t188;
  double t205;
  double t499;
  double t531;
  double t622;
  double t650;
  double t750;
  double t769;
  double t774;
  double t768;
  double t800;
  double t811;
  double t830;
  double t832;
  double t839;
  double t841;
  double t844;
  double t850;
  double t856;
  double t863;
  double t888;
  double t893;
  double t902;
  double t909;
  double t927;
  double t936;
  double t952;
  double t979;
  double t996;
  double t1009;
  double t1016;
  double t1018;
  double t1025;
  double t1032;
  double t1035;
  double t1043;
  double t1053;
  double t1056;
  double t1059;
  double t1064;
  double t1079;
  double t1080;
  double t1109;
  double t1110;
  double t1125;
  double t1128;
  double t1120;
  double t1124;
  double t1133;
  double t1146;
  double t1151;
  double t1152;
  double t1157;
  double t1159;
  double t1172;
  double t1180;
  double t1187;
  double t1188;
  double t1198;
  double t1202;
  double t1205;
  double t1206;
  double t1221;
  double t1222;
  double t1225;
  double t1226;
  double t1229;
  double t1233;
  double t1248;
  double t1249;
  double t1254;
  double t1255;
  double t1259;
  double t1260;
  double t1266;
  double t1267;
  double t1272;
  double t1273;
  double t1276;
  double t1277;
  t188 = 4.*var5[0];
  t205 = t188 + var7[0] + var3[0];
  t499 = -1. + var8[0];
  t531 = 1/t499;
  t622 = -1.*var1[0];
  t650 = t622 + var1[1];
  t750 = -0.333333333333333*t531*t650;
  t769 = 4.*var5[1];
  t774 = t769 + var7[1] + var3[1];
  t768 = -1.33333333333333*t531*t650;
  t800 = 4.*var5[2];
  t811 = t800 + var7[2] + var3[2];
  t830 = 4.*var5[3];
  t832 = t830 + var7[3] + var3[3];
  t839 = 4.*var5[4];
  t841 = t839 + var7[4] + var3[4];
  t844 = 4.*var5[5];
  t850 = t844 + var7[5] + var3[5];
  t856 = 4.*var5[6];
  t863 = t856 + var7[6] + var3[6];
  t888 = 4.*var5[7];
  t893 = t888 + var7[7] + var3[7];
  t902 = 4.*var5[8];
  t909 = t902 + var7[8] + var3[8];
  t927 = 4.*var5[9];
  t936 = t927 + var7[9] + var3[9];
  t952 = 4.*var5[10];
  t979 = t952 + var7[10] + var3[10];
  t996 = 4.*var5[11];
  t1009 = t996 + var7[11] + var3[11];
  t1016 = 4.*var5[12];
  t1018 = t1016 + var7[12] + var3[12];
  t1025 = 4.*var5[13];
  t1032 = t1025 + var7[13] + var3[13];
  t1035 = 4.*var5[14];
  t1043 = t1035 + var7[14] + var3[14];
  t1053 = 4.*var5[15];
  t1056 = t1053 + var7[15] + var3[15];
  t1059 = 4.*var5[16];
  t1064 = t1059 + var7[16] + var3[16];
  t1079 = 4.*var5[17];
  t1080 = t1079 + var7[17] + var3[17];
  t1109 = -1.*var7[0];
  t1110 = t1109 + var3[0];
  t1125 = -1.*var7[1];
  t1128 = t1125 + var3[1];
  t1120 = -0.25*t531*t650;
  t1124 = 0.25*t531*t650;
  t1133 = -1.*var7[2];
  t1146 = t1133 + var3[2];
  t1151 = -1.*var7[3];
  t1152 = t1151 + var3[3];
  t1157 = -1.*var7[4];
  t1159 = t1157 + var3[4];
  t1172 = -1.*var7[5];
  t1180 = t1172 + var3[5];
  t1187 = -1.*var7[6];
  t1188 = t1187 + var3[6];
  t1198 = -1.*var7[7];
  t1202 = t1198 + var3[7];
  t1205 = -1.*var7[8];
  t1206 = t1205 + var3[8];
  t1221 = -1.*var7[9];
  t1222 = t1221 + var3[9];
  t1225 = -1.*var7[10];
  t1226 = t1225 + var3[10];
  t1229 = -1.*var7[11];
  t1233 = t1229 + var3[11];
  t1248 = -1.*var7[12];
  t1249 = t1248 + var3[12];
  t1254 = -1.*var7[13];
  t1255 = t1254 + var3[13];
  t1259 = -1.*var7[14];
  t1260 = t1259 + var3[14];
  t1266 = -1.*var7[15];
  t1267 = t1266 + var3[15];
  t1272 = -1.*var7[16];
  t1273 = t1272 + var3[16];
  t1276 = -1.*var7[17];
  t1277 = t1276 + var3[17];
  p_output1[0]=0.333333333333333*t205*t531;
  p_output1[1]=-0.333333333333333*t205*t531;
  p_output1[2]=-1.;
  p_output1[3]=t750;
  p_output1[4]=t768;
  p_output1[5]=1.;
  p_output1[6]=t750;
  p_output1[7]=0.333333333333333*t531*t774;
  p_output1[8]=-0.333333333333333*t531*t774;
  p_output1[9]=-1.;
  p_output1[10]=t750;
  p_output1[11]=t768;
  p_output1[12]=1.;
  p_output1[13]=t750;
  p_output1[14]=0.333333333333333*t531*t811;
  p_output1[15]=-0.333333333333333*t531*t811;
  p_output1[16]=-1.;
  p_output1[17]=t750;
  p_output1[18]=t768;
  p_output1[19]=1.;
  p_output1[20]=t750;
  p_output1[21]=0.333333333333333*t531*t832;
  p_output1[22]=-0.333333333333333*t531*t832;
  p_output1[23]=-1.;
  p_output1[24]=t750;
  p_output1[25]=t768;
  p_output1[26]=1.;
  p_output1[27]=t750;
  p_output1[28]=0.333333333333333*t531*t841;
  p_output1[29]=-0.333333333333333*t531*t841;
  p_output1[30]=-1.;
  p_output1[31]=t750;
  p_output1[32]=t768;
  p_output1[33]=1.;
  p_output1[34]=t750;
  p_output1[35]=0.333333333333333*t531*t850;
  p_output1[36]=-0.333333333333333*t531*t850;
  p_output1[37]=-1.;
  p_output1[38]=t750;
  p_output1[39]=t768;
  p_output1[40]=1.;
  p_output1[41]=t750;
  p_output1[42]=0.333333333333333*t531*t863;
  p_output1[43]=-0.333333333333333*t531*t863;
  p_output1[44]=-1.;
  p_output1[45]=t750;
  p_output1[46]=t768;
  p_output1[47]=1.;
  p_output1[48]=t750;
  p_output1[49]=0.333333333333333*t531*t893;
  p_output1[50]=-0.333333333333333*t531*t893;
  p_output1[51]=-1.;
  p_output1[52]=t750;
  p_output1[53]=t768;
  p_output1[54]=1.;
  p_output1[55]=t750;
  p_output1[56]=0.333333333333333*t531*t909;
  p_output1[57]=-0.333333333333333*t531*t909;
  p_output1[58]=-1.;
  p_output1[59]=t750;
  p_output1[60]=t768;
  p_output1[61]=1.;
  p_output1[62]=t750;
  p_output1[63]=0.333333333333333*t531*t936;
  p_output1[64]=-0.333333333333333*t531*t936;
  p_output1[65]=-1.;
  p_output1[66]=t750;
  p_output1[67]=t768;
  p_output1[68]=1.;
  p_output1[69]=t750;
  p_output1[70]=0.333333333333333*t531*t979;
  p_output1[71]=-0.333333333333333*t531*t979;
  p_output1[72]=-1.;
  p_output1[73]=t750;
  p_output1[74]=t768;
  p_output1[75]=1.;
  p_output1[76]=t750;
  p_output1[77]=0.333333333333333*t1009*t531;
  p_output1[78]=-0.333333333333333*t1009*t531;
  p_output1[79]=-1.;
  p_output1[80]=t750;
  p_output1[81]=t768;
  p_output1[82]=1.;
  p_output1[83]=t750;
  p_output1[84]=0.333333333333333*t1018*t531;
  p_output1[85]=-0.333333333333333*t1018*t531;
  p_output1[86]=-1.;
  p_output1[87]=t750;
  p_output1[88]=t768;
  p_output1[89]=1.;
  p_output1[90]=t750;
  p_output1[91]=0.333333333333333*t1032*t531;
  p_output1[92]=-0.333333333333333*t1032*t531;
  p_output1[93]=-1.;
  p_output1[94]=t750;
  p_output1[95]=t768;
  p_output1[96]=1.;
  p_output1[97]=t750;
  p_output1[98]=0.333333333333333*t1043*t531;
  p_output1[99]=-0.333333333333333*t1043*t531;
  p_output1[100]=-1.;
  p_output1[101]=t750;
  p_output1[102]=t768;
  p_output1[103]=1.;
  p_output1[104]=t750;
  p_output1[105]=0.333333333333333*t1056*t531;
  p_output1[106]=-0.333333333333333*t1056*t531;
  p_output1[107]=-1.;
  p_output1[108]=t750;
  p_output1[109]=t768;
  p_output1[110]=1.;
  p_output1[111]=t750;
  p_output1[112]=0.333333333333333*t1064*t531;
  p_output1[113]=-0.333333333333333*t1064*t531;
  p_output1[114]=-1.;
  p_output1[115]=t750;
  p_output1[116]=t768;
  p_output1[117]=1.;
  p_output1[118]=t750;
  p_output1[119]=0.333333333333333*t1080*t531;
  p_output1[120]=-0.333333333333333*t1080*t531;
  p_output1[121]=-1.;
  p_output1[122]=t750;
  p_output1[123]=t768;
  p_output1[124]=1.;
  p_output1[125]=t750;
  p_output1[126]=0.25*t1110*t531;
  p_output1[127]=-0.25*t1110*t531;
  p_output1[128]=-0.5;
  p_output1[129]=t1120;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t1124;
  p_output1[133]=0.25*t1128*t531;
  p_output1[134]=-0.25*t1128*t531;
  p_output1[135]=-0.5;
  p_output1[136]=t1120;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t1124;
  p_output1[140]=0.25*t1146*t531;
  p_output1[141]=-0.25*t1146*t531;
  p_output1[142]=-0.5;
  p_output1[143]=t1120;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t1124;
  p_output1[147]=0.25*t1152*t531;
  p_output1[148]=-0.25*t1152*t531;
  p_output1[149]=-0.5;
  p_output1[150]=t1120;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t1124;
  p_output1[154]=0.25*t1159*t531;
  p_output1[155]=-0.25*t1159*t531;
  p_output1[156]=-0.5;
  p_output1[157]=t1120;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t1124;
  p_output1[161]=0.25*t1180*t531;
  p_output1[162]=-0.25*t1180*t531;
  p_output1[163]=-0.5;
  p_output1[164]=t1120;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t1124;
  p_output1[168]=0.25*t1188*t531;
  p_output1[169]=-0.25*t1188*t531;
  p_output1[170]=-0.5;
  p_output1[171]=t1120;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t1124;
  p_output1[175]=0.25*t1202*t531;
  p_output1[176]=-0.25*t1202*t531;
  p_output1[177]=-0.5;
  p_output1[178]=t1120;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t1124;
  p_output1[182]=0.25*t1206*t531;
  p_output1[183]=-0.25*t1206*t531;
  p_output1[184]=-0.5;
  p_output1[185]=t1120;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t1124;
  p_output1[189]=0.25*t1222*t531;
  p_output1[190]=-0.25*t1222*t531;
  p_output1[191]=-0.5;
  p_output1[192]=t1120;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t1124;
  p_output1[196]=0.25*t1226*t531;
  p_output1[197]=-0.25*t1226*t531;
  p_output1[198]=-0.5;
  p_output1[199]=t1120;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t1124;
  p_output1[203]=0.25*t1233*t531;
  p_output1[204]=-0.25*t1233*t531;
  p_output1[205]=-0.5;
  p_output1[206]=t1120;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t1124;
  p_output1[210]=0.25*t1249*t531;
  p_output1[211]=-0.25*t1249*t531;
  p_output1[212]=-0.5;
  p_output1[213]=t1120;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t1124;
  p_output1[217]=0.25*t1255*t531;
  p_output1[218]=-0.25*t1255*t531;
  p_output1[219]=-0.5;
  p_output1[220]=t1120;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t1124;
  p_output1[224]=0.25*t1260*t531;
  p_output1[225]=-0.25*t1260*t531;
  p_output1[226]=-0.5;
  p_output1[227]=t1120;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t1124;
  p_output1[231]=0.25*t1267*t531;
  p_output1[232]=-0.25*t1267*t531;
  p_output1[233]=-0.5;
  p_output1[234]=t1120;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t1124;
  p_output1[238]=0.25*t1273*t531;
  p_output1[239]=-0.25*t1273*t531;
  p_output1[240]=-0.5;
  p_output1[241]=t1120;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t1124;
  p_output1[245]=0.25*t1277*t531;
  p_output1[246]=-0.25*t1277*t531;
  p_output1[247]=-0.5;
  p_output1[248]=t1120;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t1124;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 252, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace ParallelStance
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
