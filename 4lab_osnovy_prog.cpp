// ===  ����� �0=�;     x1=d;      xk=q*xk-1+r*xk-2+b;   k=2,3�          ===
// ===  ���� ���� ����� q, r, b, c, d, ���������� n>=2. �������� xn.   ===

#include <iostream>

using namespace std;
int main()
{
    double first_num,           // �������� ������� x
    second_num,                 // �������� ������� x
    coef_q,                     // �������� ����������� q � ������
    coef_r,                     // �������� ����������� r � ������
    num_b,                      // �������� ����� b � ������
    x0,                         // �������� ����� x ���������������� ������
    x1,                         // �������� ����� x ������������ ������
    x_k;                        // �������� ����� � � ������� k
    int num_it;                 // ����� �������� �


    cout<<"Enter first number: " ; cin>>first_num;
    cout<<"Enter second number: " ; cin>>second_num;
    cout<<"Enter coefficient q: " ; cin>>coef_q;
    cout<<"Enter coefficient r: " ; cin>>coef_r;
    cout<<"Enter number b: " ; cin>>num_b;
    cout<<"Enter the number of x you are looking for: " ; cin>>num_it;

   if (num_it>=2){
    x0=first_num;
    x1=second_num;


    for(int k=0; k<num_it;k++){
        x_k=coef_q*x1+coef_r*x0+num_b; // ����������� � �� ������� k
        x0=x1;                         // ���������� �������� ������������ �
        x1=x_k;                        // ���������� �������� � � ������� k
    }
    cout<<endl<<endl<< "Number you are looking for: "<<x_k;
        }
    else cout << "Number of x must be >=2";

}
