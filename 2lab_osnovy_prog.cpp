#include <iostream>

using namespace std;

int main()
{
    double a,b,c;// �����, ����� �� ���� ����� ��������
    bool Rivnist;// ����� ��� ���������� �������� �� ������ ����� a,b,c
    cout <<"Enter first number:"; cin>>a;
    cout <<"Enter second number:"; cin>>b;
    cout <<"Enter third number:"; cin>>c;
    if(a==b){//���������� �� ������ ����� � �� b
        Rivnist=true;
    }
    else {
        if(a==c){//���������� �� ������ ����� a �� c
                Rivnist=true;
        }
        else{
            if(b==c){//���������� �� ������ ����� b �� c
                    Rivnist=true;
            }
            else{
                    Rivnist=false;
            }
        }
    }
    cout<< endl << Rivnist; //���� ����� ����� � ���� ���� �� �� ������ 1(True), ������ - 0(False)

}
