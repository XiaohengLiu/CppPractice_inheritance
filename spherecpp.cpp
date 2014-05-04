#include "sphereheader.h"

double sphere::getArea()
{
	return 4*3.1415926*radius*radius;
}

double sphere::getVolume()
{
	return (4*3.1415926*radius*radius*radius)/3;
}