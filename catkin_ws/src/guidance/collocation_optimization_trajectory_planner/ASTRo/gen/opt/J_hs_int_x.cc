/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:30 GMT+02:00
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
  double t95;
  double t98;
  double t182;
  double t221;
  double t269;
  double t277;
  double t320;
  double t384;
  double t416;
  double t325;
  double t438;
  double t498;
  double t571;
  double t605;
  double t660;
  double t753;
  double t850;
  double t857;
  double t889;
  double t894;
  double t898;
  double t902;
  double t926;
  double t932;
  double t987;
  double t1006;
  double t1196;
  double t1258;
  double t1335;
  double t1486;
  double t1546;
  double t1596;
  double t1668;
  double t1696;
  double t1744;
  double t1811;
  double t2048;
  double t2069;
  double t2134;
  double t2164;
  double t2173;
  double t2187;
  double t2404;
  double t2413;
  double t2626;
  double t2939;
  double t2462;
  double t2489;
  double t3456;
  double t3529;
  double t3655;
  double t3662;
  double t3735;
  double t3757;
  double t3852;
  double t3965;
  double t4376;
  double t4380;
  double t4443;
  double t4451;
  double t4531;
  double t4563;
  double t4568;
  double t4576;
  double t4611;
  double t4628;
  double t4687;
  double t4688;
  double t4702;
  double t4707;
  double t4714;
  double t4716;
  double t4727;
  double t4728;
  double t4738;
  double t4746;
  double t4767;
  double t4795;
  double t4800;
  double t4810;
  t95 = 4.*var5[0];
  t98 = t95 + var7[0] + var3[0];
  t182 = -1. + var8[0];
  t221 = 1/t182;
  t269 = -1.*var1[0];
  t277 = t269 + var1[1];
  t320 = -0.333333333333333*t221*t277;
  t384 = 4.*var5[1];
  t416 = t384 + var7[1] + var3[1];
  t325 = -1.33333333333333*t221*t277;
  t438 = 4.*var5[2];
  t498 = t438 + var7[2] + var3[2];
  t571 = 4.*var5[3];
  t605 = t571 + var7[3] + var3[3];
  t660 = 4.*var5[4];
  t753 = t660 + var7[4] + var3[4];
  t850 = 4.*var5[5];
  t857 = t850 + var7[5] + var3[5];
  t889 = 4.*var5[6];
  t894 = t889 + var7[6] + var3[6];
  t898 = 4.*var5[7];
  t902 = t898 + var7[7] + var3[7];
  t926 = 4.*var5[8];
  t932 = t926 + var7[8] + var3[8];
  t987 = 4.*var5[9];
  t1006 = t987 + var7[9] + var3[9];
  t1196 = 4.*var5[10];
  t1258 = t1196 + var7[10] + var3[10];
  t1335 = 4.*var5[11];
  t1486 = t1335 + var7[11] + var3[11];
  t1546 = 4.*var5[12];
  t1596 = t1546 + var7[12] + var3[12];
  t1668 = 4.*var5[13];
  t1696 = t1668 + var7[13] + var3[13];
  t1744 = 4.*var5[14];
  t1811 = t1744 + var7[14] + var3[14];
  t2048 = 4.*var5[15];
  t2069 = t2048 + var7[15] + var3[15];
  t2134 = 4.*var5[16];
  t2164 = t2134 + var7[16] + var3[16];
  t2173 = 4.*var5[17];
  t2187 = t2173 + var7[17] + var3[17];
  t2404 = -1.*var7[0];
  t2413 = t2404 + var3[0];
  t2626 = -1.*var7[1];
  t2939 = t2626 + var3[1];
  t2462 = -0.25*t221*t277;
  t2489 = 0.25*t221*t277;
  t3456 = -1.*var7[2];
  t3529 = t3456 + var3[2];
  t3655 = -1.*var7[3];
  t3662 = t3655 + var3[3];
  t3735 = -1.*var7[4];
  t3757 = t3735 + var3[4];
  t3852 = -1.*var7[5];
  t3965 = t3852 + var3[5];
  t4376 = -1.*var7[6];
  t4380 = t4376 + var3[6];
  t4443 = -1.*var7[7];
  t4451 = t4443 + var3[7];
  t4531 = -1.*var7[8];
  t4563 = t4531 + var3[8];
  t4568 = -1.*var7[9];
  t4576 = t4568 + var3[9];
  t4611 = -1.*var7[10];
  t4628 = t4611 + var3[10];
  t4687 = -1.*var7[11];
  t4688 = t4687 + var3[11];
  t4702 = -1.*var7[12];
  t4707 = t4702 + var3[12];
  t4714 = -1.*var7[13];
  t4716 = t4714 + var3[13];
  t4727 = -1.*var7[14];
  t4728 = t4727 + var3[14];
  t4738 = -1.*var7[15];
  t4746 = t4738 + var3[15];
  t4767 = -1.*var7[16];
  t4795 = t4767 + var3[16];
  t4800 = -1.*var7[17];
  t4810 = t4800 + var3[17];
  p_output1[0]=0.333333333333333*t221*t98;
  p_output1[1]=-0.333333333333333*t221*t98;
  p_output1[2]=-1.;
  p_output1[3]=t320;
  p_output1[4]=t325;
  p_output1[5]=1.;
  p_output1[6]=t320;
  p_output1[7]=0.333333333333333*t221*t416;
  p_output1[8]=-0.333333333333333*t221*t416;
  p_output1[9]=-1.;
  p_output1[10]=t320;
  p_output1[11]=t325;
  p_output1[12]=1.;
  p_output1[13]=t320;
  p_output1[14]=0.333333333333333*t221*t498;
  p_output1[15]=-0.333333333333333*t221*t498;
  p_output1[16]=-1.;
  p_output1[17]=t320;
  p_output1[18]=t325;
  p_output1[19]=1.;
  p_output1[20]=t320;
  p_output1[21]=0.333333333333333*t221*t605;
  p_output1[22]=-0.333333333333333*t221*t605;
  p_output1[23]=-1.;
  p_output1[24]=t320;
  p_output1[25]=t325;
  p_output1[26]=1.;
  p_output1[27]=t320;
  p_output1[28]=0.333333333333333*t221*t753;
  p_output1[29]=-0.333333333333333*t221*t753;
  p_output1[30]=-1.;
  p_output1[31]=t320;
  p_output1[32]=t325;
  p_output1[33]=1.;
  p_output1[34]=t320;
  p_output1[35]=0.333333333333333*t221*t857;
  p_output1[36]=-0.333333333333333*t221*t857;
  p_output1[37]=-1.;
  p_output1[38]=t320;
  p_output1[39]=t325;
  p_output1[40]=1.;
  p_output1[41]=t320;
  p_output1[42]=0.333333333333333*t221*t894;
  p_output1[43]=-0.333333333333333*t221*t894;
  p_output1[44]=-1.;
  p_output1[45]=t320;
  p_output1[46]=t325;
  p_output1[47]=1.;
  p_output1[48]=t320;
  p_output1[49]=0.333333333333333*t221*t902;
  p_output1[50]=-0.333333333333333*t221*t902;
  p_output1[51]=-1.;
  p_output1[52]=t320;
  p_output1[53]=t325;
  p_output1[54]=1.;
  p_output1[55]=t320;
  p_output1[56]=0.333333333333333*t221*t932;
  p_output1[57]=-0.333333333333333*t221*t932;
  p_output1[58]=-1.;
  p_output1[59]=t320;
  p_output1[60]=t325;
  p_output1[61]=1.;
  p_output1[62]=t320;
  p_output1[63]=0.333333333333333*t1006*t221;
  p_output1[64]=-0.333333333333333*t1006*t221;
  p_output1[65]=-1.;
  p_output1[66]=t320;
  p_output1[67]=t325;
  p_output1[68]=1.;
  p_output1[69]=t320;
  p_output1[70]=0.333333333333333*t1258*t221;
  p_output1[71]=-0.333333333333333*t1258*t221;
  p_output1[72]=-1.;
  p_output1[73]=t320;
  p_output1[74]=t325;
  p_output1[75]=1.;
  p_output1[76]=t320;
  p_output1[77]=0.333333333333333*t1486*t221;
  p_output1[78]=-0.333333333333333*t1486*t221;
  p_output1[79]=-1.;
  p_output1[80]=t320;
  p_output1[81]=t325;
  p_output1[82]=1.;
  p_output1[83]=t320;
  p_output1[84]=0.333333333333333*t1596*t221;
  p_output1[85]=-0.333333333333333*t1596*t221;
  p_output1[86]=-1.;
  p_output1[87]=t320;
  p_output1[88]=t325;
  p_output1[89]=1.;
  p_output1[90]=t320;
  p_output1[91]=0.333333333333333*t1696*t221;
  p_output1[92]=-0.333333333333333*t1696*t221;
  p_output1[93]=-1.;
  p_output1[94]=t320;
  p_output1[95]=t325;
  p_output1[96]=1.;
  p_output1[97]=t320;
  p_output1[98]=0.333333333333333*t1811*t221;
  p_output1[99]=-0.333333333333333*t1811*t221;
  p_output1[100]=-1.;
  p_output1[101]=t320;
  p_output1[102]=t325;
  p_output1[103]=1.;
  p_output1[104]=t320;
  p_output1[105]=0.333333333333333*t2069*t221;
  p_output1[106]=-0.333333333333333*t2069*t221;
  p_output1[107]=-1.;
  p_output1[108]=t320;
  p_output1[109]=t325;
  p_output1[110]=1.;
  p_output1[111]=t320;
  p_output1[112]=0.333333333333333*t2164*t221;
  p_output1[113]=-0.333333333333333*t2164*t221;
  p_output1[114]=-1.;
  p_output1[115]=t320;
  p_output1[116]=t325;
  p_output1[117]=1.;
  p_output1[118]=t320;
  p_output1[119]=0.333333333333333*t2187*t221;
  p_output1[120]=-0.333333333333333*t2187*t221;
  p_output1[121]=-1.;
  p_output1[122]=t320;
  p_output1[123]=t325;
  p_output1[124]=1.;
  p_output1[125]=t320;
  p_output1[126]=0.25*t221*t2413;
  p_output1[127]=-0.25*t221*t2413;
  p_output1[128]=-0.5;
  p_output1[129]=t2462;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t2489;
  p_output1[133]=0.25*t221*t2939;
  p_output1[134]=-0.25*t221*t2939;
  p_output1[135]=-0.5;
  p_output1[136]=t2462;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t2489;
  p_output1[140]=0.25*t221*t3529;
  p_output1[141]=-0.25*t221*t3529;
  p_output1[142]=-0.5;
  p_output1[143]=t2462;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t2489;
  p_output1[147]=0.25*t221*t3662;
  p_output1[148]=-0.25*t221*t3662;
  p_output1[149]=-0.5;
  p_output1[150]=t2462;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t2489;
  p_output1[154]=0.25*t221*t3757;
  p_output1[155]=-0.25*t221*t3757;
  p_output1[156]=-0.5;
  p_output1[157]=t2462;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t2489;
  p_output1[161]=0.25*t221*t3965;
  p_output1[162]=-0.25*t221*t3965;
  p_output1[163]=-0.5;
  p_output1[164]=t2462;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t2489;
  p_output1[168]=0.25*t221*t4380;
  p_output1[169]=-0.25*t221*t4380;
  p_output1[170]=-0.5;
  p_output1[171]=t2462;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t2489;
  p_output1[175]=0.25*t221*t4451;
  p_output1[176]=-0.25*t221*t4451;
  p_output1[177]=-0.5;
  p_output1[178]=t2462;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t2489;
  p_output1[182]=0.25*t221*t4563;
  p_output1[183]=-0.25*t221*t4563;
  p_output1[184]=-0.5;
  p_output1[185]=t2462;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t2489;
  p_output1[189]=0.25*t221*t4576;
  p_output1[190]=-0.25*t221*t4576;
  p_output1[191]=-0.5;
  p_output1[192]=t2462;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t2489;
  p_output1[196]=0.25*t221*t4628;
  p_output1[197]=-0.25*t221*t4628;
  p_output1[198]=-0.5;
  p_output1[199]=t2462;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t2489;
  p_output1[203]=0.25*t221*t4688;
  p_output1[204]=-0.25*t221*t4688;
  p_output1[205]=-0.5;
  p_output1[206]=t2462;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t2489;
  p_output1[210]=0.25*t221*t4707;
  p_output1[211]=-0.25*t221*t4707;
  p_output1[212]=-0.5;
  p_output1[213]=t2462;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t2489;
  p_output1[217]=0.25*t221*t4716;
  p_output1[218]=-0.25*t221*t4716;
  p_output1[219]=-0.5;
  p_output1[220]=t2462;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t2489;
  p_output1[224]=0.25*t221*t4728;
  p_output1[225]=-0.25*t221*t4728;
  p_output1[226]=-0.5;
  p_output1[227]=t2462;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t2489;
  p_output1[231]=0.25*t221*t4746;
  p_output1[232]=-0.25*t221*t4746;
  p_output1[233]=-0.5;
  p_output1[234]=t2462;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t2489;
  p_output1[238]=0.25*t221*t4795;
  p_output1[239]=-0.25*t221*t4795;
  p_output1[240]=-0.5;
  p_output1[241]=t2462;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t2489;
  p_output1[245]=0.25*t221*t4810;
  p_output1[246]=-0.25*t221*t4810;
  p_output1[247]=-0.5;
  p_output1[248]=t2462;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t2489;
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
