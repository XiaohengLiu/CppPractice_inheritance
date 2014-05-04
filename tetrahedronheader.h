#include "threedimensionalshape.h"

class tetrahedron:public threedimensionalshape
{
public:
	double length;
	tetrahedron(){
		x=y=z=length=0;
	}
	~tetrahedron(){};
	double getArea();
	double getVolume();
};
