/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:50 GMT+02:00
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
  double t59;
  double t496;
  double t713;
  double t741;
  double t847;
  double t883;
  double t894;
  double t1001;
  double t1092;
  double t960;
  double t1281;
  double t1387;
  double t1474;
  double t1499;
  double t1718;
  double t1793;
  double t1817;
  double t1820;
  double t1836;
  double t1851;
  double t1870;
  double t1949;
  double t2045;
  double t2261;
  double t2374;
  double t2400;
  double t2416;
  double t2488;
  double t2505;
  double t2538;
  double t2623;
  double t2659;
  double t2694;
  double t2700;
  double t2772;
  double t2781;
  double t2846;
  double t2852;
  double t2922;
  double t2996;
  double t3019;
  double t3031;
  double t3067;
  double t3076;
  double t3193;
  double t3233;
  double t3116;
  double t3117;
  double t3339;
  double t3365;
  double t3395;
  double t3406;
  double t3462;
  double t3637;
  double t3691;
  double t3698;
  double t3757;
  double t3800;
  double t3823;
  double t3827;
  double t3885;
  double t3886;
  double t3935;
  double t3940;
  double t4014;
  double t4019;
  double t4160;
  double t4481;
  double t4518;
  double t4530;
  double t4598;
  double t4613;
  double t4631;
  double t4636;
  double t4944;
  double t4950;
  double t5094;
  double t5095;
  double t5139;
  double t5295;
  t59 = 4.*var5[0];
  t496 = t59 + var7[0] + var3[0];
  t713 = -1. + var8[0];
  t741 = 1/t713;
  t847 = -1.*var1[0];
  t883 = t847 + var1[1];
  t894 = -0.333333333333333*t741*t883;
  t1001 = 4.*var5[1];
  t1092 = t1001 + var7[1] + var3[1];
  t960 = -1.33333333333333*t741*t883;
  t1281 = 4.*var5[2];
  t1387 = t1281 + var7[2] + var3[2];
  t1474 = 4.*var5[3];
  t1499 = t1474 + var7[3] + var3[3];
  t1718 = 4.*var5[4];
  t1793 = t1718 + var7[4] + var3[4];
  t1817 = 4.*var5[5];
  t1820 = t1817 + var7[5] + var3[5];
  t1836 = 4.*var5[6];
  t1851 = t1836 + var7[6] + var3[6];
  t1870 = 4.*var5[7];
  t1949 = t1870 + var7[7] + var3[7];
  t2045 = 4.*var5[8];
  t2261 = t2045 + var7[8] + var3[8];
  t2374 = 4.*var5[9];
  t2400 = t2374 + var7[9] + var3[9];
  t2416 = 4.*var5[10];
  t2488 = t2416 + var7[10] + var3[10];
  t2505 = 4.*var5[11];
  t2538 = t2505 + var7[11] + var3[11];
  t2623 = 4.*var5[12];
  t2659 = t2623 + var7[12] + var3[12];
  t2694 = 4.*var5[13];
  t2700 = t2694 + var7[13] + var3[13];
  t2772 = 4.*var5[14];
  t2781 = t2772 + var7[14] + var3[14];
  t2846 = 4.*var5[15];
  t2852 = t2846 + var7[15] + var3[15];
  t2922 = 4.*var5[16];
  t2996 = t2922 + var7[16] + var3[16];
  t3019 = 4.*var5[17];
  t3031 = t3019 + var7[17] + var3[17];
  t3067 = -1.*var7[0];
  t3076 = t3067 + var3[0];
  t3193 = -1.*var7[1];
  t3233 = t3193 + var3[1];
  t3116 = -0.25*t741*t883;
  t3117 = 0.25*t741*t883;
  t3339 = -1.*var7[2];
  t3365 = t3339 + var3[2];
  t3395 = -1.*var7[3];
  t3406 = t3395 + var3[3];
  t3462 = -1.*var7[4];
  t3637 = t3462 + var3[4];
  t3691 = -1.*var7[5];
  t3698 = t3691 + var3[5];
  t3757 = -1.*var7[6];
  t3800 = t3757 + var3[6];
  t3823 = -1.*var7[7];
  t3827 = t3823 + var3[7];
  t3885 = -1.*var7[8];
  t3886 = t3885 + var3[8];
  t3935 = -1.*var7[9];
  t3940 = t3935 + var3[9];
  t4014 = -1.*var7[10];
  t4019 = t4014 + var3[10];
  t4160 = -1.*var7[11];
  t4481 = t4160 + var3[11];
  t4518 = -1.*var7[12];
  t4530 = t4518 + var3[12];
  t4598 = -1.*var7[13];
  t4613 = t4598 + var3[13];
  t4631 = -1.*var7[14];
  t4636 = t4631 + var3[14];
  t4944 = -1.*var7[15];
  t4950 = t4944 + var3[15];
  t5094 = -1.*var7[16];
  t5095 = t5094 + var3[16];
  t5139 = -1.*var7[17];
  t5295 = t5139 + var3[17];
  p_output1[0]=0.333333333333333*t496*t741;
  p_output1[1]=-0.333333333333333*t496*t741;
  p_output1[2]=-1.;
  p_output1[3]=t894;
  p_output1[4]=t960;
  p_output1[5]=1.;
  p_output1[6]=t894;
  p_output1[7]=0.333333333333333*t1092*t741;
  p_output1[8]=-0.333333333333333*t1092*t741;
  p_output1[9]=-1.;
  p_output1[10]=t894;
  p_output1[11]=t960;
  p_output1[12]=1.;
  p_output1[13]=t894;
  p_output1[14]=0.333333333333333*t1387*t741;
  p_output1[15]=-0.333333333333333*t1387*t741;
  p_output1[16]=-1.;
  p_output1[17]=t894;
  p_output1[18]=t960;
  p_output1[19]=1.;
  p_output1[20]=t894;
  p_output1[21]=0.333333333333333*t1499*t741;
  p_output1[22]=-0.333333333333333*t1499*t741;
  p_output1[23]=-1.;
  p_output1[24]=t894;
  p_output1[25]=t960;
  p_output1[26]=1.;
  p_output1[27]=t894;
  p_output1[28]=0.333333333333333*t1793*t741;
  p_output1[29]=-0.333333333333333*t1793*t741;
  p_output1[30]=-1.;
  p_output1[31]=t894;
  p_output1[32]=t960;
  p_output1[33]=1.;
  p_output1[34]=t894;
  p_output1[35]=0.333333333333333*t1820*t741;
  p_output1[36]=-0.333333333333333*t1820*t741;
  p_output1[37]=-1.;
  p_output1[38]=t894;
  p_output1[39]=t960;
  p_output1[40]=1.;
  p_output1[41]=t894;
  p_output1[42]=0.333333333333333*t1851*t741;
  p_output1[43]=-0.333333333333333*t1851*t741;
  p_output1[44]=-1.;
  p_output1[45]=t894;
  p_output1[46]=t960;
  p_output1[47]=1.;
  p_output1[48]=t894;
  p_output1[49]=0.333333333333333*t1949*t741;
  p_output1[50]=-0.333333333333333*t1949*t741;
  p_output1[51]=-1.;
  p_output1[52]=t894;
  p_output1[53]=t960;
  p_output1[54]=1.;
  p_output1[55]=t894;
  p_output1[56]=0.333333333333333*t2261*t741;
  p_output1[57]=-0.333333333333333*t2261*t741;
  p_output1[58]=-1.;
  p_output1[59]=t894;
  p_output1[60]=t960;
  p_output1[61]=1.;
  p_output1[62]=t894;
  p_output1[63]=0.333333333333333*t2400*t741;
  p_output1[64]=-0.333333333333333*t2400*t741;
  p_output1[65]=-1.;
  p_output1[66]=t894;
  p_output1[67]=t960;
  p_output1[68]=1.;
  p_output1[69]=t894;
  p_output1[70]=0.333333333333333*t2488*t741;
  p_output1[71]=-0.333333333333333*t2488*t741;
  p_output1[72]=-1.;
  p_output1[73]=t894;
  p_output1[74]=t960;
  p_output1[75]=1.;
  p_output1[76]=t894;
  p_output1[77]=0.333333333333333*t2538*t741;
  p_output1[78]=-0.333333333333333*t2538*t741;
  p_output1[79]=-1.;
  p_output1[80]=t894;
  p_output1[81]=t960;
  p_output1[82]=1.;
  p_output1[83]=t894;
  p_output1[84]=0.333333333333333*t2659*t741;
  p_output1[85]=-0.333333333333333*t2659*t741;
  p_output1[86]=-1.;
  p_output1[87]=t894;
  p_output1[88]=t960;
  p_output1[89]=1.;
  p_output1[90]=t894;
  p_output1[91]=0.333333333333333*t2700*t741;
  p_output1[92]=-0.333333333333333*t2700*t741;
  p_output1[93]=-1.;
  p_output1[94]=t894;
  p_output1[95]=t960;
  p_output1[96]=1.;
  p_output1[97]=t894;
  p_output1[98]=0.333333333333333*t2781*t741;
  p_output1[99]=-0.333333333333333*t2781*t741;
  p_output1[100]=-1.;
  p_output1[101]=t894;
  p_output1[102]=t960;
  p_output1[103]=1.;
  p_output1[104]=t894;
  p_output1[105]=0.333333333333333*t2852*t741;
  p_output1[106]=-0.333333333333333*t2852*t741;
  p_output1[107]=-1.;
  p_output1[108]=t894;
  p_output1[109]=t960;
  p_output1[110]=1.;
  p_output1[111]=t894;
  p_output1[112]=0.333333333333333*t2996*t741;
  p_output1[113]=-0.333333333333333*t2996*t741;
  p_output1[114]=-1.;
  p_output1[115]=t894;
  p_output1[116]=t960;
  p_output1[117]=1.;
  p_output1[118]=t894;
  p_output1[119]=0.333333333333333*t3031*t741;
  p_output1[120]=-0.333333333333333*t3031*t741;
  p_output1[121]=-1.;
  p_output1[122]=t894;
  p_output1[123]=t960;
  p_output1[124]=1.;
  p_output1[125]=t894;
  p_output1[126]=0.25*t3076*t741;
  p_output1[127]=-0.25*t3076*t741;
  p_output1[128]=-0.5;
  p_output1[129]=t3116;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t3117;
  p_output1[133]=0.25*t3233*t741;
  p_output1[134]=-0.25*t3233*t741;
  p_output1[135]=-0.5;
  p_output1[136]=t3116;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t3117;
  p_output1[140]=0.25*t3365*t741;
  p_output1[141]=-0.25*t3365*t741;
  p_output1[142]=-0.5;
  p_output1[143]=t3116;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t3117;
  p_output1[147]=0.25*t3406*t741;
  p_output1[148]=-0.25*t3406*t741;
  p_output1[149]=-0.5;
  p_output1[150]=t3116;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t3117;
  p_output1[154]=0.25*t3637*t741;
  p_output1[155]=-0.25*t3637*t741;
  p_output1[156]=-0.5;
  p_output1[157]=t3116;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t3117;
  p_output1[161]=0.25*t3698*t741;
  p_output1[162]=-0.25*t3698*t741;
  p_output1[163]=-0.5;
  p_output1[164]=t3116;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t3117;
  p_output1[168]=0.25*t3800*t741;
  p_output1[169]=-0.25*t3800*t741;
  p_output1[170]=-0.5;
  p_output1[171]=t3116;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t3117;
  p_output1[175]=0.25*t3827*t741;
  p_output1[176]=-0.25*t3827*t741;
  p_output1[177]=-0.5;
  p_output1[178]=t3116;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t3117;
  p_output1[182]=0.25*t3886*t741;
  p_output1[183]=-0.25*t3886*t741;
  p_output1[184]=-0.5;
  p_output1[185]=t3116;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t3117;
  p_output1[189]=0.25*t3940*t741;
  p_output1[190]=-0.25*t3940*t741;
  p_output1[191]=-0.5;
  p_output1[192]=t3116;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t3117;
  p_output1[196]=0.25*t4019*t741;
  p_output1[197]=-0.25*t4019*t741;
  p_output1[198]=-0.5;
  p_output1[199]=t3116;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t3117;
  p_output1[203]=0.25*t4481*t741;
  p_output1[204]=-0.25*t4481*t741;
  p_output1[205]=-0.5;
  p_output1[206]=t3116;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t3117;
  p_output1[210]=0.25*t4530*t741;
  p_output1[211]=-0.25*t4530*t741;
  p_output1[212]=-0.5;
  p_output1[213]=t3116;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t3117;
  p_output1[217]=0.25*t4613*t741;
  p_output1[218]=-0.25*t4613*t741;
  p_output1[219]=-0.5;
  p_output1[220]=t3116;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t3117;
  p_output1[224]=0.25*t4636*t741;
  p_output1[225]=-0.25*t4636*t741;
  p_output1[226]=-0.5;
  p_output1[227]=t3116;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t3117;
  p_output1[231]=0.25*t4950*t741;
  p_output1[232]=-0.25*t4950*t741;
  p_output1[233]=-0.5;
  p_output1[234]=t3116;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t3117;
  p_output1[238]=0.25*t5095*t741;
  p_output1[239]=-0.25*t5095*t741;
  p_output1[240]=-0.5;
  p_output1[241]=t3116;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t3117;
  p_output1[245]=0.25*t5295*t741;
  p_output1[246]=-0.25*t5295*t741;
  p_output1[247]=-0.5;
  p_output1[248]=t3116;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t3117;
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
