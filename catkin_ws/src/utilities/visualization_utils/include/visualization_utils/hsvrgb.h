#ifndef hsvrgb_h
#define hsvrgb_h

#include <iostream>
#include <cstdlib>
#include <cmath>


void RGBtoHSV(double& fR, double& fG, double fB, double& fH, double& fS, double& fV);

void HSVtoRGB(double& fR, double& fG, double& fB, double& fH, double& fS, double& fV);

#endif