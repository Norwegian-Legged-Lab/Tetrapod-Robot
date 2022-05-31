/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:57 GMT+02:00
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
  double t15698;
  double t16446;
  double t16578;
  double t16470;
  double t16474;
  double t16501;
  double t16534;
  double t16550;
  double t17120;
  double t17784;
  double t18618;
  double t19346;
  double t19537;
  double t19771;
  double t16183;
  double t20229;
  double t20260;
  double t20262;
  double t20399;
  double t16209;
  double t20515;
  double t20723;
  double t20735;
  double t20739;
  double t20744;
  double t20775;
  double t20778;
  double t20786;
  double t20792;
  double t20833;
  double t20876;
  double t20932;
  double t20941;
  double t20963;
  double t20970;
  double t20974;
  double t20982;
  double t20987;
  double t20991;
  double t20992;
  double t19716;
  double t19720;
  double t19825;
  double t19839;
  double t16513;
  double t16571;
  double t19685;
  double t19699;
  double t20243;
  double t20245;
  double t20749;
  double t20770;
  double t21040;
  double t21094;
  double t21101;
  double t20567;
  double t20627;
  double t20954;
  double t20956;
  double t21214;
  double t21223;
  double t21229;
  double t21414;
  double t21211;
  double t21212;
  double t21213;
  double t21236;
  double t21237;
  double t21238;
  double t21239;
  double t21247;
  double t21248;
  double t21252;
  double t21269;
  double t21442;
  double t21443;
  double t21444;
  double t21446;
  double t21447;
  double t21451;
  double t21453;
  double t21455;
  double t21456;
  double t21463;
  double t21498;
  double t21502;
  double t21233;
  double t21234;
  double t21235;
  double t21240;
  double t21241;
  double t21242;
  double t21243;
  double t21289;
  double t21325;
  double t21393;
  double t21394;
  double t21592;
  double t21595;
  double t21596;
  double t21607;
  double t21608;
  double t21609;
  double t21612;
  double t21613;
  double t21614;
  double t21684;
  double t21685;
  double t21686;
  double t21728;
  double t21744;
  double t21745;
  double t21746;
  double t21747;
  double t21757;
  double t21758;
  double t21759;
  double t21776;
  double t21777;
  double t21778;
  double t21780;
  double t21781;
  double t21782;
  double t21784;
  double t21785;
  double t21786;
  double t21788;
  double t21789;
  double t21790;
  double t21792;
  double t21793;
  double t21794;
  double t21796;
  double t21797;
  double t21798;
  double t21826;
  double t21827;
  double t21828;
  double t21833;
  double t21834;
  double t21835;
  double t21837;
  double t21841;
  double t21845;
  double t21850;
  double t21854;
  double t21859;
  double t21862;
  double t21863;
  double t21864;
  double t21878;
  double t21879;
  double t21880;
  double t21897;
  double t21898;
  double t21899;
  double t21902;
  double t21903;
  double t21905;
  double t21910;
  double t21911;
  double t21912;
  double t21922;
  double t21926;
  double t21927;
  double t21423;
  double t21433;
  double t21435;
  double t22085;
  double t22086;
  double t22087;
  double t22090;
  double t22091;
  double t21987;
  double t22122;
  double t22123;
  double t22124;
  double t22127;
  double t22142;
  double t22144;
  double t22146;
  double t22147;
  double t22153;
  double t22230;
  double t22231;
  double t22232;
  double t21532;
  double t21533;
  double t21538;
  double t21553;
  double t22244;
  double t22245;
  double t22073;
  double t22258;
  double t22283;
  double t22325;
  double t22347;
  double t22378;
  double t22383;
  double t22386;
  double t22390;
  double t22395;
  double t22414;
  double t22415;
  double t22416;
  t15698 = Cos(var1[4]);
  t16446 = Cos(var1[5]);
  t16578 = Sin(var1[4]);
  t16470 = Cos(var1[9]);
  t16474 = -1.*t16470;
  t16501 = 1. + t16474;
  t16534 = Sin(var1[9]);
  t16550 = 0.15121*t16534;
  t17120 = Cos(var1[15]);
  t17784 = -1.*t17120;
  t18618 = 1. + t17784;
  t19346 = -0.15121*t18618;
  t19537 = Sin(var1[15]);
  t19771 = Sin(var1[5]);
  t16183 = Sin(var1[10]);
  t20229 = Cos(var1[10]);
  t20260 = -1.*t16470*t16446*t16578;
  t20262 = t16534*t16578*t19771;
  t20399 = t20260 + t20262;
  t16209 = Sin(var1[16]);
  t20515 = Cos(var1[16]);
  t20723 = -1.*t17120*t16446*t16578;
  t20735 = t19537*t16578*t19771;
  t20739 = t20723 + t20735;
  t20744 = Cos(var1[11]);
  t20775 = t15698*t16183;
  t20778 = t20229*t20399;
  t20786 = t20775 + t20778;
  t20792 = Sin(var1[11]);
  t20833 = t20229*t15698;
  t20876 = -1.*t16183*t20399;
  t20932 = t20833 + t20876;
  t20941 = Cos(var1[17]);
  t20963 = t15698*t16209;
  t20970 = t20515*t20739;
  t20974 = t20963 + t20970;
  t20982 = Sin(var1[17]);
  t20987 = t20515*t15698;
  t20991 = -1.*t16209*t20739;
  t20992 = t20987 + t20991;
  t19716 = 0.15121*t16501;
  t19720 = t19716 + t16550;
  t19825 = 0.15121*t19537;
  t19839 = t19346 + t19825;
  t16513 = -0.15121*t16501;
  t16571 = t16513 + t16550;
  t19685 = -0.15121*t19537;
  t19699 = t19346 + t19685;
  t20243 = -1.*t20229;
  t20245 = 1. + t20243;
  t20749 = -1.*t20744;
  t20770 = 1. + t20749;
  t21040 = -1.*t15698*t16446*t16534;
  t21094 = -1.*t16470*t15698*t19771;
  t21101 = t21040 + t21094;
  t20567 = -1.*t20515;
  t20627 = 1. + t20567;
  t20954 = -1.*t20941;
  t20956 = 1. + t20954;
  t21214 = -1.*t15698*t16446*t19537;
  t21223 = -1.*t17120*t15698*t19771;
  t21229 = t21214 + t21223;
  t21414 = 0.15121*t16470;
  t21211 = -0.28121*t20245*t21101;
  t21212 = -0.50321*t20229*t20770*t21101;
  t21213 = 0.50321*t16183*t20792*t21101;
  t21236 = -1.*t16470*t15698*t16446;
  t21237 = t15698*t16534*t19771;
  t21238 = t21236 + t21237;
  t21239 = 0.15121*t21238;
  t21247 = t20229*t20744*t21101;
  t21248 = t16183*t20792*t21101;
  t21252 = t21247 + t21248;
  t21269 = -0.19821*t21252;
  t21442 = t16470*t15698*t16446;
  t21443 = -1.*t15698*t16534*t19771;
  t21444 = t21442 + t21443;
  t21446 = -1.*t16183*t16578;
  t21447 = -1.*t20229*t21444;
  t21451 = t21446 + t21447;
  t21453 = t20229*t16578;
  t21455 = -1.*t16183*t21444;
  t21456 = t21453 + t21455;
  t21463 = t16183*t16578;
  t21498 = t20229*t21444;
  t21502 = t21463 + t21498;
  t21233 = 0.28121*t20627*t21229;
  t21234 = 0.50321*t20515*t20956*t21229;
  t21235 = -0.50321*t16209*t20982*t21229;
  t21240 = -1.*t17120*t15698*t16446;
  t21241 = t15698*t19537*t19771;
  t21242 = t21240 + t21241;
  t21243 = 0.15121*t21242;
  t21289 = t20515*t20941*t21229;
  t21325 = t16209*t20982*t21229;
  t21393 = t21289 + t21325;
  t21394 = 0.19821*t21393;
  t21592 = t17120*t15698*t16446;
  t21595 = -1.*t15698*t19537*t19771;
  t21596 = t21592 + t21595;
  t21607 = -1.*t16209*t16578;
  t21608 = -1.*t20515*t21596;
  t21609 = t21607 + t21608;
  t21612 = t20515*t16578;
  t21613 = -1.*t16209*t21596;
  t21614 = t21612 + t21613;
  t21684 = t16209*t16578;
  t21685 = t20515*t21596;
  t21686 = t21684 + t21685;
  t21728 = Cos(var1[3]);
  t21744 = t21728*t16446*t16578;
  t21745 = Sin(var1[3]);
  t21746 = -1.*t21745*t19771;
  t21747 = t21744 + t21746;
  t21757 = -1.*t16446*t21745;
  t21758 = -1.*t21728*t16578*t19771;
  t21759 = t21757 + t21758;
  t21776 = t16470*t21747;
  t21777 = t16534*t21759;
  t21778 = t21776 + t21777;
  t21780 = t17120*t21747;
  t21781 = t19537*t21759;
  t21782 = t21780 + t21781;
  t21784 = -1.*t21728*t15698*t16183;
  t21785 = t20229*t21778;
  t21786 = t21784 + t21785;
  t21788 = -1.*t20229*t21728*t15698;
  t21789 = -1.*t16183*t21778;
  t21790 = t21788 + t21789;
  t21792 = -1.*t21728*t15698*t16209;
  t21793 = t20515*t21782;
  t21794 = t21792 + t21793;
  t21796 = -1.*t20515*t21728*t15698;
  t21797 = -1.*t16209*t21782;
  t21798 = t21796 + t21797;
  t21826 = t16470*t15698*t16446*t21745;
  t21827 = -1.*t15698*t16534*t21745*t19771;
  t21828 = t21826 + t21827;
  t21833 = t17120*t15698*t16446*t21745;
  t21834 = -1.*t15698*t19537*t21745*t19771;
  t21835 = t21833 + t21834;
  t21837 = t16183*t21745*t16578;
  t21841 = t20229*t21828;
  t21845 = t21837 + t21841;
  t21850 = t20229*t21745*t16578;
  t21854 = -1.*t16183*t21828;
  t21859 = t21850 + t21854;
  t21862 = t16209*t21745*t16578;
  t21863 = t20515*t21835;
  t21864 = t21862 + t21863;
  t21878 = t20515*t21745*t16578;
  t21879 = -1.*t16209*t21835;
  t21880 = t21878 + t21879;
  t21897 = -1.*t16446*t21745*t16578;
  t21898 = -1.*t21728*t19771;
  t21899 = t21897 + t21898;
  t21902 = t21728*t16446;
  t21903 = -1.*t21745*t16578*t19771;
  t21905 = t21902 + t21903;
  t21910 = t16534*t21899;
  t21911 = t16470*t21905;
  t21912 = t21910 + t21911;
  t21922 = t19537*t21899;
  t21926 = t17120*t21905;
  t21927 = t21922 + t21926;
  t21423 = -0.15121*t16534;
  t21433 = t21414 + t21423;
  t21435 = t21414 + t16550;
  t22085 = t16446*t21745*t16578;
  t22086 = t21728*t19771;
  t22087 = t22085 + t22086;
  t22090 = -1.*t16534*t22087;
  t22091 = t22090 + t21911;
  t21987 = -1.*t16534*t21905;
  t22122 = t16470*t22087;
  t22123 = t16534*t21905;
  t22124 = t22122 + t22123;
  t22127 = t15698*t16183*t21745;
  t22142 = -1.*t20229*t22124;
  t22144 = t22127 + t22142;
  t22146 = -1.*t20229*t15698*t21745;
  t22147 = -1.*t16183*t22124;
  t22153 = t22146 + t22147;
  t22230 = -1.*t15698*t16183*t21745;
  t22231 = t20229*t22124;
  t22232 = t22230 + t22231;
  t21532 = -0.15121*t17120;
  t21533 = t21532 + t19685;
  t21538 = 0.15121*t17120;
  t21553 = t21538 + t19685;
  t22244 = -1.*t19537*t22087;
  t22245 = t22244 + t21926;
  t22073 = -1.*t19537*t21905;
  t22258 = t17120*t22087;
  t22283 = t19537*t21905;
  t22325 = t22258 + t22283;
  t22347 = t15698*t16209*t21745;
  t22378 = -1.*t20515*t22325;
  t22383 = t22347 + t22378;
  t22386 = -1.*t20515*t15698*t21745;
  t22390 = -1.*t16209*t22325;
  t22395 = t22386 + t22390;
  t22414 = -1.*t15698*t16209*t21745;
  t22415 = t20515*t22325;
  t22416 = t22414 + t22415;
  p_output1[0]=0.28121*t15698*t16183 - 0.28121*t15698*t16209 - 1.*t16446*t16571*t16578 + t16446*t16578*t19699 + t16578*t19720*t19771 + 0.15121*(t16446*t16534*t16578 + t16470*t16578*t19771) + 0.15121*(t16446*t16578*t19537 + t16578*t17120*t19771) - 1.*t16578*t19771*t19839 - 0.28121*t20245*t20399 + 0.28121*t20627*t20739 - 0.50321*t20770*t20786 - 0.50321*t20792*t20932 - 0.19821*(t20744*t20786 - 1.*t20792*t20932) + 0.50321*t20956*t20974 + 0.50321*t20982*t20992 + 0.19821*(t20941*t20974 - 1.*t20982*t20992);
  p_output1[1]=-1.*t15698*t16446*t19720 - 1.*t15698*t16571*t19771 + t15698*t19699*t19771 + t15698*t16446*t19839 + t21211 + t21212 + t21213 + t21233 + t21234 + t21235 + t21239 + t21243 + t21269 + t21394;
  p_output1[2]=t21211 + t21212 + t21213 + t21239 + t21269 + t15698*t16446*t21433 - 1.*t15698*t19771*t21435;
  p_output1[3]=0.28121*t16578*t20229 - 0.28121*t16183*t21444 - 0.50321*t20792*t21451 - 0.50321*t20770*t21456 - 0.19821*(-1.*t20792*t21451 + t20744*t21456);
  p_output1[4]=-0.50321*t20744*t21456 - 0.50321*t20792*t21502 - 0.19821*(-1.*t20744*t21456 - 1.*t20792*t21502);
  p_output1[5]=t21233 + t21234 + t21235 + t21243 + t21394 - 1.*t15698*t16446*t21533 + t15698*t19771*t21553;
  p_output1[6]=-0.28121*t16578*t20515 + 0.28121*t16209*t21596 + 0.50321*t20982*t21609 + 0.50321*t20956*t21614 + 0.19821*(-1.*t20982*t21609 + t20941*t21614);
  p_output1[7]=0.50321*t20941*t21614 + 0.50321*t20982*t21686 + 0.19821*(-1.*t20941*t21614 - 1.*t20982*t21686);
  p_output1[8]=-0.28121*t15698*t16183*t21728 + 0.28121*t15698*t16209*t21728 + t16571*t21747 - 1.*t19699*t21747 + t19720*t21759 - 1.*t19839*t21759 + 0.15121*(-1.*t16534*t21747 + t16470*t21759) + 0.15121*(-1.*t19537*t21747 + t17120*t21759) - 0.28121*t20245*t21778 + 0.28121*t20627*t21782 - 0.50321*t20770*t21786 - 0.50321*t20792*t21790 - 0.19821*(t20744*t21786 - 1.*t20792*t21790) + 0.50321*t20956*t21794 + 0.50321*t20982*t21798 + 0.19821*(t20941*t21794 - 1.*t20982*t21798);
  p_output1[9]=t15698*t16446*t16571*t21745 + 0.28121*t16183*t16578*t21745 - 0.28121*t16209*t16578*t21745 - 1.*t15698*t16446*t19699*t21745 - 1.*t15698*t19720*t19771*t21745 + t15698*t19771*t19839*t21745 + 0.15121*(-1.*t15698*t16446*t16534*t21745 - 1.*t15698*t16470*t19771*t21745) + 0.15121*(-1.*t15698*t16446*t19537*t21745 - 1.*t15698*t17120*t19771*t21745) - 0.28121*t20245*t21828 + 0.28121*t20627*t21835 - 0.50321*t20770*t21845 - 0.50321*t20792*t21859 - 0.19821*(t20744*t21845 - 1.*t20792*t21859) + 0.50321*t20956*t21864 + 0.50321*t20982*t21880 + 0.19821*(t20941*t21864 - 1.*t20982*t21880);
  p_output1[10]=t19720*t21899 - 1.*t19839*t21899 + t16571*t21905 - 1.*t19699*t21905 - 0.28121*t20245*t21912 - 0.50321*t20229*t20770*t21912 + 0.50321*t16183*t20792*t21912 - 0.19821*(t20229*t20744*t21912 + t16183*t20792*t21912) + 0.28121*t20627*t21927 + 0.50321*t20515*t20956*t21927 - 0.50321*t16209*t20982*t21927 + 0.19821*(t20515*t20941*t21927 + t16209*t20982*t21927) + 0.15121*(t16470*t21899 + t21987) + 0.15121*(t17120*t21899 + t22073);
  p_output1[11]=t21435*t21905 + t21433*t22087 + 0.15121*(t21987 - 1.*t16470*t22087) - 0.28121*t20245*t22091 - 0.50321*t20229*t20770*t22091 + 0.50321*t16183*t20792*t22091 - 0.19821*(t20229*t20744*t22091 + t16183*t20792*t22091);
  p_output1[12]=-0.28121*t15698*t20229*t21745 - 0.28121*t16183*t22124 - 0.50321*t20792*t22144 - 0.50321*t20770*t22153 - 0.19821*(-1.*t20792*t22144 + t20744*t22153);
  p_output1[13]=-0.50321*t20744*t22153 - 0.50321*t20792*t22232 - 0.19821*(-1.*t20744*t22153 - 1.*t20792*t22232);
  p_output1[14]=-1.*t21553*t21905 - 1.*t21533*t22087 + 0.15121*(t22073 - 1.*t17120*t22087) + 0.28121*t20627*t22245 + 0.50321*t20515*t20956*t22245 - 0.50321*t16209*t20982*t22245 + 0.19821*(t20515*t20941*t22245 + t16209*t20982*t22245);
  p_output1[15]=0.28121*t15698*t20515*t21745 + 0.28121*t16209*t22325 + 0.50321*t20982*t22383 + 0.50321*t20956*t22395 + 0.19821*(-1.*t20982*t22383 + t20941*t22395);
  p_output1[16]=0.50321*t20941*t22395 + 0.50321*t20982*t22416 + 0.19821*(-1.*t20941*t22395 - 1.*t20982*t22416);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
