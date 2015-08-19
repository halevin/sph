#ifndef KERNEL_H
#define KERNEL_H

class Kernel
{
public:
	static double pi3_2 = sqrt(M_PI*M_PI*M_PI);

	static double splineVal[1000]; 
	static double splineValGrad[1000]; 

	static double gaussVal[1000];
	static double gaussValGrad[1000];
	
	static double Kernel::spline(double r, double h)
	static double spline(double r, Particle particle);
	static double spline_der(double r, Particle particle);
	static double spline_der2(double r, Particle particle);
	
	static double gauss(double r, Particle particle);
	static double gauss_der(double r, Particle particle);
	static double gauss_der2(double r, Particle particle);
	
	static void init();
}

#endif