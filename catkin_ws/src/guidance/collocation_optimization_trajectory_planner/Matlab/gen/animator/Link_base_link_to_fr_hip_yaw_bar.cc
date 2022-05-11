/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:52 GMT+01:00
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
  double t291;
  double t3789;
  double t4749;
  double t4787;
  double t4131;
  double t4750;
  double t4890;
  double t4931;
  double t6675;
  double t6696;
  double t6693;
  double t6701;
  double t6703;
  double t6729;
  double t6733;
  double t6751;
  double t6678;
  double t6717;
  double t6755;
  double t6756;
  double t7504;
  double t7506;
  double t7507;
  double t7509;
  double t7510;
  double t7517;
  double t7503;
  double t7508;
  double t7521;
  double t7522;
  double t4963;
  double t5149;
  double t5237;
  double t5538;
  double t5602;
  double t5654;
  double t5797;
  double t6006;
  double t6125;
  double t6356;
  double t6428;
  double t6441;
  double t6469;
  double t6496;
  double t6517;
  double t6572;
  double t6628;
  double t6666;
  double t7974;
  double t7975;
  double t7986;
  double t6757;
  double t6771;
  double t6781;
  double t6799;
  double t6824;
  double t6851;
  double t6899;
  double t6953;
  double t7086;
  double t7117;
  double t7176;
  double t7192;
  double t7198;
  double t7284;
  double t7305;
  double t7321;
  double t7452;
  double t7482;
  double t8282;
  double t8290;
  double t8292;
  double t7523;
  double t7536;
  double t7554;
  double t7703;
  double t7735;
  double t7740;
  double t7776;
  double t7780;
  double t7786;
  double t7835;
  double t7867;
  double t7889;
  double t7899;
  double t7915;
  double t7920;
  double t7938;
  double t7943;
  double t7948;
  double t8604;
  double t8617;
  double t8725;
  t291 = Cos(var1[4]);
  t3789 = Cos(var1[5]);
  t4749 = Sin(var1[4]);
  t4787 = Sin(var1[5]);
  t4131 = -0.007923*t291*t3789;
  t4750 = -0.009973*t4749;
  t4890 = 0.007923*t291*t4787;
  t4931 = var1[0] + t4131 + t4750 + t4890;
  t6675 = Sin(var1[3]);
  t6696 = Cos(var1[3]);
  t6693 = t3789*t6675*t4749;
  t6701 = t6696*t4787;
  t6703 = t6693 + t6701;
  t6729 = t6696*t3789;
  t6733 = -1.*t6675*t4749*t4787;
  t6751 = t6729 + t6733;
  t6678 = 0.009973*t291*t6675;
  t6717 = -0.007923*t6703;
  t6755 = -0.007923*t6751;
  t6756 = var1[1] + t6678 + t6717 + t6755;
  t7504 = -1.*t6696*t3789*t4749;
  t7506 = t6675*t4787;
  t7507 = t7504 + t7506;
  t7509 = t3789*t6675;
  t7510 = t6696*t4749*t4787;
  t7517 = t7509 + t7510;
  t7503 = -0.009973*t6696*t291;
  t7508 = -0.007923*t7507;
  t7521 = -0.007923*t7517;
  t7522 = var1[2] + t7503 + t7508 + t7521;
  t4963 = -0.013071*t4749;
  t5149 = -0.014752*t4749;
  t5237 = -0.014835*t4749;
  t5538 = -0.01331*t4749;
  t5602 = -0.010342*t4749;
  t5654 = -0.006254*t4749;
  t5797 = -0.001489*t4749;
  t6006 = 0.003438*t4749;
  t6125 = 0.007993*t4749;
  t6356 = 0.011681*t4749;
  t6428 = 0.014104*t4749;
  t6441 = 0.014998*t4749;
  t6469 = 0.014267*t4749;
  t6496 = 0.01199*t4749;
  t6517 = 0.008413*t4749;
  t6572 = 0.003925*t4749;
  t6628 = -0.000988*t4749;
  t6666 = -0.005795*t4749;
  t7974 = 0.143287*t291*t3789;
  t7975 = 0.159133*t291*t4787;
  t7986 = var1[0] + t7974 + t4750 + t7975;
  t6757 = 0.013071*t291*t6675;
  t6771 = 0.014752*t291*t6675;
  t6781 = 0.014835*t291*t6675;
  t6799 = 0.01331*t291*t6675;
  t6824 = 0.010342*t291*t6675;
  t6851 = 0.006254*t291*t6675;
  t6899 = 0.001489*t291*t6675;
  t6953 = -0.003438*t291*t6675;
  t7086 = -0.007993*t291*t6675;
  t7117 = -0.011681*t291*t6675;
  t7176 = -0.014104*t291*t6675;
  t7192 = -0.014998*t291*t6675;
  t7198 = -0.014267*t291*t6675;
  t7284 = -0.01199*t291*t6675;
  t7305 = -0.008413*t291*t6675;
  t7321 = -0.003925*t291*t6675;
  t7452 = 0.000988*t291*t6675;
  t7482 = 0.005795*t291*t6675;
  t8282 = 0.143287*t6703;
  t8290 = -0.159133*t6751;
  t8292 = var1[1] + t6678 + t8282 + t8290;
  t7523 = -0.013071*t6696*t291;
  t7536 = -0.014752*t6696*t291;
  t7554 = -0.014835*t6696*t291;
  t7703 = -0.01331*t6696*t291;
  t7735 = -0.010342*t6696*t291;
  t7740 = -0.006254*t6696*t291;
  t7776 = -0.001489*t6696*t291;
  t7780 = 0.003438*t6696*t291;
  t7786 = 0.007993*t6696*t291;
  t7835 = 0.011681*t6696*t291;
  t7867 = 0.014104*t6696*t291;
  t7889 = 0.014998*t6696*t291;
  t7899 = 0.014267*t6696*t291;
  t7915 = 0.01199*t6696*t291;
  t7920 = 0.008413*t6696*t291;
  t7938 = 0.003925*t6696*t291;
  t7943 = -0.000988*t6696*t291;
  t7948 = -0.005795*t6696*t291;
  t8604 = 0.143287*t7507;
  t8617 = -0.159133*t7517;
  t8725 = var1[2] + t7503 + t8604 + t8617;
  p_output1[0]=t4931;
  p_output1[1]=-0.005204*t291*t3789 + 0.005204*t291*t4787 + t4963 + var1[0];
  p_output1[2]=-0.001921*t291*t3789 + 0.001921*t291*t4787 + t5149 + var1[0];
  p_output1[3]=0.001571*t291*t3789 - 0.001571*t291*t4787 + t5237 + var1[0];
  p_output1[4]=0.004891*t291*t3789 - 0.004891*t291*t4787 + t5538 + var1[0];
  p_output1[5]=0.007682*t291*t3789 - 0.007682*t291*t4787 + t5602 + var1[0];
  p_output1[6]=0.009641*t291*t3789 - 0.009641*t291*t4787 + t5654 + var1[0];
  p_output1[7]=0.010554*t291*t3789 - 0.010554*t291*t4787 + t5797 + var1[0];
  p_output1[8]=0.010324*t291*t3789 - 0.010324*t291*t4787 + t6006 + var1[0];
  p_output1[9]=0.008975*t291*t3789 - 0.008975*t291*t4787 + t6125 + var1[0];
  p_output1[10]=0.006654*t291*t3789 - 0.006654*t291*t4787 + t6356 + var1[0];
  p_output1[11]=0.003611*t291*t3789 - 0.003611*t291*t4787 + t6428 + var1[0];
  p_output1[12]=0.000177*t291*t3789 - 0.000177*t291*t4787 + t6441 + var1[0];
  p_output1[13]=-0.003276*t291*t3789 + 0.003276*t291*t4787 + t6469 + var1[0];
  p_output1[14]=-0.006374*t291*t3789 + 0.006374*t291*t4787 + t6496 + var1[0];
  p_output1[15]=-0.008781*t291*t3789 + 0.008781*t291*t4787 + t6517 + var1[0];
  p_output1[16]=-0.010237*t291*t3789 + 0.010237*t291*t4787 + t6572 + var1[0];
  p_output1[17]=-0.010584*t291*t3789 + 0.010584*t291*t4787 + t6628 + var1[0];
  p_output1[18]=-0.009783*t291*t3789 + 0.009783*t291*t4787 + t6666 + var1[0];
  p_output1[19]=t4931;
  p_output1[20]=t6756;
  p_output1[21]=-0.005204*t6703 - 0.005204*t6751 + t6757 + var1[1];
  p_output1[22]=-0.001921*t6703 - 0.001921*t6751 + t6771 + var1[1];
  p_output1[23]=0.001571*t6703 + 0.001571*t6751 + t6781 + var1[1];
  p_output1[24]=0.004891*t6703 + 0.004891*t6751 + t6799 + var1[1];
  p_output1[25]=0.007682*t6703 + 0.007682*t6751 + t6824 + var1[1];
  p_output1[26]=0.009641*t6703 + 0.009641*t6751 + t6851 + var1[1];
  p_output1[27]=0.010554*t6703 + 0.010554*t6751 + t6899 + var1[1];
  p_output1[28]=0.010324*t6703 + 0.010324*t6751 + t6953 + var1[1];
  p_output1[29]=0.008975*t6703 + 0.008975*t6751 + t7086 + var1[1];
  p_output1[30]=0.006654*t6703 + 0.006654*t6751 + t7117 + var1[1];
  p_output1[31]=0.003611*t6703 + 0.003611*t6751 + t7176 + var1[1];
  p_output1[32]=0.000177*t6703 + 0.000177*t6751 + t7192 + var1[1];
  p_output1[33]=-0.003276*t6703 - 0.003276*t6751 + t7198 + var1[1];
  p_output1[34]=-0.006374*t6703 - 0.006374*t6751 + t7284 + var1[1];
  p_output1[35]=-0.008781*t6703 - 0.008781*t6751 + t7305 + var1[1];
  p_output1[36]=-0.010237*t6703 - 0.010237*t6751 + t7321 + var1[1];
  p_output1[37]=-0.010584*t6703 - 0.010584*t6751 + t7452 + var1[1];
  p_output1[38]=-0.009783*t6703 - 0.009783*t6751 + t7482 + var1[1];
  p_output1[39]=t6756;
  p_output1[40]=t7522;
  p_output1[41]=-0.005204*t7507 - 0.005204*t7517 + t7523 + var1[2];
  p_output1[42]=-0.001921*t7507 - 0.001921*t7517 + t7536 + var1[2];
  p_output1[43]=0.001571*t7507 + 0.001571*t7517 + t7554 + var1[2];
  p_output1[44]=0.004891*t7507 + 0.004891*t7517 + t7703 + var1[2];
  p_output1[45]=0.007682*t7507 + 0.007682*t7517 + t7735 + var1[2];
  p_output1[46]=0.009641*t7507 + 0.009641*t7517 + t7740 + var1[2];
  p_output1[47]=0.010554*t7507 + 0.010554*t7517 + t7776 + var1[2];
  p_output1[48]=0.010324*t7507 + 0.010324*t7517 + t7780 + var1[2];
  p_output1[49]=0.008975*t7507 + 0.008975*t7517 + t7786 + var1[2];
  p_output1[50]=0.006654*t7507 + 0.006654*t7517 + t7835 + var1[2];
  p_output1[51]=0.003611*t7507 + 0.003611*t7517 + t7867 + var1[2];
  p_output1[52]=0.000177*t7507 + 0.000177*t7517 + t7889 + var1[2];
  p_output1[53]=-0.003276*t7507 - 0.003276*t7517 + t7899 + var1[2];
  p_output1[54]=-0.006374*t7507 - 0.006374*t7517 + t7915 + var1[2];
  p_output1[55]=-0.008781*t7507 - 0.008781*t7517 + t7920 + var1[2];
  p_output1[56]=-0.010237*t7507 - 0.010237*t7517 + t7938 + var1[2];
  p_output1[57]=-0.010584*t7507 - 0.010584*t7517 + t7943 + var1[2];
  p_output1[58]=-0.009783*t7507 - 0.009783*t7517 + t7948 + var1[2];
  p_output1[59]=t7522;
  p_output1[60]=t7986;
  p_output1[61]=0.146006*t291*t3789 + 0.156414*t291*t4787 + t4963 + var1[0];
  p_output1[62]=0.149289*t291*t3789 + 0.153131*t291*t4787 + t5149 + var1[0];
  p_output1[63]=0.152781*t291*t3789 + 0.149639*t291*t4787 + t5237 + var1[0];
  p_output1[64]=0.156101*t291*t3789 + 0.146319*t291*t4787 + t5538 + var1[0];
  p_output1[65]=0.158892*t291*t3789 + 0.143528*t291*t4787 + t5602 + var1[0];
  p_output1[66]=0.160851*t291*t3789 + 0.141569*t291*t4787 + t5654 + var1[0];
  p_output1[67]=0.161764*t291*t3789 + 0.140656*t291*t4787 + t5797 + var1[0];
  p_output1[68]=0.161534*t291*t3789 + 0.140886*t291*t4787 + t6006 + var1[0];
  p_output1[69]=0.160185*t291*t3789 + 0.142235*t291*t4787 + t6125 + var1[0];
  p_output1[70]=0.157864*t291*t3789 + 0.144556*t291*t4787 + t6356 + var1[0];
  p_output1[71]=0.154821*t291*t3789 + 0.147599*t291*t4787 + t6428 + var1[0];
  p_output1[72]=0.151387*t291*t3789 + 0.151033*t291*t4787 + t6441 + var1[0];
  p_output1[73]=0.147934*t291*t3789 + 0.154486*t291*t4787 + t6469 + var1[0];
  p_output1[74]=0.144836*t291*t3789 + 0.157584*t291*t4787 + t6496 + var1[0];
  p_output1[75]=0.142429*t291*t3789 + 0.159991*t291*t4787 + t6517 + var1[0];
  p_output1[76]=0.140973*t291*t3789 + 0.161447*t291*t4787 + t6572 + var1[0];
  p_output1[77]=0.140626*t291*t3789 + 0.161794*t291*t4787 + t6628 + var1[0];
  p_output1[78]=0.141427*t291*t3789 + 0.160993*t291*t4787 + t6666 + var1[0];
  p_output1[79]=t7986;
  p_output1[80]=t8292;
  p_output1[81]=0.146006*t6703 - 0.156414*t6751 + t6757 + var1[1];
  p_output1[82]=0.149289*t6703 - 0.153131*t6751 + t6771 + var1[1];
  p_output1[83]=0.152781*t6703 - 0.149639*t6751 + t6781 + var1[1];
  p_output1[84]=0.156101*t6703 - 0.146319*t6751 + t6799 + var1[1];
  p_output1[85]=0.158892*t6703 - 0.143528*t6751 + t6824 + var1[1];
  p_output1[86]=0.160851*t6703 - 0.141569*t6751 + t6851 + var1[1];
  p_output1[87]=0.161764*t6703 - 0.140656*t6751 + t6899 + var1[1];
  p_output1[88]=0.161534*t6703 - 0.140886*t6751 + t6953 + var1[1];
  p_output1[89]=0.160185*t6703 - 0.142235*t6751 + t7086 + var1[1];
  p_output1[90]=0.157864*t6703 - 0.144556*t6751 + t7117 + var1[1];
  p_output1[91]=0.154821*t6703 - 0.147599*t6751 + t7176 + var1[1];
  p_output1[92]=0.151387*t6703 - 0.151033*t6751 + t7192 + var1[1];
  p_output1[93]=0.147934*t6703 - 0.154486*t6751 + t7198 + var1[1];
  p_output1[94]=0.144836*t6703 - 0.157584*t6751 + t7284 + var1[1];
  p_output1[95]=0.142429*t6703 - 0.159991*t6751 + t7305 + var1[1];
  p_output1[96]=0.140973*t6703 - 0.161447*t6751 + t7321 + var1[1];
  p_output1[97]=0.140626*t6703 - 0.161794*t6751 + t7452 + var1[1];
  p_output1[98]=0.141427*t6703 - 0.160993*t6751 + t7482 + var1[1];
  p_output1[99]=t8292;
  p_output1[100]=t8725;
  p_output1[101]=0.146006*t7507 - 0.156414*t7517 + t7523 + var1[2];
  p_output1[102]=0.149289*t7507 - 0.153131*t7517 + t7536 + var1[2];
  p_output1[103]=0.152781*t7507 - 0.149639*t7517 + t7554 + var1[2];
  p_output1[104]=0.156101*t7507 - 0.146319*t7517 + t7703 + var1[2];
  p_output1[105]=0.158892*t7507 - 0.143528*t7517 + t7735 + var1[2];
  p_output1[106]=0.160851*t7507 - 0.141569*t7517 + t7740 + var1[2];
  p_output1[107]=0.161764*t7507 - 0.140656*t7517 + t7776 + var1[2];
  p_output1[108]=0.161534*t7507 - 0.140886*t7517 + t7780 + var1[2];
  p_output1[109]=0.160185*t7507 - 0.142235*t7517 + t7786 + var1[2];
  p_output1[110]=0.157864*t7507 - 0.144556*t7517 + t7835 + var1[2];
  p_output1[111]=0.154821*t7507 - 0.147599*t7517 + t7867 + var1[2];
  p_output1[112]=0.151387*t7507 - 0.151033*t7517 + t7889 + var1[2];
  p_output1[113]=0.147934*t7507 - 0.154486*t7517 + t7899 + var1[2];
  p_output1[114]=0.144836*t7507 - 0.157584*t7517 + t7915 + var1[2];
  p_output1[115]=0.142429*t7507 - 0.159991*t7517 + t7920 + var1[2];
  p_output1[116]=0.140973*t7507 - 0.161447*t7517 + t7938 + var1[2];
  p_output1[117]=0.140626*t7507 - 0.161794*t7517 + t7943 + var1[2];
  p_output1[118]=0.141427*t7507 - 0.160993*t7517 + t7948 + var1[2];
  p_output1[119]=t8725;
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

#include "Link_base_link_to_fr_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_fr_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
