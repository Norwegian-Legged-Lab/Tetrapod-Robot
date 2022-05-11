/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:02 GMT+02:00
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
  double t5252;
  double t7155;
  double t7472;
  double t8195;
  double t7330;
  double t8110;
  double t8199;
  double t8215;
  double t9974;
  double t10029;
  double t10025;
  double t10030;
  double t10032;
  double t10131;
  double t10157;
  double t10171;
  double t9985;
  double t10063;
  double t10176;
  double t10177;
  double t11168;
  double t11171;
  double t11172;
  double t11182;
  double t11184;
  double t11186;
  double t11163;
  double t11180;
  double t11187;
  double t11188;
  double t8231;
  double t8654;
  double t8711;
  double t9028;
  double t9117;
  double t9266;
  double t9427;
  double t9498;
  double t9537;
  double t9555;
  double t9572;
  double t9655;
  double t9666;
  double t9730;
  double t9819;
  double t9895;
  double t9915;
  double t9947;
  double t11698;
  double t11699;
  double t11707;
  double t10183;
  double t10265;
  double t10296;
  double t10502;
  double t10518;
  double t10565;
  double t10570;
  double t10650;
  double t10728;
  double t10855;
  double t10881;
  double t10901;
  double t10905;
  double t10912;
  double t11069;
  double t11092;
  double t11117;
  double t11152;
  double t11899;
  double t11905;
  double t11912;
  double t11191;
  double t11203;
  double t11210;
  double t11215;
  double t11220;
  double t11235;
  double t11329;
  double t11434;
  double t11461;
  double t11478;
  double t11497;
  double t11508;
  double t11530;
  double t11547;
  double t11559;
  double t11566;
  double t11671;
  double t11675;
  double t12771;
  double t12775;
  double t12776;
  t5252 = Cos(var1[4]);
  t7155 = Cos(var1[5]);
  t7472 = Sin(var1[4]);
  t8195 = Sin(var1[5]);
  t7330 = 0.006301*t5252*t7155;
  t8110 = 0.004034*t7472;
  t8199 = -0.013001*t5252*t8195;
  t8215 = var1[0] + t7330 + t8110 + t8199;
  t9974 = Sin(var1[3]);
  t10029 = Cos(var1[3]);
  t10025 = t7155*t9974*t7472;
  t10030 = t10029*t8195;
  t10032 = t10025 + t10030;
  t10131 = t10029*t7155;
  t10157 = -1.*t9974*t7472*t8195;
  t10171 = t10131 + t10157;
  t9985 = -0.004034*t5252*t9974;
  t10063 = 0.006301*t10032;
  t10176 = 0.013001*t10171;
  t10177 = var1[1] + t9985 + t10063 + t10176;
  t11168 = -1.*t10029*t7155*t7472;
  t11171 = t9974*t8195;
  t11172 = t11168 + t11171;
  t11182 = t7155*t9974;
  t11184 = t10029*t7472*t8195;
  t11186 = t11182 + t11184;
  t11163 = 0.004034*t10029*t5252;
  t11180 = 0.006301*t11172;
  t11187 = 0.013001*t11186;
  t11188 = var1[2] + t11163 + t11180 + t11187;
  t8231 = -0.000875*t7472;
  t8654 = -0.00569*t7472;
  t8711 = -0.009888*t7472;
  t9028 = -0.013015*t7472;
  t9117 = -0.014731*t7472;
  t9266 = -0.014851*t7472;
  t9427 = -0.013362*t7472;
  t9498 = -0.010424*t7472;
  t9537 = -0.006357*t7472;
  t9555 = -0.001601*t7472;
  t9572 = 0.003328*t7472;
  t9655 = 0.007897*t7472;
  t9666 = 0.01161*t7472;
  t9730 = 0.014065*t7472;
  t9819 = 0.014996*t7472;
  t9895 = 0.014301*t7472;
  t9915 = 0.012057*t7472;
  t9947 = 0.008507*t7472;
  t11698 = -0.318699*t5252*t7155;
  t11699 = -0.170501*t5252*t8195;
  t11707 = var1[0] + t11698 + t8110 + t11699;
  t10183 = 0.000875*t5252*t9974;
  t10265 = 0.00569*t5252*t9974;
  t10296 = 0.009888*t5252*t9974;
  t10502 = 0.013015*t5252*t9974;
  t10518 = 0.014731*t5252*t9974;
  t10565 = 0.014851*t5252*t9974;
  t10570 = 0.013362*t5252*t9974;
  t10650 = 0.010424*t5252*t9974;
  t10728 = 0.006357*t5252*t9974;
  t10855 = 0.001601*t5252*t9974;
  t10881 = -0.003328*t5252*t9974;
  t10901 = -0.007897*t5252*t9974;
  t10905 = -0.01161*t5252*t9974;
  t10912 = -0.014065*t5252*t9974;
  t11069 = -0.014996*t5252*t9974;
  t11092 = -0.014301*t5252*t9974;
  t11117 = -0.012057*t5252*t9974;
  t11152 = -0.008507*t5252*t9974;
  t11899 = -0.318699*t10032;
  t11905 = 0.170501*t10171;
  t11912 = var1[1] + t9985 + t11899 + t11905;
  t11191 = -0.000875*t10029*t5252;
  t11203 = -0.00569*t10029*t5252;
  t11210 = -0.009888*t10029*t5252;
  t11215 = -0.013015*t10029*t5252;
  t11220 = -0.014731*t10029*t5252;
  t11235 = -0.014851*t10029*t5252;
  t11329 = -0.013362*t10029*t5252;
  t11434 = -0.010424*t10029*t5252;
  t11461 = -0.006357*t10029*t5252;
  t11478 = -0.001601*t10029*t5252;
  t11497 = 0.003328*t10029*t5252;
  t11508 = 0.007897*t10029*t5252;
  t11530 = 0.01161*t10029*t5252;
  t11547 = 0.014065*t10029*t5252;
  t11559 = 0.014996*t10029*t5252;
  t11566 = 0.014301*t10029*t5252;
  t11671 = 0.012057*t10029*t5252;
  t11675 = 0.008507*t10029*t5252;
  t12771 = -0.318699*t11172;
  t12775 = 0.170501*t11186;
  t12776 = var1[2] + t11163 + t12771 + t12775;
  p_output1[0]=t8215;
  p_output1[1]=0.00653*t5252*t7155 - 0.013475*t5252*t8195 + t8231 + var1[0];
  p_output1[2]=0.006053*t5252*t7155 - 0.01249*t5252*t8195 + t8654 + var1[0];
  p_output1[3]=0.004919*t5252*t7155 - 0.01015*t5252*t8195 + t8711 + var1[0];
  p_output1[4]=0.003252*t5252*t7155 - 0.006711*t5252*t8195 + t9028 + var1[0];
  p_output1[5]=0.001233*t5252*t7155 - 0.002544*t5252*t8195 + t9117 + var1[0];
  p_output1[6]=-0.00092*t5252*t7155 + 0.001898*t5252*t8195 + t9266 + var1[0];
  p_output1[7]=-0.002973*t5252*t7155 + 0.006134*t5252*t8195 + t9427 + var1[0];
  p_output1[8]=-0.004704*t5252*t7155 + 0.009706*t5252*t8195 + t9498 + var1[0];
  p_output1[9]=-0.005925*t5252*t7155 + 0.012226*t5252*t8195 + t9537 + var1[0];
  p_output1[10]=-0.006504*t5252*t7155 + 0.013421*t5252*t8195 + t9555 + var1[0];
  p_output1[11]=-0.006379*t5252*t7155 + 0.013162*t5252*t8195 + t9572 + var1[0];
  p_output1[12]=-0.005562*t5252*t7155 + 0.011476*t5252*t8195 + t9655 + var1[0];
  p_output1[13]=-0.004142*t5252*t7155 + 0.008547*t5252*t8195 + t9666 + var1[0];
  p_output1[14]=-0.002274*t5252*t7155 + 0.004692*t5252*t8195 + t9730 + var1[0];
  p_output1[15]=-0.000159*t5252*t7155 + 0.000328*t5252*t8195 + t9819 + var1[0];
  p_output1[16]=0.001973*t5252*t7155 - 0.004072*t5252*t8195 + t9895 + var1[0];
  p_output1[17]=0.003891*t5252*t7155 - 0.00803*t5252*t8195 + t9915 + var1[0];
  p_output1[18]=0.005388*t5252*t7155 - 0.011118*t5252*t8195 + t9947 + var1[0];
  p_output1[19]=t8215;
  p_output1[20]=t10177;
  p_output1[21]=0.00653*t10032 + 0.013475*t10171 + t10183 + var1[1];
  p_output1[22]=0.006053*t10032 + 0.01249*t10171 + t10265 + var1[1];
  p_output1[23]=0.004919*t10032 + 0.01015*t10171 + t10296 + var1[1];
  p_output1[24]=0.003252*t10032 + 0.006711*t10171 + t10502 + var1[1];
  p_output1[25]=0.001233*t10032 + 0.002544*t10171 + t10518 + var1[1];
  p_output1[26]=-0.00092*t10032 - 0.001898*t10171 + t10565 + var1[1];
  p_output1[27]=-0.002973*t10032 - 0.006134*t10171 + t10570 + var1[1];
  p_output1[28]=-0.004704*t10032 - 0.009706*t10171 + t10650 + var1[1];
  p_output1[29]=-0.005925*t10032 - 0.012226*t10171 + t10728 + var1[1];
  p_output1[30]=-0.006504*t10032 - 0.013421*t10171 + t10855 + var1[1];
  p_output1[31]=-0.006379*t10032 - 0.013162*t10171 + t10881 + var1[1];
  p_output1[32]=-0.005562*t10032 - 0.011476*t10171 + t10901 + var1[1];
  p_output1[33]=-0.004142*t10032 - 0.008547*t10171 + t10905 + var1[1];
  p_output1[34]=-0.002274*t10032 - 0.004692*t10171 + t10912 + var1[1];
  p_output1[35]=-0.000159*t10032 - 0.000328*t10171 + t11069 + var1[1];
  p_output1[36]=0.001973*t10032 + 0.004072*t10171 + t11092 + var1[1];
  p_output1[37]=0.003891*t10032 + 0.00803*t10171 + t11117 + var1[1];
  p_output1[38]=0.005388*t10032 + 0.011118*t10171 + t11152 + var1[1];
  p_output1[39]=t10177;
  p_output1[40]=t11188;
  p_output1[41]=0.00653*t11172 + 0.013475*t11186 + t11191 + var1[2];
  p_output1[42]=0.006053*t11172 + 0.01249*t11186 + t11203 + var1[2];
  p_output1[43]=0.004919*t11172 + 0.01015*t11186 + t11210 + var1[2];
  p_output1[44]=0.003252*t11172 + 0.006711*t11186 + t11215 + var1[2];
  p_output1[45]=0.001233*t11172 + 0.002544*t11186 + t11220 + var1[2];
  p_output1[46]=-0.00092*t11172 - 0.001898*t11186 + t11235 + var1[2];
  p_output1[47]=-0.002973*t11172 - 0.006134*t11186 + t11329 + var1[2];
  p_output1[48]=-0.004704*t11172 - 0.009706*t11186 + t11434 + var1[2];
  p_output1[49]=-0.005925*t11172 - 0.012226*t11186 + t11461 + var1[2];
  p_output1[50]=-0.006504*t11172 - 0.013421*t11186 + t11478 + var1[2];
  p_output1[51]=-0.006379*t11172 - 0.013162*t11186 + t11497 + var1[2];
  p_output1[52]=-0.005562*t11172 - 0.011476*t11186 + t11508 + var1[2];
  p_output1[53]=-0.004142*t11172 - 0.008547*t11186 + t11530 + var1[2];
  p_output1[54]=-0.002274*t11172 - 0.004692*t11186 + t11547 + var1[2];
  p_output1[55]=-0.000159*t11172 - 0.000328*t11186 + t11559 + var1[2];
  p_output1[56]=0.001973*t11172 + 0.004072*t11186 + t11566 + var1[2];
  p_output1[57]=0.003891*t11172 + 0.00803*t11186 + t11671 + var1[2];
  p_output1[58]=0.005388*t11172 + 0.011118*t11186 + t11675 + var1[2];
  p_output1[59]=t11188;
  p_output1[60]=t11707;
  p_output1[61]=-0.31847*t5252*t7155 - 0.170975*t5252*t8195 + t8231 + var1[0];
  p_output1[62]=-0.318947*t5252*t7155 - 0.16999*t5252*t8195 + t8654 + var1[0];
  p_output1[63]=-0.320081*t5252*t7155 - 0.16765*t5252*t8195 + t8711 + var1[0];
  p_output1[64]=-0.321748*t5252*t7155 - 0.164211*t5252*t8195 + t9028 + var1[0];
  p_output1[65]=-0.323767*t5252*t7155 - 0.160044*t5252*t8195 + t9117 + var1[0];
  p_output1[66]=-0.32592*t5252*t7155 - 0.155602*t5252*t8195 + t9266 + var1[0];
  p_output1[67]=-0.327973*t5252*t7155 - 0.151366*t5252*t8195 + t9427 + var1[0];
  p_output1[68]=-0.329704*t5252*t7155 - 0.147794*t5252*t8195 + t9498 + var1[0];
  p_output1[69]=-0.330925*t5252*t7155 - 0.145274*t5252*t8195 + t9537 + var1[0];
  p_output1[70]=-0.331504*t5252*t7155 - 0.144079*t5252*t8195 + t9555 + var1[0];
  p_output1[71]=-0.331379*t5252*t7155 - 0.144338*t5252*t8195 + t9572 + var1[0];
  p_output1[72]=-0.330562*t5252*t7155 - 0.146024*t5252*t8195 + t9655 + var1[0];
  p_output1[73]=-0.329142*t5252*t7155 - 0.148953*t5252*t8195 + t9666 + var1[0];
  p_output1[74]=-0.327274*t5252*t7155 - 0.152808*t5252*t8195 + t9730 + var1[0];
  p_output1[75]=-0.325159*t5252*t7155 - 0.157172*t5252*t8195 + t9819 + var1[0];
  p_output1[76]=-0.323027*t5252*t7155 - 0.161572*t5252*t8195 + t9895 + var1[0];
  p_output1[77]=-0.321109*t5252*t7155 - 0.16553*t5252*t8195 + t9915 + var1[0];
  p_output1[78]=-0.319612*t5252*t7155 - 0.168618*t5252*t8195 + t9947 + var1[0];
  p_output1[79]=t11707;
  p_output1[80]=t11912;
  p_output1[81]=-0.31847*t10032 + 0.170975*t10171 + t10183 + var1[1];
  p_output1[82]=-0.318947*t10032 + 0.16999*t10171 + t10265 + var1[1];
  p_output1[83]=-0.320081*t10032 + 0.16765*t10171 + t10296 + var1[1];
  p_output1[84]=-0.321748*t10032 + 0.164211*t10171 + t10502 + var1[1];
  p_output1[85]=-0.323767*t10032 + 0.160044*t10171 + t10518 + var1[1];
  p_output1[86]=-0.32592*t10032 + 0.155602*t10171 + t10565 + var1[1];
  p_output1[87]=-0.327973*t10032 + 0.151366*t10171 + t10570 + var1[1];
  p_output1[88]=-0.329704*t10032 + 0.147794*t10171 + t10650 + var1[1];
  p_output1[89]=-0.330925*t10032 + 0.145274*t10171 + t10728 + var1[1];
  p_output1[90]=-0.331504*t10032 + 0.144079*t10171 + t10855 + var1[1];
  p_output1[91]=-0.331379*t10032 + 0.144338*t10171 + t10881 + var1[1];
  p_output1[92]=-0.330562*t10032 + 0.146024*t10171 + t10901 + var1[1];
  p_output1[93]=-0.329142*t10032 + 0.148953*t10171 + t10905 + var1[1];
  p_output1[94]=-0.327274*t10032 + 0.152808*t10171 + t10912 + var1[1];
  p_output1[95]=-0.325159*t10032 + 0.157172*t10171 + t11069 + var1[1];
  p_output1[96]=-0.323027*t10032 + 0.161572*t10171 + t11092 + var1[1];
  p_output1[97]=-0.321109*t10032 + 0.16553*t10171 + t11117 + var1[1];
  p_output1[98]=-0.319612*t10032 + 0.168618*t10171 + t11152 + var1[1];
  p_output1[99]=t11912;
  p_output1[100]=t12776;
  p_output1[101]=-0.31847*t11172 + 0.170975*t11186 + t11191 + var1[2];
  p_output1[102]=-0.318947*t11172 + 0.16999*t11186 + t11203 + var1[2];
  p_output1[103]=-0.320081*t11172 + 0.16765*t11186 + t11210 + var1[2];
  p_output1[104]=-0.321748*t11172 + 0.164211*t11186 + t11215 + var1[2];
  p_output1[105]=-0.323767*t11172 + 0.160044*t11186 + t11220 + var1[2];
  p_output1[106]=-0.32592*t11172 + 0.155602*t11186 + t11235 + var1[2];
  p_output1[107]=-0.327973*t11172 + 0.151366*t11186 + t11329 + var1[2];
  p_output1[108]=-0.329704*t11172 + 0.147794*t11186 + t11434 + var1[2];
  p_output1[109]=-0.330925*t11172 + 0.145274*t11186 + t11461 + var1[2];
  p_output1[110]=-0.331504*t11172 + 0.144079*t11186 + t11478 + var1[2];
  p_output1[111]=-0.331379*t11172 + 0.144338*t11186 + t11497 + var1[2];
  p_output1[112]=-0.330562*t11172 + 0.146024*t11186 + t11508 + var1[2];
  p_output1[113]=-0.329142*t11172 + 0.148953*t11186 + t11530 + var1[2];
  p_output1[114]=-0.327274*t11172 + 0.152808*t11186 + t11547 + var1[2];
  p_output1[115]=-0.325159*t11172 + 0.157172*t11186 + t11559 + var1[2];
  p_output1[116]=-0.323027*t11172 + 0.161572*t11186 + t11566 + var1[2];
  p_output1[117]=-0.321109*t11172 + 0.16553*t11186 + t11671 + var1[2];
  p_output1[118]=-0.319612*t11172 + 0.168618*t11186 + t11675 + var1[2];
  p_output1[119]=t12776;
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

#include "Link_body_to_9_bar.hh"

namespace SymFunction
{

void Link_body_to_9_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
