#include <iostream>
#include <cmath>
using namespace std;
double f(double,double);         // �������� ������� f
double g(double,double,double);  // �������� ������� g
int main()
{
   double y; // ��������� ��������� ������
   int  a,   // ���� ����� a
        b,   // ���� ����� b
        c,   // ���� ����� c
        d;   // ���� ����� d
   cout << "Enter number a: ";
   cin >> a;
   cout << "Enter number b: ";
   cin >> b;
   cout << "Enter number c: ";
   cin >> c;
   cout << "Enter number d: ";
   cin >> d;
    double num_1,
           num_2,
           num_3,
           num_4,
           num_5;
    num_1=f(a,b);
    num_2=f(c,d);
    num_3=g(a,b,c);
    num_4=f(b,c);
    num_5=f(a,c);

    y=((num_1+num_2)/sqrt(num_3))+((c-num_3+1)/(num_4-num_1))*(1+(sqrt(num_3)/(num_4-num_5))); // ���������� ������ ����� ����� ������

   cout <<"y= " << y;
}
double f(double x, double y)
    {
        return x*x-y*y;          // ҳ�� ������� f
    }
double g(double x, double y, double z)
    {
        return (x+y)/(4*z*x);    // ҳ�� ������� g
    }


