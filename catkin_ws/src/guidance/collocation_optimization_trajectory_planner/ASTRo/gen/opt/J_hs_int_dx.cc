/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:02 GMT+02:00
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
  double t1388;
  double t1667;
  double t2216;
  double t2271;
  double t2436;
  double t2530;
  double t2637;
  double t2743;
  double t2845;
  double t2731;
  double t3303;
  double t3555;
  double t3919;
  double t3972;
  double t4379;
  double t4404;
  double t4647;
  double t4832;
  double t4951;
  double t4966;
  double t5071;
  double t5107;
  double t5264;
  double t5279;
  double t5895;
  double t6985;
  double t10494;
  double t10497;
  double t12974;
  double t13112;
  double t14743;
  double t14767;
  double t15130;
  double t15252;
  double t17162;
  double t17448;
  double t17914;
  double t17988;
  double t19895;
  double t20123;
  double t20382;
  double t20421;
  double t20682;
  double t20808;
  double t22383;
  double t22423;
  double t22021;
  double t22248;
  double t22614;
  double t22630;
  double t22679;
  double t22704;
  double t22744;
  double t22764;
  double t22785;
  double t22786;
  double t23181;
  double t24051;
  double t24187;
  double t24223;
  double t24343;
  double t24346;
  double t24357;
  double t24375;
  double t24394;
  double t24395;
  double t24428;
  double t24442;
  double t24471;
  double t24487;
  double t24543;
  double t24576;
  double t24621;
  double t25017;
  double t25318;
  double t25355;
  double t26148;
  double t26299;
  double t27153;
  double t27154;
  t1388 = 4.*var5[0];
  t1667 = var3[0] + t1388 + var7[0];
  t2216 = -1. + var8[0];
  t2271 = 1/t2216;
  t2436 = -1.*var1[0];
  t2530 = t2436 + var1[1];
  t2637 = -0.333333333333333*t2271*t2530;
  t2743 = 4.*var5[1];
  t2845 = var3[1] + t2743 + var7[1];
  t2731 = -1.33333333333333*t2271*t2530;
  t3303 = 4.*var5[2];
  t3555 = var3[2] + t3303 + var7[2];
  t3919 = 4.*var5[3];
  t3972 = var3[3] + t3919 + var7[3];
  t4379 = 4.*var5[4];
  t4404 = var3[4] + t4379 + var7[4];
  t4647 = 4.*var5[5];
  t4832 = var3[5] + t4647 + var7[5];
  t4951 = 4.*var5[6];
  t4966 = var3[6] + t4951 + var7[6];
  t5071 = 4.*var5[7];
  t5107 = var3[7] + t5071 + var7[7];
  t5264 = 4.*var5[8];
  t5279 = var3[8] + t5264 + var7[8];
  t5895 = 4.*var5[9];
  t6985 = var3[9] + t5895 + var7[9];
  t10494 = 4.*var5[10];
  t10497 = var3[10] + t10494 + var7[10];
  t12974 = 4.*var5[11];
  t13112 = var3[11] + t12974 + var7[11];
  t14743 = 4.*var5[12];
  t14767 = var3[12] + t14743 + var7[12];
  t15130 = 4.*var5[13];
  t15252 = var3[13] + t15130 + var7[13];
  t17162 = 4.*var5[14];
  t17448 = var3[14] + t17162 + var7[14];
  t17914 = 4.*var5[15];
  t17988 = var3[15] + t17914 + var7[15];
  t19895 = 4.*var5[16];
  t20123 = var3[16] + t19895 + var7[16];
  t20382 = 4.*var5[17];
  t20421 = var3[17] + t20382 + var7[17];
  t20682 = -1.*var7[0];
  t20808 = var3[0] + t20682;
  t22383 = -1.*var7[1];
  t22423 = var3[1] + t22383;
  t22021 = -0.25*t2271*t2530;
  t22248 = 0.25*t2271*t2530;
  t22614 = -1.*var7[2];
  t22630 = var3[2] + t22614;
  t22679 = -1.*var7[3];
  t22704 = var3[3] + t22679;
  t22744 = -1.*var7[4];
  t22764 = var3[4] + t22744;
  t22785 = -1.*var7[5];
  t22786 = var3[5] + t22785;
  t23181 = -1.*var7[6];
  t24051 = var3[6] + t23181;
  t24187 = -1.*var7[7];
  t24223 = var3[7] + t24187;
  t24343 = -1.*var7[8];
  t24346 = var3[8] + t24343;
  t24357 = -1.*var7[9];
  t24375 = var3[9] + t24357;
  t24394 = -1.*var7[10];
  t24395 = var3[10] + t24394;
  t24428 = -1.*var7[11];
  t24442 = var3[11] + t24428;
  t24471 = -1.*var7[12];
  t24487 = var3[12] + t24471;
  t24543 = -1.*var7[13];
  t24576 = var3[13] + t24543;
  t24621 = -1.*var7[14];
  t25017 = var3[14] + t24621;
  t25318 = -1.*var7[15];
  t25355 = var3[15] + t25318;
  t26148 = -1.*var7[16];
  t26299 = var3[16] + t26148;
  t27153 = -1.*var7[17];
  t27154 = var3[17] + t27153;
  p_output1[0]=0.333333333333333*t1667*t2271;
  p_output1[1]=-0.333333333333333*t1667*t2271;
  p_output1[2]=-1.;
  p_output1[3]=t2637;
  p_output1[4]=t2731;
  p_output1[5]=1.;
  p_output1[6]=t2637;
  p_output1[7]=0.333333333333333*t2271*t2845;
  p_output1[8]=-0.333333333333333*t2271*t2845;
  p_output1[9]=-1.;
  p_output1[10]=t2637;
  p_output1[11]=t2731;
  p_output1[12]=1.;
  p_output1[13]=t2637;
  p_output1[14]=0.333333333333333*t2271*t3555;
  p_output1[15]=-0.333333333333333*t2271*t3555;
  p_output1[16]=-1.;
  p_output1[17]=t2637;
  p_output1[18]=t2731;
  p_output1[19]=1.;
  p_output1[20]=t2637;
  p_output1[21]=0.333333333333333*t2271*t3972;
  p_output1[22]=-0.333333333333333*t2271*t3972;
  p_output1[23]=-1.;
  p_output1[24]=t2637;
  p_output1[25]=t2731;
  p_output1[26]=1.;
  p_output1[27]=t2637;
  p_output1[28]=0.333333333333333*t2271*t4404;
  p_output1[29]=-0.333333333333333*t2271*t4404;
  p_output1[30]=-1.;
  p_output1[31]=t2637;
  p_output1[32]=t2731;
  p_output1[33]=1.;
  p_output1[34]=t2637;
  p_output1[35]=0.333333333333333*t2271*t4832;
  p_output1[36]=-0.333333333333333*t2271*t4832;
  p_output1[37]=-1.;
  p_output1[38]=t2637;
  p_output1[39]=t2731;
  p_output1[40]=1.;
  p_output1[41]=t2637;
  p_output1[42]=0.333333333333333*t2271*t4966;
  p_output1[43]=-0.333333333333333*t2271*t4966;
  p_output1[44]=-1.;
  p_output1[45]=t2637;
  p_output1[46]=t2731;
  p_output1[47]=1.;
  p_output1[48]=t2637;
  p_output1[49]=0.333333333333333*t2271*t5107;
  p_output1[50]=-0.333333333333333*t2271*t5107;
  p_output1[51]=-1.;
  p_output1[52]=t2637;
  p_output1[53]=t2731;
  p_output1[54]=1.;
  p_output1[55]=t2637;
  p_output1[56]=0.333333333333333*t2271*t5279;
  p_output1[57]=-0.333333333333333*t2271*t5279;
  p_output1[58]=-1.;
  p_output1[59]=t2637;
  p_output1[60]=t2731;
  p_output1[61]=1.;
  p_output1[62]=t2637;
  p_output1[63]=0.333333333333333*t2271*t6985;
  p_output1[64]=-0.333333333333333*t2271*t6985;
  p_output1[65]=-1.;
  p_output1[66]=t2637;
  p_output1[67]=t2731;
  p_output1[68]=1.;
  p_output1[69]=t2637;
  p_output1[70]=0.333333333333333*t10497*t2271;
  p_output1[71]=-0.333333333333333*t10497*t2271;
  p_output1[72]=-1.;
  p_output1[73]=t2637;
  p_output1[74]=t2731;
  p_output1[75]=1.;
  p_output1[76]=t2637;
  p_output1[77]=0.333333333333333*t13112*t2271;
  p_output1[78]=-0.333333333333333*t13112*t2271;
  p_output1[79]=-1.;
  p_output1[80]=t2637;
  p_output1[81]=t2731;
  p_output1[82]=1.;
  p_output1[83]=t2637;
  p_output1[84]=0.333333333333333*t14767*t2271;
  p_output1[85]=-0.333333333333333*t14767*t2271;
  p_output1[86]=-1.;
  p_output1[87]=t2637;
  p_output1[88]=t2731;
  p_output1[89]=1.;
  p_output1[90]=t2637;
  p_output1[91]=0.333333333333333*t15252*t2271;
  p_output1[92]=-0.333333333333333*t15252*t2271;
  p_output1[93]=-1.;
  p_output1[94]=t2637;
  p_output1[95]=t2731;
  p_output1[96]=1.;
  p_output1[97]=t2637;
  p_output1[98]=0.333333333333333*t17448*t2271;
  p_output1[99]=-0.333333333333333*t17448*t2271;
  p_output1[100]=-1.;
  p_output1[101]=t2637;
  p_output1[102]=t2731;
  p_output1[103]=1.;
  p_output1[104]=t2637;
  p_output1[105]=0.333333333333333*t17988*t2271;
  p_output1[106]=-0.333333333333333*t17988*t2271;
  p_output1[107]=-1.;
  p_output1[108]=t2637;
  p_output1[109]=t2731;
  p_output1[110]=1.;
  p_output1[111]=t2637;
  p_output1[112]=0.333333333333333*t20123*t2271;
  p_output1[113]=-0.333333333333333*t20123*t2271;
  p_output1[114]=-1.;
  p_output1[115]=t2637;
  p_output1[116]=t2731;
  p_output1[117]=1.;
  p_output1[118]=t2637;
  p_output1[119]=0.333333333333333*t20421*t2271;
  p_output1[120]=-0.333333333333333*t20421*t2271;
  p_output1[121]=-1.;
  p_output1[122]=t2637;
  p_output1[123]=t2731;
  p_output1[124]=1.;
  p_output1[125]=t2637;
  p_output1[126]=0.25*t20808*t2271;
  p_output1[127]=-0.25*t20808*t2271;
  p_output1[128]=-0.5;
  p_output1[129]=t22021;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t22248;
  p_output1[133]=0.25*t22423*t2271;
  p_output1[134]=-0.25*t22423*t2271;
  p_output1[135]=-0.5;
  p_output1[136]=t22021;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t22248;
  p_output1[140]=0.25*t22630*t2271;
  p_output1[141]=-0.25*t22630*t2271;
  p_output1[142]=-0.5;
  p_output1[143]=t22021;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t22248;
  p_output1[147]=0.25*t22704*t2271;
  p_output1[148]=-0.25*t22704*t2271;
  p_output1[149]=-0.5;
  p_output1[150]=t22021;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t22248;
  p_output1[154]=0.25*t2271*t22764;
  p_output1[155]=-0.25*t2271*t22764;
  p_output1[156]=-0.5;
  p_output1[157]=t22021;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t22248;
  p_output1[161]=0.25*t2271*t22786;
  p_output1[162]=-0.25*t2271*t22786;
  p_output1[163]=-0.5;
  p_output1[164]=t22021;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t22248;
  p_output1[168]=0.25*t2271*t24051;
  p_output1[169]=-0.25*t2271*t24051;
  p_output1[170]=-0.5;
  p_output1[171]=t22021;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t22248;
  p_output1[175]=0.25*t2271*t24223;
  p_output1[176]=-0.25*t2271*t24223;
  p_output1[177]=-0.5;
  p_output1[178]=t22021;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t22248;
  p_output1[182]=0.25*t2271*t24346;
  p_output1[183]=-0.25*t2271*t24346;
  p_output1[184]=-0.5;
  p_output1[185]=t22021;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t22248;
  p_output1[189]=0.25*t2271*t24375;
  p_output1[190]=-0.25*t2271*t24375;
  p_output1[191]=-0.5;
  p_output1[192]=t22021;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t22248;
  p_output1[196]=0.25*t2271*t24395;
  p_output1[197]=-0.25*t2271*t24395;
  p_output1[198]=-0.5;
  p_output1[199]=t22021;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t22248;
  p_output1[203]=0.25*t2271*t24442;
  p_output1[204]=-0.25*t2271*t24442;
  p_output1[205]=-0.5;
  p_output1[206]=t22021;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t22248;
  p_output1[210]=0.25*t2271*t24487;
  p_output1[211]=-0.25*t2271*t24487;
  p_output1[212]=-0.5;
  p_output1[213]=t22021;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t22248;
  p_output1[217]=0.25*t2271*t24576;
  p_output1[218]=-0.25*t2271*t24576;
  p_output1[219]=-0.5;
  p_output1[220]=t22021;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t22248;
  p_output1[224]=0.25*t2271*t25017;
  p_output1[225]=-0.25*t2271*t25017;
  p_output1[226]=-0.5;
  p_output1[227]=t22021;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t22248;
  p_output1[231]=0.25*t2271*t25355;
  p_output1[232]=-0.25*t2271*t25355;
  p_output1[233]=-0.5;
  p_output1[234]=t22021;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t22248;
  p_output1[238]=0.25*t2271*t26299;
  p_output1[239]=-0.25*t2271*t26299;
  p_output1[240]=-0.5;
  p_output1[241]=t22021;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t22248;
  p_output1[245]=0.25*t2271*t27154;
  p_output1[246]=-0.25*t2271*t27154;
  p_output1[247]=-0.5;
  p_output1[248]=t22021;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t22248;
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
