//�� �������� ����� ��������� ���������� � ����( � ��������) �� ���� ������ ������� ������ ������� ����� ����������.
#include <iostream>
#define _USE_MATH_DEFINES             //��� ������������ �������� ����� ϲ
#include <cmath>


using namespace std;

int main()
{

double side1,side2,side3,angle;      // ������� ���� ��� ���������� �����, �����, ������ ����� ��������, �� ���� �� ����� �������
cout << "Enter first side(number must be >0 ):"; cin >>side1;
cout << "Enter second side(number must be >0 ):"; cin >>side2;
cout << "Enter angle(number must 0<angle<180 ):"; cin >>angle;

angle=angle*M_PI/180;                                                //����������� ���� � ������� � ������
side3=sqrt(side1*side1+side2*side2-2*side1*side2*cos(angle));        //���������� ������� ������ ������� �� �������� ��������
cout << "Third side = " << side3<<endl;
system("pause");
}
