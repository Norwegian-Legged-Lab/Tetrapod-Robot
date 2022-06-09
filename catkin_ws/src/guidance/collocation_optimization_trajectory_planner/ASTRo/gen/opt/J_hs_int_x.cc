/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:07 GMT+02:00
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
  double t23;
  double t24;
  double t31;
  double t33;
  double t36;
  double t38;
  double t40;
  double t44;
  double t58;
  double t41;
  double t185;
  double t597;
  double t2774;
  double t2918;
  double t3001;
  double t3052;
  double t3110;
  double t3116;
  double t3196;
  double t3212;
  double t3280;
  double t3285;
  double t3317;
  double t3326;
  double t3363;
  double t3369;
  double t3404;
  double t3412;
  double t3464;
  double t3468;
  double t3561;
  double t3563;
  double t3592;
  double t3595;
  double t3618;
  double t3626;
  double t3648;
  double t3650;
  double t3692;
  double t3697;
  double t3809;
  double t3826;
  double t3848;
  double t3909;
  double t4169;
  double t4200;
  double t3961;
  double t4144;
  double t4280;
  double t4290;
  double t4336;
  double t4337;
  double t4474;
  double t4558;
  double t4571;
  double t4577;
  double t4595;
  double t4600;
  double t4632;
  double t4638;
  double t4686;
  double t4696;
  double t4779;
  double t4807;
  double t4870;
  double t4894;
  double t4956;
  double t5011;
  double t5045;
  double t5061;
  double t5178;
  double t5212;
  double t5258;
  double t5277;
  double t5320;
  double t5327;
  double t5331;
  double t5332;
  double t5336;
  double t5337;
  t23 = 4.*var5[0];
  t24 = t23 + var7[0] + var3[0];
  t31 = -1. + var8[0];
  t33 = 1/t31;
  t36 = -1.*var1[0];
  t38 = t36 + var1[1];
  t40 = -0.333333333333333*t33*t38;
  t44 = 4.*var5[1];
  t58 = t44 + var7[1] + var3[1];
  t41 = -1.33333333333333*t33*t38;
  t185 = 4.*var5[2];
  t597 = t185 + var7[2] + var3[2];
  t2774 = 4.*var5[3];
  t2918 = t2774 + var7[3] + var3[3];
  t3001 = 4.*var5[4];
  t3052 = t3001 + var7[4] + var3[4];
  t3110 = 4.*var5[5];
  t3116 = t3110 + var7[5] + var3[5];
  t3196 = 4.*var5[6];
  t3212 = t3196 + var7[6] + var3[6];
  t3280 = 4.*var5[7];
  t3285 = t3280 + var7[7] + var3[7];
  t3317 = 4.*var5[8];
  t3326 = t3317 + var7[8] + var3[8];
  t3363 = 4.*var5[9];
  t3369 = t3363 + var7[9] + var3[9];
  t3404 = 4.*var5[10];
  t3412 = t3404 + var7[10] + var3[10];
  t3464 = 4.*var5[11];
  t3468 = t3464 + var7[11] + var3[11];
  t3561 = 4.*var5[12];
  t3563 = t3561 + var7[12] + var3[12];
  t3592 = 4.*var5[13];
  t3595 = t3592 + var7[13] + var3[13];
  t3618 = 4.*var5[14];
  t3626 = t3618 + var7[14] + var3[14];
  t3648 = 4.*var5[15];
  t3650 = t3648 + var7[15] + var3[15];
  t3692 = 4.*var5[16];
  t3697 = t3692 + var7[16] + var3[16];
  t3809 = 4.*var5[17];
  t3826 = t3809 + var7[17] + var3[17];
  t3848 = -1.*var7[0];
  t3909 = t3848 + var3[0];
  t4169 = -1.*var7[1];
  t4200 = t4169 + var3[1];
  t3961 = -0.25*t33*t38;
  t4144 = 0.25*t33*t38;
  t4280 = -1.*var7[2];
  t4290 = t4280 + var3[2];
  t4336 = -1.*var7[3];
  t4337 = t4336 + var3[3];
  t4474 = -1.*var7[4];
  t4558 = t4474 + var3[4];
  t4571 = -1.*var7[5];
  t4577 = t4571 + var3[5];
  t4595 = -1.*var7[6];
  t4600 = t4595 + var3[6];
  t4632 = -1.*var7[7];
  t4638 = t4632 + var3[7];
  t4686 = -1.*var7[8];
  t4696 = t4686 + var3[8];
  t4779 = -1.*var7[9];
  t4807 = t4779 + var3[9];
  t4870 = -1.*var7[10];
  t4894 = t4870 + var3[10];
  t4956 = -1.*var7[11];
  t5011 = t4956 + var3[11];
  t5045 = -1.*var7[12];
  t5061 = t5045 + var3[12];
  t5178 = -1.*var7[13];
  t5212 = t5178 + var3[13];
  t5258 = -1.*var7[14];
  t5277 = t5258 + var3[14];
  t5320 = -1.*var7[15];
  t5327 = t5320 + var3[15];
  t5331 = -1.*var7[16];
  t5332 = t5331 + var3[16];
  t5336 = -1.*var7[17];
  t5337 = t5336 + var3[17];
  p_output1[0]=0.333333333333333*t24*t33;
  p_output1[1]=-0.333333333333333*t24*t33;
  p_output1[2]=-1.;
  p_output1[3]=t40;
  p_output1[4]=t41;
  p_output1[5]=1.;
  p_output1[6]=t40;
  p_output1[7]=0.333333333333333*t33*t58;
  p_output1[8]=-0.333333333333333*t33*t58;
  p_output1[9]=-1.;
  p_output1[10]=t40;
  p_output1[11]=t41;
  p_output1[12]=1.;
  p_output1[13]=t40;
  p_output1[14]=0.333333333333333*t33*t597;
  p_output1[15]=-0.333333333333333*t33*t597;
  p_output1[16]=-1.;
  p_output1[17]=t40;
  p_output1[18]=t41;
  p_output1[19]=1.;
  p_output1[20]=t40;
  p_output1[21]=0.333333333333333*t2918*t33;
  p_output1[22]=-0.333333333333333*t2918*t33;
  p_output1[23]=-1.;
  p_output1[24]=t40;
  p_output1[25]=t41;
  p_output1[26]=1.;
  p_output1[27]=t40;
  p_output1[28]=0.333333333333333*t3052*t33;
  p_output1[29]=-0.333333333333333*t3052*t33;
  p_output1[30]=-1.;
  p_output1[31]=t40;
  p_output1[32]=t41;
  p_output1[33]=1.;
  p_output1[34]=t40;
  p_output1[35]=0.333333333333333*t3116*t33;
  p_output1[36]=-0.333333333333333*t3116*t33;
  p_output1[37]=-1.;
  p_output1[38]=t40;
  p_output1[39]=t41;
  p_output1[40]=1.;
  p_output1[41]=t40;
  p_output1[42]=0.333333333333333*t3212*t33;
  p_output1[43]=-0.333333333333333*t3212*t33;
  p_output1[44]=-1.;
  p_output1[45]=t40;
  p_output1[46]=t41;
  p_output1[47]=1.;
  p_output1[48]=t40;
  p_output1[49]=0.333333333333333*t3285*t33;
  p_output1[50]=-0.333333333333333*t3285*t33;
  p_output1[51]=-1.;
  p_output1[52]=t40;
  p_output1[53]=t41;
  p_output1[54]=1.;
  p_output1[55]=t40;
  p_output1[56]=0.333333333333333*t33*t3326;
  p_output1[57]=-0.333333333333333*t33*t3326;
  p_output1[58]=-1.;
  p_output1[59]=t40;
  p_output1[60]=t41;
  p_output1[61]=1.;
  p_output1[62]=t40;
  p_output1[63]=0.333333333333333*t33*t3369;
  p_output1[64]=-0.333333333333333*t33*t3369;
  p_output1[65]=-1.;
  p_output1[66]=t40;
  p_output1[67]=t41;
  p_output1[68]=1.;
  p_output1[69]=t40;
  p_output1[70]=0.333333333333333*t33*t3412;
  p_output1[71]=-0.333333333333333*t33*t3412;
  p_output1[72]=-1.;
  p_output1[73]=t40;
  p_output1[74]=t41;
  p_output1[75]=1.;
  p_output1[76]=t40;
  p_output1[77]=0.333333333333333*t33*t3468;
  p_output1[78]=-0.333333333333333*t33*t3468;
  p_output1[79]=-1.;
  p_output1[80]=t40;
  p_output1[81]=t41;
  p_output1[82]=1.;
  p_output1[83]=t40;
  p_output1[84]=0.333333333333333*t33*t3563;
  p_output1[85]=-0.333333333333333*t33*t3563;
  p_output1[86]=-1.;
  p_output1[87]=t40;
  p_output1[88]=t41;
  p_output1[89]=1.;
  p_output1[90]=t40;
  p_output1[91]=0.333333333333333*t33*t3595;
  p_output1[92]=-0.333333333333333*t33*t3595;
  p_output1[93]=-1.;
  p_output1[94]=t40;
  p_output1[95]=t41;
  p_output1[96]=1.;
  p_output1[97]=t40;
  p_output1[98]=0.333333333333333*t33*t3626;
  p_output1[99]=-0.333333333333333*t33*t3626;
  p_output1[100]=-1.;
  p_output1[101]=t40;
  p_output1[102]=t41;
  p_output1[103]=1.;
  p_output1[104]=t40;
  p_output1[105]=0.333333333333333*t33*t3650;
  p_output1[106]=-0.333333333333333*t33*t3650;
  p_output1[107]=-1.;
  p_output1[108]=t40;
  p_output1[109]=t41;
  p_output1[110]=1.;
  p_output1[111]=t40;
  p_output1[112]=0.333333333333333*t33*t3697;
  p_output1[113]=-0.333333333333333*t33*t3697;
  p_output1[114]=-1.;
  p_output1[115]=t40;
  p_output1[116]=t41;
  p_output1[117]=1.;
  p_output1[118]=t40;
  p_output1[119]=0.333333333333333*t33*t3826;
  p_output1[120]=-0.333333333333333*t33*t3826;
  p_output1[121]=-1.;
  p_output1[122]=t40;
  p_output1[123]=t41;
  p_output1[124]=1.;
  p_output1[125]=t40;
  p_output1[126]=0.25*t33*t3909;
  p_output1[127]=-0.25*t33*t3909;
  p_output1[128]=-0.5;
  p_output1[129]=t3961;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t4144;
  p_output1[133]=0.25*t33*t4200;
  p_output1[134]=-0.25*t33*t4200;
  p_output1[135]=-0.5;
  p_output1[136]=t3961;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t4144;
  p_output1[140]=0.25*t33*t4290;
  p_output1[141]=-0.25*t33*t4290;
  p_output1[142]=-0.5;
  p_output1[143]=t3961;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t4144;
  p_output1[147]=0.25*t33*t4337;
  p_output1[148]=-0.25*t33*t4337;
  p_output1[149]=-0.5;
  p_output1[150]=t3961;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t4144;
  p_output1[154]=0.25*t33*t4558;
  p_output1[155]=-0.25*t33*t4558;
  p_output1[156]=-0.5;
  p_output1[157]=t3961;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t4144;
  p_output1[161]=0.25*t33*t4577;
  p_output1[162]=-0.25*t33*t4577;
  p_output1[163]=-0.5;
  p_output1[164]=t3961;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t4144;
  p_output1[168]=0.25*t33*t4600;
  p_output1[169]=-0.25*t33*t4600;
  p_output1[170]=-0.5;
  p_output1[171]=t3961;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t4144;
  p_output1[175]=0.25*t33*t4638;
  p_output1[176]=-0.25*t33*t4638;
  p_output1[177]=-0.5;
  p_output1[178]=t3961;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t4144;
  p_output1[182]=0.25*t33*t4696;
  p_output1[183]=-0.25*t33*t4696;
  p_output1[184]=-0.5;
  p_output1[185]=t3961;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t4144;
  p_output1[189]=0.25*t33*t4807;
  p_output1[190]=-0.25*t33*t4807;
  p_output1[191]=-0.5;
  p_output1[192]=t3961;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t4144;
  p_output1[196]=0.25*t33*t4894;
  p_output1[197]=-0.25*t33*t4894;
  p_output1[198]=-0.5;
  p_output1[199]=t3961;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t4144;
  p_output1[203]=0.25*t33*t5011;
  p_output1[204]=-0.25*t33*t5011;
  p_output1[205]=-0.5;
  p_output1[206]=t3961;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t4144;
  p_output1[210]=0.25*t33*t5061;
  p_output1[211]=-0.25*t33*t5061;
  p_output1[212]=-0.5;
  p_output1[213]=t3961;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t4144;
  p_output1[217]=0.25*t33*t5212;
  p_output1[218]=-0.25*t33*t5212;
  p_output1[219]=-0.5;
  p_output1[220]=t3961;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t4144;
  p_output1[224]=0.25*t33*t5277;
  p_output1[225]=-0.25*t33*t5277;
  p_output1[226]=-0.5;
  p_output1[227]=t3961;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t4144;
  p_output1[231]=0.25*t33*t5327;
  p_output1[232]=-0.25*t33*t5327;
  p_output1[233]=-0.5;
  p_output1[234]=t3961;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t4144;
  p_output1[238]=0.25*t33*t5332;
  p_output1[239]=-0.25*t33*t5332;
  p_output1[240]=-0.5;
  p_output1[241]=t3961;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t4144;
  p_output1[245]=0.25*t33*t5337;
  p_output1[246]=-0.25*t33*t5337;
  p_output1[247]=-0.5;
  p_output1[248]=t3961;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t4144;
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
