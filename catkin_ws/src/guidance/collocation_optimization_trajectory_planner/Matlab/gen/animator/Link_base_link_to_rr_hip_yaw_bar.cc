/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:05 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t311;
  double t443;
  double t1246;
  double t2347;
  double t869;
  double t2079;
  double t2585;
  double t2602;
  double t4547;
  double t4570;
  double t4567;
  double t4575;
  double t4591;
  double t4599;
  double t4635;
  double t4690;
  double t4559;
  double t4597;
  double t4699;
  double t4725;
  double t5160;
  double t5167;
  double t5172;
  double t5181;
  double t5185;
  double t5186;
  double t5156;
  double t5175;
  double t5188;
  double t5189;
  double t2785;
  double t3427;
  double t3602;
  double t3758;
  double t3813;
  double t3845;
  double t3873;
  double t3889;
  double t3946;
  double t4008;
  double t4041;
  double t4096;
  double t4205;
  double t4285;
  double t4351;
  double t4368;
  double t4458;
  double t4509;
  double t5657;
  double t5661;
  double t5663;
  double t4753;
  double t4802;
  double t4811;
  double t4815;
  double t4824;
  double t4830;
  double t4839;
  double t4880;
  double t4930;
  double t4968;
  double t4975;
  double t4999;
  double t5008;
  double t5015;
  double t5077;
  double t5100;
  double t5120;
  double t5126;
  double t5929;
  double t5944;
  double t5960;
  double t5190;
  double t5198;
  double t5246;
  double t5273;
  double t5282;
  double t5303;
  double t5315;
  double t5362;
  double t5368;
  double t5376;
  double t5407;
  double t5451;
  double t5475;
  double t5514;
  double t5544;
  double t5583;
  double t5592;
  double t5619;
  double t6290;
  double t6294;
  double t6299;
  t311 = Cos(var1[4]);
  t443 = Cos(var1[5]);
  t1246 = Sin(var1[4]);
  t2347 = Sin(var1[5]);
  t869 = -0.007214*t311*t443;
  t2079 = 0.010997*t1246;
  t2585 = -0.007214*t311*t2347;
  t2602 = var1[0] + t869 + t2079 + t2585;
  t4547 = Sin(var1[3]);
  t4570 = Cos(var1[3]);
  t4567 = t443*t4547*t1246;
  t4575 = t4570*t2347;
  t4591 = t4567 + t4575;
  t4599 = t4570*t443;
  t4635 = -1.*t4547*t1246*t2347;
  t4690 = t4599 + t4635;
  t4559 = -0.010997*t311*t4547;
  t4597 = -0.007214*t4591;
  t4699 = 0.007214*t4690;
  t4725 = var1[1] + t4559 + t4597 + t4699;
  t5160 = -1.*t4570*t443*t1246;
  t5167 = t4547*t2347;
  t5172 = t5160 + t5167;
  t5181 = t443*t4547;
  t5185 = t4570*t1246*t2347;
  t5186 = t5181 + t5185;
  t5156 = 0.010997*t4570*t311;
  t5175 = -0.007214*t5172;
  t5188 = 0.007214*t5186;
  t5189 = var1[2] + t5156 + t5175 + t5188;
  t2785 = 0.007089*t1246;
  t3427 = 0.002412*t1246;
  t3602 = -0.002526*t1246;
  t3758 = -0.00719*t1246;
  t3813 = -0.011075*t1246;
  t3845 = -0.01376*t1246;
  t3873 = -0.014953*t1246;
  t3889 = -0.014527*t1246;
  t3946 = -0.012526*t1246;
  t4008 = -0.009168*t1246;
  t4041 = -0.004816*t1246;
  t4096 = 0.000057*t1246;
  t4205 = 0.004925*t1246;
  t4285 = 0.009258*t1246;
  t4351 = 0.012589*t1246;
  t4368 = 0.014555*t1246;
  t4458 = 0.014944*t1246;
  t4509 = 0.013713*t1246;
  t5657 = -0.158424*t311*t443;
  t5661 = 0.143996*t311*t2347;
  t5663 = var1[0] + t5657 + t2079 + t5661;
  t4753 = -0.007089*t311*t4547;
  t4802 = -0.002412*t311*t4547;
  t4811 = 0.002526*t311*t4547;
  t4815 = 0.00719*t311*t4547;
  t4824 = 0.011075*t311*t4547;
  t4830 = 0.01376*t311*t4547;
  t4839 = 0.014953*t311*t4547;
  t4880 = 0.014527*t311*t4547;
  t4930 = 0.012526*t311*t4547;
  t4968 = 0.009168*t311*t4547;
  t4975 = 0.004816*t311*t4547;
  t4999 = -0.000057*t311*t4547;
  t5008 = -0.004925*t311*t4547;
  t5015 = -0.009258*t311*t4547;
  t5077 = -0.012589*t311*t4547;
  t5100 = -0.014555*t311*t4547;
  t5120 = -0.014944*t311*t4547;
  t5126 = -0.013713*t311*t4547;
  t5929 = -0.158424*t4591;
  t5944 = -0.143996*t4690;
  t5960 = var1[1] + t4559 + t5929 + t5944;
  t5190 = 0.007089*t4570*t311;
  t5198 = 0.002412*t4570*t311;
  t5246 = -0.002526*t4570*t311;
  t5273 = -0.00719*t4570*t311;
  t5282 = -0.011075*t4570*t311;
  t5303 = -0.01376*t4570*t311;
  t5315 = -0.014953*t4570*t311;
  t5362 = -0.014527*t4570*t311;
  t5368 = -0.012526*t4570*t311;
  t5376 = -0.009168*t4570*t311;
  t5407 = -0.004816*t4570*t311;
  t5451 = 0.000057*t4570*t311;
  t5475 = 0.004925*t4570*t311;
  t5514 = 0.009258*t4570*t311;
  t5544 = 0.012589*t4570*t311;
  t5583 = 0.014555*t4570*t311;
  t5592 = 0.014944*t4570*t311;
  t5619 = 0.013713*t4570*t311;
  t6290 = -0.158424*t5172;
  t6294 = -0.143996*t5186;
  t6299 = var1[2] + t5156 + t6290 + t6294;
  p_output1[0]=t2602;
  p_output1[1]=t2785 - 0.009348*t2347*t311 - 0.009348*t311*t443 + var1[0];
  p_output1[2]=-0.010469*t2347*t311 + t3427 - 0.010469*t311*t443 + var1[0];
  p_output1[3]=-0.010455*t2347*t311 + t3602 - 0.010455*t311*t443 + var1[0];
  p_output1[4]=-0.009309*t2347*t311 + t3758 - 0.009309*t311*t443 + var1[0];
  p_output1[5]=-0.007154*t2347*t311 + t3813 - 0.007154*t311*t443 + var1[0];
  p_output1[6]=-0.004223*t2347*t311 + t3845 - 0.004223*t311*t443 + var1[0];
  p_output1[7]=-0.000835*t2347*t311 + t3873 - 0.000835*t311*t443 + var1[0];
  p_output1[8]=0.002643*t2347*t311 + t3889 + 0.002643*t311*t443 + var1[0];
  p_output1[9]=0.005835*t2347*t311 + t3946 + 0.005835*t311*t443 + var1[0];
  p_output1[10]=0.008395*t2347*t311 + t4008 + 0.008395*t311*t443 + var1[0];
  p_output1[11]=0.010045*t2347*t311 + t4041 + 0.010045*t311*t443 + var1[0];
  p_output1[12]=0.010607*t2347*t311 + t4096 + 0.010607*t311*t443 + var1[0];
  p_output1[13]=0.010019*t2347*t311 + t4205 + 0.010019*t311*t443 + var1[0];
  p_output1[14]=0.008345*t2347*t311 + t4285 + 0.008345*t311*t443 + var1[0];
  p_output1[15]=0.005767*t2347*t311 + t4351 + 0.005767*t311*t443 + var1[0];
  p_output1[16]=0.002564*t2347*t311 + t4368 + 0.002564*t311*t443 + var1[0];
  p_output1[17]=-0.000916*t2347*t311 - 0.000916*t311*t443 + t4458 + var1[0];
  p_output1[18]=-0.004298*t2347*t311 - 0.004298*t311*t443 + t4509 + var1[0];
  p_output1[19]=t2602;
  p_output1[20]=t4725;
  p_output1[21]=-0.009348*t4591 + 0.009348*t4690 + t4753 + var1[1];
  p_output1[22]=-0.010469*t4591 + 0.010469*t4690 + t4802 + var1[1];
  p_output1[23]=-0.010455*t4591 + 0.010455*t4690 + t4811 + var1[1];
  p_output1[24]=-0.009309*t4591 + 0.009309*t4690 + t4815 + var1[1];
  p_output1[25]=-0.007154*t4591 + 0.007154*t4690 + t4824 + var1[1];
  p_output1[26]=-0.004223*t4591 + 0.004223*t4690 + t4830 + var1[1];
  p_output1[27]=-0.000835*t4591 + 0.000835*t4690 + t4839 + var1[1];
  p_output1[28]=0.002643*t4591 - 0.002643*t4690 + t4880 + var1[1];
  p_output1[29]=0.005835*t4591 - 0.005835*t4690 + t4930 + var1[1];
  p_output1[30]=0.008395*t4591 - 0.008395*t4690 + t4968 + var1[1];
  p_output1[31]=0.010045*t4591 - 0.010045*t4690 + t4975 + var1[1];
  p_output1[32]=0.010607*t4591 - 0.010607*t4690 + t4999 + var1[1];
  p_output1[33]=0.010019*t4591 - 0.010019*t4690 + t5008 + var1[1];
  p_output1[34]=0.008345*t4591 - 0.008345*t4690 + t5015 + var1[1];
  p_output1[35]=0.005767*t4591 - 0.005767*t4690 + t5077 + var1[1];
  p_output1[36]=0.002564*t4591 - 0.002564*t4690 + t5100 + var1[1];
  p_output1[37]=-0.000916*t4591 + 0.000916*t4690 + t5120 + var1[1];
  p_output1[38]=-0.004298*t4591 + 0.004298*t4690 + t5126 + var1[1];
  p_output1[39]=t4725;
  p_output1[40]=t5189;
  p_output1[41]=-0.009348*t5172 + 0.009348*t5186 + t5190 + var1[2];
  p_output1[42]=-0.010469*t5172 + 0.010469*t5186 + t5198 + var1[2];
  p_output1[43]=-0.010455*t5172 + 0.010455*t5186 + t5246 + var1[2];
  p_output1[44]=-0.009309*t5172 + 0.009309*t5186 + t5273 + var1[2];
  p_output1[45]=-0.007154*t5172 + 0.007154*t5186 + t5282 + var1[2];
  p_output1[46]=-0.004223*t5172 + 0.004223*t5186 + t5303 + var1[2];
  p_output1[47]=-0.000835*t5172 + 0.000835*t5186 + t5315 + var1[2];
  p_output1[48]=0.002643*t5172 - 0.002643*t5186 + t5362 + var1[2];
  p_output1[49]=0.005835*t5172 - 0.005835*t5186 + t5368 + var1[2];
  p_output1[50]=0.008395*t5172 - 0.008395*t5186 + t5376 + var1[2];
  p_output1[51]=0.010045*t5172 - 0.010045*t5186 + t5407 + var1[2];
  p_output1[52]=0.010607*t5172 - 0.010607*t5186 + t5451 + var1[2];
  p_output1[53]=0.010019*t5172 - 0.010019*t5186 + t5475 + var1[2];
  p_output1[54]=0.008345*t5172 - 0.008345*t5186 + t5514 + var1[2];
  p_output1[55]=0.005767*t5172 - 0.005767*t5186 + t5544 + var1[2];
  p_output1[56]=0.002564*t5172 - 0.002564*t5186 + t5583 + var1[2];
  p_output1[57]=-0.000916*t5172 + 0.000916*t5186 + t5592 + var1[2];
  p_output1[58]=-0.004298*t5172 + 0.004298*t5186 + t5619 + var1[2];
  p_output1[59]=t5189;
  p_output1[60]=t5663;
  p_output1[61]=t2785 + 0.141862*t2347*t311 - 0.160558*t311*t443 + var1[0];
  p_output1[62]=0.140741*t2347*t311 + t3427 - 0.161679*t311*t443 + var1[0];
  p_output1[63]=0.140755*t2347*t311 + t3602 - 0.161665*t311*t443 + var1[0];
  p_output1[64]=0.141901*t2347*t311 + t3758 - 0.160519*t311*t443 + var1[0];
  p_output1[65]=0.144056*t2347*t311 + t3813 - 0.158364*t311*t443 + var1[0];
  p_output1[66]=0.146987*t2347*t311 + t3845 - 0.155433*t311*t443 + var1[0];
  p_output1[67]=0.150375*t2347*t311 + t3873 - 0.152045*t311*t443 + var1[0];
  p_output1[68]=0.153853*t2347*t311 + t3889 - 0.148567*t311*t443 + var1[0];
  p_output1[69]=0.157045*t2347*t311 + t3946 - 0.145375*t311*t443 + var1[0];
  p_output1[70]=0.159605*t2347*t311 + t4008 - 0.142815*t311*t443 + var1[0];
  p_output1[71]=0.161255*t2347*t311 + t4041 - 0.141165*t311*t443 + var1[0];
  p_output1[72]=0.161817*t2347*t311 + t4096 - 0.140603*t311*t443 + var1[0];
  p_output1[73]=0.161229*t2347*t311 + t4205 - 0.141191*t311*t443 + var1[0];
  p_output1[74]=0.159555*t2347*t311 + t4285 - 0.142865*t311*t443 + var1[0];
  p_output1[75]=0.156977*t2347*t311 + t4351 - 0.145443*t311*t443 + var1[0];
  p_output1[76]=0.153774*t2347*t311 + t4368 - 0.148646*t311*t443 + var1[0];
  p_output1[77]=0.150294*t2347*t311 - 0.152126*t311*t443 + t4458 + var1[0];
  p_output1[78]=0.146912*t2347*t311 - 0.155508*t311*t443 + t4509 + var1[0];
  p_output1[79]=t5663;
  p_output1[80]=t5960;
  p_output1[81]=-0.160558*t4591 - 0.141862*t4690 + t4753 + var1[1];
  p_output1[82]=-0.161679*t4591 - 0.140741*t4690 + t4802 + var1[1];
  p_output1[83]=-0.161665*t4591 - 0.140755*t4690 + t4811 + var1[1];
  p_output1[84]=-0.160519*t4591 - 0.141901*t4690 + t4815 + var1[1];
  p_output1[85]=-0.158364*t4591 - 0.144056*t4690 + t4824 + var1[1];
  p_output1[86]=-0.155433*t4591 - 0.146987*t4690 + t4830 + var1[1];
  p_output1[87]=-0.152045*t4591 - 0.150375*t4690 + t4839 + var1[1];
  p_output1[88]=-0.148567*t4591 - 0.153853*t4690 + t4880 + var1[1];
  p_output1[89]=-0.145375*t4591 - 0.157045*t4690 + t4930 + var1[1];
  p_output1[90]=-0.142815*t4591 - 0.159605*t4690 + t4968 + var1[1];
  p_output1[91]=-0.141165*t4591 - 0.161255*t4690 + t4975 + var1[1];
  p_output1[92]=-0.140603*t4591 - 0.161817*t4690 + t4999 + var1[1];
  p_output1[93]=-0.141191*t4591 - 0.161229*t4690 + t5008 + var1[1];
  p_output1[94]=-0.142865*t4591 - 0.159555*t4690 + t5015 + var1[1];
  p_output1[95]=-0.145443*t4591 - 0.156977*t4690 + t5077 + var1[1];
  p_output1[96]=-0.148646*t4591 - 0.153774*t4690 + t5100 + var1[1];
  p_output1[97]=-0.152126*t4591 - 0.150294*t4690 + t5120 + var1[1];
  p_output1[98]=-0.155508*t4591 - 0.146912*t4690 + t5126 + var1[1];
  p_output1[99]=t5960;
  p_output1[100]=t6299;
  p_output1[101]=-0.160558*t5172 - 0.141862*t5186 + t5190 + var1[2];
  p_output1[102]=-0.161679*t5172 - 0.140741*t5186 + t5198 + var1[2];
  p_output1[103]=-0.161665*t5172 - 0.140755*t5186 + t5246 + var1[2];
  p_output1[104]=-0.160519*t5172 - 0.141901*t5186 + t5273 + var1[2];
  p_output1[105]=-0.158364*t5172 - 0.144056*t5186 + t5282 + var1[2];
  p_output1[106]=-0.155433*t5172 - 0.146987*t5186 + t5303 + var1[2];
  p_output1[107]=-0.152045*t5172 - 0.150375*t5186 + t5315 + var1[2];
  p_output1[108]=-0.148567*t5172 - 0.153853*t5186 + t5362 + var1[2];
  p_output1[109]=-0.145375*t5172 - 0.157045*t5186 + t5368 + var1[2];
  p_output1[110]=-0.142815*t5172 - 0.159605*t5186 + t5376 + var1[2];
  p_output1[111]=-0.141165*t5172 - 0.161255*t5186 + t5407 + var1[2];
  p_output1[112]=-0.140603*t5172 - 0.161817*t5186 + t5451 + var1[2];
  p_output1[113]=-0.141191*t5172 - 0.161229*t5186 + t5475 + var1[2];
  p_output1[114]=-0.142865*t5172 - 0.159555*t5186 + t5514 + var1[2];
  p_output1[115]=-0.145443*t5172 - 0.156977*t5186 + t5544 + var1[2];
  p_output1[116]=-0.148646*t5172 - 0.153774*t5186 + t5583 + var1[2];
  p_output1[117]=-0.152126*t5172 - 0.150294*t5186 + t5592 + var1[2];
  p_output1[118]=-0.155508*t5172 - 0.146912*t5186 + t5619 + var1[2];
  p_output1[119]=t6299;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_base_link_to_rr_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_rr_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
