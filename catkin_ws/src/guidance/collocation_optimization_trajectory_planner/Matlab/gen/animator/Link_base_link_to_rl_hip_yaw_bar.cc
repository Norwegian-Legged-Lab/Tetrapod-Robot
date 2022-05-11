/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:58 GMT+01:00
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
  double t180;
  double t1229;
  double t4001;
  double t5139;
  double t3818;
  double t4088;
  double t5501;
  double t5507;
  double t8222;
  double t8243;
  double t8236;
  double t8257;
  double t8258;
  double t8260;
  double t8263;
  double t8265;
  double t8235;
  double t8259;
  double t8267;
  double t8268;
  double t8522;
  double t8525;
  double t8529;
  double t8538;
  double t8544;
  double t8550;
  double t8519;
  double t8536;
  double t8551;
  double t8553;
  double t5705;
  double t6352;
  double t6783;
  double t6939;
  double t7194;
  double t7440;
  double t7704;
  double t7736;
  double t7748;
  double t7781;
  double t7788;
  double t7870;
  double t7894;
  double t7919;
  double t7939;
  double t8112;
  double t8158;
  double t8184;
  double t10312;
  double t10314;
  double t10322;
  double t8269;
  double t8276;
  double t8285;
  double t8295;
  double t8303;
  double t8312;
  double t8316;
  double t8321;
  double t8325;
  double t8334;
  double t8350;
  double t8356;
  double t8364;
  double t8395;
  double t8429;
  double t8494;
  double t8501;
  double t8506;
  double t11504;
  double t11583;
  double t11595;
  double t8555;
  double t8561;
  double t8572;
  double t8669;
  double t8741;
  double t8768;
  double t8782;
  double t8813;
  double t8846;
  double t8852;
  double t8881;
  double t8886;
  double t8951;
  double t9169;
  double t9241;
  double t9553;
  double t10151;
  double t10222;
  double t11960;
  double t11962;
  double t11965;
  t180 = Cos(var1[4]);
  t1229 = Cos(var1[5]);
  t4001 = Sin(var1[4]);
  t5139 = Sin(var1[5]);
  t3818 = -0.010546*t180*t1229;
  t4088 = -0.001599*t4001;
  t5501 = 0.010546*t180*t5139;
  t5507 = var1[0] + t3818 + t4088 + t5501;
  t8222 = Sin(var1[3]);
  t8243 = Cos(var1[3]);
  t8236 = t1229*t8222*t4001;
  t8257 = t8243*t5139;
  t8258 = t8236 + t8257;
  t8260 = t8243*t1229;
  t8263 = -1.*t8222*t4001*t5139;
  t8265 = t8260 + t8263;
  t8235 = 0.001599*t180*t8222;
  t8259 = -0.010546*t8258;
  t8267 = -0.010546*t8265;
  t8268 = var1[1] + t8235 + t8259 + t8267;
  t8522 = -1.*t8243*t1229*t4001;
  t8525 = t8222*t5139;
  t8529 = t8522 + t8525;
  t8538 = t1229*t8222;
  t8544 = t8243*t4001*t5139;
  t8550 = t8538 + t8544;
  t8519 = -0.001599*t8243*t180;
  t8536 = -0.010546*t8529;
  t8551 = -0.010546*t8550;
  t8553 = var1[2] + t8519 + t8536 + t8551;
  t5705 = 0.00333*t4001;
  t6352 = 0.007899*t4001;
  t6783 = 0.011611*t4001;
  t6939 = 0.014065*t4001;
  t7194 = 0.014996*t4001;
  t7440 = 0.014301*t4001;
  t7704 = 0.012056*t4001;
  t7736 = 0.008505*t4001;
  t7748 = 0.004032*t4001;
  t7781 = -0.000877*t4001;
  t7788 = -0.005692*t4001;
  t7870 = -0.00989*t4001;
  t7894 = -0.013016*t4001;
  t7919 = -0.014731*t4001;
  t7939 = -0.014851*t4001;
  t8112 = -0.013361*t4001;
  t8158 = -0.010423*t4001;
  t8184 = -0.006355*t4001;
  t10312 = -0.161756*t180*t1229;
  t10314 = -0.140664*t180*t5139;
  t10322 = var1[0] + t10312 + t4088 + t10314;
  t8269 = -0.00333*t180*t8222;
  t8276 = -0.007899*t180*t8222;
  t8285 = -0.011611*t180*t8222;
  t8295 = -0.014065*t180*t8222;
  t8303 = -0.014996*t180*t8222;
  t8312 = -0.014301*t180*t8222;
  t8316 = -0.012056*t180*t8222;
  t8321 = -0.008505*t180*t8222;
  t8325 = -0.004032*t180*t8222;
  t8334 = 0.000877*t180*t8222;
  t8350 = 0.005692*t180*t8222;
  t8356 = 0.00989*t180*t8222;
  t8364 = 0.013016*t180*t8222;
  t8395 = 0.014731*t180*t8222;
  t8429 = 0.014851*t180*t8222;
  t8494 = 0.013361*t180*t8222;
  t8501 = 0.010423*t180*t8222;
  t8506 = 0.006355*t180*t8222;
  t11504 = -0.161756*t8258;
  t11583 = 0.140664*t8265;
  t11595 = var1[1] + t8235 + t11504 + t11583;
  t8555 = 0.00333*t8243*t180;
  t8561 = 0.007899*t8243*t180;
  t8572 = 0.011611*t8243*t180;
  t8669 = 0.014065*t8243*t180;
  t8741 = 0.014996*t8243*t180;
  t8768 = 0.014301*t8243*t180;
  t8782 = 0.012056*t8243*t180;
  t8813 = 0.008505*t8243*t180;
  t8846 = 0.004032*t8243*t180;
  t8852 = -0.000877*t8243*t180;
  t8881 = -0.005692*t8243*t180;
  t8886 = -0.00989*t8243*t180;
  t8951 = -0.013016*t8243*t180;
  t9169 = -0.014731*t8243*t180;
  t9241 = -0.014851*t8243*t180;
  t9553 = -0.013361*t8243*t180;
  t10151 = -0.010423*t8243*t180;
  t10222 = -0.006355*t8243*t180;
  t11960 = -0.161756*t8529;
  t11962 = 0.140664*t8550;
  t11965 = var1[2] + t8519 + t11960 + t11962;
  p_output1[0]=t5507;
  p_output1[1]=-0.010342*t1229*t180 + 0.010342*t180*t5139 + t5705 + var1[0];
  p_output1[2]=-0.009017*t1229*t180 + 0.009017*t180*t5139 + t6352 + var1[0];
  p_output1[3]=-0.006715*t1229*t180 + 0.006715*t180*t5139 + t6783 + var1[0];
  p_output1[4]=-0.003685*t1229*t180 + 0.003685*t180*t5139 + t6939 + var1[0];
  p_output1[5]=-0.000256*t1229*t180 + 0.000256*t180*t5139 + t7194 + var1[0];
  p_output1[6]=0.003201*t1229*t180 - 0.003201*t180*t5139 + t7440 + var1[0];
  p_output1[7]=0.006311*t1229*t180 - 0.006311*t180*t5139 + t7704 + var1[0];
  p_output1[8]=0.008737*t1229*t180 - 0.008737*t180*t5139 + t7736 + var1[0];
  p_output1[9]=0.010216*t1229*t180 - 0.010216*t180*t5139 + t7748 + var1[0];
  p_output1[10]=0.010588*t1229*t180 - 0.010588*t180*t5139 + t7781 + var1[0];
  p_output1[11]=0.009813*t1229*t180 - 0.009813*t180*t5139 + t7788 + var1[0];
  p_output1[12]=0.007975*t1229*t180 - 0.007975*t180*t5139 + t7870 + var1[0];
  p_output1[13]=0.005272*t1229*t180 - 0.005272*t180*t5139 + t7894 + var1[0];
  p_output1[14]=0.001998*t1229*t180 - 0.001998*t180*t5139 + t7919 + var1[0];
  p_output1[15]=-0.001493*t1229*t180 + 0.001493*t180*t5139 + t7939 + var1[0];
  p_output1[16]=-0.004821*t1229*t180 + 0.004821*t180*t5139 + t8112 + var1[0];
  p_output1[17]=-0.007628*t1229*t180 + 0.007628*t180*t5139 + t8158 + var1[0];
  p_output1[18]=-0.009608*t1229*t180 + 0.009608*t180*t5139 + t8184 + var1[0];
  p_output1[19]=t5507;
  p_output1[20]=t8268;
  p_output1[21]=-0.010342*t8258 - 0.010342*t8265 + t8269 + var1[1];
  p_output1[22]=-0.009017*t8258 - 0.009017*t8265 + t8276 + var1[1];
  p_output1[23]=-0.006715*t8258 - 0.006715*t8265 + t8285 + var1[1];
  p_output1[24]=-0.003685*t8258 - 0.003685*t8265 + t8295 + var1[1];
  p_output1[25]=-0.000256*t8258 - 0.000256*t8265 + t8303 + var1[1];
  p_output1[26]=0.003201*t8258 + 0.003201*t8265 + t8312 + var1[1];
  p_output1[27]=0.006311*t8258 + 0.006311*t8265 + t8316 + var1[1];
  p_output1[28]=0.008737*t8258 + 0.008737*t8265 + t8321 + var1[1];
  p_output1[29]=0.010216*t8258 + 0.010216*t8265 + t8325 + var1[1];
  p_output1[30]=0.010588*t8258 + 0.010588*t8265 + t8334 + var1[1];
  p_output1[31]=0.009813*t8258 + 0.009813*t8265 + t8350 + var1[1];
  p_output1[32]=0.007975*t8258 + 0.007975*t8265 + t8356 + var1[1];
  p_output1[33]=0.005272*t8258 + 0.005272*t8265 + t8364 + var1[1];
  p_output1[34]=0.001998*t8258 + 0.001998*t8265 + t8395 + var1[1];
  p_output1[35]=-0.001493*t8258 - 0.001493*t8265 + t8429 + var1[1];
  p_output1[36]=-0.004821*t8258 - 0.004821*t8265 + t8494 + var1[1];
  p_output1[37]=-0.007628*t8258 - 0.007628*t8265 + t8501 + var1[1];
  p_output1[38]=-0.009608*t8258 - 0.009608*t8265 + t8506 + var1[1];
  p_output1[39]=t8268;
  p_output1[40]=t8553;
  p_output1[41]=-0.010342*t8529 - 0.010342*t8550 + t8555 + var1[2];
  p_output1[42]=-0.009017*t8529 - 0.009017*t8550 + t8561 + var1[2];
  p_output1[43]=-0.006715*t8529 - 0.006715*t8550 + t8572 + var1[2];
  p_output1[44]=-0.003685*t8529 - 0.003685*t8550 + t8669 + var1[2];
  p_output1[45]=-0.000256*t8529 - 0.000256*t8550 + t8741 + var1[2];
  p_output1[46]=0.003201*t8529 + 0.003201*t8550 + t8768 + var1[2];
  p_output1[47]=0.006311*t8529 + 0.006311*t8550 + t8782 + var1[2];
  p_output1[48]=0.008737*t8529 + 0.008737*t8550 + t8813 + var1[2];
  p_output1[49]=0.010216*t8529 + 0.010216*t8550 + t8846 + var1[2];
  p_output1[50]=0.010588*t8529 + 0.010588*t8550 + t8852 + var1[2];
  p_output1[51]=0.009813*t8529 + 0.009813*t8550 + t8881 + var1[2];
  p_output1[52]=0.007975*t8529 + 0.007975*t8550 + t8886 + var1[2];
  p_output1[53]=0.005272*t8529 + 0.005272*t8550 + t8951 + var1[2];
  p_output1[54]=0.001998*t8529 + 0.001998*t8550 + t9169 + var1[2];
  p_output1[55]=-0.001493*t8529 - 0.001493*t8550 + t9241 + var1[2];
  p_output1[56]=-0.004821*t8529 - 0.004821*t8550 + t9553 + var1[2];
  p_output1[57]=t10151 - 0.007628*t8529 - 0.007628*t8550 + var1[2];
  p_output1[58]=t10222 - 0.009608*t8529 - 0.009608*t8550 + var1[2];
  p_output1[59]=t8553;
  p_output1[60]=t10322;
  p_output1[61]=-0.161552*t1229*t180 - 0.140868*t180*t5139 + t5705 + var1[0];
  p_output1[62]=-0.160227*t1229*t180 - 0.142193*t180*t5139 + t6352 + var1[0];
  p_output1[63]=-0.157925*t1229*t180 - 0.144495*t180*t5139 + t6783 + var1[0];
  p_output1[64]=-0.154895*t1229*t180 - 0.147525*t180*t5139 + t6939 + var1[0];
  p_output1[65]=-0.151466*t1229*t180 - 0.150954*t180*t5139 + t7194 + var1[0];
  p_output1[66]=-0.148009*t1229*t180 - 0.154411*t180*t5139 + t7440 + var1[0];
  p_output1[67]=-0.144899*t1229*t180 - 0.157521*t180*t5139 + t7704 + var1[0];
  p_output1[68]=-0.142473*t1229*t180 - 0.159947*t180*t5139 + t7736 + var1[0];
  p_output1[69]=-0.140994*t1229*t180 - 0.161426*t180*t5139 + t7748 + var1[0];
  p_output1[70]=-0.140622*t1229*t180 - 0.161798*t180*t5139 + t7781 + var1[0];
  p_output1[71]=-0.141397*t1229*t180 - 0.161023*t180*t5139 + t7788 + var1[0];
  p_output1[72]=-0.143235*t1229*t180 - 0.159185*t180*t5139 + t7870 + var1[0];
  p_output1[73]=-0.145938*t1229*t180 - 0.156482*t180*t5139 + t7894 + var1[0];
  p_output1[74]=-0.149212*t1229*t180 - 0.153208*t180*t5139 + t7919 + var1[0];
  p_output1[75]=-0.152703*t1229*t180 - 0.149717*t180*t5139 + t7939 + var1[0];
  p_output1[76]=-0.156031*t1229*t180 - 0.146389*t180*t5139 + t8112 + var1[0];
  p_output1[77]=-0.158838*t1229*t180 - 0.143582*t180*t5139 + t8158 + var1[0];
  p_output1[78]=-0.160818*t1229*t180 - 0.141602*t180*t5139 + t8184 + var1[0];
  p_output1[79]=t10322;
  p_output1[80]=t11595;
  p_output1[81]=-0.161552*t8258 + 0.140868*t8265 + t8269 + var1[1];
  p_output1[82]=-0.160227*t8258 + 0.142193*t8265 + t8276 + var1[1];
  p_output1[83]=-0.157925*t8258 + 0.144495*t8265 + t8285 + var1[1];
  p_output1[84]=-0.154895*t8258 + 0.147525*t8265 + t8295 + var1[1];
  p_output1[85]=-0.151466*t8258 + 0.150954*t8265 + t8303 + var1[1];
  p_output1[86]=-0.148009*t8258 + 0.154411*t8265 + t8312 + var1[1];
  p_output1[87]=-0.144899*t8258 + 0.157521*t8265 + t8316 + var1[1];
  p_output1[88]=-0.142473*t8258 + 0.159947*t8265 + t8321 + var1[1];
  p_output1[89]=-0.140994*t8258 + 0.161426*t8265 + t8325 + var1[1];
  p_output1[90]=-0.140622*t8258 + 0.161798*t8265 + t8334 + var1[1];
  p_output1[91]=-0.141397*t8258 + 0.161023*t8265 + t8350 + var1[1];
  p_output1[92]=-0.143235*t8258 + 0.159185*t8265 + t8356 + var1[1];
  p_output1[93]=-0.145938*t8258 + 0.156482*t8265 + t8364 + var1[1];
  p_output1[94]=-0.149212*t8258 + 0.153208*t8265 + t8395 + var1[1];
  p_output1[95]=-0.152703*t8258 + 0.149717*t8265 + t8429 + var1[1];
  p_output1[96]=-0.156031*t8258 + 0.146389*t8265 + t8494 + var1[1];
  p_output1[97]=-0.158838*t8258 + 0.143582*t8265 + t8501 + var1[1];
  p_output1[98]=-0.160818*t8258 + 0.141602*t8265 + t8506 + var1[1];
  p_output1[99]=t11595;
  p_output1[100]=t11965;
  p_output1[101]=-0.161552*t8529 + 0.140868*t8550 + t8555 + var1[2];
  p_output1[102]=-0.160227*t8529 + 0.142193*t8550 + t8561 + var1[2];
  p_output1[103]=-0.157925*t8529 + 0.144495*t8550 + t8572 + var1[2];
  p_output1[104]=-0.154895*t8529 + 0.147525*t8550 + t8669 + var1[2];
  p_output1[105]=-0.151466*t8529 + 0.150954*t8550 + t8741 + var1[2];
  p_output1[106]=-0.148009*t8529 + 0.154411*t8550 + t8768 + var1[2];
  p_output1[107]=-0.144899*t8529 + 0.157521*t8550 + t8782 + var1[2];
  p_output1[108]=-0.142473*t8529 + 0.159947*t8550 + t8813 + var1[2];
  p_output1[109]=-0.140994*t8529 + 0.161426*t8550 + t8846 + var1[2];
  p_output1[110]=-0.140622*t8529 + 0.161798*t8550 + t8852 + var1[2];
  p_output1[111]=-0.141397*t8529 + 0.161023*t8550 + t8881 + var1[2];
  p_output1[112]=-0.143235*t8529 + 0.159185*t8550 + t8886 + var1[2];
  p_output1[113]=-0.145938*t8529 + 0.156482*t8550 + t8951 + var1[2];
  p_output1[114]=-0.149212*t8529 + 0.153208*t8550 + t9169 + var1[2];
  p_output1[115]=-0.152703*t8529 + 0.149717*t8550 + t9241 + var1[2];
  p_output1[116]=-0.156031*t8529 + 0.146389*t8550 + t9553 + var1[2];
  p_output1[117]=t10151 - 0.158838*t8529 + 0.143582*t8550 + var1[2];
  p_output1[118]=t10222 - 0.160818*t8529 + 0.141602*t8550 + var1[2];
  p_output1[119]=t11965;
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

#include "Link_base_link_to_rl_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_rl_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
