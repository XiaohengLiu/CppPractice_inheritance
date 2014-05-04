#include "threedimensionalshape.h"

class sphere:public threedimensionalshape
{
public:
	double radius;
	sphere()
	{
		x=y=z=radius=0;
	}
	~sphere(){};
	double getArea();
	double getVolume();
};