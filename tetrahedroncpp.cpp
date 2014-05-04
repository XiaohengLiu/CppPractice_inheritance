#include "tetrahedronheader.h"
#include <cmath>

double tetrahedron::getArea()
{
   
    return sqrt(3)*length*length;
}

double tetrahedron::getVolume()
{

    return (sqrt(2)*length*length*length)/12;
}