/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:10 GMT+02:00
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
  double t35;
  double t74;
  double t2967;
  double t3090;
  double t3245;
  double t3267;
  double t3301;
  double t3344;
  double t3388;
  double t3342;
  double t3511;
  double t3526;
  double t3608;
  double t3641;
  double t3743;
  double t3803;
  double t3932;
  double t4232;
  double t4342;
  double t4380;
  double t4589;
  double t4615;
  double t4748;
  double t4753;
  double t4938;
  double t5021;
  double t5228;
  double t5254;
  double t5329;
  double t5333;
  double t5659;
  double t5677;
  double t5906;
  double t5927;
  double t6016;
  double t6036;
  double t6126;
  double t6132;
  double t6295;
  double t6311;
  double t7991;
  double t8768;
  double t9283;
  double t9324;
  double t10196;
  double t10241;
  double t9362;
  double t9586;
  double t10470;
  double t10471;
  double t10474;
  double t10476;
  double t10486;
  double t10512;
  double t10563;
  double t10639;
  double t10649;
  double t10653;
  double t10661;
  double t10668;
  double t10676;
  double t10679;
  double t10688;
  double t10690;
  double t10693;
  double t10695;
  double t10699;
  double t10700;
  double t10709;
  double t10791;
  double t11028;
  double t11041;
  double t11129;
  double t11132;
  double t11581;
  double t11610;
  double t11794;
  double t11796;
  double t11803;
  double t11804;
  t35 = 4.*var5[0];
  t74 = var3[0] + t35 + var7[0];
  t2967 = -1. + var8[0];
  t3090 = 1/t2967;
  t3245 = -1.*var1[0];
  t3267 = t3245 + var1[1];
  t3301 = -0.333333333333333*t3090*t3267;
  t3344 = 4.*var5[1];
  t3388 = var3[1] + t3344 + var7[1];
  t3342 = -1.33333333333333*t3090*t3267;
  t3511 = 4.*var5[2];
  t3526 = var3[2] + t3511 + var7[2];
  t3608 = 4.*var5[3];
  t3641 = var3[3] + t3608 + var7[3];
  t3743 = 4.*var5[4];
  t3803 = var3[4] + t3743 + var7[4];
  t3932 = 4.*var5[5];
  t4232 = var3[5] + t3932 + var7[5];
  t4342 = 4.*var5[6];
  t4380 = var3[6] + t4342 + var7[6];
  t4589 = 4.*var5[7];
  t4615 = var3[7] + t4589 + var7[7];
  t4748 = 4.*var5[8];
  t4753 = var3[8] + t4748 + var7[8];
  t4938 = 4.*var5[9];
  t5021 = var3[9] + t4938 + var7[9];
  t5228 = 4.*var5[10];
  t5254 = var3[10] + t5228 + var7[10];
  t5329 = 4.*var5[11];
  t5333 = var3[11] + t5329 + var7[11];
  t5659 = 4.*var5[12];
  t5677 = var3[12] + t5659 + var7[12];
  t5906 = 4.*var5[13];
  t5927 = var3[13] + t5906 + var7[13];
  t6016 = 4.*var5[14];
  t6036 = var3[14] + t6016 + var7[14];
  t6126 = 4.*var5[15];
  t6132 = var3[15] + t6126 + var7[15];
  t6295 = 4.*var5[16];
  t6311 = var3[16] + t6295 + var7[16];
  t7991 = 4.*var5[17];
  t8768 = var3[17] + t7991 + var7[17];
  t9283 = -1.*var7[0];
  t9324 = var3[0] + t9283;
  t10196 = -1.*var7[1];
  t10241 = var3[1] + t10196;
  t9362 = -0.25*t3090*t3267;
  t9586 = 0.25*t3090*t3267;
  t10470 = -1.*var7[2];
  t10471 = var3[2] + t10470;
  t10474 = -1.*var7[3];
  t10476 = var3[3] + t10474;
  t10486 = -1.*var7[4];
  t10512 = var3[4] + t10486;
  t10563 = -1.*var7[5];
  t10639 = var3[5] + t10563;
  t10649 = -1.*var7[6];
  t10653 = var3[6] + t10649;
  t10661 = -1.*var7[7];
  t10668 = var3[7] + t10661;
  t10676 = -1.*var7[8];
  t10679 = var3[8] + t10676;
  t10688 = -1.*var7[9];
  t10690 = var3[9] + t10688;
  t10693 = -1.*var7[10];
  t10695 = var3[10] + t10693;
  t10699 = -1.*var7[11];
  t10700 = var3[11] + t10699;
  t10709 = -1.*var7[12];
  t10791 = var3[12] + t10709;
  t11028 = -1.*var7[13];
  t11041 = var3[13] + t11028;
  t11129 = -1.*var7[14];
  t11132 = var3[14] + t11129;
  t11581 = -1.*var7[15];
  t11610 = var3[15] + t11581;
  t11794 = -1.*var7[16];
  t11796 = var3[16] + t11794;
  t11803 = -1.*var7[17];
  t11804 = var3[17] + t11803;
  p_output1[0]=0.333333333333333*t3090*t74;
  p_output1[1]=-0.333333333333333*t3090*t74;
  p_output1[2]=-1.;
  p_output1[3]=t3301;
  p_output1[4]=t3342;
  p_output1[5]=1.;
  p_output1[6]=t3301;
  p_output1[7]=0.333333333333333*t3090*t3388;
  p_output1[8]=-0.333333333333333*t3090*t3388;
  p_output1[9]=-1.;
  p_output1[10]=t3301;
  p_output1[11]=t3342;
  p_output1[12]=1.;
  p_output1[13]=t3301;
  p_output1[14]=0.333333333333333*t3090*t3526;
  p_output1[15]=-0.333333333333333*t3090*t3526;
  p_output1[16]=-1.;
  p_output1[17]=t3301;
  p_output1[18]=t3342;
  p_output1[19]=1.;
  p_output1[20]=t3301;
  p_output1[21]=0.333333333333333*t3090*t3641;
  p_output1[22]=-0.333333333333333*t3090*t3641;
  p_output1[23]=-1.;
  p_output1[24]=t3301;
  p_output1[25]=t3342;
  p_output1[26]=1.;
  p_output1[27]=t3301;
  p_output1[28]=0.333333333333333*t3090*t3803;
  p_output1[29]=-0.333333333333333*t3090*t3803;
  p_output1[30]=-1.;
  p_output1[31]=t3301;
  p_output1[32]=t3342;
  p_output1[33]=1.;
  p_output1[34]=t3301;
  p_output1[35]=0.333333333333333*t3090*t4232;
  p_output1[36]=-0.333333333333333*t3090*t4232;
  p_output1[37]=-1.;
  p_output1[38]=t3301;
  p_output1[39]=t3342;
  p_output1[40]=1.;
  p_output1[41]=t3301;
  p_output1[42]=0.333333333333333*t3090*t4380;
  p_output1[43]=-0.333333333333333*t3090*t4380;
  p_output1[44]=-1.;
  p_output1[45]=t3301;
  p_output1[46]=t3342;
  p_output1[47]=1.;
  p_output1[48]=t3301;
  p_output1[49]=0.333333333333333*t3090*t4615;
  p_output1[50]=-0.333333333333333*t3090*t4615;
  p_output1[51]=-1.;
  p_output1[52]=t3301;
  p_output1[53]=t3342;
  p_output1[54]=1.;
  p_output1[55]=t3301;
  p_output1[56]=0.333333333333333*t3090*t4753;
  p_output1[57]=-0.333333333333333*t3090*t4753;
  p_output1[58]=-1.;
  p_output1[59]=t3301;
  p_output1[60]=t3342;
  p_output1[61]=1.;
  p_output1[62]=t3301;
  p_output1[63]=0.333333333333333*t3090*t5021;
  p_output1[64]=-0.333333333333333*t3090*t5021;
  p_output1[65]=-1.;
  p_output1[66]=t3301;
  p_output1[67]=t3342;
  p_output1[68]=1.;
  p_output1[69]=t3301;
  p_output1[70]=0.333333333333333*t3090*t5254;
  p_output1[71]=-0.333333333333333*t3090*t5254;
  p_output1[72]=-1.;
  p_output1[73]=t3301;
  p_output1[74]=t3342;
  p_output1[75]=1.;
  p_output1[76]=t3301;
  p_output1[77]=0.333333333333333*t3090*t5333;
  p_output1[78]=-0.333333333333333*t3090*t5333;
  p_output1[79]=-1.;
  p_output1[80]=t3301;
  p_output1[81]=t3342;
  p_output1[82]=1.;
  p_output1[83]=t3301;
  p_output1[84]=0.333333333333333*t3090*t5677;
  p_output1[85]=-0.333333333333333*t3090*t5677;
  p_output1[86]=-1.;
  p_output1[87]=t3301;
  p_output1[88]=t3342;
  p_output1[89]=1.;
  p_output1[90]=t3301;
  p_output1[91]=0.333333333333333*t3090*t5927;
  p_output1[92]=-0.333333333333333*t3090*t5927;
  p_output1[93]=-1.;
  p_output1[94]=t3301;
  p_output1[95]=t3342;
  p_output1[96]=1.;
  p_output1[97]=t3301;
  p_output1[98]=0.333333333333333*t3090*t6036;
  p_output1[99]=-0.333333333333333*t3090*t6036;
  p_output1[100]=-1.;
  p_output1[101]=t3301;
  p_output1[102]=t3342;
  p_output1[103]=1.;
  p_output1[104]=t3301;
  p_output1[105]=0.333333333333333*t3090*t6132;
  p_output1[106]=-0.333333333333333*t3090*t6132;
  p_output1[107]=-1.;
  p_output1[108]=t3301;
  p_output1[109]=t3342;
  p_output1[110]=1.;
  p_output1[111]=t3301;
  p_output1[112]=0.333333333333333*t3090*t6311;
  p_output1[113]=-0.333333333333333*t3090*t6311;
  p_output1[114]=-1.;
  p_output1[115]=t3301;
  p_output1[116]=t3342;
  p_output1[117]=1.;
  p_output1[118]=t3301;
  p_output1[119]=0.333333333333333*t3090*t8768;
  p_output1[120]=-0.333333333333333*t3090*t8768;
  p_output1[121]=-1.;
  p_output1[122]=t3301;
  p_output1[123]=t3342;
  p_output1[124]=1.;
  p_output1[125]=t3301;
  p_output1[126]=0.25*t3090*t9324;
  p_output1[127]=-0.25*t3090*t9324;
  p_output1[128]=-0.5;
  p_output1[129]=t9362;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t9586;
  p_output1[133]=0.25*t10241*t3090;
  p_output1[134]=-0.25*t10241*t3090;
  p_output1[135]=-0.5;
  p_output1[136]=t9362;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t9586;
  p_output1[140]=0.25*t10471*t3090;
  p_output1[141]=-0.25*t10471*t3090;
  p_output1[142]=-0.5;
  p_output1[143]=t9362;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t9586;
  p_output1[147]=0.25*t10476*t3090;
  p_output1[148]=-0.25*t10476*t3090;
  p_output1[149]=-0.5;
  p_output1[150]=t9362;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t9586;
  p_output1[154]=0.25*t10512*t3090;
  p_output1[155]=-0.25*t10512*t3090;
  p_output1[156]=-0.5;
  p_output1[157]=t9362;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t9586;
  p_output1[161]=0.25*t10639*t3090;
  p_output1[162]=-0.25*t10639*t3090;
  p_output1[163]=-0.5;
  p_output1[164]=t9362;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t9586;
  p_output1[168]=0.25*t10653*t3090;
  p_output1[169]=-0.25*t10653*t3090;
  p_output1[170]=-0.5;
  p_output1[171]=t9362;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t9586;
  p_output1[175]=0.25*t10668*t3090;
  p_output1[176]=-0.25*t10668*t3090;
  p_output1[177]=-0.5;
  p_output1[178]=t9362;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t9586;
  p_output1[182]=0.25*t10679*t3090;
  p_output1[183]=-0.25*t10679*t3090;
  p_output1[184]=-0.5;
  p_output1[185]=t9362;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t9586;
  p_output1[189]=0.25*t10690*t3090;
  p_output1[190]=-0.25*t10690*t3090;
  p_output1[191]=-0.5;
  p_output1[192]=t9362;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t9586;
  p_output1[196]=0.25*t10695*t3090;
  p_output1[197]=-0.25*t10695*t3090;
  p_output1[198]=-0.5;
  p_output1[199]=t9362;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t9586;
  p_output1[203]=0.25*t10700*t3090;
  p_output1[204]=-0.25*t10700*t3090;
  p_output1[205]=-0.5;
  p_output1[206]=t9362;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t9586;
  p_output1[210]=0.25*t10791*t3090;
  p_output1[211]=-0.25*t10791*t3090;
  p_output1[212]=-0.5;
  p_output1[213]=t9362;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t9586;
  p_output1[217]=0.25*t11041*t3090;
  p_output1[218]=-0.25*t11041*t3090;
  p_output1[219]=-0.5;
  p_output1[220]=t9362;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t9586;
  p_output1[224]=0.25*t11132*t3090;
  p_output1[225]=-0.25*t11132*t3090;
  p_output1[226]=-0.5;
  p_output1[227]=t9362;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t9586;
  p_output1[231]=0.25*t11610*t3090;
  p_output1[232]=-0.25*t11610*t3090;
  p_output1[233]=-0.5;
  p_output1[234]=t9362;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t9586;
  p_output1[238]=0.25*t11796*t3090;
  p_output1[239]=-0.25*t11796*t3090;
  p_output1[240]=-0.5;
  p_output1[241]=t9362;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t9586;
  p_output1[245]=0.25*t11804*t3090;
  p_output1[246]=-0.25*t11804*t3090;
  p_output1[247]=-0.5;
  p_output1[248]=t9362;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t9586;
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
