#include <iostream>
#include "circleheader.h"
#include "triangleheader.h"
#include "sphereheader.h"
#include "tetrahedronheader.h"

using namespace std;

int main()
{
	int choice =-1;
	while(choice!=0)
	{
		cout<<"Please choose a shape or 0 to exit:"<<endl;
		cout<<"1.Circle"<<endl;
		cout<<"2.Triangle"<<endl;
		cout<<"3.Sphere"<<endl;
		cout<<"4.Regular Tetrahedron"<<endl;
		cout<<"0.Exit!"<<endl;
		cin>>choice;
		circle circle1;
		triangle triangle1;
		sphere sphere1;
		tetrahedron tetrahedron1;
		switch(choice)
		{
		case 1:
			
			cout<<"You have choosen the circle."<<endl;
			cout<<"Please enter the center of the circle:"<<endl;
			cin>>circle1.x;
			cin>>circle1.y;
			cout<<"Please enter the radius of the circle:"<<endl;
			cin>>circle1.radius;
			cout<<"The circle with radius "<<circle1.radius
				<<" and location ("<<circle1.x<<","
				<<circle1.y<<") has an area of "
				<<circle1.getArea()<<endl;
			break;
		case 2:
			
			cout<<"You have choosen the triangle."<<endl;
			cout<<"Please enter the center of the triangle:"<<endl;
			cin>>triangle1.x;
			cin>>triangle1.y;
			cout<<"Please enter the edge of the triangle:"<<endl;
			cin>>triangle1.edge;
			cout<<"area is "
				<<triangle1.getArea()<<endl;
			break;
		case 3:
			
			cout<<"You have choosen the sphere."<<endl;
			cout<<"Please enter the radius of the sphere:"<<endl;
			cin>>sphere1.radius;
			cout<<"Please enter the center of the sphere:"<<endl;
			cin>>sphere1.x
				>>sphere1.y
				>>sphere1.z;
			cout<<"The sphere with radius "<<sphere1.radius
				<<" at location ("<<sphere1.x<<","
				<<sphere1.y<<","
				<<sphere1.z<<") has "<<endl;
			cout<<"surface area is: "
				<<sphere1.getArea()<<endl;
			cout<<"volume is: "<<sphere1.getVolume()<<endl;
			break;
		case 4:
			
			cout<<"You have choosen the regular tetrahedron."<<endl;
			cout<<"Please enter the edge length of the regular tetrahedron:"<<endl;
			cin>>tetrahedron1.length;
			cout<<"Please enter the center of the regular tetrahedron:"<<endl;
			cin>>tetrahedron1.x
				>>tetrahedron1.y
				>>tetrahedron1.z;
			cout<<"The regular tetrahedron with edge length "<<tetrahedron1.length
				<<" at location ("<<tetrahedron1.x<<","
				<<tetrahedron1.y<<","
				<<tetrahedron1.z<<") has "<<endl;
			cout<<"surface area is: "
				<<tetrahedron1.getArea()<<endl;
			cout<<"volume is: "<<tetrahedron1.getVolume()<<endl;
			break;
		}
		cout<<endl;
	}
	return 0;
}