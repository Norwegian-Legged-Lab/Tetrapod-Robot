/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:40 GMT+02:00
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
  double t24;
  double t28;
  double t56;
  double t61;
  double t76;
  double t108;
  double t116;
  double t394;
  double t501;
  double t361;
  double t702;
  double t913;
  double t1280;
  double t1457;
  double t1565;
  double t1940;
  double t2180;
  double t2236;
  double t2272;
  double t2355;
  double t2439;
  double t2457;
  double t2749;
  double t2793;
  double t2804;
  double t2813;
  double t2953;
  double t2989;
  double t3012;
  double t3015;
  double t3039;
  double t3233;
  double t3250;
  double t3252;
  double t3277;
  double t3312;
  double t3543;
  double t3568;
  double t3593;
  double t3615;
  double t3664;
  double t3676;
  double t3794;
  double t3795;
  double t3857;
  double t3869;
  double t3840;
  double t3852;
  double t3996;
  double t4144;
  double t4634;
  double t4638;
  double t4902;
  double t4935;
  double t5036;
  double t5037;
  double t5053;
  double t5057;
  double t5161;
  double t5227;
  double t5264;
  double t5305;
  double t5506;
  double t5525;
  double t10503;
  double t10504;
  double t10850;
  double t10868;
  double t11088;
  double t11107;
  double t11195;
  double t11196;
  double t11234;
  double t11240;
  double t11253;
  double t11254;
  double t11372;
  double t11393;
  double t12516;
  double t12521;
  t24 = 4.*var5[0];
  t28 = t24 + var7[0] + var3[0];
  t56 = -1. + var8[0];
  t61 = 1/t56;
  t76 = -1.*var1[0];
  t108 = t76 + var1[1];
  t116 = -0.333333333333333*t61*t108;
  t394 = 4.*var5[1];
  t501 = t394 + var7[1] + var3[1];
  t361 = -1.33333333333333*t61*t108;
  t702 = 4.*var5[2];
  t913 = t702 + var7[2] + var3[2];
  t1280 = 4.*var5[3];
  t1457 = t1280 + var7[3] + var3[3];
  t1565 = 4.*var5[4];
  t1940 = t1565 + var7[4] + var3[4];
  t2180 = 4.*var5[5];
  t2236 = t2180 + var7[5] + var3[5];
  t2272 = 4.*var5[6];
  t2355 = t2272 + var7[6] + var3[6];
  t2439 = 4.*var5[7];
  t2457 = t2439 + var7[7] + var3[7];
  t2749 = 4.*var5[8];
  t2793 = t2749 + var7[8] + var3[8];
  t2804 = 4.*var5[9];
  t2813 = t2804 + var7[9] + var3[9];
  t2953 = 4.*var5[10];
  t2989 = t2953 + var7[10] + var3[10];
  t3012 = 4.*var5[11];
  t3015 = t3012 + var7[11] + var3[11];
  t3039 = 4.*var5[12];
  t3233 = t3039 + var7[12] + var3[12];
  t3250 = 4.*var5[13];
  t3252 = t3250 + var7[13] + var3[13];
  t3277 = 4.*var5[14];
  t3312 = t3277 + var7[14] + var3[14];
  t3543 = 4.*var5[15];
  t3568 = t3543 + var7[15] + var3[15];
  t3593 = 4.*var5[16];
  t3615 = t3593 + var7[16] + var3[16];
  t3664 = 4.*var5[17];
  t3676 = t3664 + var7[17] + var3[17];
  t3794 = -1.*var7[0];
  t3795 = t3794 + var3[0];
  t3857 = -1.*var7[1];
  t3869 = t3857 + var3[1];
  t3840 = -0.25*t61*t108;
  t3852 = 0.25*t61*t108;
  t3996 = -1.*var7[2];
  t4144 = t3996 + var3[2];
  t4634 = -1.*var7[3];
  t4638 = t4634 + var3[3];
  t4902 = -1.*var7[4];
  t4935 = t4902 + var3[4];
  t5036 = -1.*var7[5];
  t5037 = t5036 + var3[5];
  t5053 = -1.*var7[6];
  t5057 = t5053 + var3[6];
  t5161 = -1.*var7[7];
  t5227 = t5161 + var3[7];
  t5264 = -1.*var7[8];
  t5305 = t5264 + var3[8];
  t5506 = -1.*var7[9];
  t5525 = t5506 + var3[9];
  t10503 = -1.*var7[10];
  t10504 = t10503 + var3[10];
  t10850 = -1.*var7[11];
  t10868 = t10850 + var3[11];
  t11088 = -1.*var7[12];
  t11107 = t11088 + var3[12];
  t11195 = -1.*var7[13];
  t11196 = t11195 + var3[13];
  t11234 = -1.*var7[14];
  t11240 = t11234 + var3[14];
  t11253 = -1.*var7[15];
  t11254 = t11253 + var3[15];
  t11372 = -1.*var7[16];
  t11393 = t11372 + var3[16];
  t12516 = -1.*var7[17];
  t12521 = t12516 + var3[17];
  p_output1[0]=0.333333333333333*t28*t61;
  p_output1[1]=-0.333333333333333*t28*t61;
  p_output1[2]=-1.;
  p_output1[3]=t116;
  p_output1[4]=t361;
  p_output1[5]=1.;
  p_output1[6]=t116;
  p_output1[7]=0.333333333333333*t501*t61;
  p_output1[8]=-0.333333333333333*t501*t61;
  p_output1[9]=-1.;
  p_output1[10]=t116;
  p_output1[11]=t361;
  p_output1[12]=1.;
  p_output1[13]=t116;
  p_output1[14]=0.333333333333333*t61*t913;
  p_output1[15]=-0.333333333333333*t61*t913;
  p_output1[16]=-1.;
  p_output1[17]=t116;
  p_output1[18]=t361;
  p_output1[19]=1.;
  p_output1[20]=t116;
  p_output1[21]=0.333333333333333*t1457*t61;
  p_output1[22]=-0.333333333333333*t1457*t61;
  p_output1[23]=-1.;
  p_output1[24]=t116;
  p_output1[25]=t361;
  p_output1[26]=1.;
  p_output1[27]=t116;
  p_output1[28]=0.333333333333333*t1940*t61;
  p_output1[29]=-0.333333333333333*t1940*t61;
  p_output1[30]=-1.;
  p_output1[31]=t116;
  p_output1[32]=t361;
  p_output1[33]=1.;
  p_output1[34]=t116;
  p_output1[35]=0.333333333333333*t2236*t61;
  p_output1[36]=-0.333333333333333*t2236*t61;
  p_output1[37]=-1.;
  p_output1[38]=t116;
  p_output1[39]=t361;
  p_output1[40]=1.;
  p_output1[41]=t116;
  p_output1[42]=0.333333333333333*t2355*t61;
  p_output1[43]=-0.333333333333333*t2355*t61;
  p_output1[44]=-1.;
  p_output1[45]=t116;
  p_output1[46]=t361;
  p_output1[47]=1.;
  p_output1[48]=t116;
  p_output1[49]=0.333333333333333*t2457*t61;
  p_output1[50]=-0.333333333333333*t2457*t61;
  p_output1[51]=-1.;
  p_output1[52]=t116;
  p_output1[53]=t361;
  p_output1[54]=1.;
  p_output1[55]=t116;
  p_output1[56]=0.333333333333333*t2793*t61;
  p_output1[57]=-0.333333333333333*t2793*t61;
  p_output1[58]=-1.;
  p_output1[59]=t116;
  p_output1[60]=t361;
  p_output1[61]=1.;
  p_output1[62]=t116;
  p_output1[63]=0.333333333333333*t2813*t61;
  p_output1[64]=-0.333333333333333*t2813*t61;
  p_output1[65]=-1.;
  p_output1[66]=t116;
  p_output1[67]=t361;
  p_output1[68]=1.;
  p_output1[69]=t116;
  p_output1[70]=0.333333333333333*t2989*t61;
  p_output1[71]=-0.333333333333333*t2989*t61;
  p_output1[72]=-1.;
  p_output1[73]=t116;
  p_output1[74]=t361;
  p_output1[75]=1.;
  p_output1[76]=t116;
  p_output1[77]=0.333333333333333*t3015*t61;
  p_output1[78]=-0.333333333333333*t3015*t61;
  p_output1[79]=-1.;
  p_output1[80]=t116;
  p_output1[81]=t361;
  p_output1[82]=1.;
  p_output1[83]=t116;
  p_output1[84]=0.333333333333333*t3233*t61;
  p_output1[85]=-0.333333333333333*t3233*t61;
  p_output1[86]=-1.;
  p_output1[87]=t116;
  p_output1[88]=t361;
  p_output1[89]=1.;
  p_output1[90]=t116;
  p_output1[91]=0.333333333333333*t3252*t61;
  p_output1[92]=-0.333333333333333*t3252*t61;
  p_output1[93]=-1.;
  p_output1[94]=t116;
  p_output1[95]=t361;
  p_output1[96]=1.;
  p_output1[97]=t116;
  p_output1[98]=0.333333333333333*t3312*t61;
  p_output1[99]=-0.333333333333333*t3312*t61;
  p_output1[100]=-1.;
  p_output1[101]=t116;
  p_output1[102]=t361;
  p_output1[103]=1.;
  p_output1[104]=t116;
  p_output1[105]=0.333333333333333*t3568*t61;
  p_output1[106]=-0.333333333333333*t3568*t61;
  p_output1[107]=-1.;
  p_output1[108]=t116;
  p_output1[109]=t361;
  p_output1[110]=1.;
  p_output1[111]=t116;
  p_output1[112]=0.333333333333333*t3615*t61;
  p_output1[113]=-0.333333333333333*t3615*t61;
  p_output1[114]=-1.;
  p_output1[115]=t116;
  p_output1[116]=t361;
  p_output1[117]=1.;
  p_output1[118]=t116;
  p_output1[119]=0.333333333333333*t3676*t61;
  p_output1[120]=-0.333333333333333*t3676*t61;
  p_output1[121]=-1.;
  p_output1[122]=t116;
  p_output1[123]=t361;
  p_output1[124]=1.;
  p_output1[125]=t116;
  p_output1[126]=0.25*t3795*t61;
  p_output1[127]=-0.25*t3795*t61;
  p_output1[128]=-0.5;
  p_output1[129]=t3840;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t3852;
  p_output1[133]=0.25*t3869*t61;
  p_output1[134]=-0.25*t3869*t61;
  p_output1[135]=-0.5;
  p_output1[136]=t3840;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t3852;
  p_output1[140]=0.25*t4144*t61;
  p_output1[141]=-0.25*t4144*t61;
  p_output1[142]=-0.5;
  p_output1[143]=t3840;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t3852;
  p_output1[147]=0.25*t4638*t61;
  p_output1[148]=-0.25*t4638*t61;
  p_output1[149]=-0.5;
  p_output1[150]=t3840;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t3852;
  p_output1[154]=0.25*t4935*t61;
  p_output1[155]=-0.25*t4935*t61;
  p_output1[156]=-0.5;
  p_output1[157]=t3840;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t3852;
  p_output1[161]=0.25*t5037*t61;
  p_output1[162]=-0.25*t5037*t61;
  p_output1[163]=-0.5;
  p_output1[164]=t3840;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t3852;
  p_output1[168]=0.25*t5057*t61;
  p_output1[169]=-0.25*t5057*t61;
  p_output1[170]=-0.5;
  p_output1[171]=t3840;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t3852;
  p_output1[175]=0.25*t5227*t61;
  p_output1[176]=-0.25*t5227*t61;
  p_output1[177]=-0.5;
  p_output1[178]=t3840;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t3852;
  p_output1[182]=0.25*t5305*t61;
  p_output1[183]=-0.25*t5305*t61;
  p_output1[184]=-0.5;
  p_output1[185]=t3840;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t3852;
  p_output1[189]=0.25*t5525*t61;
  p_output1[190]=-0.25*t5525*t61;
  p_output1[191]=-0.5;
  p_output1[192]=t3840;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t3852;
  p_output1[196]=0.25*t10504*t61;
  p_output1[197]=-0.25*t10504*t61;
  p_output1[198]=-0.5;
  p_output1[199]=t3840;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t3852;
  p_output1[203]=0.25*t10868*t61;
  p_output1[204]=-0.25*t10868*t61;
  p_output1[205]=-0.5;
  p_output1[206]=t3840;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t3852;
  p_output1[210]=0.25*t11107*t61;
  p_output1[211]=-0.25*t11107*t61;
  p_output1[212]=-0.5;
  p_output1[213]=t3840;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t3852;
  p_output1[217]=0.25*t11196*t61;
  p_output1[218]=-0.25*t11196*t61;
  p_output1[219]=-0.5;
  p_output1[220]=t3840;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t3852;
  p_output1[224]=0.25*t11240*t61;
  p_output1[225]=-0.25*t11240*t61;
  p_output1[226]=-0.5;
  p_output1[227]=t3840;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t3852;
  p_output1[231]=0.25*t11254*t61;
  p_output1[232]=-0.25*t11254*t61;
  p_output1[233]=-0.5;
  p_output1[234]=t3840;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t3852;
  p_output1[238]=0.25*t11393*t61;
  p_output1[239]=-0.25*t11393*t61;
  p_output1[240]=-0.5;
  p_output1[241]=t3840;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t3852;
  p_output1[245]=0.25*t12521*t61;
  p_output1[246]=-0.25*t12521*t61;
  p_output1[247]=-0.5;
  p_output1[248]=t3840;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t3852;
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
