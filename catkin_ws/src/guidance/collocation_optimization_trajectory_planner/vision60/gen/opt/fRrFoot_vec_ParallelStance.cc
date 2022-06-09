/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:36 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1317;
  double t1290;
  double t1323;
  double t1371;
  double t1359;
  double t1360;
  double t1381;
  double t1105;
  double t1363;
  double t1382;
  double t1386;
  double t1336;
  double t1396;
  double t1399;
  double t1400;
  double t1394;
  double t1476;
  double t1480;
  double t1401;
  double t1402;
  double t1403;
  double t1408;
  double t1409;
  double t1463;
  double t1467;
  double t1468;
  double t1469;
  double t1481;
  double t1485;
  double t1486;
  double t1491;
  double t1492;
  double t1493;
  double t1496;
  double t1497;
  double t1500;
  double t1506;
  double t1507;
  double t1509;
  double t1513;
  double t1514;
  double t1519;
  double t1390;
  double t1404;
  double t1405;
  double t1633;
  double t1637;
  double t1638;
  double t1641;
  double t1644;
  double t1645;
  double t1646;
  double t1647;
  double t1648;
  double t1316;
  double t1338;
  double t1342;
  double t1631;
  double t1639;
  double t1649;
  double t1650;
  double t1654;
  double t1657;
  double t1659;
  double t1662;
  double t1663;
  double t1666;
  double t1615;
  double t1618;
  double t1627;
  double t1629;
  double t1651;
  double t1652;
  double t1672;
  double t1673;
  double t1674;
  double t1676;
  double t1678;
  double t1680;
  double t1653;
  double t1668;
  double t1670;
  double t1675;
  double t1681;
  double t1682;
  double t1684;
  double t1685;
  double t1686;
  double t1407;
  double t1471;
  double t1472;
  double t1671;
  double t1690;
  double t1697;
  double t1702;
  double t1709;
  double t1714;
  double t1747;
  double t1762;
  double t1722;
  double t1726;
  double t1739;
  double t1734;
  double t1832;
  double t1827;
  t1317 = Cos(var1[15]);
  t1290 = Sin(var1[4]);
  t1323 = Cos(var1[4]);
  t1371 = Cos(var1[16]);
  t1359 = Cos(var1[17]);
  t1360 = Sin(var1[16]);
  t1381 = Sin(var1[17]);
  t1105 = Sin(var1[15]);
  t1363 = t1359*t1360;
  t1382 = -1.*t1371*t1381;
  t1386 = t1363 + t1382;
  t1336 = Sin(var1[5]);
  t1396 = t1371*t1359;
  t1399 = t1360*t1381;
  t1400 = t1396 + t1399;
  t1394 = Cos(var1[5]);
  t1476 = Cos(var1[3]);
  t1480 = Sin(var1[3]);
  t1401 = t1394*t1400;
  t1402 = t1105*t1386*t1336;
  t1403 = t1401 + t1402;
  t1408 = -1.*t1359*t1360;
  t1409 = t1371*t1381;
  t1463 = t1408 + t1409;
  t1467 = t1394*t1463;
  t1468 = t1105*t1400*t1336;
  t1469 = t1467 + t1468;
  t1481 = t1323*t1105;
  t1485 = t1317*t1290*t1336;
  t1486 = t1481 + t1485;
  t1491 = -1.*t1394*t1105*t1386;
  t1492 = t1400*t1336;
  t1493 = t1491 + t1492;
  t1496 = t1317*t1323*t1386;
  t1497 = -1.*t1290*t1403;
  t1500 = t1496 + t1497;
  t1506 = -1.*t1394*t1105*t1400;
  t1507 = t1463*t1336;
  t1509 = t1506 + t1507;
  t1513 = t1317*t1323*t1400;
  t1514 = -1.*t1290*t1469;
  t1519 = t1513 + t1514;
  t1390 = t1317*t1386*t1290;
  t1404 = t1323*t1403;
  t1405 = t1390 + t1404;
  t1633 = -0.0641*t1359;
  t1637 = -0.28*t1381;
  t1638 = t1633 + t1637;
  t1641 = -1.*t1359;
  t1644 = 1. + t1641;
  t1645 = -0.575*t1644;
  t1646 = -0.295*t1359;
  t1647 = -0.0641*t1381;
  t1648 = t1645 + t1646 + t1647;
  t1316 = t1105*t1290;
  t1338 = -1.*t1317*t1323*t1336;
  t1342 = t1316 + t1338;
  t1631 = 0.325*t1360;
  t1639 = t1371*t1638;
  t1649 = t1360*t1648;
  t1650 = t1631 + t1639 + t1649;
  t1654 = -1.*t1371;
  t1657 = 1. + t1654;
  t1659 = -0.325*t1657;
  t1662 = -1.*t1360*t1638;
  t1663 = t1371*t1648;
  t1666 = t1659 + t1662 + t1663;
  t1615 = -1.*t1317;
  t1618 = 1. + t1615;
  t1627 = -0.1575*t1618;
  t1629 = -0.2255*t1317;
  t1651 = -1.*t1105*t1650;
  t1652 = t1627 + t1629 + t1651;
  t1672 = -0.068*t1105;
  t1673 = t1317*t1650;
  t1674 = t1672 + t1673;
  t1676 = t1394*t1666;
  t1678 = -1.*t1652*t1336;
  t1680 = t1676 + t1678;
  t1653 = t1394*t1652;
  t1668 = t1666*t1336;
  t1670 = t1653 + t1668;
  t1675 = t1674*t1290;
  t1681 = t1323*t1680;
  t1682 = t1675 + t1681;
  t1684 = t1323*t1674;
  t1685 = -1.*t1290*t1680;
  t1686 = t1684 + t1685;
  t1407 = t1317*t1400*t1290;
  t1471 = t1323*t1469;
  t1472 = t1407 + t1471;
  t1671 = t1317*t1394*t1670;
  t1690 = -1.*t1670*t1493;
  t1697 = t1670*t1493;
  t1702 = -1.*t1670*t1509;
  t1709 = -1.*t1317*t1394*t1670;
  t1714 = t1670*t1509;
  t1747 = -1.*t1105*t1674;
  t1762 = t1317*t1674*t1400;
  t1722 = t1105*t1674;
  t1726 = -1.*t1317*t1674*t1386;
  t1739 = -1.*t1317*t1674*t1400;
  t1734 = t1317*t1674*t1386;
  t1832 = t1666*t1400;
  t1827 = -1.*t1666*t1463;
  p_output1[0]=t1405*var2[0] + t1342*var2[1] + t1472*var2[2];
  p_output1[1]=(t1476*t1493 - 1.*t1480*t1500)*var2[0] + (t1317*t1394*t1476 - 1.*t1480*t1486)*var2[1] + (t1476*t1509 - 1.*t1480*t1519)*var2[2];
  p_output1[2]=(t1480*t1493 + t1476*t1500)*var2[0] + (t1317*t1394*t1480 + t1476*t1486)*var2[1] + (t1480*t1509 + t1476*t1519)*var2[2];
  p_output1[3]=(t1472*(-1.*t1342*t1682 - 1.*t1486*t1686 + t1709) + t1342*(t1472*t1682 + t1519*t1686 + t1714))*var2[0] + (t1472*(t1405*t1682 + t1500*t1686 + t1697) + t1405*(-1.*t1472*t1682 - 1.*t1519*t1686 + t1702))*var2[1] + (t1405*(t1671 + t1342*t1682 + t1486*t1686) + t1342*(-1.*t1405*t1682 - 1.*t1500*t1686 + t1690))*var2[2];
  p_output1[4]=(t1509*(t1317*t1336*t1680 + t1709 + t1747) + t1317*t1394*(t1469*t1680 + t1714 + t1762))*var2[0] + (t1509*(t1403*t1680 + t1697 + t1734) + t1493*(-1.*t1469*t1680 + t1702 + t1739))*var2[1] + (t1493*(t1671 - 1.*t1317*t1336*t1680 + t1722) + t1317*t1394*(-1.*t1403*t1680 + t1690 + t1726))*var2[2];
  p_output1[5]=(t1317*t1400*(-1.*t1317*t1652 + t1747) + t1105*(-1.*t1105*t1400*t1652 + t1463*t1666 + t1762))*var2[0] + (t1317*t1386*(t1105*t1400*t1652 + t1739 + t1827) + t1317*t1400*(-1.*t1105*t1386*t1652 + t1734 + t1832))*var2[1] + (t1317*t1386*(t1317*t1652 + t1722) + t1105*(t1105*t1386*t1652 - 1.*t1400*t1666 + t1726))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t1386 + 0.2255*t1463)*var2[0] + (t1400*(-1.*t1400*t1650 + t1827) + t1463*(t1386*t1650 + t1832))*var2[1] - 0.068*t1400*var2[2];
  p_output1[16]=(-0.325*t1381 - 1.*t1359*t1638 - 1.*t1381*t1648)*var2[0] + (0.325*t1359 - 1.*t1381*t1638 + t1359*t1648)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
