/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:10:54 GMT+02:00
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
  double t4030;
  double t4031;
  double t4404;
  double t19337;
  double t4403;
  double t7647;
  double t19371;
  double t19538;
  double t31967;
  double t31980;
  double t31979;
  double t31984;
  double t31989;
  double t31993;
  double t31995;
  double t31997;
  double t31976;
  double t31991;
  double t32000;
  double t32002;
  double t32220;
  double t32221;
  double t32222;
  double t32224;
  double t32225;
  double t32226;
  double t32219;
  double t32223;
  double t32227;
  double t32229;
  double t19629;
  double t19818;
  double t19869;
  double t19896;
  double t23857;
  double t27734;
  double t30762;
  double t30819;
  double t30827;
  double t31077;
  double t31108;
  double t31189;
  double t31373;
  double t31880;
  double t31920;
  double t31939;
  double t31950;
  double t31959;
  double t32315;
  double t32316;
  double t32317;
  double t32006;
  double t32030;
  double t32039;
  double t32051;
  double t32069;
  double t32079;
  double t32087;
  double t32105;
  double t32115;
  double t32128;
  double t32141;
  double t32156;
  double t32166;
  double t32174;
  double t32181;
  double t32188;
  double t32200;
  double t32208;
  double t32381;
  double t32382;
  double t32383;
  double t32230;
  double t32234;
  double t32239;
  double t32244;
  double t32249;
  double t32253;
  double t32257;
  double t32263;
  double t32267;
  double t32273;
  double t32280;
  double t32284;
  double t32288;
  double t32293;
  double t32297;
  double t32302;
  double t32306;
  double t32311;
  double t32450;
  double t32451;
  double t32453;
  t4030 = Cos(var1[4]);
  t4031 = Cos(var1[5]);
  t4404 = Sin(var1[4]);
  t19337 = Sin(var1[5]);
  t4403 = 0.004615*t4030*t4031;
  t7647 = -0.010631*t4404;
  t19371 = 0.009523*t4030*t19337;
  t19538 = var1[0] + t4403 + t7647 + t19371;
  t31967 = Sin(var1[3]);
  t31980 = Cos(var1[3]);
  t31979 = t4031*t31967*t4404;
  t31984 = t31980*t19337;
  t31989 = t31979 + t31984;
  t31993 = t31980*t4031;
  t31995 = -1.*t31967*t4404*t19337;
  t31997 = t31993 + t31995;
  t31976 = 0.010631*t4030*t31967;
  t31991 = 0.004615*t31989;
  t32000 = -0.009523*t31997;
  t32002 = var1[1] + t31976 + t31991 + t32000;
  t32220 = -1.*t31980*t4031*t4404;
  t32221 = t31967*t19337;
  t32222 = t32220 + t32221;
  t32224 = t4031*t31967;
  t32225 = t31980*t4404*t19337;
  t32226 = t32224 + t32225;
  t32219 = -0.010631*t31980*t4030;
  t32223 = 0.004615*t32222;
  t32227 = -0.009523*t32226;
  t32229 = var1[2] + t32219 + t32223 + t32227;
  t19629 = -0.013491*t4404;
  t19818 = -0.014889*t4404;
  t19869 = -0.014674*t4404;
  t19896 = -0.012868*t4404;
  t23857 = -0.009668*t4404;
  t27734 = -0.00542*t4404;
  t30762 = -0.000585*t4404;
  t30819 = 0.004313*t4404;
  t30827 = 0.008744*t4404;
  t31077 = 0.012228*t4404;
  t31108 = 0.014386*t4404;
  t31189 = 0.014986*t4404;
  t31373 = 0.013961*t4404;
  t31880 = 0.011424*t4404;
  t31920 = 0.007649*t4404;
  t31939 = 0.003044*t4404;
  t31950 = -0.00189*t4404;
  t31959 = -0.006619*t4404;
  t32315 = 0.329615*t4030*t4031;
  t32316 = -0.147977*t4030*t19337;
  t32317 = var1[0] + t32315 + t7647 + t32316;
  t32006 = 0.013491*t4030*t31967;
  t32030 = 0.014889*t4030*t31967;
  t32039 = 0.014674*t4030*t31967;
  t32051 = 0.012868*t4030*t31967;
  t32069 = 0.009668*t4030*t31967;
  t32079 = 0.00542*t4030*t31967;
  t32087 = 0.000585*t4030*t31967;
  t32105 = -0.004313*t4030*t31967;
  t32115 = -0.008744*t4030*t31967;
  t32128 = -0.012228*t4030*t31967;
  t32141 = -0.014386*t4030*t31967;
  t32156 = -0.014986*t4030*t31967;
  t32166 = -0.013961*t4030*t31967;
  t32174 = -0.011424*t4030*t31967;
  t32181 = -0.007649*t4030*t31967;
  t32188 = -0.003044*t4030*t31967;
  t32200 = 0.00189*t4030*t31967;
  t32208 = 0.006619*t4030*t31967;
  t32381 = 0.329615*t31989;
  t32382 = 0.147977*t31997;
  t32383 = var1[1] + t31976 + t32381 + t32382;
  t32230 = -0.013491*t31980*t4030;
  t32234 = -0.014889*t31980*t4030;
  t32239 = -0.014674*t31980*t4030;
  t32244 = -0.012868*t31980*t4030;
  t32249 = -0.009668*t31980*t4030;
  t32253 = -0.00542*t31980*t4030;
  t32257 = -0.000585*t31980*t4030;
  t32263 = 0.004313*t31980*t4030;
  t32267 = 0.008744*t31980*t4030;
  t32273 = 0.012228*t31980*t4030;
  t32280 = 0.014386*t31980*t4030;
  t32284 = 0.014986*t31980*t4030;
  t32288 = 0.013961*t31980*t4030;
  t32293 = 0.011424*t31980*t4030;
  t32297 = 0.007649*t31980*t4030;
  t32302 = 0.003044*t31980*t4030;
  t32306 = -0.00189*t31980*t4030;
  t32311 = -0.006619*t31980*t4030;
  t32450 = 0.329615*t32222;
  t32451 = 0.147977*t32226;
  t32453 = var1[2] + t32219 + t32450 + t32451;
  p_output1[0]=t19538;
  p_output1[1]=t19629 + 0.0059*t19337*t4030 + 0.002859*t4030*t4031 + var1[0];
  p_output1[2]=t19818 + 0.001639*t19337*t4030 + 0.000794*t4030*t4031 + var1[0];
  p_output1[3]=t19869 - 0.002801*t19337*t4030 - 0.001357*t4030*t4031 + var1[0];
  p_output1[4]=t19896 - 0.006936*t19337*t4030 - 0.003361*t4030*t4031 + var1[0];
  p_output1[5]=t23857 - 0.010321*t19337*t4030 - 0.005001*t4030*t4031 + var1[0];
  p_output1[6]=t27734 - 0.012586*t19337*t4030 - 0.0061*t4030*t4031 + var1[0];
  p_output1[7]=t30762 - 0.013488*t19337*t4030 - 0.006537*t4030*t4031 + var1[0];
  p_output1[8]=t30819 - 0.012928*t19337*t4030 - 0.006265*t4030*t4031 + var1[0];
  p_output1[9]=t30827 - 0.010968*t19337*t4030 - 0.005315*t4030*t4031 + var1[0];
  p_output1[10]=t31077 - 0.007818*t19337*t4030 - 0.003789*t4030*t4031 + var1[0];
  p_output1[11]=t31108 - 0.003822*t19337*t4030 - 0.001852*t4030*t4031 + var1[0];
  p_output1[12]=t31189 + 0.000589*t19337*t4030 + 0.000285*t4030*t4031 + var1[0];
  p_output1[13]=t31373 + 0.004936*t19337*t4030 + 0.002392*t4030*t4031 + var1[0];
  p_output1[14]=t31880 + 0.008748*t19337*t4030 + 0.004239*t4030*t4031 + var1[0];
  p_output1[15]=t31920 + 0.011612*t19337*t4030 + 0.005627*t4030*t4031 + var1[0];
  p_output1[16]=t31939 + 0.013218*t19337*t4030 + 0.006405*t4030*t4031 + var1[0];
  p_output1[17]=t31950 + 0.013391*t19337*t4030 + 0.006489*t4030*t4031 + var1[0];
  p_output1[18]=t31959 + 0.012113*t19337*t4030 + 0.00587*t4030*t4031 + var1[0];
  p_output1[19]=t19538;
  p_output1[20]=t32002;
  p_output1[21]=0.002859*t31989 - 0.0059*t31997 + t32006 + var1[1];
  p_output1[22]=0.000794*t31989 - 0.001639*t31997 + t32030 + var1[1];
  p_output1[23]=-0.001357*t31989 + 0.002801*t31997 + t32039 + var1[1];
  p_output1[24]=-0.003361*t31989 + 0.006936*t31997 + t32051 + var1[1];
  p_output1[25]=-0.005001*t31989 + 0.010321*t31997 + t32069 + var1[1];
  p_output1[26]=-0.0061*t31989 + 0.012586*t31997 + t32079 + var1[1];
  p_output1[27]=-0.006537*t31989 + 0.013488*t31997 + t32087 + var1[1];
  p_output1[28]=-0.006265*t31989 + 0.012928*t31997 + t32105 + var1[1];
  p_output1[29]=-0.005315*t31989 + 0.010968*t31997 + t32115 + var1[1];
  p_output1[30]=-0.003789*t31989 + 0.007818*t31997 + t32128 + var1[1];
  p_output1[31]=-0.001852*t31989 + 0.003822*t31997 + t32141 + var1[1];
  p_output1[32]=0.000285*t31989 - 0.000589*t31997 + t32156 + var1[1];
  p_output1[33]=0.002392*t31989 - 0.004936*t31997 + t32166 + var1[1];
  p_output1[34]=0.004239*t31989 - 0.008748*t31997 + t32174 + var1[1];
  p_output1[35]=0.005627*t31989 - 0.011612*t31997 + t32181 + var1[1];
  p_output1[36]=0.006405*t31989 - 0.013218*t31997 + t32188 + var1[1];
  p_output1[37]=0.006489*t31989 - 0.013391*t31997 + t32200 + var1[1];
  p_output1[38]=0.00587*t31989 - 0.012113*t31997 + t32208 + var1[1];
  p_output1[39]=t32002;
  p_output1[40]=t32229;
  p_output1[41]=0.002859*t32222 - 0.0059*t32226 + t32230 + var1[2];
  p_output1[42]=0.000794*t32222 - 0.001639*t32226 + t32234 + var1[2];
  p_output1[43]=-0.001357*t32222 + 0.002801*t32226 + t32239 + var1[2];
  p_output1[44]=-0.003361*t32222 + 0.006936*t32226 + t32244 + var1[2];
  p_output1[45]=-0.005001*t32222 + 0.010321*t32226 + t32249 + var1[2];
  p_output1[46]=-0.0061*t32222 + 0.012586*t32226 + t32253 + var1[2];
  p_output1[47]=-0.006537*t32222 + 0.013488*t32226 + t32257 + var1[2];
  p_output1[48]=-0.006265*t32222 + 0.012928*t32226 + t32263 + var1[2];
  p_output1[49]=-0.005315*t32222 + 0.010968*t32226 + t32267 + var1[2];
  p_output1[50]=-0.003789*t32222 + 0.007818*t32226 + t32273 + var1[2];
  p_output1[51]=-0.001852*t32222 + 0.003822*t32226 + t32280 + var1[2];
  p_output1[52]=0.000285*t32222 - 0.000589*t32226 + t32284 + var1[2];
  p_output1[53]=0.002392*t32222 - 0.004936*t32226 + t32288 + var1[2];
  p_output1[54]=0.004239*t32222 - 0.008748*t32226 + t32293 + var1[2];
  p_output1[55]=0.005627*t32222 - 0.011612*t32226 + t32297 + var1[2];
  p_output1[56]=0.006405*t32222 - 0.013218*t32226 + t32302 + var1[2];
  p_output1[57]=0.006489*t32222 - 0.013391*t32226 + t32306 + var1[2];
  p_output1[58]=0.00587*t32222 - 0.012113*t32226 + t32311 + var1[2];
  p_output1[59]=t32229;
  p_output1[60]=t32317;
  p_output1[61]=t19629 - 0.1516*t19337*t4030 + 0.327859*t4030*t4031 + var1[0];
  p_output1[62]=t19818 - 0.155861*t19337*t4030 + 0.325794*t4030*t4031 + var1[0];
  p_output1[63]=t19869 - 0.160301*t19337*t4030 + 0.323643*t4030*t4031 + var1[0];
  p_output1[64]=t19896 - 0.164436*t19337*t4030 + 0.321639*t4030*t4031 + var1[0];
  p_output1[65]=t23857 - 0.167821*t19337*t4030 + 0.319999*t4030*t4031 + var1[0];
  p_output1[66]=t27734 - 0.170086*t19337*t4030 + 0.3189*t4030*t4031 + var1[0];
  p_output1[67]=t30762 - 0.170988*t19337*t4030 + 0.318463*t4030*t4031 + var1[0];
  p_output1[68]=t30819 - 0.170428*t19337*t4030 + 0.318735*t4030*t4031 + var1[0];
  p_output1[69]=t30827 - 0.168468*t19337*t4030 + 0.319685*t4030*t4031 + var1[0];
  p_output1[70]=t31077 - 0.165318*t19337*t4030 + 0.321211*t4030*t4031 + var1[0];
  p_output1[71]=t31108 - 0.161322*t19337*t4030 + 0.323148*t4030*t4031 + var1[0];
  p_output1[72]=t31189 - 0.156911*t19337*t4030 + 0.325285*t4030*t4031 + var1[0];
  p_output1[73]=t31373 - 0.152564*t19337*t4030 + 0.327392*t4030*t4031 + var1[0];
  p_output1[74]=t31880 - 0.148752*t19337*t4030 + 0.329239*t4030*t4031 + var1[0];
  p_output1[75]=t31920 - 0.145888*t19337*t4030 + 0.330627*t4030*t4031 + var1[0];
  p_output1[76]=t31939 - 0.144282*t19337*t4030 + 0.331405*t4030*t4031 + var1[0];
  p_output1[77]=t31950 - 0.144109*t19337*t4030 + 0.331489*t4030*t4031 + var1[0];
  p_output1[78]=t31959 - 0.145387*t19337*t4030 + 0.33087*t4030*t4031 + var1[0];
  p_output1[79]=t32317;
  p_output1[80]=t32383;
  p_output1[81]=0.327859*t31989 + 0.1516*t31997 + t32006 + var1[1];
  p_output1[82]=0.325794*t31989 + 0.155861*t31997 + t32030 + var1[1];
  p_output1[83]=0.323643*t31989 + 0.160301*t31997 + t32039 + var1[1];
  p_output1[84]=0.321639*t31989 + 0.164436*t31997 + t32051 + var1[1];
  p_output1[85]=0.319999*t31989 + 0.167821*t31997 + t32069 + var1[1];
  p_output1[86]=0.3189*t31989 + 0.170086*t31997 + t32079 + var1[1];
  p_output1[87]=0.318463*t31989 + 0.170988*t31997 + t32087 + var1[1];
  p_output1[88]=0.318735*t31989 + 0.170428*t31997 + t32105 + var1[1];
  p_output1[89]=0.319685*t31989 + 0.168468*t31997 + t32115 + var1[1];
  p_output1[90]=0.321211*t31989 + 0.165318*t31997 + t32128 + var1[1];
  p_output1[91]=0.323148*t31989 + 0.161322*t31997 + t32141 + var1[1];
  p_output1[92]=0.325285*t31989 + 0.156911*t31997 + t32156 + var1[1];
  p_output1[93]=0.327392*t31989 + 0.152564*t31997 + t32166 + var1[1];
  p_output1[94]=0.329239*t31989 + 0.148752*t31997 + t32174 + var1[1];
  p_output1[95]=0.330627*t31989 + 0.145888*t31997 + t32181 + var1[1];
  p_output1[96]=0.331405*t31989 + 0.144282*t31997 + t32188 + var1[1];
  p_output1[97]=0.331489*t31989 + 0.144109*t31997 + t32200 + var1[1];
  p_output1[98]=0.33087*t31989 + 0.145387*t31997 + t32208 + var1[1];
  p_output1[99]=t32383;
  p_output1[100]=t32453;
  p_output1[101]=0.327859*t32222 + 0.1516*t32226 + t32230 + var1[2];
  p_output1[102]=0.325794*t32222 + 0.155861*t32226 + t32234 + var1[2];
  p_output1[103]=0.323643*t32222 + 0.160301*t32226 + t32239 + var1[2];
  p_output1[104]=0.321639*t32222 + 0.164436*t32226 + t32244 + var1[2];
  p_output1[105]=0.319999*t32222 + 0.167821*t32226 + t32249 + var1[2];
  p_output1[106]=0.3189*t32222 + 0.170086*t32226 + t32253 + var1[2];
  p_output1[107]=0.318463*t32222 + 0.170988*t32226 + t32257 + var1[2];
  p_output1[108]=0.318735*t32222 + 0.170428*t32226 + t32263 + var1[2];
  p_output1[109]=0.319685*t32222 + 0.168468*t32226 + t32267 + var1[2];
  p_output1[110]=0.321211*t32222 + 0.165318*t32226 + t32273 + var1[2];
  p_output1[111]=0.323148*t32222 + 0.161322*t32226 + t32280 + var1[2];
  p_output1[112]=0.325285*t32222 + 0.156911*t32226 + t32284 + var1[2];
  p_output1[113]=0.327392*t32222 + 0.152564*t32226 + t32288 + var1[2];
  p_output1[114]=0.329239*t32222 + 0.148752*t32226 + t32293 + var1[2];
  p_output1[115]=0.330627*t32222 + 0.145888*t32226 + t32297 + var1[2];
  p_output1[116]=0.331405*t32222 + 0.144282*t32226 + t32302 + var1[2];
  p_output1[117]=0.331489*t32222 + 0.144109*t32226 + t32306 + var1[2];
  p_output1[118]=0.33087*t32222 + 0.145387*t32226 + t32311 + var1[2];
  p_output1[119]=t32453;
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

#include "Link_body_to_8_bar.hh"

namespace SymFunction
{

void Link_body_to_8_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
