//За заданими двома сторонами трикутника і куту( в градусах) між ними знайти довжину третьої сторони цього трикутника.
#include <iostream>
#define _USE_MATH_DEFINES             //Для використання значення числа ПІ
#include <cmath>


using namespace std;

int main()
{

double side1,side2,side3,angle;      // Вводимо змінні для позначення першої, другої, третьої сторін відповідно, та кута між двома першими
cout << "Enter first side(number must be >0 ):"; cin >>side1;
cout << "Enter second side(number must be >0 ):"; cin >>side2;
cout << "Enter angle(number must 0<angle<180 ):"; cin >>angle;

angle=angle*M_PI/180;                                                //Переведення кута з градусів у радіани
side3=sqrt(side1*side1+side2*side2-2*side1*side2*cos(angle));        //Обчислення довжини третьої сторони за теоремою косинусів
cout << "Third side = " << side3<<endl;
system("pause");
}
