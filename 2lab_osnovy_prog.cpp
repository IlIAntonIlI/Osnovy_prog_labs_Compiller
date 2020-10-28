#include <iostream>

using namespace std;

int main()
{
    double a,b,c;// ѕерше, друге та третЇ числа в≥дпов≥дно
    bool Rivnist;// «м≥нна дл€ результату перев≥рки на р≥вн≥сть чисел a,b,c
    cout <<"Enter first number:"; cin>>a;
    cout <<"Enter second number:"; cin>>b;
    cout <<"Enter third number:"; cin>>c;
    if(a==b){//ѕерев≥р€Їмо на р≥вн≥сть числа а та b
        Rivnist=true;
    }
    else {
        if(a==c){//ѕерев≥р€Їмо на р≥вн≥сть числа a та c
                Rivnist=true;
        }
        else{
            if(b==c){//ѕерев≥р€Їмо на р≥вн≥сть числа b та c
                    Rivnist=true;
            }
            else{
                    Rivnist=false;
            }
        }
    }
    cout<< endl << Rivnist; //якщо серед чисел Ї пара р≥них м≥ж то виведе 1(True), ≥накше - 0(False)

}
