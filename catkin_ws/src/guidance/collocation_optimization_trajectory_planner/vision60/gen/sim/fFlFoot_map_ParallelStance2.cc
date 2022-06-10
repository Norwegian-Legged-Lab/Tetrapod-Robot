/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:17 GMT+02:00
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
  double t411;
  double t643;
  double t658;
  double t683;
  double t735;
  double t736;
  double t743;
  double t855;
  double t850;
  double t794;
  double t957;
  double t968;
  double t975;
  double t753;
  double t337;
  double t408;
  double t852;
  double t977;
  double t978;
  double t1084;
  double t1003;
  double t1007;
  double t1042;
  double t1002;
  double t1095;
  double t1156;
  double t1175;
  double t1311;
  double t1367;
  double t1389;
  double t1396;
  double t1398;
  double t1407;
  double t1441;
  double t1451;
  double t1461;
  double t1310;
  double t1395;
  double t1470;
  double t1478;
  double t1296;
  double t1297;
  double t1301;
  double t1302;
  double t1511;
  double t1520;
  double t1534;
  double t1540;
  double t1541;
  double t1587;
  double t1588;
  double t1619;
  double t1627;
  double t1629;
  double t1689;
  double t1708;
  double t1743;
  double t1746;
  double t1764;
  double t1769;
  double t1770;
  double t1787;
  double t1788;
  double t1789;
  double t1823;
  double t1824;
  double t1838;
  double t1773;
  double t1775;
  double t1779;
  double t1821;
  double t1846;
  double t1859;
  double t1870;
  double t1878;
  double t1889;
  double t1693;
  double t1755;
  double t1761;
  double t1790;
  double t1922;
  double t1931;
  double t1934;
  double t1936;
  double t2001;
  double t2082;
  double t1253;
  double t1254;
  double t1294;
  double t747;
  double t979;
  double t994;
  double t1946;
  double t1956;
  double t1967;
  double t2636;
  double t2679;
  double t2858;
  double t2765;
  double t3027;
  double t2893;
  double t3301;
  double t3305;
  double t3448;
  double t3458;
  t411 = Cos(var1[8]);
  t643 = Sin(var1[7]);
  t658 = t411*t643;
  t683 = Cos(var1[7]);
  t735 = Sin(var1[8]);
  t736 = -1.*t683*t735;
  t743 = t658 + t736;
  t855 = Cos(var1[5]);
  t850 = Sin(var1[6]);
  t794 = Sin(var1[5]);
  t957 = t683*t411;
  t968 = t643*t735;
  t975 = t957 + t968;
  t753 = Cos(var1[4]);
  t337 = Cos(var1[6]);
  t408 = Sin(var1[4]);
  t852 = t794*t850*t743;
  t977 = t855*t975;
  t978 = t852 + t977;
  t1084 = Sin(var1[3]);
  t1003 = -1.*t855*t850*t743;
  t1007 = t794*t975;
  t1042 = t1003 + t1007;
  t1002 = Cos(var1[3]);
  t1095 = t753*t337*t743;
  t1156 = -1.*t408*t978;
  t1175 = t1095 + t1156;
  t1311 = -0.0641*t411;
  t1367 = -0.28*t735;
  t1389 = t1311 + t1367;
  t1396 = -1.*t411;
  t1398 = 1. + t1396;
  t1407 = 0.075*t1398;
  t1441 = 0.355*t411;
  t1451 = -0.0641*t735;
  t1461 = t1407 + t1441 + t1451;
  t1310 = -0.325*t643;
  t1395 = t683*t1389;
  t1470 = t643*t1461;
  t1478 = t1310 + t1395 + t1470;
  t1296 = -1.*t337;
  t1297 = 1. + t1296;
  t1301 = 0.1575*t1297;
  t1302 = 0.2255*t337;
  t1511 = -1.*t850*t1478;
  t1520 = t1301 + t1302 + t1511;
  t1534 = -1.*t794*t1520;
  t1540 = -1.*t683;
  t1541 = 1. + t1540;
  t1587 = 0.325*t1541;
  t1588 = -1.*t643*t1389;
  t1619 = t683*t1461;
  t1627 = t1587 + t1588 + t1619;
  t1629 = t855*t1627;
  t1689 = t1534 + t1629;
  t1708 = 0.068*t850;
  t1743 = t337*t1478;
  t1746 = t1708 + t1743;
  t1764 = -1.*t753*t337*t794;
  t1769 = t408*t850;
  t1770 = t1764 + t1769;
  t1787 = t855*t1520;
  t1788 = t794*t1627;
  t1789 = t1787 + t1788;
  t1823 = -1.*t411*t643;
  t1824 = t683*t735;
  t1838 = t1823 + t1824;
  t1773 = t753*t1689;
  t1775 = t408*t1746;
  t1779 = t1773 + t1775;
  t1821 = t337*t408*t975;
  t1846 = t855*t1838;
  t1859 = t794*t850*t975;
  t1870 = t1846 + t1859;
  t1878 = t753*t1870;
  t1889 = t1821 + t1878;
  t1693 = -1.*t408*t1689;
  t1755 = t753*t1746;
  t1761 = t1693 + t1755;
  t1790 = -1.*t855*t337*t1789;
  t1922 = t794*t1838;
  t1931 = -1.*t855*t850*t975;
  t1934 = t1922 + t1931;
  t1936 = t1789*t1934;
  t2001 = -1.*t850*t1746;
  t2082 = t337*t1746*t975;
  t1253 = t337*t408*t794;
  t1254 = t753*t850;
  t1294 = t1253 + t1254;
  t747 = t337*t408*t743;
  t979 = t753*t978;
  t994 = t747 + t979;
  t1946 = t753*t337*t975;
  t1956 = -1.*t408*t1870;
  t1967 = t1946 + t1956;
  t2636 = t1789*t1042;
  t2679 = -1.*t1789*t1934;
  t2858 = -1.*t337*t1746*t975;
  t2765 = t337*t1746*t743;
  t3027 = t1627*t975;
  t2893 = -1.*t1627*t1838;
  t3301 = t855*t337*t1789;
  t3305 = -1.*t1789*t1042;
  t3448 = t850*t1746;
  t3458 = -1.*t337*t1746*t743;
  p_output1[0]=t994;
  p_output1[1]=t1002*t1042 - 1.*t1084*t1175;
  p_output1[2]=t1042*t1084 + t1002*t1175;
  p_output1[3]=(-1.*t1294*t1761 - 1.*t1770*t1779 + t1790)*t1889 + t1770*(t1779*t1889 + t1936 + t1761*t1967);
  p_output1[4]=t1934*(t1790 + t2001 + t1689*t337*t794) + (t1689*t1870 + t1936 + t2082)*t337*t855;
  p_output1[5]=t337*(t2001 - 1.*t1520*t337)*t975 + t850*(t1627*t1838 + t2082 - 1.*t1520*t850*t975);
  p_output1[6]=-0.2255*t1838 - 0.1575*t743;
  p_output1[7]=-1.*t1389*t411 + 0.325*t735 - 1.*t1461*t735;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1770;
  p_output1[19]=-1.*t1084*t1294 + t1002*t337*t855;
  p_output1[20]=t1002*t1294 + t1084*t337*t855;
  p_output1[21]=(-1.*t1779*t1889 - 1.*t1761*t1967 + t2679)*t994 + t1889*(t1175*t1761 + t2636 + t1779*t994);
  p_output1[22]=t1042*(-1.*t1689*t1870 + t2679 + t2858) + t1934*(t2636 + t2765 + t1689*t978);
  p_output1[23]=t337*(t2765 + t3027 - 1.*t1520*t743*t850)*t975 + t337*t743*(t2858 + t2893 + t1520*t850*t975);
  p_output1[24]=t1838*(t3027 + t1478*t743) + t975*(t2893 - 1.*t1478*t975);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t1889;
  p_output1[37]=t1002*t1934 - 1.*t1084*t1967;
  p_output1[38]=t1084*t1934 + t1002*t1967;
  p_output1[39]=(t1294*t1761 + t1770*t1779 + t3301)*t994 + t1770*(-1.*t1175*t1761 + t3305 - 1.*t1779*t994);
  p_output1[40]=t1042*(t3301 + t3448 - 1.*t1689*t337*t794) + t337*t855*(t3305 + t3458 - 1.*t1689*t978);
  p_output1[41]=t337*(t1520*t337 + t3448)*t743 + t850*(t3458 + t1520*t743*t850 - 1.*t1627*t975);
  p_output1[42]=0.068*t975;
  p_output1[43]=-0.325*t411 + t1461*t411 - 1.*t1389*t735;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
