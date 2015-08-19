#include <Math.h>

double Kernel::spline(double r, double h)
{
	double x = r/h;
	double res = 0.0;
	double x2 = x * x;
	if (x>=0 && x<=1) 
		res = 1.0 - 1.5 * x2 + 0.75 * x2 * x;
	else if (x>1 && x<=2) {
		double tmp = 2.0 - x;
		res = tmp * tmp * tmp * 0.25;
	} 	

	return res;
}


double Kernel::spline(double r, Particle particle)
{
	return Kernel::spline(r, particle.h);
}

double Kernel::spline_der(double r, Particle particle)
{

	double x = r/particle.h;
	double res = 0.0;
	double x2 = x * x;
	if (x>=0 && x<=1) 
		res = 1.0 - 1.5 * x2 + 0.75 * x2 * x;
	else if (x>1 && x<=2) {
		double tmp = 2.0 - x;
		res = tmp * tmp * tmp * 0.25;
	} 	

	return res;
	
}

double Kernel::spline_der2(double r, Particle particle)
{
	
}
	
double Kernel::gauss(double r, Particle particle)
{
	double x = r/particle.h;
	return 1.0/particle.h3/pi3_2 * exp(-x*x);	
}

double Kernel::gauss_der(double r, Particle particle)
{
	double x = r/particle.h;
	
}

double Kernel::gauss_der2(double r, Particle particle)
{
	double x = r/particle.h;
	
}



void initSpline()
{
	for (int i = 0; i < 1000; i++) {
		splineVal[i] = spline ((double) i / 500.0);
		splineValGrad[i] = spline_der ((double) i / 500.0);
	}
}

