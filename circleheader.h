
#include "twodimensionalshape.h"
class circle:public twodimensionalshape
{
public:
	double radius;
	circle()
	{
		x=0;
		y=0;
		radius=0;
	}
	~circle(){};
	double getArea();
};
