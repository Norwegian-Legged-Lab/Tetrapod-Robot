/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:27 GMT+01:00
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
  double t140;
  double t395;
  double t495;
  double t549;
  double t433;
  double t521;
  double t562;
  double t753;
  double t3799;
  double t3819;
  double t3811;
  double t3820;
  double t3827;
  double t3835;
  double t3839;
  double t3843;
  double t3807;
  double t3833;
  double t3848;
  double t3854;
  double t4081;
  double t4084;
  double t4087;
  double t4098;
  double t4099;
  double t4102;
  double t4080;
  double t4092;
  double t4103;
  double t4105;
  double t830;
  double t1334;
  double t1663;
  double t1798;
  double t1982;
  double t2259;
  double t2490;
  double t2695;
  double t2954;
  double t3233;
  double t3304;
  double t3383;
  double t3593;
  double t3653;
  double t3697;
  double t3730;
  double t3772;
  double t3788;
  double t4222;
  double t4230;
  double t4231;
  double t3857;
  double t3874;
  double t3904;
  double t3915;
  double t3924;
  double t3939;
  double t3945;
  double t3964;
  double t3974;
  double t3981;
  double t3986;
  double t3995;
  double t4002;
  double t4016;
  double t4040;
  double t4049;
  double t4057;
  double t4071;
  double t4324;
  double t4325;
  double t4326;
  double t4107;
  double t4113;
  double t4122;
  double t4127;
  double t4133;
  double t4140;
  double t4146;
  double t4150;
  double t4155;
  double t4163;
  double t4168;
  double t4176;
  double t4186;
  double t4197;
  double t4203;
  double t4207;
  double t4213;
  double t4217;
  double t4406;
  double t4409;
  double t4410;
  t140 = Cos(var1[4]);
  t395 = Cos(var1[5]);
  t495 = Sin(var1[4]);
  t549 = Sin(var1[5]);
  t433 = 0.00636*t140*t395;
  t521 = -0.012004*t495;
  t562 = 0.00636*t140*t549;
  t753 = var1[0] + t433 + t521 + t562;
  t3799 = Sin(var1[3]);
  t3819 = Cos(var1[3]);
  t3811 = t395*t3799*t495;
  t3820 = t3819*t549;
  t3827 = t3811 + t3820;
  t3835 = t3819*t395;
  t3839 = -1.*t3799*t495*t549;
  t3843 = t3835 + t3839;
  t3807 = 0.012004*t140*t3799;
  t3833 = 0.00636*t3827;
  t3848 = -0.00636*t3843;
  t3854 = var1[1] + t3807 + t3833 + t3848;
  t4081 = -1.*t3819*t395*t495;
  t4084 = t3799*t549;
  t4087 = t4081 + t4084;
  t4098 = t395*t3799;
  t4099 = t3819*t495*t549;
  t4102 = t4098 + t4099;
  t4080 = -0.012004*t3819*t140;
  t4092 = 0.00636*t4087;
  t4103 = -0.00636*t4102;
  t4105 = var1[2] + t4080 + t4092 + t4103;
  t830 = -0.014274*t495;
  t1334 = -0.014997*t495;
  t1663 = -0.014095*t495;
  t1798 = -0.011666*t495;
  t1982 = -0.007972*t495;
  t2259 = -0.003415*t495;
  t2490 = 0.001513*t495;
  t2695 = 0.006277*t495;
  t2954 = 0.01036*t495;
  t3233 = 0.013321*t495;
  t3304 = 0.014838*t495;
  t3383 = 0.014748*t495;
  t3593 = 0.013059*t495;
  t3653 = 0.009955*t495;
  t3697 = 0.005772*t495;
  t3730 = 0.000964*t495;
  t3772 = -0.003949*t495;
  t3788 = -0.008433*t495;
  t4222 = 0.15757*t140*t395;
  t4230 = -0.14485*t140*t549;
  t4231 = var1[0] + t4222 + t521 + t4230;
  t3857 = 0.014274*t140*t3799;
  t3874 = 0.014997*t140*t3799;
  t3904 = 0.014095*t140*t3799;
  t3915 = 0.011666*t140*t3799;
  t3924 = 0.007972*t140*t3799;
  t3939 = 0.003415*t140*t3799;
  t3945 = -0.001513*t140*t3799;
  t3964 = -0.006277*t140*t3799;
  t3974 = -0.01036*t140*t3799;
  t3981 = -0.013321*t140*t3799;
  t3986 = -0.014838*t140*t3799;
  t3995 = -0.014748*t140*t3799;
  t4002 = -0.013059*t140*t3799;
  t4016 = -0.009955*t140*t3799;
  t4040 = -0.005772*t140*t3799;
  t4049 = -0.000964*t140*t3799;
  t4057 = 0.003949*t140*t3799;
  t4071 = 0.008433*t140*t3799;
  t4324 = 0.15757*t3827;
  t4325 = 0.14485*t3843;
  t4326 = var1[1] + t3807 + t4324 + t4325;
  t4107 = -0.014274*t3819*t140;
  t4113 = -0.014997*t3819*t140;
  t4122 = -0.014095*t3819*t140;
  t4127 = -0.011666*t3819*t140;
  t4133 = -0.007972*t3819*t140;
  t4140 = -0.003415*t3819*t140;
  t4146 = 0.001513*t3819*t140;
  t4150 = 0.006277*t3819*t140;
  t4155 = 0.01036*t3819*t140;
  t4163 = 0.013321*t3819*t140;
  t4168 = 0.014838*t3819*t140;
  t4176 = 0.014748*t3819*t140;
  t4186 = 0.013059*t3819*t140;
  t4197 = 0.009955*t3819*t140;
  t4203 = 0.005772*t3819*t140;
  t4207 = 0.000964*t3819*t140;
  t4213 = -0.003949*t3819*t140;
  t4217 = -0.008433*t3819*t140;
  t4406 = 0.15757*t4087;
  t4409 = 0.14485*t4102;
  t4410 = var1[2] + t4080 + t4406 + t4409;
  p_output1[0]=t753;
  p_output1[1]=0.003259*t140*t395 + 0.003259*t140*t549 + t830 + var1[0];
  p_output1[2]=t1334 - 0.000195*t140*t395 - 0.000195*t140*t549 + var1[0];
  p_output1[3]=t1663 - 0.003628*t140*t395 - 0.003628*t140*t549 + var1[0];
  p_output1[4]=t1798 - 0.006667*t140*t395 - 0.006667*t140*t549 + var1[0];
  p_output1[5]=t1982 - 0.008985*t140*t395 - 0.008985*t140*t549 + var1[0];
  p_output1[6]=t2259 - 0.010328*t140*t395 - 0.010328*t140*t549 + var1[0];
  p_output1[7]=t2490 - 0.010553*t140*t395 - 0.010553*t140*t549 + var1[0];
  p_output1[8]=t2695 - 0.009633*t140*t395 - 0.009633*t140*t549 + var1[0];
  p_output1[9]=t2954 - 0.00767*t140*t395 - 0.00767*t140*t549 + var1[0];
  p_output1[10]=t3233 - 0.004876*t140*t395 - 0.004876*t140*t549 + var1[0];
  p_output1[11]=t3304 - 0.001553*t140*t395 - 0.001553*t140*t549 + var1[0];
  p_output1[12]=t3383 + 0.001938*t140*t395 + 0.001938*t140*t549 + var1[0];
  p_output1[13]=t3593 + 0.005219*t140*t395 + 0.005219*t140*t549 + var1[0];
  p_output1[14]=t3653 + 0.007934*t140*t395 + 0.007934*t140*t549 + var1[0];
  p_output1[15]=t3697 + 0.00979*t140*t395 + 0.00979*t140*t549 + var1[0];
  p_output1[16]=t3730 + 0.010585*t140*t395 + 0.010585*t140*t549 + var1[0];
  p_output1[17]=t3772 + 0.010232*t140*t395 + 0.010232*t140*t549 + var1[0];
  p_output1[18]=t3788 + 0.008771*t140*t395 + 0.008771*t140*t549 + var1[0];
  p_output1[19]=t753;
  p_output1[20]=t3854;
  p_output1[21]=0.003259*t3827 - 0.003259*t3843 + t3857 + var1[1];
  p_output1[22]=-0.000195*t3827 + 0.000195*t3843 + t3874 + var1[1];
  p_output1[23]=-0.003628*t3827 + 0.003628*t3843 + t3904 + var1[1];
  p_output1[24]=-0.006667*t3827 + 0.006667*t3843 + t3915 + var1[1];
  p_output1[25]=-0.008985*t3827 + 0.008985*t3843 + t3924 + var1[1];
  p_output1[26]=-0.010328*t3827 + 0.010328*t3843 + t3939 + var1[1];
  p_output1[27]=-0.010553*t3827 + 0.010553*t3843 + t3945 + var1[1];
  p_output1[28]=-0.009633*t3827 + 0.009633*t3843 + t3964 + var1[1];
  p_output1[29]=-0.00767*t3827 + 0.00767*t3843 + t3974 + var1[1];
  p_output1[30]=-0.004876*t3827 + 0.004876*t3843 + t3981 + var1[1];
  p_output1[31]=-0.001553*t3827 + 0.001553*t3843 + t3986 + var1[1];
  p_output1[32]=0.001938*t3827 - 0.001938*t3843 + t3995 + var1[1];
  p_output1[33]=0.005219*t3827 - 0.005219*t3843 + t4002 + var1[1];
  p_output1[34]=0.007934*t3827 - 0.007934*t3843 + t4016 + var1[1];
  p_output1[35]=0.00979*t3827 - 0.00979*t3843 + t4040 + var1[1];
  p_output1[36]=0.010585*t3827 - 0.010585*t3843 + t4049 + var1[1];
  p_output1[37]=0.010232*t3827 - 0.010232*t3843 + t4057 + var1[1];
  p_output1[38]=0.008771*t3827 - 0.008771*t3843 + t4071 + var1[1];
  p_output1[39]=t3854;
  p_output1[40]=t4105;
  p_output1[41]=0.003259*t4087 - 0.003259*t4102 + t4107 + var1[2];
  p_output1[42]=-0.000195*t4087 + 0.000195*t4102 + t4113 + var1[2];
  p_output1[43]=-0.003628*t4087 + 0.003628*t4102 + t4122 + var1[2];
  p_output1[44]=-0.006667*t4087 + 0.006667*t4102 + t4127 + var1[2];
  p_output1[45]=-0.008985*t4087 + 0.008985*t4102 + t4133 + var1[2];
  p_output1[46]=-0.010328*t4087 + 0.010328*t4102 + t4140 + var1[2];
  p_output1[47]=-0.010553*t4087 + 0.010553*t4102 + t4146 + var1[2];
  p_output1[48]=-0.009633*t4087 + 0.009633*t4102 + t4150 + var1[2];
  p_output1[49]=-0.00767*t4087 + 0.00767*t4102 + t4155 + var1[2];
  p_output1[50]=-0.004876*t4087 + 0.004876*t4102 + t4163 + var1[2];
  p_output1[51]=-0.001553*t4087 + 0.001553*t4102 + t4168 + var1[2];
  p_output1[52]=0.001938*t4087 - 0.001938*t4102 + t4176 + var1[2];
  p_output1[53]=0.005219*t4087 - 0.005219*t4102 + t4186 + var1[2];
  p_output1[54]=0.007934*t4087 - 0.007934*t4102 + t4197 + var1[2];
  p_output1[55]=0.00979*t4087 - 0.00979*t4102 + t4203 + var1[2];
  p_output1[56]=0.010585*t4087 - 0.010585*t4102 + t4207 + var1[2];
  p_output1[57]=0.010232*t4087 - 0.010232*t4102 + t4213 + var1[2];
  p_output1[58]=0.008771*t4087 - 0.008771*t4102 + t4217 + var1[2];
  p_output1[59]=t4105;
  p_output1[60]=t4231;
  p_output1[61]=0.154469*t140*t395 - 0.147951*t140*t549 + t830 + var1[0];
  p_output1[62]=t1334 + 0.151015*t140*t395 - 0.151405*t140*t549 + var1[0];
  p_output1[63]=t1663 + 0.147582*t140*t395 - 0.154838*t140*t549 + var1[0];
  p_output1[64]=t1798 + 0.144543*t140*t395 - 0.157877*t140*t549 + var1[0];
  p_output1[65]=t1982 + 0.142225*t140*t395 - 0.160195*t140*t549 + var1[0];
  p_output1[66]=t2259 + 0.140882*t140*t395 - 0.161538*t140*t549 + var1[0];
  p_output1[67]=t2490 + 0.140657*t140*t395 - 0.161763*t140*t549 + var1[0];
  p_output1[68]=t2695 + 0.141577*t140*t395 - 0.160843*t140*t549 + var1[0];
  p_output1[69]=t2954 + 0.14354*t140*t395 - 0.15888*t140*t549 + var1[0];
  p_output1[70]=t3233 + 0.146334*t140*t395 - 0.156086*t140*t549 + var1[0];
  p_output1[71]=t3304 + 0.149657*t140*t395 - 0.152763*t140*t549 + var1[0];
  p_output1[72]=t3383 + 0.153148*t140*t395 - 0.149272*t140*t549 + var1[0];
  p_output1[73]=t3593 + 0.156429*t140*t395 - 0.145991*t140*t549 + var1[0];
  p_output1[74]=t3653 + 0.159144*t140*t395 - 0.143276*t140*t549 + var1[0];
  p_output1[75]=t3697 + 0.161*t140*t395 - 0.14142*t140*t549 + var1[0];
  p_output1[76]=t3730 + 0.161795*t140*t395 - 0.140625*t140*t549 + var1[0];
  p_output1[77]=t3772 + 0.161442*t140*t395 - 0.140978*t140*t549 + var1[0];
  p_output1[78]=t3788 + 0.159981*t140*t395 - 0.142439*t140*t549 + var1[0];
  p_output1[79]=t4231;
  p_output1[80]=t4326;
  p_output1[81]=0.154469*t3827 + 0.147951*t3843 + t3857 + var1[1];
  p_output1[82]=0.151015*t3827 + 0.151405*t3843 + t3874 + var1[1];
  p_output1[83]=0.147582*t3827 + 0.154838*t3843 + t3904 + var1[1];
  p_output1[84]=0.144543*t3827 + 0.157877*t3843 + t3915 + var1[1];
  p_output1[85]=0.142225*t3827 + 0.160195*t3843 + t3924 + var1[1];
  p_output1[86]=0.140882*t3827 + 0.161538*t3843 + t3939 + var1[1];
  p_output1[87]=0.140657*t3827 + 0.161763*t3843 + t3945 + var1[1];
  p_output1[88]=0.141577*t3827 + 0.160843*t3843 + t3964 + var1[1];
  p_output1[89]=0.14354*t3827 + 0.15888*t3843 + t3974 + var1[1];
  p_output1[90]=0.146334*t3827 + 0.156086*t3843 + t3981 + var1[1];
  p_output1[91]=0.149657*t3827 + 0.152763*t3843 + t3986 + var1[1];
  p_output1[92]=0.153148*t3827 + 0.149272*t3843 + t3995 + var1[1];
  p_output1[93]=0.156429*t3827 + 0.145991*t3843 + t4002 + var1[1];
  p_output1[94]=0.159144*t3827 + 0.143276*t3843 + t4016 + var1[1];
  p_output1[95]=0.161*t3827 + 0.14142*t3843 + t4040 + var1[1];
  p_output1[96]=0.161795*t3827 + 0.140625*t3843 + t4049 + var1[1];
  p_output1[97]=0.161442*t3827 + 0.140978*t3843 + t4057 + var1[1];
  p_output1[98]=0.159981*t3827 + 0.142439*t3843 + t4071 + var1[1];
  p_output1[99]=t4326;
  p_output1[100]=t4410;
  p_output1[101]=0.154469*t4087 + 0.147951*t4102 + t4107 + var1[2];
  p_output1[102]=0.151015*t4087 + 0.151405*t4102 + t4113 + var1[2];
  p_output1[103]=0.147582*t4087 + 0.154838*t4102 + t4122 + var1[2];
  p_output1[104]=0.144543*t4087 + 0.157877*t4102 + t4127 + var1[2];
  p_output1[105]=0.142225*t4087 + 0.160195*t4102 + t4133 + var1[2];
  p_output1[106]=0.140882*t4087 + 0.161538*t4102 + t4140 + var1[2];
  p_output1[107]=0.140657*t4087 + 0.161763*t4102 + t4146 + var1[2];
  p_output1[108]=0.141577*t4087 + 0.160843*t4102 + t4150 + var1[2];
  p_output1[109]=0.14354*t4087 + 0.15888*t4102 + t4155 + var1[2];
  p_output1[110]=0.146334*t4087 + 0.156086*t4102 + t4163 + var1[2];
  p_output1[111]=0.149657*t4087 + 0.152763*t4102 + t4168 + var1[2];
  p_output1[112]=0.153148*t4087 + 0.149272*t4102 + t4176 + var1[2];
  p_output1[113]=0.156429*t4087 + 0.145991*t4102 + t4186 + var1[2];
  p_output1[114]=0.159144*t4087 + 0.143276*t4102 + t4197 + var1[2];
  p_output1[115]=0.161*t4087 + 0.14142*t4102 + t4203 + var1[2];
  p_output1[116]=0.161795*t4087 + 0.140625*t4102 + t4207 + var1[2];
  p_output1[117]=0.161442*t4087 + 0.140978*t4102 + t4213 + var1[2];
  p_output1[118]=0.159981*t4087 + 0.142439*t4102 + t4217 + var1[2];
  p_output1[119]=t4410;
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

#include "Link_base_link_to_fl_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_fl_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
