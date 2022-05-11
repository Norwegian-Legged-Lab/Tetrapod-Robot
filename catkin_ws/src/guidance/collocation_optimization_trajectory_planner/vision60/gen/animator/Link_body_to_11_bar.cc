/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:16 GMT+02:00
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
  double t72;
  double t82;
  double t129;
  double t172;
  double t105;
  double t171;
  double t183;
  double t219;
  double t11904;
  double t13773;
  double t13563;
  double t14095;
  double t17159;
  double t17392;
  double t17558;
  double t17561;
  double t12265;
  double t17387;
  double t17563;
  double t18174;
  double t27303;
  double t27502;
  double t27574;
  double t27592;
  double t27625;
  double t27632;
  double t26909;
  double t27583;
  double t27636;
  double t28627;
  double t224;
  double t251;
  double t304;
  double t3585;
  double t3960;
  double t4172;
  double t4569;
  double t4801;
  double t5368;
  double t6900;
  double t8442;
  double t8599;
  double t9287;
  double t9487;
  double t9881;
  double t10749;
  double t10841;
  double t10863;
  double t32204;
  double t32206;
  double t32211;
  double t18208;
  double t18329;
  double t18610;
  double t18685;
  double t18737;
  double t18821;
  double t19113;
  double t19647;
  double t19749;
  double t19759;
  double t19900;
  double t19910;
  double t19938;
  double t19947;
  double t20124;
  double t20129;
  double t20166;
  double t25855;
  double t32308;
  double t32310;
  double t32312;
  double t28645;
  double t30618;
  double t31207;
  double t31351;
  double t31889;
  double t31961;
  double t32002;
  double t32031;
  double t32046;
  double t32066;
  double t32085;
  double t32099;
  double t32112;
  double t32131;
  double t32151;
  double t32171;
  double t32180;
  double t32190;
  double t32377;
  double t32378;
  double t32379;
  t72 = Cos(var1[4]);
  t82 = Cos(var1[5]);
  t129 = Sin(var1[4]);
  t172 = Sin(var1[5]);
  t105 = 0.003968*t72*t82;
  t171 = 0.011926*t129;
  t183 = 0.008187*t72*t172;
  t219 = var1[0] + t105 + t171 + t183;
  t11904 = Sin(var1[3]);
  t13773 = Cos(var1[3]);
  t13563 = t82*t11904*t129;
  t14095 = t13773*t172;
  t17159 = t13563 + t14095;
  t17392 = t13773*t82;
  t17558 = -1.*t11904*t129*t172;
  t17561 = t17392 + t17558;
  t12265 = -0.011926*t72*t11904;
  t17387 = 0.003968*t17159;
  t17563 = -0.008187*t17561;
  t18174 = var1[1] + t12265 + t17387 + t17563;
  t27303 = -1.*t13773*t82*t129;
  t27502 = t11904*t172;
  t27574 = t27303 + t27502;
  t27592 = t82*t11904;
  t27625 = t13773*t129*t172;
  t27632 = t27592 + t27625;
  t26909 = 0.011926*t13773*t72;
  t27583 = 0.003968*t27574;
  t27636 = -0.008187*t27632;
  t28627 = var1[2] + t26909 + t27583 + t27636;
  t224 = 0.014234*t129;
  t251 = 0.014999*t129;
  t304 = 0.014139*t129;
  t3585 = 0.011747*t129;
  t3960 = 0.008082*t129;
  t4172 = 0.003541*t129;
  t4569 = -0.001383*t129;
  t4801 = -0.006158*t129;
  t5368 = -0.010266*t129;
  t6900 = -0.013261*t129;
  t8442 = -0.014819*t129;
  t8599 = -0.014771*t129;
  t9287 = -0.013122*t129;
  t9487 = -0.010052*t129;
  t9881 = -0.005892*t129;
  t10749 = -0.001094*t129;
  t10841 = 0.003823*t129;
  t10863 = 0.008325*t129;
  t32204 = -0.321032*t72*t82;
  t32206 = 0.165687*t72*t172;
  t32211 = var1[0] + t32204 + t171 + t32206;
  t18208 = -0.014234*t72*t11904;
  t18329 = -0.014999*t72*t11904;
  t18610 = -0.014139*t72*t11904;
  t18685 = -0.011747*t72*t11904;
  t18737 = -0.008082*t72*t11904;
  t18821 = -0.003541*t72*t11904;
  t19113 = 0.001383*t72*t11904;
  t19647 = 0.006158*t72*t11904;
  t19749 = 0.010266*t72*t11904;
  t19759 = 0.013261*t72*t11904;
  t19900 = 0.014819*t72*t11904;
  t19910 = 0.014771*t72*t11904;
  t19938 = 0.013122*t72*t11904;
  t19947 = 0.010052*t72*t11904;
  t20124 = 0.005892*t72*t11904;
  t20129 = 0.001094*t72*t11904;
  t20166 = -0.003823*t72*t11904;
  t25855 = -0.008325*t72*t11904;
  t32308 = -0.321032*t17159;
  t32310 = -0.165687*t17561;
  t32312 = var1[1] + t12265 + t32308 + t32310;
  t28645 = 0.014234*t13773*t72;
  t30618 = 0.014999*t13773*t72;
  t31207 = 0.014139*t13773*t72;
  t31351 = 0.011747*t13773*t72;
  t31889 = 0.008082*t13773*t72;
  t31961 = 0.003541*t13773*t72;
  t32002 = -0.001383*t13773*t72;
  t32031 = -0.006158*t13773*t72;
  t32046 = -0.010266*t13773*t72;
  t32066 = -0.013261*t13773*t72;
  t32085 = -0.014819*t13773*t72;
  t32099 = -0.014771*t13773*t72;
  t32112 = -0.013122*t13773*t72;
  t32131 = -0.010052*t13773*t72;
  t32151 = -0.005892*t13773*t72;
  t32171 = -0.001094*t13773*t72;
  t32180 = 0.003823*t13773*t72;
  t32190 = 0.008325*t13773*t72;
  t32377 = -0.321032*t27574;
  t32378 = -0.165687*t27632;
  t32379 = var1[2] + t26909 + t32377 + t32378;
  p_output1[0]=t219;
  p_output1[1]=t224 + 0.004259*t172*t72 + 0.002064*t72*t82 + var1[0];
  p_output1[2]=t251 - 0.000131*t172*t72 - 0.000063*t72*t82 + var1[0];
  p_output1[3]=t304 - 0.004506*t172*t72 - 0.002184*t72*t82 + var1[0];
  p_output1[4]=t3585 - 0.008394*t172*t72 - 0.004068*t72*t82 + var1[0];
  p_output1[5]=t3960 - 0.011371*t172*t72 - 0.005511*t72*t82 + var1[0];
  p_output1[6]=t4172 - 0.013117*t172*t72 - 0.006357*t72*t82 + var1[0];
  p_output1[7]=t4569 - 0.013441*t172*t72 - 0.006514*t72*t82 + var1[0];
  p_output1[8]=t4801 - 0.012308*t172*t72 - 0.005965*t72*t82 + var1[0];
  p_output1[9]=t5368 - 0.009842*t172*t72 - 0.00477*t72*t82 + var1[0];
  p_output1[10]=t6900 - 0.006309*t172*t72 - 0.003058*t72*t82 + var1[0];
  p_output1[11]=-0.002093*t172*t72 - 0.001014*t72*t82 + t8442 + var1[0];
  p_output1[12]=0.002351*t172*t72 + 0.001139*t72*t82 + t8599 + var1[0];
  p_output1[13]=0.006539*t172*t72 + 0.003169*t72*t82 + t9287 + var1[0];
  p_output1[14]=0.010019*t172*t72 + 0.004855*t72*t82 + t9487 + var1[0];
  p_output1[15]=0.012413*t172*t72 + 0.006016*t72*t82 + t9881 + var1[0];
  p_output1[16]=t10749 + 0.013463*t172*t72 + 0.006524*t72*t82 + var1[0];
  p_output1[17]=t10841 + 0.013053*t172*t72 + 0.006326*t72*t82 + var1[0];
  p_output1[18]=t10863 + 0.011228*t172*t72 + 0.005441*t72*t82 + var1[0];
  p_output1[19]=t219;
  p_output1[20]=t18174;
  p_output1[21]=0.002064*t17159 - 0.004259*t17561 + t18208 + var1[1];
  p_output1[22]=-0.000063*t17159 + 0.000131*t17561 + t18329 + var1[1];
  p_output1[23]=-0.002184*t17159 + 0.004506*t17561 + t18610 + var1[1];
  p_output1[24]=-0.004068*t17159 + 0.008394*t17561 + t18685 + var1[1];
  p_output1[25]=-0.005511*t17159 + 0.011371*t17561 + t18737 + var1[1];
  p_output1[26]=-0.006357*t17159 + 0.013117*t17561 + t18821 + var1[1];
  p_output1[27]=-0.006514*t17159 + 0.013441*t17561 + t19113 + var1[1];
  p_output1[28]=-0.005965*t17159 + 0.012308*t17561 + t19647 + var1[1];
  p_output1[29]=-0.00477*t17159 + 0.009842*t17561 + t19749 + var1[1];
  p_output1[30]=-0.003058*t17159 + 0.006309*t17561 + t19759 + var1[1];
  p_output1[31]=-0.001014*t17159 + 0.002093*t17561 + t19900 + var1[1];
  p_output1[32]=0.001139*t17159 - 0.002351*t17561 + t19910 + var1[1];
  p_output1[33]=0.003169*t17159 - 0.006539*t17561 + t19938 + var1[1];
  p_output1[34]=0.004855*t17159 - 0.010019*t17561 + t19947 + var1[1];
  p_output1[35]=0.006016*t17159 - 0.012413*t17561 + t20124 + var1[1];
  p_output1[36]=0.006524*t17159 - 0.013463*t17561 + t20129 + var1[1];
  p_output1[37]=0.006326*t17159 - 0.013053*t17561 + t20166 + var1[1];
  p_output1[38]=0.005441*t17159 - 0.011228*t17561 + t25855 + var1[1];
  p_output1[39]=t18174;
  p_output1[40]=t28627;
  p_output1[41]=0.002064*t27574 - 0.004259*t27632 + t28645 + var1[2];
  p_output1[42]=-0.000063*t27574 + 0.000131*t27632 + t30618 + var1[2];
  p_output1[43]=-0.002184*t27574 + 0.004506*t27632 + t31207 + var1[2];
  p_output1[44]=-0.004068*t27574 + 0.008394*t27632 + t31351 + var1[2];
  p_output1[45]=-0.005511*t27574 + 0.011371*t27632 + t31889 + var1[2];
  p_output1[46]=-0.006357*t27574 + 0.013117*t27632 + t31961 + var1[2];
  p_output1[47]=-0.006514*t27574 + 0.013441*t27632 + t32002 + var1[2];
  p_output1[48]=-0.005965*t27574 + 0.012308*t27632 + t32031 + var1[2];
  p_output1[49]=-0.00477*t27574 + 0.009842*t27632 + t32046 + var1[2];
  p_output1[50]=-0.003058*t27574 + 0.006309*t27632 + t32066 + var1[2];
  p_output1[51]=-0.001014*t27574 + 0.002093*t27632 + t32085 + var1[2];
  p_output1[52]=0.001139*t27574 - 0.002351*t27632 + t32099 + var1[2];
  p_output1[53]=0.003169*t27574 - 0.006539*t27632 + t32112 + var1[2];
  p_output1[54]=0.004855*t27574 - 0.010019*t27632 + t32131 + var1[2];
  p_output1[55]=0.006016*t27574 - 0.012413*t27632 + t32151 + var1[2];
  p_output1[56]=0.006524*t27574 - 0.013463*t27632 + t32171 + var1[2];
  p_output1[57]=0.006326*t27574 - 0.013053*t27632 + t32180 + var1[2];
  p_output1[58]=0.005441*t27574 - 0.011228*t27632 + t32190 + var1[2];
  p_output1[59]=t28627;
  p_output1[60]=t32211;
  p_output1[61]=t224 + 0.161759*t172*t72 - 0.322936*t72*t82 + var1[0];
  p_output1[62]=t251 + 0.157369*t172*t72 - 0.325063*t72*t82 + var1[0];
  p_output1[63]=t304 + 0.152994*t172*t72 - 0.327184*t72*t82 + var1[0];
  p_output1[64]=t3585 + 0.149106*t172*t72 - 0.329068*t72*t82 + var1[0];
  p_output1[65]=t3960 + 0.146129*t172*t72 - 0.330511*t72*t82 + var1[0];
  p_output1[66]=t4172 + 0.144383*t172*t72 - 0.331357*t72*t82 + var1[0];
  p_output1[67]=t4569 + 0.144059*t172*t72 - 0.331514*t72*t82 + var1[0];
  p_output1[68]=t4801 + 0.145192*t172*t72 - 0.330965*t72*t82 + var1[0];
  p_output1[69]=t5368 + 0.147658*t172*t72 - 0.32977*t72*t82 + var1[0];
  p_output1[70]=t6900 + 0.151191*t172*t72 - 0.328058*t72*t82 + var1[0];
  p_output1[71]=0.155407*t172*t72 - 0.326014*t72*t82 + t8442 + var1[0];
  p_output1[72]=0.159851*t172*t72 - 0.323861*t72*t82 + t8599 + var1[0];
  p_output1[73]=0.164039*t172*t72 - 0.321831*t72*t82 + t9287 + var1[0];
  p_output1[74]=0.167519*t172*t72 - 0.320145*t72*t82 + t9487 + var1[0];
  p_output1[75]=0.169913*t172*t72 - 0.318984*t72*t82 + t9881 + var1[0];
  p_output1[76]=t10749 + 0.170963*t172*t72 - 0.318476*t72*t82 + var1[0];
  p_output1[77]=t10841 + 0.170553*t172*t72 - 0.318674*t72*t82 + var1[0];
  p_output1[78]=t10863 + 0.168728*t172*t72 - 0.319559*t72*t82 + var1[0];
  p_output1[79]=t32211;
  p_output1[80]=t32312;
  p_output1[81]=-0.322936*t17159 - 0.161759*t17561 + t18208 + var1[1];
  p_output1[82]=-0.325063*t17159 - 0.157369*t17561 + t18329 + var1[1];
  p_output1[83]=-0.327184*t17159 - 0.152994*t17561 + t18610 + var1[1];
  p_output1[84]=-0.329068*t17159 - 0.149106*t17561 + t18685 + var1[1];
  p_output1[85]=-0.330511*t17159 - 0.146129*t17561 + t18737 + var1[1];
  p_output1[86]=-0.331357*t17159 - 0.144383*t17561 + t18821 + var1[1];
  p_output1[87]=-0.331514*t17159 - 0.144059*t17561 + t19113 + var1[1];
  p_output1[88]=-0.330965*t17159 - 0.145192*t17561 + t19647 + var1[1];
  p_output1[89]=-0.32977*t17159 - 0.147658*t17561 + t19749 + var1[1];
  p_output1[90]=-0.328058*t17159 - 0.151191*t17561 + t19759 + var1[1];
  p_output1[91]=-0.326014*t17159 - 0.155407*t17561 + t19900 + var1[1];
  p_output1[92]=-0.323861*t17159 - 0.159851*t17561 + t19910 + var1[1];
  p_output1[93]=-0.321831*t17159 - 0.164039*t17561 + t19938 + var1[1];
  p_output1[94]=-0.320145*t17159 - 0.167519*t17561 + t19947 + var1[1];
  p_output1[95]=-0.318984*t17159 - 0.169913*t17561 + t20124 + var1[1];
  p_output1[96]=-0.318476*t17159 - 0.170963*t17561 + t20129 + var1[1];
  p_output1[97]=-0.318674*t17159 - 0.170553*t17561 + t20166 + var1[1];
  p_output1[98]=-0.319559*t17159 - 0.168728*t17561 + t25855 + var1[1];
  p_output1[99]=t32312;
  p_output1[100]=t32379;
  p_output1[101]=-0.322936*t27574 - 0.161759*t27632 + t28645 + var1[2];
  p_output1[102]=-0.325063*t27574 - 0.157369*t27632 + t30618 + var1[2];
  p_output1[103]=-0.327184*t27574 - 0.152994*t27632 + t31207 + var1[2];
  p_output1[104]=-0.329068*t27574 - 0.149106*t27632 + t31351 + var1[2];
  p_output1[105]=-0.330511*t27574 - 0.146129*t27632 + t31889 + var1[2];
  p_output1[106]=-0.331357*t27574 - 0.144383*t27632 + t31961 + var1[2];
  p_output1[107]=-0.331514*t27574 - 0.144059*t27632 + t32002 + var1[2];
  p_output1[108]=-0.330965*t27574 - 0.145192*t27632 + t32031 + var1[2];
  p_output1[109]=-0.32977*t27574 - 0.147658*t27632 + t32046 + var1[2];
  p_output1[110]=-0.328058*t27574 - 0.151191*t27632 + t32066 + var1[2];
  p_output1[111]=-0.326014*t27574 - 0.155407*t27632 + t32085 + var1[2];
  p_output1[112]=-0.323861*t27574 - 0.159851*t27632 + t32099 + var1[2];
  p_output1[113]=-0.321831*t27574 - 0.164039*t27632 + t32112 + var1[2];
  p_output1[114]=-0.320145*t27574 - 0.167519*t27632 + t32131 + var1[2];
  p_output1[115]=-0.318984*t27574 - 0.169913*t27632 + t32151 + var1[2];
  p_output1[116]=-0.318476*t27574 - 0.170963*t27632 + t32171 + var1[2];
  p_output1[117]=-0.318674*t27574 - 0.170553*t27632 + t32180 + var1[2];
  p_output1[118]=-0.319559*t27574 - 0.168728*t27632 + t32190 + var1[2];
  p_output1[119]=t32379;
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

#include "Link_body_to_11_bar.hh"

namespace SymFunction
{

void Link_body_to_11_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
