#include "twodimensionalshape.h"

class triangle:public twodimensionalshape{
public:
	double edge;
	triangle()
	{
		x=0;
		y=0;
		edge=0;
	}
	~triangle(){};
	double getArea();
};
