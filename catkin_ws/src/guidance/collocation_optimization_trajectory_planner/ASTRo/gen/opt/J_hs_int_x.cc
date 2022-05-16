/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:00 GMT+02:00
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
  double t90;
  double t96;
  double t982;
  double t1233;
  double t1437;
  double t1484;
  double t1485;
  double t1532;
  double t1639;
  double t1510;
  double t1897;
  double t2036;
  double t2139;
  double t2173;
  double t2247;
  double t2256;
  double t2277;
  double t2302;
  double t2405;
  double t2433;
  double t2554;
  double t2610;
  double t2669;
  double t2717;
  double t2744;
  double t2816;
  double t2926;
  double t2946;
  double t3087;
  double t3283;
  double t3586;
  double t3639;
  double t3772;
  double t3909;
  double t3941;
  double t3956;
  double t4152;
  double t4226;
  double t4293;
  double t4370;
  double t4482;
  double t4485;
  double t4550;
  double t4572;
  double t4824;
  double t4825;
  double t4775;
  double t4792;
  double t4854;
  double t4894;
  double t4947;
  double t4949;
  double t4982;
  double t4988;
  double t5002;
  double t5004;
  double t5073;
  double t5077;
  double t5139;
  double t5172;
  double t5194;
  double t5202;
  double t5285;
  double t5299;
  double t5454;
  double t5548;
  double t6089;
  double t6279;
  double t9942;
  double t10034;
  double t10303;
  double t10306;
  double t10503;
  double t10511;
  double t10780;
  double t10828;
  double t13050;
  double t13094;
  double t13134;
  double t13212;
  t90 = 4.*var5[0];
  t96 = t90 + var7[0] + var3[0];
  t982 = -1. + var8[0];
  t1233 = 1/t982;
  t1437 = -1.*var1[0];
  t1484 = t1437 + var1[1];
  t1485 = -0.333333333333333*t1233*t1484;
  t1532 = 4.*var5[1];
  t1639 = t1532 + var7[1] + var3[1];
  t1510 = -1.33333333333333*t1233*t1484;
  t1897 = 4.*var5[2];
  t2036 = t1897 + var7[2] + var3[2];
  t2139 = 4.*var5[3];
  t2173 = t2139 + var7[3] + var3[3];
  t2247 = 4.*var5[4];
  t2256 = t2247 + var7[4] + var3[4];
  t2277 = 4.*var5[5];
  t2302 = t2277 + var7[5] + var3[5];
  t2405 = 4.*var5[6];
  t2433 = t2405 + var7[6] + var3[6];
  t2554 = 4.*var5[7];
  t2610 = t2554 + var7[7] + var3[7];
  t2669 = 4.*var5[8];
  t2717 = t2669 + var7[8] + var3[8];
  t2744 = 4.*var5[9];
  t2816 = t2744 + var7[9] + var3[9];
  t2926 = 4.*var5[10];
  t2946 = t2926 + var7[10] + var3[10];
  t3087 = 4.*var5[11];
  t3283 = t3087 + var7[11] + var3[11];
  t3586 = 4.*var5[12];
  t3639 = t3586 + var7[12] + var3[12];
  t3772 = 4.*var5[13];
  t3909 = t3772 + var7[13] + var3[13];
  t3941 = 4.*var5[14];
  t3956 = t3941 + var7[14] + var3[14];
  t4152 = 4.*var5[15];
  t4226 = t4152 + var7[15] + var3[15];
  t4293 = 4.*var5[16];
  t4370 = t4293 + var7[16] + var3[16];
  t4482 = 4.*var5[17];
  t4485 = t4482 + var7[17] + var3[17];
  t4550 = -1.*var7[0];
  t4572 = t4550 + var3[0];
  t4824 = -1.*var7[1];
  t4825 = t4824 + var3[1];
  t4775 = -0.25*t1233*t1484;
  t4792 = 0.25*t1233*t1484;
  t4854 = -1.*var7[2];
  t4894 = t4854 + var3[2];
  t4947 = -1.*var7[3];
  t4949 = t4947 + var3[3];
  t4982 = -1.*var7[4];
  t4988 = t4982 + var3[4];
  t5002 = -1.*var7[5];
  t5004 = t5002 + var3[5];
  t5073 = -1.*var7[6];
  t5077 = t5073 + var3[6];
  t5139 = -1.*var7[7];
  t5172 = t5139 + var3[7];
  t5194 = -1.*var7[8];
  t5202 = t5194 + var3[8];
  t5285 = -1.*var7[9];
  t5299 = t5285 + var3[9];
  t5454 = -1.*var7[10];
  t5548 = t5454 + var3[10];
  t6089 = -1.*var7[11];
  t6279 = t6089 + var3[11];
  t9942 = -1.*var7[12];
  t10034 = t9942 + var3[12];
  t10303 = -1.*var7[13];
  t10306 = t10303 + var3[13];
  t10503 = -1.*var7[14];
  t10511 = t10503 + var3[14];
  t10780 = -1.*var7[15];
  t10828 = t10780 + var3[15];
  t13050 = -1.*var7[16];
  t13094 = t13050 + var3[16];
  t13134 = -1.*var7[17];
  t13212 = t13134 + var3[17];
  p_output1[0]=0.333333333333333*t1233*t96;
  p_output1[1]=-0.333333333333333*t1233*t96;
  p_output1[2]=-1.;
  p_output1[3]=t1485;
  p_output1[4]=t1510;
  p_output1[5]=1.;
  p_output1[6]=t1485;
  p_output1[7]=0.333333333333333*t1233*t1639;
  p_output1[8]=-0.333333333333333*t1233*t1639;
  p_output1[9]=-1.;
  p_output1[10]=t1485;
  p_output1[11]=t1510;
  p_output1[12]=1.;
  p_output1[13]=t1485;
  p_output1[14]=0.333333333333333*t1233*t2036;
  p_output1[15]=-0.333333333333333*t1233*t2036;
  p_output1[16]=-1.;
  p_output1[17]=t1485;
  p_output1[18]=t1510;
  p_output1[19]=1.;
  p_output1[20]=t1485;
  p_output1[21]=0.333333333333333*t1233*t2173;
  p_output1[22]=-0.333333333333333*t1233*t2173;
  p_output1[23]=-1.;
  p_output1[24]=t1485;
  p_output1[25]=t1510;
  p_output1[26]=1.;
  p_output1[27]=t1485;
  p_output1[28]=0.333333333333333*t1233*t2256;
  p_output1[29]=-0.333333333333333*t1233*t2256;
  p_output1[30]=-1.;
  p_output1[31]=t1485;
  p_output1[32]=t1510;
  p_output1[33]=1.;
  p_output1[34]=t1485;
  p_output1[35]=0.333333333333333*t1233*t2302;
  p_output1[36]=-0.333333333333333*t1233*t2302;
  p_output1[37]=-1.;
  p_output1[38]=t1485;
  p_output1[39]=t1510;
  p_output1[40]=1.;
  p_output1[41]=t1485;
  p_output1[42]=0.333333333333333*t1233*t2433;
  p_output1[43]=-0.333333333333333*t1233*t2433;
  p_output1[44]=-1.;
  p_output1[45]=t1485;
  p_output1[46]=t1510;
  p_output1[47]=1.;
  p_output1[48]=t1485;
  p_output1[49]=0.333333333333333*t1233*t2610;
  p_output1[50]=-0.333333333333333*t1233*t2610;
  p_output1[51]=-1.;
  p_output1[52]=t1485;
  p_output1[53]=t1510;
  p_output1[54]=1.;
  p_output1[55]=t1485;
  p_output1[56]=0.333333333333333*t1233*t2717;
  p_output1[57]=-0.333333333333333*t1233*t2717;
  p_output1[58]=-1.;
  p_output1[59]=t1485;
  p_output1[60]=t1510;
  p_output1[61]=1.;
  p_output1[62]=t1485;
  p_output1[63]=0.333333333333333*t1233*t2816;
  p_output1[64]=-0.333333333333333*t1233*t2816;
  p_output1[65]=-1.;
  p_output1[66]=t1485;
  p_output1[67]=t1510;
  p_output1[68]=1.;
  p_output1[69]=t1485;
  p_output1[70]=0.333333333333333*t1233*t2946;
  p_output1[71]=-0.333333333333333*t1233*t2946;
  p_output1[72]=-1.;
  p_output1[73]=t1485;
  p_output1[74]=t1510;
  p_output1[75]=1.;
  p_output1[76]=t1485;
  p_output1[77]=0.333333333333333*t1233*t3283;
  p_output1[78]=-0.333333333333333*t1233*t3283;
  p_output1[79]=-1.;
  p_output1[80]=t1485;
  p_output1[81]=t1510;
  p_output1[82]=1.;
  p_output1[83]=t1485;
  p_output1[84]=0.333333333333333*t1233*t3639;
  p_output1[85]=-0.333333333333333*t1233*t3639;
  p_output1[86]=-1.;
  p_output1[87]=t1485;
  p_output1[88]=t1510;
  p_output1[89]=1.;
  p_output1[90]=t1485;
  p_output1[91]=0.333333333333333*t1233*t3909;
  p_output1[92]=-0.333333333333333*t1233*t3909;
  p_output1[93]=-1.;
  p_output1[94]=t1485;
  p_output1[95]=t1510;
  p_output1[96]=1.;
  p_output1[97]=t1485;
  p_output1[98]=0.333333333333333*t1233*t3956;
  p_output1[99]=-0.333333333333333*t1233*t3956;
  p_output1[100]=-1.;
  p_output1[101]=t1485;
  p_output1[102]=t1510;
  p_output1[103]=1.;
  p_output1[104]=t1485;
  p_output1[105]=0.333333333333333*t1233*t4226;
  p_output1[106]=-0.333333333333333*t1233*t4226;
  p_output1[107]=-1.;
  p_output1[108]=t1485;
  p_output1[109]=t1510;
  p_output1[110]=1.;
  p_output1[111]=t1485;
  p_output1[112]=0.333333333333333*t1233*t4370;
  p_output1[113]=-0.333333333333333*t1233*t4370;
  p_output1[114]=-1.;
  p_output1[115]=t1485;
  p_output1[116]=t1510;
  p_output1[117]=1.;
  p_output1[118]=t1485;
  p_output1[119]=0.333333333333333*t1233*t4485;
  p_output1[120]=-0.333333333333333*t1233*t4485;
  p_output1[121]=-1.;
  p_output1[122]=t1485;
  p_output1[123]=t1510;
  p_output1[124]=1.;
  p_output1[125]=t1485;
  p_output1[126]=0.25*t1233*t4572;
  p_output1[127]=-0.25*t1233*t4572;
  p_output1[128]=-0.5;
  p_output1[129]=t4775;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t4792;
  p_output1[133]=0.25*t1233*t4825;
  p_output1[134]=-0.25*t1233*t4825;
  p_output1[135]=-0.5;
  p_output1[136]=t4775;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t4792;
  p_output1[140]=0.25*t1233*t4894;
  p_output1[141]=-0.25*t1233*t4894;
  p_output1[142]=-0.5;
  p_output1[143]=t4775;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t4792;
  p_output1[147]=0.25*t1233*t4949;
  p_output1[148]=-0.25*t1233*t4949;
  p_output1[149]=-0.5;
  p_output1[150]=t4775;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t4792;
  p_output1[154]=0.25*t1233*t4988;
  p_output1[155]=-0.25*t1233*t4988;
  p_output1[156]=-0.5;
  p_output1[157]=t4775;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t4792;
  p_output1[161]=0.25*t1233*t5004;
  p_output1[162]=-0.25*t1233*t5004;
  p_output1[163]=-0.5;
  p_output1[164]=t4775;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t4792;
  p_output1[168]=0.25*t1233*t5077;
  p_output1[169]=-0.25*t1233*t5077;
  p_output1[170]=-0.5;
  p_output1[171]=t4775;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t4792;
  p_output1[175]=0.25*t1233*t5172;
  p_output1[176]=-0.25*t1233*t5172;
  p_output1[177]=-0.5;
  p_output1[178]=t4775;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t4792;
  p_output1[182]=0.25*t1233*t5202;
  p_output1[183]=-0.25*t1233*t5202;
  p_output1[184]=-0.5;
  p_output1[185]=t4775;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t4792;
  p_output1[189]=0.25*t1233*t5299;
  p_output1[190]=-0.25*t1233*t5299;
  p_output1[191]=-0.5;
  p_output1[192]=t4775;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t4792;
  p_output1[196]=0.25*t1233*t5548;
  p_output1[197]=-0.25*t1233*t5548;
  p_output1[198]=-0.5;
  p_output1[199]=t4775;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t4792;
  p_output1[203]=0.25*t1233*t6279;
  p_output1[204]=-0.25*t1233*t6279;
  p_output1[205]=-0.5;
  p_output1[206]=t4775;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t4792;
  p_output1[210]=0.25*t10034*t1233;
  p_output1[211]=-0.25*t10034*t1233;
  p_output1[212]=-0.5;
  p_output1[213]=t4775;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t4792;
  p_output1[217]=0.25*t10306*t1233;
  p_output1[218]=-0.25*t10306*t1233;
  p_output1[219]=-0.5;
  p_output1[220]=t4775;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t4792;
  p_output1[224]=0.25*t10511*t1233;
  p_output1[225]=-0.25*t10511*t1233;
  p_output1[226]=-0.5;
  p_output1[227]=t4775;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t4792;
  p_output1[231]=0.25*t10828*t1233;
  p_output1[232]=-0.25*t10828*t1233;
  p_output1[233]=-0.5;
  p_output1[234]=t4775;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t4792;
  p_output1[238]=0.25*t1233*t13094;
  p_output1[239]=-0.25*t1233*t13094;
  p_output1[240]=-0.5;
  p_output1[241]=t4775;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t4792;
  p_output1[245]=0.25*t1233*t13212;
  p_output1[246]=-0.25*t1233*t13212;
  p_output1[247]=-0.5;
  p_output1[248]=t4775;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t4792;
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
