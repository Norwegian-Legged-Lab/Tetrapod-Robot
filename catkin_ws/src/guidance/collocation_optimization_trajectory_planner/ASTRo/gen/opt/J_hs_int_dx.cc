/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:53 GMT+02:00
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
  double t830;
  double t1154;
  double t1706;
  double t1799;
  double t1852;
  double t1864;
  double t2023;
  double t2360;
  double t2406;
  double t2320;
  double t2594;
  double t2596;
  double t2725;
  double t2824;
  double t2997;
  double t3006;
  double t3101;
  double t3250;
  double t3410;
  double t3412;
  double t3755;
  double t3801;
  double t3892;
  double t3921;
  double t4034;
  double t4495;
  double t4627;
  double t4628;
  double t5081;
  double t5113;
  double t5325;
  double t5367;
  double t5501;
  double t5590;
  double t5648;
  double t5651;
  double t5707;
  double t5771;
  double t5871;
  double t5880;
  double t5942;
  double t6080;
  double t6391;
  double t6783;
  double t6801;
  double t6806;
  double t6794;
  double t6796;
  double t6999;
  double t7010;
  double t7049;
  double t7063;
  double t7249;
  double t7288;
  double t7343;
  double t7346;
  double t7395;
  double t7398;
  double t7625;
  double t7630;
  double t7758;
  double t7769;
  double t7878;
  double t7886;
  double t7939;
  double t7955;
  double t8021;
  double t8028;
  double t8056;
  double t8061;
  double t8113;
  double t8123;
  double t8135;
  double t8147;
  double t8246;
  double t8247;
  double t8269;
  double t8295;
  double t8316;
  double t8326;
  t830 = 4.*var5[0];
  t1154 = var3[0] + t830 + var7[0];
  t1706 = -1. + var8[0];
  t1799 = 1/t1706;
  t1852 = -1.*var1[0];
  t1864 = t1852 + var1[1];
  t2023 = -0.333333333333333*t1799*t1864;
  t2360 = 4.*var5[1];
  t2406 = var3[1] + t2360 + var7[1];
  t2320 = -1.33333333333333*t1799*t1864;
  t2594 = 4.*var5[2];
  t2596 = var3[2] + t2594 + var7[2];
  t2725 = 4.*var5[3];
  t2824 = var3[3] + t2725 + var7[3];
  t2997 = 4.*var5[4];
  t3006 = var3[4] + t2997 + var7[4];
  t3101 = 4.*var5[5];
  t3250 = var3[5] + t3101 + var7[5];
  t3410 = 4.*var5[6];
  t3412 = var3[6] + t3410 + var7[6];
  t3755 = 4.*var5[7];
  t3801 = var3[7] + t3755 + var7[7];
  t3892 = 4.*var5[8];
  t3921 = var3[8] + t3892 + var7[8];
  t4034 = 4.*var5[9];
  t4495 = var3[9] + t4034 + var7[9];
  t4627 = 4.*var5[10];
  t4628 = var3[10] + t4627 + var7[10];
  t5081 = 4.*var5[11];
  t5113 = var3[11] + t5081 + var7[11];
  t5325 = 4.*var5[12];
  t5367 = var3[12] + t5325 + var7[12];
  t5501 = 4.*var5[13];
  t5590 = var3[13] + t5501 + var7[13];
  t5648 = 4.*var5[14];
  t5651 = var3[14] + t5648 + var7[14];
  t5707 = 4.*var5[15];
  t5771 = var3[15] + t5707 + var7[15];
  t5871 = 4.*var5[16];
  t5880 = var3[16] + t5871 + var7[16];
  t5942 = 4.*var5[17];
  t6080 = var3[17] + t5942 + var7[17];
  t6391 = -1.*var7[0];
  t6783 = var3[0] + t6391;
  t6801 = -1.*var7[1];
  t6806 = var3[1] + t6801;
  t6794 = -0.25*t1799*t1864;
  t6796 = 0.25*t1799*t1864;
  t6999 = -1.*var7[2];
  t7010 = var3[2] + t6999;
  t7049 = -1.*var7[3];
  t7063 = var3[3] + t7049;
  t7249 = -1.*var7[4];
  t7288 = var3[4] + t7249;
  t7343 = -1.*var7[5];
  t7346 = var3[5] + t7343;
  t7395 = -1.*var7[6];
  t7398 = var3[6] + t7395;
  t7625 = -1.*var7[7];
  t7630 = var3[7] + t7625;
  t7758 = -1.*var7[8];
  t7769 = var3[8] + t7758;
  t7878 = -1.*var7[9];
  t7886 = var3[9] + t7878;
  t7939 = -1.*var7[10];
  t7955 = var3[10] + t7939;
  t8021 = -1.*var7[11];
  t8028 = var3[11] + t8021;
  t8056 = -1.*var7[12];
  t8061 = var3[12] + t8056;
  t8113 = -1.*var7[13];
  t8123 = var3[13] + t8113;
  t8135 = -1.*var7[14];
  t8147 = var3[14] + t8135;
  t8246 = -1.*var7[15];
  t8247 = var3[15] + t8246;
  t8269 = -1.*var7[16];
  t8295 = var3[16] + t8269;
  t8316 = -1.*var7[17];
  t8326 = var3[17] + t8316;
  p_output1[0]=0.333333333333333*t1154*t1799;
  p_output1[1]=-0.333333333333333*t1154*t1799;
  p_output1[2]=-1.;
  p_output1[3]=t2023;
  p_output1[4]=t2320;
  p_output1[5]=1.;
  p_output1[6]=t2023;
  p_output1[7]=0.333333333333333*t1799*t2406;
  p_output1[8]=-0.333333333333333*t1799*t2406;
  p_output1[9]=-1.;
  p_output1[10]=t2023;
  p_output1[11]=t2320;
  p_output1[12]=1.;
  p_output1[13]=t2023;
  p_output1[14]=0.333333333333333*t1799*t2596;
  p_output1[15]=-0.333333333333333*t1799*t2596;
  p_output1[16]=-1.;
  p_output1[17]=t2023;
  p_output1[18]=t2320;
  p_output1[19]=1.;
  p_output1[20]=t2023;
  p_output1[21]=0.333333333333333*t1799*t2824;
  p_output1[22]=-0.333333333333333*t1799*t2824;
  p_output1[23]=-1.;
  p_output1[24]=t2023;
  p_output1[25]=t2320;
  p_output1[26]=1.;
  p_output1[27]=t2023;
  p_output1[28]=0.333333333333333*t1799*t3006;
  p_output1[29]=-0.333333333333333*t1799*t3006;
  p_output1[30]=-1.;
  p_output1[31]=t2023;
  p_output1[32]=t2320;
  p_output1[33]=1.;
  p_output1[34]=t2023;
  p_output1[35]=0.333333333333333*t1799*t3250;
  p_output1[36]=-0.333333333333333*t1799*t3250;
  p_output1[37]=-1.;
  p_output1[38]=t2023;
  p_output1[39]=t2320;
  p_output1[40]=1.;
  p_output1[41]=t2023;
  p_output1[42]=0.333333333333333*t1799*t3412;
  p_output1[43]=-0.333333333333333*t1799*t3412;
  p_output1[44]=-1.;
  p_output1[45]=t2023;
  p_output1[46]=t2320;
  p_output1[47]=1.;
  p_output1[48]=t2023;
  p_output1[49]=0.333333333333333*t1799*t3801;
  p_output1[50]=-0.333333333333333*t1799*t3801;
  p_output1[51]=-1.;
  p_output1[52]=t2023;
  p_output1[53]=t2320;
  p_output1[54]=1.;
  p_output1[55]=t2023;
  p_output1[56]=0.333333333333333*t1799*t3921;
  p_output1[57]=-0.333333333333333*t1799*t3921;
  p_output1[58]=-1.;
  p_output1[59]=t2023;
  p_output1[60]=t2320;
  p_output1[61]=1.;
  p_output1[62]=t2023;
  p_output1[63]=0.333333333333333*t1799*t4495;
  p_output1[64]=-0.333333333333333*t1799*t4495;
  p_output1[65]=-1.;
  p_output1[66]=t2023;
  p_output1[67]=t2320;
  p_output1[68]=1.;
  p_output1[69]=t2023;
  p_output1[70]=0.333333333333333*t1799*t4628;
  p_output1[71]=-0.333333333333333*t1799*t4628;
  p_output1[72]=-1.;
  p_output1[73]=t2023;
  p_output1[74]=t2320;
  p_output1[75]=1.;
  p_output1[76]=t2023;
  p_output1[77]=0.333333333333333*t1799*t5113;
  p_output1[78]=-0.333333333333333*t1799*t5113;
  p_output1[79]=-1.;
  p_output1[80]=t2023;
  p_output1[81]=t2320;
  p_output1[82]=1.;
  p_output1[83]=t2023;
  p_output1[84]=0.333333333333333*t1799*t5367;
  p_output1[85]=-0.333333333333333*t1799*t5367;
  p_output1[86]=-1.;
  p_output1[87]=t2023;
  p_output1[88]=t2320;
  p_output1[89]=1.;
  p_output1[90]=t2023;
  p_output1[91]=0.333333333333333*t1799*t5590;
  p_output1[92]=-0.333333333333333*t1799*t5590;
  p_output1[93]=-1.;
  p_output1[94]=t2023;
  p_output1[95]=t2320;
  p_output1[96]=1.;
  p_output1[97]=t2023;
  p_output1[98]=0.333333333333333*t1799*t5651;
  p_output1[99]=-0.333333333333333*t1799*t5651;
  p_output1[100]=-1.;
  p_output1[101]=t2023;
  p_output1[102]=t2320;
  p_output1[103]=1.;
  p_output1[104]=t2023;
  p_output1[105]=0.333333333333333*t1799*t5771;
  p_output1[106]=-0.333333333333333*t1799*t5771;
  p_output1[107]=-1.;
  p_output1[108]=t2023;
  p_output1[109]=t2320;
  p_output1[110]=1.;
  p_output1[111]=t2023;
  p_output1[112]=0.333333333333333*t1799*t5880;
  p_output1[113]=-0.333333333333333*t1799*t5880;
  p_output1[114]=-1.;
  p_output1[115]=t2023;
  p_output1[116]=t2320;
  p_output1[117]=1.;
  p_output1[118]=t2023;
  p_output1[119]=0.333333333333333*t1799*t6080;
  p_output1[120]=-0.333333333333333*t1799*t6080;
  p_output1[121]=-1.;
  p_output1[122]=t2023;
  p_output1[123]=t2320;
  p_output1[124]=1.;
  p_output1[125]=t2023;
  p_output1[126]=0.25*t1799*t6783;
  p_output1[127]=-0.25*t1799*t6783;
  p_output1[128]=-0.5;
  p_output1[129]=t6794;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t6796;
  p_output1[133]=0.25*t1799*t6806;
  p_output1[134]=-0.25*t1799*t6806;
  p_output1[135]=-0.5;
  p_output1[136]=t6794;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t6796;
  p_output1[140]=0.25*t1799*t7010;
  p_output1[141]=-0.25*t1799*t7010;
  p_output1[142]=-0.5;
  p_output1[143]=t6794;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t6796;
  p_output1[147]=0.25*t1799*t7063;
  p_output1[148]=-0.25*t1799*t7063;
  p_output1[149]=-0.5;
  p_output1[150]=t6794;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t6796;
  p_output1[154]=0.25*t1799*t7288;
  p_output1[155]=-0.25*t1799*t7288;
  p_output1[156]=-0.5;
  p_output1[157]=t6794;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t6796;
  p_output1[161]=0.25*t1799*t7346;
  p_output1[162]=-0.25*t1799*t7346;
  p_output1[163]=-0.5;
  p_output1[164]=t6794;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t6796;
  p_output1[168]=0.25*t1799*t7398;
  p_output1[169]=-0.25*t1799*t7398;
  p_output1[170]=-0.5;
  p_output1[171]=t6794;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t6796;
  p_output1[175]=0.25*t1799*t7630;
  p_output1[176]=-0.25*t1799*t7630;
  p_output1[177]=-0.5;
  p_output1[178]=t6794;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t6796;
  p_output1[182]=0.25*t1799*t7769;
  p_output1[183]=-0.25*t1799*t7769;
  p_output1[184]=-0.5;
  p_output1[185]=t6794;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t6796;
  p_output1[189]=0.25*t1799*t7886;
  p_output1[190]=-0.25*t1799*t7886;
  p_output1[191]=-0.5;
  p_output1[192]=t6794;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t6796;
  p_output1[196]=0.25*t1799*t7955;
  p_output1[197]=-0.25*t1799*t7955;
  p_output1[198]=-0.5;
  p_output1[199]=t6794;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t6796;
  p_output1[203]=0.25*t1799*t8028;
  p_output1[204]=-0.25*t1799*t8028;
  p_output1[205]=-0.5;
  p_output1[206]=t6794;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t6796;
  p_output1[210]=0.25*t1799*t8061;
  p_output1[211]=-0.25*t1799*t8061;
  p_output1[212]=-0.5;
  p_output1[213]=t6794;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t6796;
  p_output1[217]=0.25*t1799*t8123;
  p_output1[218]=-0.25*t1799*t8123;
  p_output1[219]=-0.5;
  p_output1[220]=t6794;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t6796;
  p_output1[224]=0.25*t1799*t8147;
  p_output1[225]=-0.25*t1799*t8147;
  p_output1[226]=-0.5;
  p_output1[227]=t6794;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t6796;
  p_output1[231]=0.25*t1799*t8247;
  p_output1[232]=-0.25*t1799*t8247;
  p_output1[233]=-0.5;
  p_output1[234]=t6794;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t6796;
  p_output1[238]=0.25*t1799*t8295;
  p_output1[239]=-0.25*t1799*t8295;
  p_output1[240]=-0.5;
  p_output1[241]=t6794;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t6796;
  p_output1[245]=0.25*t1799*t8326;
  p_output1[246]=-0.25*t1799*t8326;
  p_output1[247]=-0.5;
  p_output1[248]=t6794;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t6796;
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

#include "J_hs_int_dx.hh"

namespace ParallelStance
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
