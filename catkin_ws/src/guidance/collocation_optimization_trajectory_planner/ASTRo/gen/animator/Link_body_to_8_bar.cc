/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:31:33 GMT+02:00
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
  double t638;
  double t1001;
  double t4962;
  double t8306;
  double t3778;
  double t8111;
  double t8764;
  double t12987;
  double t21575;
  double t21578;
  double t21577;
  double t21579;
  double t21580;
  double t21582;
  double t21583;
  double t21584;
  double t21576;
  double t21581;
  double t21586;
  double t21587;
  double t21665;
  double t21666;
  double t21668;
  double t21670;
  double t21671;
  double t21672;
  double t21664;
  double t21669;
  double t21673;
  double t21674;
  double t17595;
  double t21396;
  double t21448;
  double t21461;
  double t21473;
  double t21477;
  double t21481;
  double t21485;
  double t21527;
  double t21535;
  double t21539;
  double t21544;
  double t21550;
  double t21555;
  double t21560;
  double t21564;
  double t21568;
  double t21572;
  double t21751;
  double t21752;
  double t21753;
  double t21588;
  double t21593;
  double t21597;
  double t21601;
  double t21605;
  double t21609;
  double t21613;
  double t21617;
  double t21621;
  double t21625;
  double t21629;
  double t21634;
  double t21638;
  double t21642;
  double t21647;
  double t21652;
  double t21656;
  double t21660;
  double t21808;
  double t21809;
  double t21810;
  double t21675;
  double t21679;
  double t21683;
  double t21687;
  double t21691;
  double t21695;
  double t21699;
  double t21703;
  double t21707;
  double t21711;
  double t21716;
  double t21720;
  double t21724;
  double t21729;
  double t21733;
  double t21739;
  double t21743;
  double t21747;
  double t21866;
  double t21867;
  double t21868;
  t638 = Cos(var1[4]);
  t1001 = Cos(var1[5]);
  t4962 = Sin(var1[4]);
  t8306 = Sin(var1[5]);
  t3778 = -0.00287*t638*t1001;
  t8111 = -0.01444*t4962;
  t8764 = -0.00287*t638*t8306;
  t12987 = var1[0] + t3778 + t8111 + t8764;
  t21575 = Sin(var1[3]);
  t21578 = Cos(var1[3]);
  t21577 = t1001*t21575*t4962;
  t21579 = t21578*t8306;
  t21580 = t21577 + t21579;
  t21582 = t21578*t1001;
  t21583 = -1.*t21575*t4962*t8306;
  t21584 = t21582 + t21583;
  t21576 = 0.01444*t638*t21575;
  t21581 = -0.00287*t21580;
  t21586 = 0.00287*t21584;
  t21587 = var1[1] + t21576 + t21581 + t21586;
  t21665 = -1.*t21578*t1001*t4962;
  t21666 = t21575*t8306;
  t21668 = t21665 + t21666;
  t21670 = t1001*t21575;
  t21671 = t21578*t4962*t8306;
  t21672 = t21670 + t21671;
  t21664 = -0.01444*t21578*t638;
  t21669 = -0.00287*t21668;
  t21673 = 0.00287*t21672;
  t21674 = var1[2] + t21664 + t21669 + t21673;
  t17595 = -0.01234*t4962;
  t21396 = -0.008902*t4962;
  t21448 = -0.0045*t4962;
  t21461 = 0.00039*t4962;
  t21473 = 0.005238*t4962;
  t21477 = 0.009518*t4962;
  t21481 = 0.012767*t4962;
  t21485 = 0.014632*t4962;
  t21527 = 0.014912*t4962;
  t21535 = 0.013575*t4962;
  t21539 = 0.010768*t4962;
  t21544 = 0.006794*t4962;
  t21550 = 0.002084*t4962;
  t21555 = -0.002853*t4962;
  t21560 = -0.00748*t4962;
  t21564 = -0.011296*t4962;
  t21568 = -0.013889*t4962;
  t21572 = -0.014976*t4962;
  t21751 = 0.14834*t638*t1001;
  t21752 = -0.15408*t638*t8306;
  t21753 = var1[0] + t21751 + t8111 + t21752;
  t21588 = 0.01234*t638*t21575;
  t21593 = 0.008902*t638*t21575;
  t21597 = 0.0045*t638*t21575;
  t21601 = -0.00039*t638*t21575;
  t21605 = -0.005238*t638*t21575;
  t21609 = -0.009518*t638*t21575;
  t21613 = -0.012767*t638*t21575;
  t21617 = -0.014632*t638*t21575;
  t21621 = -0.014912*t638*t21575;
  t21625 = -0.013575*t638*t21575;
  t21629 = -0.010768*t638*t21575;
  t21634 = -0.006794*t638*t21575;
  t21638 = -0.002084*t638*t21575;
  t21642 = 0.002853*t638*t21575;
  t21647 = 0.00748*t638*t21575;
  t21652 = 0.011296*t638*t21575;
  t21656 = 0.013889*t638*t21575;
  t21660 = 0.014976*t638*t21575;
  t21808 = 0.14834*t21580;
  t21809 = 0.15408*t21584;
  t21810 = var1[1] + t21576 + t21808 + t21809;
  t21675 = -0.01234*t21578*t638;
  t21679 = -0.008902*t21578*t638;
  t21683 = -0.0045*t21578*t638;
  t21687 = 0.00039*t21578*t638;
  t21691 = 0.005238*t21578*t638;
  t21695 = 0.009518*t21578*t638;
  t21699 = 0.012767*t21578*t638;
  t21703 = 0.014632*t21578*t638;
  t21707 = 0.014912*t21578*t638;
  t21711 = 0.013575*t21578*t638;
  t21716 = 0.010768*t21578*t638;
  t21720 = 0.006794*t21578*t638;
  t21724 = 0.002084*t21578*t638;
  t21729 = -0.002853*t21578*t638;
  t21733 = -0.00748*t21578*t638;
  t21739 = -0.011296*t21578*t638;
  t21743 = -0.013889*t21578*t638;
  t21747 = -0.014976*t21578*t638;
  t21866 = 0.14834*t21668;
  t21867 = 0.15408*t21672;
  t21868 = var1[2] + t21664 + t21866 + t21867;
  p_output1[0]=t12987;
  p_output1[1]=t17595 - 0.00603*t1001*t638 - 0.00603*t638*t8306 + var1[0];
  p_output1[2]=t21396 - 0.008537*t1001*t638 - 0.008537*t638*t8306 + var1[0];
  p_output1[3]=t21448 - 0.010118*t1001*t638 - 0.010118*t638*t8306 + var1[0];
  p_output1[4]=t21461 - 0.010603*t1001*t638 - 0.010603*t638*t8306 + var1[0];
  p_output1[5]=t21473 - 0.009939*t1001*t638 - 0.009939*t638*t8306 + var1[0];
  p_output1[6]=t21477 - 0.008198*t1001*t638 - 0.008198*t638*t8306 + var1[0];
  p_output1[7]=t21481 - 0.005568*t1001*t638 - 0.005568*t638*t8306 + var1[0];
  p_output1[8]=t21485 - 0.002336*t1001*t638 - 0.002336*t638*t8306 + var1[0];
  p_output1[9]=t21527 + 0.00115*t1001*t638 + 0.00115*t638*t8306 + var1[0];
  p_output1[10]=t21535 + 0.004512*t1001*t638 + 0.004512*t638*t8306 + var1[0];
  p_output1[11]=t21539 + 0.007384*t1001*t638 + 0.007384*t638*t8306 + var1[0];
  p_output1[12]=t21544 + 0.009456*t1001*t638 + 0.009456*t638*t8306 + var1[0];
  p_output1[13]=t21550 + 0.010504*t1001*t638 + 0.010504*t638*t8306 + var1[0];
  p_output1[14]=t21555 + 0.010413*t1001*t638 + 0.010413*t638*t8306 + var1[0];
  p_output1[15]=t21560 + 0.009194*t1001*t638 + 0.009194*t638*t8306 + var1[0];
  p_output1[16]=t21564 + 0.006978*t1001*t638 + 0.006978*t638*t8306 + var1[0];
  p_output1[17]=t21568 + 0.004007*t1001*t638 + 0.004007*t638*t8306 + var1[0];
  p_output1[18]=t21572 + 0.000601*t1001*t638 + 0.000601*t638*t8306 + var1[0];
  p_output1[19]=t12987;
  p_output1[20]=t21587;
  p_output1[21]=-0.00603*t21580 + 0.00603*t21584 + t21588 + var1[1];
  p_output1[22]=-0.008537*t21580 + 0.008537*t21584 + t21593 + var1[1];
  p_output1[23]=-0.010118*t21580 + 0.010118*t21584 + t21597 + var1[1];
  p_output1[24]=-0.010603*t21580 + 0.010603*t21584 + t21601 + var1[1];
  p_output1[25]=-0.009939*t21580 + 0.009939*t21584 + t21605 + var1[1];
  p_output1[26]=-0.008198*t21580 + 0.008198*t21584 + t21609 + var1[1];
  p_output1[27]=-0.005568*t21580 + 0.005568*t21584 + t21613 + var1[1];
  p_output1[28]=-0.002336*t21580 + 0.002336*t21584 + t21617 + var1[1];
  p_output1[29]=0.00115*t21580 - 0.00115*t21584 + t21621 + var1[1];
  p_output1[30]=0.004512*t21580 - 0.004512*t21584 + t21625 + var1[1];
  p_output1[31]=0.007384*t21580 - 0.007384*t21584 + t21629 + var1[1];
  p_output1[32]=0.009456*t21580 - 0.009456*t21584 + t21634 + var1[1];
  p_output1[33]=0.010504*t21580 - 0.010504*t21584 + t21638 + var1[1];
  p_output1[34]=0.010413*t21580 - 0.010413*t21584 + t21642 + var1[1];
  p_output1[35]=0.009194*t21580 - 0.009194*t21584 + t21647 + var1[1];
  p_output1[36]=0.006978*t21580 - 0.006978*t21584 + t21652 + var1[1];
  p_output1[37]=0.004007*t21580 - 0.004007*t21584 + t21656 + var1[1];
  p_output1[38]=0.000601*t21580 - 0.000601*t21584 + t21660 + var1[1];
  p_output1[39]=t21587;
  p_output1[40]=t21674;
  p_output1[41]=-0.00603*t21668 + 0.00603*t21672 + t21675 + var1[2];
  p_output1[42]=-0.008537*t21668 + 0.008537*t21672 + t21679 + var1[2];
  p_output1[43]=-0.010118*t21668 + 0.010118*t21672 + t21683 + var1[2];
  p_output1[44]=-0.010603*t21668 + 0.010603*t21672 + t21687 + var1[2];
  p_output1[45]=-0.009939*t21668 + 0.009939*t21672 + t21691 + var1[2];
  p_output1[46]=-0.008198*t21668 + 0.008198*t21672 + t21695 + var1[2];
  p_output1[47]=-0.005568*t21668 + 0.005568*t21672 + t21699 + var1[2];
  p_output1[48]=-0.002336*t21668 + 0.002336*t21672 + t21703 + var1[2];
  p_output1[49]=0.00115*t21668 - 0.00115*t21672 + t21707 + var1[2];
  p_output1[50]=0.004512*t21668 - 0.004512*t21672 + t21711 + var1[2];
  p_output1[51]=0.007384*t21668 - 0.007384*t21672 + t21716 + var1[2];
  p_output1[52]=0.009456*t21668 - 0.009456*t21672 + t21720 + var1[2];
  p_output1[53]=0.010504*t21668 - 0.010504*t21672 + t21724 + var1[2];
  p_output1[54]=0.010413*t21668 - 0.010413*t21672 + t21729 + var1[2];
  p_output1[55]=0.009194*t21668 - 0.009194*t21672 + t21733 + var1[2];
  p_output1[56]=0.006978*t21668 - 0.006978*t21672 + t21739 + var1[2];
  p_output1[57]=0.004007*t21668 - 0.004007*t21672 + t21743 + var1[2];
  p_output1[58]=0.000601*t21668 - 0.000601*t21672 + t21747 + var1[2];
  p_output1[59]=t21674;
  p_output1[60]=t21753;
  p_output1[61]=t17595 + 0.14518*t1001*t638 - 0.15724*t638*t8306 + var1[0];
  p_output1[62]=t21396 + 0.142673*t1001*t638 - 0.159747*t638*t8306 + var1[0];
  p_output1[63]=t21448 + 0.141092*t1001*t638 - 0.161328*t638*t8306 + var1[0];
  p_output1[64]=t21461 + 0.140607*t1001*t638 - 0.161813*t638*t8306 + var1[0];
  p_output1[65]=t21473 + 0.141271*t1001*t638 - 0.161149*t638*t8306 + var1[0];
  p_output1[66]=t21477 + 0.143012*t1001*t638 - 0.159408*t638*t8306 + var1[0];
  p_output1[67]=t21481 + 0.145642*t1001*t638 - 0.156778*t638*t8306 + var1[0];
  p_output1[68]=t21485 + 0.148874*t1001*t638 - 0.153546*t638*t8306 + var1[0];
  p_output1[69]=t21527 + 0.15236*t1001*t638 - 0.15006*t638*t8306 + var1[0];
  p_output1[70]=t21535 + 0.155722*t1001*t638 - 0.146698*t638*t8306 + var1[0];
  p_output1[71]=t21539 + 0.158594*t1001*t638 - 0.143826*t638*t8306 + var1[0];
  p_output1[72]=t21544 + 0.160666*t1001*t638 - 0.141754*t638*t8306 + var1[0];
  p_output1[73]=t21550 + 0.161714*t1001*t638 - 0.140706*t638*t8306 + var1[0];
  p_output1[74]=t21555 + 0.161623*t1001*t638 - 0.140797*t638*t8306 + var1[0];
  p_output1[75]=t21560 + 0.160404*t1001*t638 - 0.142016*t638*t8306 + var1[0];
  p_output1[76]=t21564 + 0.158188*t1001*t638 - 0.144232*t638*t8306 + var1[0];
  p_output1[77]=t21568 + 0.155217*t1001*t638 - 0.147203*t638*t8306 + var1[0];
  p_output1[78]=t21572 + 0.151811*t1001*t638 - 0.150609*t638*t8306 + var1[0];
  p_output1[79]=t21753;
  p_output1[80]=t21810;
  p_output1[81]=0.14518*t21580 + 0.15724*t21584 + t21588 + var1[1];
  p_output1[82]=0.142673*t21580 + 0.159747*t21584 + t21593 + var1[1];
  p_output1[83]=0.141092*t21580 + 0.161328*t21584 + t21597 + var1[1];
  p_output1[84]=0.140607*t21580 + 0.161813*t21584 + t21601 + var1[1];
  p_output1[85]=0.141271*t21580 + 0.161149*t21584 + t21605 + var1[1];
  p_output1[86]=0.143012*t21580 + 0.159408*t21584 + t21609 + var1[1];
  p_output1[87]=0.145642*t21580 + 0.156778*t21584 + t21613 + var1[1];
  p_output1[88]=0.148874*t21580 + 0.153546*t21584 + t21617 + var1[1];
  p_output1[89]=0.15236*t21580 + 0.15006*t21584 + t21621 + var1[1];
  p_output1[90]=0.155722*t21580 + 0.146698*t21584 + t21625 + var1[1];
  p_output1[91]=0.158594*t21580 + 0.143826*t21584 + t21629 + var1[1];
  p_output1[92]=0.160666*t21580 + 0.141754*t21584 + t21634 + var1[1];
  p_output1[93]=0.161714*t21580 + 0.140706*t21584 + t21638 + var1[1];
  p_output1[94]=0.161623*t21580 + 0.140797*t21584 + t21642 + var1[1];
  p_output1[95]=0.160404*t21580 + 0.142016*t21584 + t21647 + var1[1];
  p_output1[96]=0.158188*t21580 + 0.144232*t21584 + t21652 + var1[1];
  p_output1[97]=0.155217*t21580 + 0.147203*t21584 + t21656 + var1[1];
  p_output1[98]=0.151811*t21580 + 0.150609*t21584 + t21660 + var1[1];
  p_output1[99]=t21810;
  p_output1[100]=t21868;
  p_output1[101]=0.14518*t21668 + 0.15724*t21672 + t21675 + var1[2];
  p_output1[102]=0.142673*t21668 + 0.159747*t21672 + t21679 + var1[2];
  p_output1[103]=0.141092*t21668 + 0.161328*t21672 + t21683 + var1[2];
  p_output1[104]=0.140607*t21668 + 0.161813*t21672 + t21687 + var1[2];
  p_output1[105]=0.141271*t21668 + 0.161149*t21672 + t21691 + var1[2];
  p_output1[106]=0.143012*t21668 + 0.159408*t21672 + t21695 + var1[2];
  p_output1[107]=0.145642*t21668 + 0.156778*t21672 + t21699 + var1[2];
  p_output1[108]=0.148874*t21668 + 0.153546*t21672 + t21703 + var1[2];
  p_output1[109]=0.15236*t21668 + 0.15006*t21672 + t21707 + var1[2];
  p_output1[110]=0.155722*t21668 + 0.146698*t21672 + t21711 + var1[2];
  p_output1[111]=0.158594*t21668 + 0.143826*t21672 + t21716 + var1[2];
  p_output1[112]=0.160666*t21668 + 0.141754*t21672 + t21720 + var1[2];
  p_output1[113]=0.161714*t21668 + 0.140706*t21672 + t21724 + var1[2];
  p_output1[114]=0.161623*t21668 + 0.140797*t21672 + t21729 + var1[2];
  p_output1[115]=0.160404*t21668 + 0.142016*t21672 + t21733 + var1[2];
  p_output1[116]=0.158188*t21668 + 0.144232*t21672 + t21739 + var1[2];
  p_output1[117]=0.155217*t21668 + 0.147203*t21672 + t21743 + var1[2];
  p_output1[118]=0.151811*t21668 + 0.150609*t21672 + t21747 + var1[2];
  p_output1[119]=t21868;
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
