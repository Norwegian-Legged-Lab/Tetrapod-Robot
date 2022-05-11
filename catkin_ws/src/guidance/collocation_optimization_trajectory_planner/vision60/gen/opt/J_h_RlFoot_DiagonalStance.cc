/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:33 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t599;
  double t90;
  double t398;
  double t680;
  double t993;
  double t589;
  double t1182;
  double t514;
  double t1229;
  double t1235;
  double t1248;
  double t1313;
  double t1337;
  double t1536;
  double t1691;
  double t1779;
  double t2322;
  double t2331;
  double t2667;
  double t681;
  double t704;
  double t535;
  double t554;
  double t1829;
  double t1864;
  double t2980;
  double t2981;
  double t2984;
  double t3112;
  double t3512;
  double t3940;
  double t4628;
  double t4705;
  double t4739;
  double t4844;
  double t4848;
  double t4849;
  double t5025;
  double t5033;
  double t5043;
  double t5067;
  double t5068;
  double t5070;
  double t5104;
  double t5113;
  double t5119;
  double t5183;
  double t5246;
  double t5392;
  double t5397;
  double t5495;
  double t5188;
  double t5267;
  double t5363;
  double t5529;
  double t5533;
  double t5535;
  double t5537;
  double t5541;
  double t5544;
  double t5549;
  double t5550;
  double t5562;
  double t5617;
  double t5620;
  double t5621;
  double t5625;
  double t5626;
  double t5627;
  double t5635;
  double t5636;
  double t5640;
  double t5658;
  double t5659;
  double t5712;
  double t5776;
  double t5777;
  double t5780;
  double t5782;
  double t5795;
  double t5806;
  double t5816;
  double t5937;
  double t5940;
  double t6043;
  double t6045;
  double t6047;
  double t6061;
  double t6084;
  double t6088;
  double t6140;
  double t6141;
  double t6142;
  double t6147;
  double t6151;
  double t6153;
  double t6156;
  double t6162;
  double t6164;
  double t6197;
  double t6203;
  double t6205;
  double t6209;
  double t6210;
  double t6211;
  double t6181;
  double t6516;
  double t6520;
  double t6528;
  double t6536;
  double t6540;
  double t6542;
  double t6545;
  double t6546;
  double t6547;
  double t6597;
  double t6601;
  double t6604;
  double t6608;
  double t6611;
  double t6612;
  double t6633;
  double t6645;
  double t6646;
  double t5510;
  double t6745;
  double t6747;
  double t6753;
  double t6754;
  double t6756;
  double t6926;
  double t6927;
  double t6928;
  double t6936;
  double t6938;
  double t6939;
  double t6945;
  double t6957;
  double t6960;
  double t6997;
  double t7000;
  double t7001;
  t599 = Sin(var1[4]);
  t90 = Cos(var1[4]);
  t398 = Sin(var1[9]);
  t680 = Cos(var1[9]);
  t993 = Sin(var1[5]);
  t589 = Cos(var1[5]);
  t1182 = Sin(var1[10]);
  t514 = Cos(var1[10]);
  t1229 = t680*t90;
  t1235 = -1.*t398*t599*t993;
  t1248 = t1229 + t1235;
  t1313 = Sin(var1[11]);
  t1337 = t589*t1182*t599;
  t1536 = t514*t1248;
  t1691 = t1337 + t1536;
  t1779 = Cos(var1[11]);
  t2322 = -1.*t514*t589*t599;
  t2331 = t1182*t1248;
  t2667 = t2322 + t2331;
  t681 = -1.*t680;
  t704 = 1. + t681;
  t535 = -1.*t514;
  t554 = 1. + t535;
  t1829 = -1.*t1779;
  t1864 = 1. + t1829;
  t2980 = t90*t589*t398*t1182;
  t2981 = -1.*t514*t90*t993;
  t2984 = t2980 + t2981;
  t3112 = t514*t90*t589*t398;
  t3512 = t90*t1182*t993;
  t3940 = t3112 + t3512;
  t4628 = -1.*t398*t599;
  t4705 = t680*t90*t993;
  t4739 = t4628 + t4705;
  t4844 = t680*t599;
  t4848 = t90*t398*t993;
  t4849 = t4844 + t4848;
  t5025 = -1.*t90*t589*t1182;
  t5033 = t514*t4849;
  t5043 = t5025 + t5033;
  t5067 = -1.*t514*t90*t589;
  t5068 = -1.*t1182*t4849;
  t5070 = t5067 + t5068;
  t5104 = t514*t90*t589;
  t5113 = t1182*t4849;
  t5119 = t5104 + t5113;
  t5183 = Cos(var1[3]);
  t5246 = Sin(var1[3]);
  t5392 = -1.*t589*t5246;
  t5397 = -1.*t5183*t599*t993;
  t5495 = t5392 + t5397;
  t5188 = t5183*t589*t599;
  t5267 = -1.*t5246*t993;
  t5363 = t5188 + t5267;
  t5529 = -1.*t680*t5183*t90;
  t5533 = -1.*t398*t5495;
  t5535 = t5529 + t5533;
  t5537 = -1.*t1182*t5363;
  t5541 = t514*t5535;
  t5544 = t5537 + t5541;
  t5549 = t514*t5363;
  t5550 = t1182*t5535;
  t5562 = t5549 + t5550;
  t5617 = t680*t5246*t599;
  t5620 = t90*t398*t5246*t993;
  t5621 = t5617 + t5620;
  t5625 = -1.*t90*t589*t1182*t5246;
  t5626 = t514*t5621;
  t5627 = t5625 + t5626;
  t5635 = t514*t90*t589*t5246;
  t5636 = t1182*t5621;
  t5640 = t5635 + t5636;
  t5658 = -1.*t589*t5246*t599;
  t5659 = -1.*t5183*t993;
  t5712 = t5658 + t5659;
  t5776 = t5183*t589;
  t5777 = -1.*t5246*t599*t993;
  t5780 = t5776 + t5777;
  t5782 = -1.*t398*t1182*t5712;
  t5795 = t514*t5780;
  t5806 = t5782 + t5795;
  t5816 = -1.*t514*t398*t5712;
  t5937 = -1.*t1182*t5780;
  t5940 = t5816 + t5937;
  t6043 = t90*t398*t5246;
  t6045 = -1.*t680*t5780;
  t6047 = t6043 + t6045;
  t6061 = -1.*t680*t90*t5246;
  t6084 = -1.*t398*t5780;
  t6088 = t6061 + t6084;
  t6140 = t589*t5246*t599;
  t6141 = t5183*t993;
  t6142 = t6140 + t6141;
  t6147 = -1.*t1182*t6142;
  t6151 = t514*t6088;
  t6153 = t6147 + t6151;
  t6156 = -1.*t514*t6142;
  t6162 = -1.*t1182*t6088;
  t6164 = t6156 + t6162;
  t6197 = t514*t6142;
  t6203 = t1182*t6088;
  t6205 = t6197 + t6203;
  t6209 = -1.*t1313*t6153;
  t6210 = t1779*t6205;
  t6211 = t6209 + t6210;
  t6181 = t1779*t6153;
  t6516 = -1.*t680*t5183*t599;
  t6520 = -1.*t5183*t90*t398*t993;
  t6528 = t6516 + t6520;
  t6536 = t5183*t90*t589*t1182;
  t6540 = t514*t6528;
  t6542 = t6536 + t6540;
  t6545 = -1.*t514*t5183*t90*t589;
  t6546 = t1182*t6528;
  t6547 = t6545 + t6546;
  t6597 = t589*t5246;
  t6601 = t5183*t599*t993;
  t6604 = t6597 + t6601;
  t6608 = -1.*t398*t1182*t5363;
  t6611 = t514*t6604;
  t6612 = t6608 + t6611;
  t6633 = -1.*t514*t398*t5363;
  t6645 = -1.*t1182*t6604;
  t6646 = t6633 + t6645;
  t5510 = -1.*t5183*t90*t398;
  t6745 = -1.*t680*t6604;
  t6747 = t5510 + t6745;
  t6753 = t680*t5183*t90;
  t6754 = -1.*t398*t6604;
  t6756 = t6753 + t6754;
  t6926 = -1.*t5183*t589*t599;
  t6927 = t5246*t993;
  t6928 = t6926 + t6927;
  t6936 = -1.*t1182*t6928;
  t6938 = t514*t6756;
  t6939 = t6936 + t6938;
  t6945 = -1.*t514*t6928;
  t6957 = -1.*t1182*t6756;
  t6960 = t6945 + t6957;
  t6997 = t514*t6928;
  t7000 = t1182*t6756;
  t7001 = t6997 + t7000;
  p_output1[0]=1.;
  p_output1[1]=0.325*t1182*t1248 - 0.575*t1313*t1691 - 0.575*t1864*t2667 - 0.0641*(t1691*t1779 + t1313*t2667) - 0.295*(-1.*t1313*t1691 + t1779*t2667) + 0.325*t554*t589*t599 - 0.1575*t398*t90 + 0.1575*t599*t704*t993 + 0.2255*(t398*t90 + t599*t680*t993);
  p_output1[2]=-0.575*t1864*t2984 - 0.575*t1313*t3940 - 0.295*(t1779*t2984 - 1.*t1313*t3940) - 0.0641*(t1313*t2984 + t1779*t3940) + 0.325*t1182*t398*t589*t90 - 0.2255*t589*t680*t90 - 0.1575*t589*t704*t90 + 0.325*t554*t90*t993;
  p_output1[3]=0.325*t1182*t4739 - 0.575*t1182*t1864*t4739 + 0.2255*t4849 - 0.575*t1313*t4739*t514 - 0.295*(t1182*t1779*t4739 - 1.*t1313*t4739*t514) - 0.0641*(t1182*t1313*t4739 + t1779*t4739*t514) - 0.1575*t599*t680 - 0.1575*t398*t90*t993;
  p_output1[4]=-0.575*t1864*t5043 - 0.575*t1313*t5070 - 0.295*(t1779*t5043 - 1.*t1313*t5070) - 0.0641*(t1313*t5043 + t1779*t5070) + 0.325*t4849*t514 - 0.325*t1182*t589*t90;
  p_output1[5]=-0.575*t1779*t5043 - 0.575*t1313*t5119 - 0.295*(-1.*t1779*t5043 - 1.*t1313*t5119) - 0.0641*(-1.*t1313*t5043 + t1779*t5119);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.325*t1182*t5535 - 0.325*t5363*t554 - 0.575*t1313*t5544 - 0.575*t1864*t5562 - 0.0641*(t1779*t5544 + t1313*t5562) - 0.295*(-1.*t1313*t5544 + t1779*t5562) + 0.2255*(t5510 + t5495*t680) + 0.1575*t5495*t704 + 0.1575*t398*t5183*t90;
  p_output1[9]=0.325*t1182*t5621 - 0.575*t1313*t5627 - 0.575*t1864*t5640 - 0.0641*(t1779*t5627 + t1313*t5640) - 0.295*(-1.*t1313*t5627 + t1779*t5640) - 0.1575*t398*t5246*t599 - 0.325*t5246*t554*t589*t90 - 0.1575*t5246*t704*t90*t993 + 0.2255*(t398*t5246*t599 - 1.*t5246*t680*t90*t993);
  p_output1[10]=-0.325*t1182*t398*t5712 - 0.325*t554*t5780 - 0.575*t1864*t5806 - 0.575*t1313*t5940 - 0.295*(t1779*t5806 - 1.*t1313*t5940) - 0.0641*(t1313*t5806 + t1779*t5940) + 0.2255*t5712*t680 + 0.1575*t5712*t704;
  p_output1[11]=0.1575*t398*t5780 + 0.325*t1182*t6047 - 0.575*t1182*t1864*t6047 - 0.575*t1313*t514*t6047 - 0.295*(t1182*t1779*t6047 - 1.*t1313*t514*t6047) - 0.0641*(t1182*t1313*t6047 + t1779*t514*t6047) + 0.2255*t6088 + 0.1575*t5246*t680*t90;
  p_output1[12]=0.325*t514*t6088 - 0.325*t1182*t6142 - 0.575*t1864*t6153 - 0.575*t1313*t6164 - 0.0641*(t1313*t6153 + t1779*t6164) - 0.295*(-1.*t1313*t6164 + t6181);
  p_output1[13]=-0.575*t1779*t6153 - 0.575*t1313*t6205 - 0.295*(-1.*t1779*t6153 - 1.*t1313*t6205) - 0.0641*t6211;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=0.325*t1182*t6088 - 0.325*t554*t6142 - 0.575*t1313*t6153 - 0.575*t1864*t6205 - 0.0641*(t6181 + t1313*t6205) - 0.295*t6211 + 0.1575*t5780*t704 + 0.1575*t398*t5246*t90 + 0.2255*(t5780*t680 - 1.*t398*t5246*t90);
  p_output1[17]=0.1575*t398*t5183*t599 + 0.325*t1182*t6528 - 0.575*t1313*t6542 - 0.575*t1864*t6547 - 0.0641*(t1779*t6542 + t1313*t6547) - 0.295*(-1.*t1313*t6542 + t1779*t6547) + 0.325*t5183*t554*t589*t90 + 0.1575*t5183*t704*t90*t993 + 0.2255*(-1.*t398*t5183*t599 + t5183*t680*t90*t993);
  p_output1[18]=-0.325*t1182*t398*t5363 - 0.325*t554*t6604 - 0.575*t1864*t6612 - 0.575*t1313*t6646 - 0.295*(t1779*t6612 - 1.*t1313*t6646) - 0.0641*(t1313*t6612 + t1779*t6646) + 0.2255*t5363*t680 + 0.1575*t5363*t704;
  p_output1[19]=0.1575*t398*t6604 + 0.325*t1182*t6747 - 0.575*t1182*t1864*t6747 - 0.575*t1313*t514*t6747 - 0.295*(t1182*t1779*t6747 - 1.*t1313*t514*t6747) - 0.0641*(t1182*t1313*t6747 + t1779*t514*t6747) + 0.2255*t6756 - 0.1575*t5183*t680*t90;
  p_output1[20]=0.325*t514*t6756 - 0.325*t1182*t6928 - 0.575*t1864*t6939 - 0.575*t1313*t6960 - 0.295*(t1779*t6939 - 1.*t1313*t6960) - 0.0641*(t1313*t6939 + t1779*t6960);
  p_output1[21]=-0.575*t1779*t6939 - 0.575*t1313*t7001 - 0.295*(-1.*t1779*t6939 - 1.*t1313*t7001) - 0.0641*(-1.*t1313*t6939 + t1779*t7001);
  p_output1[22]=-1.;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
