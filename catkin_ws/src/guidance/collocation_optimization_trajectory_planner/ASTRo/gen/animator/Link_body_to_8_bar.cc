/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:42:54 GMT+02:00
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
  double t10;
  double t22;
  double t1497;
  double t2150;
  double t160;
  double t1688;
  double t2792;
  double t2837;
  double t4059;
  double t4068;
  double t4067;
  double t4069;
  double t4071;
  double t4073;
  double t4075;
  double t4076;
  double t4063;
  double t4072;
  double t4077;
  double t4078;
  double t4317;
  double t4321;
  double t4331;
  double t4336;
  double t4338;
  double t4339;
  double t4316;
  double t4334;
  double t4344;
  double t4350;
  double t2913;
  double t2979;
  double t3484;
  double t3531;
  double t3660;
  double t3692;
  double t3752;
  double t3762;
  double t3813;
  double t3876;
  double t3939;
  double t3967;
  double t3979;
  double t3988;
  double t4003;
  double t4027;
  double t4037;
  double t4048;
  double t4528;
  double t4531;
  double t4537;
  double t4079;
  double t4089;
  double t4101;
  double t4109;
  double t4129;
  double t4141;
  double t4151;
  double t4161;
  double t4170;
  double t4186;
  double t4212;
  double t4241;
  double t4258;
  double t4267;
  double t4275;
  double t4285;
  double t4299;
  double t4307;
  double t4945;
  double t5012;
  double t5052;
  double t4352;
  double t4363;
  double t4380;
  double t4388;
  double t4394;
  double t4404;
  double t4414;
  double t4423;
  double t4432;
  double t4437;
  double t4445;
  double t4457;
  double t4469;
  double t4480;
  double t4491;
  double t4502;
  double t4509;
  double t4519;
  double t5586;
  double t5588;
  double t5589;
  t10 = Cos(var1[4]);
  t22 = Cos(var1[5]);
  t1497 = Sin(var1[4]);
  t2150 = Sin(var1[5]);
  t160 = -0.007347*t10*t22;
  t1688 = -0.010819*t1497;
  t2792 = -0.007347*t10*t2150;
  t2837 = var1[0] + t160 + t1688 + t2792;
  t4059 = Sin(var1[3]);
  t4068 = Cos(var1[3]);
  t4067 = t22*t4059*t1497;
  t4069 = t4068*t2150;
  t4071 = t4067 + t4069;
  t4073 = t4068*t22;
  t4075 = -1.*t4059*t1497*t2150;
  t4076 = t4073 + t4075;
  t4063 = 0.010819*t10*t4059;
  t4072 = -0.007347*t4071;
  t4077 = 0.007347*t4076;
  t4078 = var1[1] + t4063 + t4072 + t4077;
  t4317 = -1.*t4068*t22*t1497;
  t4321 = t4059*t2150;
  t4331 = t4317 + t4321;
  t4336 = t22*t4059;
  t4338 = t4068*t1497*t2150;
  t4339 = t4336 + t4338;
  t4316 = -0.010819*t4068*t10;
  t4334 = -0.007347*t4331;
  t4344 = 0.007347*t4339;
  t4350 = var1[2] + t4316 + t4334 + t4344;
  t2913 = -0.006859*t1497;
  t2979 = -0.002156*t1497;
  t3484 = 0.002781*t1497;
  t3531 = 0.007416*t1497;
  t3660 = 0.011248*t1497;
  t3692 = 0.013861*t1497;
  t3752 = 0.014972*t1497;
  t3762 = 0.01446*t1497;
  t3813 = 0.012381*t1497;
  t3876 = 0.008961*t1497;
  t3939 = 0.00457*t1497;
  t3967 = -0.000317*t1497;
  t3979 = -0.005169*t1497;
  t3988 = -0.009461*t1497;
  t4003 = -0.012728*t1497;
  t4027 = -0.014616*t1497;
  t4037 = -0.014919*t1497;
  t4048 = -0.013606*t1497;
  t4528 = 0.143863*t10*t22;
  t4531 = -0.158557*t10*t2150;
  t4537 = var1[0] + t4528 + t1688 + t4531;
  t4079 = 0.006859*t10*t4059;
  t4089 = 0.002156*t10*t4059;
  t4101 = -0.002781*t10*t4059;
  t4109 = -0.007416*t10*t4059;
  t4129 = -0.011248*t10*t4059;
  t4141 = -0.013861*t10*t4059;
  t4151 = -0.014972*t10*t4059;
  t4161 = -0.01446*t10*t4059;
  t4170 = -0.012381*t10*t4059;
  t4186 = -0.008961*t10*t4059;
  t4212 = -0.00457*t10*t4059;
  t4241 = 0.000317*t10*t4059;
  t4258 = 0.005169*t10*t4059;
  t4267 = 0.009461*t10*t4059;
  t4275 = 0.012728*t10*t4059;
  t4285 = 0.014616*t10*t4059;
  t4299 = 0.014919*t10*t4059;
  t4307 = 0.013606*t10*t4059;
  t4945 = 0.143863*t4071;
  t5012 = 0.158557*t4076;
  t5052 = var1[1] + t4063 + t4945 + t5012;
  t4352 = -0.006859*t4068*t10;
  t4363 = -0.002156*t4068*t10;
  t4380 = 0.002781*t4068*t10;
  t4388 = 0.007416*t4068*t10;
  t4394 = 0.011248*t4068*t10;
  t4404 = 0.013861*t4068*t10;
  t4414 = 0.014972*t4068*t10;
  t4423 = 0.01446*t4068*t10;
  t4432 = 0.012381*t4068*t10;
  t4437 = 0.008961*t4068*t10;
  t4445 = 0.00457*t4068*t10;
  t4457 = -0.000317*t4068*t10;
  t4469 = -0.005169*t4068*t10;
  t4480 = -0.009461*t4068*t10;
  t4491 = -0.012728*t4068*t10;
  t4502 = -0.014616*t4068*t10;
  t4509 = -0.014919*t4068*t10;
  t4519 = -0.013606*t4068*t10;
  t5586 = 0.143863*t4331;
  t5588 = 0.158557*t4339;
  t5589 = var1[2] + t4316 + t5586 + t5588;
  p_output1[0]=t2837;
  p_output1[1]=-0.009433*t10*t2150 - 0.009433*t10*t22 + t2913 + var1[0];
  p_output1[2]=-0.010496*t10*t2150 - 0.010496*t10*t22 + t2979 + var1[0];
  p_output1[3]=-0.010423*t10*t2150 - 0.010423*t10*t22 + t3484 + var1[0];
  p_output1[4]=-0.00922*t10*t2150 - 0.00922*t10*t22 + t3531 + var1[0];
  p_output1[5]=-0.007017*t10*t2150 - 0.007017*t10*t22 + t3660 + var1[0];
  p_output1[6]=-0.004055*t10*t2150 - 0.004055*t10*t22 + t3692 + var1[0];
  p_output1[7]=-0.000653*t10*t2150 - 0.000653*t10*t22 + t3752 + var1[0];
  p_output1[8]=0.00282*t10*t2150 + 0.00282*t10*t22 + t3762 + var1[0];
  p_output1[9]=0.005987*t10*t2150 + 0.005987*t10*t22 + t3813 + var1[0];
  p_output1[10]=0.008506*t10*t2150 + 0.008506*t10*t22 + t3876 + var1[0];
  p_output1[11]=0.010102*t10*t2150 + 0.010102*t10*t22 + t3939 + var1[0];
  p_output1[12]=0.010604*t10*t2150 + 0.010604*t10*t22 + t3967 + var1[0];
  p_output1[13]=0.009957*t10*t2150 + 0.009957*t10*t22 + t3979 + var1[0];
  p_output1[14]=0.008231*t10*t2150 + 0.008231*t10*t22 + t3988 + var1[0];
  p_output1[15]=0.005612*t10*t2150 + 0.005612*t10*t22 + t4003 + var1[0];
  p_output1[16]=0.002386*t10*t2150 + 0.002386*t10*t22 + t4027 + var1[0];
  p_output1[17]=-0.001099*t10*t2150 - 0.001099*t10*t22 + t4037 + var1[0];
  p_output1[18]=-0.004465*t10*t2150 - 0.004465*t10*t22 + t4048 + var1[0];
  p_output1[19]=t2837;
  p_output1[20]=t4078;
  p_output1[21]=-0.009433*t4071 + 0.009433*t4076 + t4079 + var1[1];
  p_output1[22]=-0.010496*t4071 + 0.010496*t4076 + t4089 + var1[1];
  p_output1[23]=-0.010423*t4071 + 0.010423*t4076 + t4101 + var1[1];
  p_output1[24]=-0.00922*t4071 + 0.00922*t4076 + t4109 + var1[1];
  p_output1[25]=-0.007017*t4071 + 0.007017*t4076 + t4129 + var1[1];
  p_output1[26]=-0.004055*t4071 + 0.004055*t4076 + t4141 + var1[1];
  p_output1[27]=-0.000653*t4071 + 0.000653*t4076 + t4151 + var1[1];
  p_output1[28]=0.00282*t4071 - 0.00282*t4076 + t4161 + var1[1];
  p_output1[29]=0.005987*t4071 - 0.005987*t4076 + t4170 + var1[1];
  p_output1[30]=0.008506*t4071 - 0.008506*t4076 + t4186 + var1[1];
  p_output1[31]=0.010102*t4071 - 0.010102*t4076 + t4212 + var1[1];
  p_output1[32]=0.010604*t4071 - 0.010604*t4076 + t4241 + var1[1];
  p_output1[33]=0.009957*t4071 - 0.009957*t4076 + t4258 + var1[1];
  p_output1[34]=0.008231*t4071 - 0.008231*t4076 + t4267 + var1[1];
  p_output1[35]=0.005612*t4071 - 0.005612*t4076 + t4275 + var1[1];
  p_output1[36]=0.002386*t4071 - 0.002386*t4076 + t4285 + var1[1];
  p_output1[37]=-0.001099*t4071 + 0.001099*t4076 + t4299 + var1[1];
  p_output1[38]=-0.004465*t4071 + 0.004465*t4076 + t4307 + var1[1];
  p_output1[39]=t4078;
  p_output1[40]=t4350;
  p_output1[41]=-0.009433*t4331 + 0.009433*t4339 + t4352 + var1[2];
  p_output1[42]=-0.010496*t4331 + 0.010496*t4339 + t4363 + var1[2];
  p_output1[43]=-0.010423*t4331 + 0.010423*t4339 + t4380 + var1[2];
  p_output1[44]=-0.00922*t4331 + 0.00922*t4339 + t4388 + var1[2];
  p_output1[45]=-0.007017*t4331 + 0.007017*t4339 + t4394 + var1[2];
  p_output1[46]=-0.004055*t4331 + 0.004055*t4339 + t4404 + var1[2];
  p_output1[47]=-0.000653*t4331 + 0.000653*t4339 + t4414 + var1[2];
  p_output1[48]=0.00282*t4331 - 0.00282*t4339 + t4423 + var1[2];
  p_output1[49]=0.005987*t4331 - 0.005987*t4339 + t4432 + var1[2];
  p_output1[50]=0.008506*t4331 - 0.008506*t4339 + t4437 + var1[2];
  p_output1[51]=0.010102*t4331 - 0.010102*t4339 + t4445 + var1[2];
  p_output1[52]=0.010604*t4331 - 0.010604*t4339 + t4457 + var1[2];
  p_output1[53]=0.009957*t4331 - 0.009957*t4339 + t4469 + var1[2];
  p_output1[54]=0.008231*t4331 - 0.008231*t4339 + t4480 + var1[2];
  p_output1[55]=0.005612*t4331 - 0.005612*t4339 + t4491 + var1[2];
  p_output1[56]=0.002386*t4331 - 0.002386*t4339 + t4502 + var1[2];
  p_output1[57]=-0.001099*t4331 + 0.001099*t4339 + t4509 + var1[2];
  p_output1[58]=-0.004465*t4331 + 0.004465*t4339 + t4519 + var1[2];
  p_output1[59]=t4350;
  p_output1[60]=t4537;
  p_output1[61]=-0.160643*t10*t2150 + 0.141777*t10*t22 + t2913 + var1[0];
  p_output1[62]=-0.161706*t10*t2150 + 0.140714*t10*t22 + t2979 + var1[0];
  p_output1[63]=-0.161633*t10*t2150 + 0.140787*t10*t22 + t3484 + var1[0];
  p_output1[64]=-0.16043*t10*t2150 + 0.14199*t10*t22 + t3531 + var1[0];
  p_output1[65]=-0.158227*t10*t2150 + 0.144193*t10*t22 + t3660 + var1[0];
  p_output1[66]=-0.155265*t10*t2150 + 0.147155*t10*t22 + t3692 + var1[0];
  p_output1[67]=-0.151863*t10*t2150 + 0.150557*t10*t22 + t3752 + var1[0];
  p_output1[68]=-0.14839*t10*t2150 + 0.15403*t10*t22 + t3762 + var1[0];
  p_output1[69]=-0.145223*t10*t2150 + 0.157197*t10*t22 + t3813 + var1[0];
  p_output1[70]=-0.142704*t10*t2150 + 0.159716*t10*t22 + t3876 + var1[0];
  p_output1[71]=-0.141108*t10*t2150 + 0.161312*t10*t22 + t3939 + var1[0];
  p_output1[72]=-0.140606*t10*t2150 + 0.161814*t10*t22 + t3967 + var1[0];
  p_output1[73]=-0.141253*t10*t2150 + 0.161167*t10*t22 + t3979 + var1[0];
  p_output1[74]=-0.142979*t10*t2150 + 0.159441*t10*t22 + t3988 + var1[0];
  p_output1[75]=-0.145598*t10*t2150 + 0.156822*t10*t22 + t4003 + var1[0];
  p_output1[76]=-0.148824*t10*t2150 + 0.153596*t10*t22 + t4027 + var1[0];
  p_output1[77]=-0.152309*t10*t2150 + 0.150111*t10*t22 + t4037 + var1[0];
  p_output1[78]=-0.155675*t10*t2150 + 0.146745*t10*t22 + t4048 + var1[0];
  p_output1[79]=t4537;
  p_output1[80]=t5052;
  p_output1[81]=0.141777*t4071 + 0.160643*t4076 + t4079 + var1[1];
  p_output1[82]=0.140714*t4071 + 0.161706*t4076 + t4089 + var1[1];
  p_output1[83]=0.140787*t4071 + 0.161633*t4076 + t4101 + var1[1];
  p_output1[84]=0.14199*t4071 + 0.16043*t4076 + t4109 + var1[1];
  p_output1[85]=0.144193*t4071 + 0.158227*t4076 + t4129 + var1[1];
  p_output1[86]=0.147155*t4071 + 0.155265*t4076 + t4141 + var1[1];
  p_output1[87]=0.150557*t4071 + 0.151863*t4076 + t4151 + var1[1];
  p_output1[88]=0.15403*t4071 + 0.14839*t4076 + t4161 + var1[1];
  p_output1[89]=0.157197*t4071 + 0.145223*t4076 + t4170 + var1[1];
  p_output1[90]=0.159716*t4071 + 0.142704*t4076 + t4186 + var1[1];
  p_output1[91]=0.161312*t4071 + 0.141108*t4076 + t4212 + var1[1];
  p_output1[92]=0.161814*t4071 + 0.140606*t4076 + t4241 + var1[1];
  p_output1[93]=0.161167*t4071 + 0.141253*t4076 + t4258 + var1[1];
  p_output1[94]=0.159441*t4071 + 0.142979*t4076 + t4267 + var1[1];
  p_output1[95]=0.156822*t4071 + 0.145598*t4076 + t4275 + var1[1];
  p_output1[96]=0.153596*t4071 + 0.148824*t4076 + t4285 + var1[1];
  p_output1[97]=0.150111*t4071 + 0.152309*t4076 + t4299 + var1[1];
  p_output1[98]=0.146745*t4071 + 0.155675*t4076 + t4307 + var1[1];
  p_output1[99]=t5052;
  p_output1[100]=t5589;
  p_output1[101]=0.141777*t4331 + 0.160643*t4339 + t4352 + var1[2];
  p_output1[102]=0.140714*t4331 + 0.161706*t4339 + t4363 + var1[2];
  p_output1[103]=0.140787*t4331 + 0.161633*t4339 + t4380 + var1[2];
  p_output1[104]=0.14199*t4331 + 0.16043*t4339 + t4388 + var1[2];
  p_output1[105]=0.144193*t4331 + 0.158227*t4339 + t4394 + var1[2];
  p_output1[106]=0.147155*t4331 + 0.155265*t4339 + t4404 + var1[2];
  p_output1[107]=0.150557*t4331 + 0.151863*t4339 + t4414 + var1[2];
  p_output1[108]=0.15403*t4331 + 0.14839*t4339 + t4423 + var1[2];
  p_output1[109]=0.157197*t4331 + 0.145223*t4339 + t4432 + var1[2];
  p_output1[110]=0.159716*t4331 + 0.142704*t4339 + t4437 + var1[2];
  p_output1[111]=0.161312*t4331 + 0.141108*t4339 + t4445 + var1[2];
  p_output1[112]=0.161814*t4331 + 0.140606*t4339 + t4457 + var1[2];
  p_output1[113]=0.161167*t4331 + 0.141253*t4339 + t4469 + var1[2];
  p_output1[114]=0.159441*t4331 + 0.142979*t4339 + t4480 + var1[2];
  p_output1[115]=0.156822*t4331 + 0.145598*t4339 + t4491 + var1[2];
  p_output1[116]=0.153596*t4331 + 0.148824*t4339 + t4502 + var1[2];
  p_output1[117]=0.150111*t4331 + 0.152309*t4339 + t4509 + var1[2];
  p_output1[118]=0.146745*t4331 + 0.155675*t4339 + t4519 + var1[2];
  p_output1[119]=t5589;
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
