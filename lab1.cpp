#include <iostream>
#include <cmath>


using namespace std;

int main()
{

   double side1,side2,side3,angle;
   cout << "Enter first side:"; cin >>side1;
   cout << "Enter second side:; cin >>side2;
   cout << "Enter angle:"; cin >>angle;


   if ((side1<=0) || (side2<=0) || (angle<=0)){cout<<"Please enter correct data.\nThe sides of a triangle, the angle must be numbers >0" << endl;}
   else if (angle>=180){ cout <<"Please enter correct data.\nThe angle must be lower than 180" << endl;} else{
   angle=angle*3.1415926535/180;
   side3=sqrt(side1*side1+side2*side2-2*side1*side2*cos(angle));
   cout << "side3=" << side3<<endl;
   }
   system("pause");
}
