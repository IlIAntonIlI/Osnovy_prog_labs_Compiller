#include <iostream>

using namespace std;

int main()
{
    double a,b,c;// Перше, друге та третє числа відповідно
    bool Rivnist;// Змінна для результату перевірки на рівність чисел a,b,c
    cout <<"Enter first number:"; cin>>a;
    cout <<"Enter second number:"; cin>>b;
    cout <<"Enter third number:"; cin>>c;
    if(a==b){//Перевіряємо на рівність числа а та b
        Rivnist=true;
    }
    else {
        if(a==c){//Перевіряємо на рівність числа a та c
                Rivnist=true;
        }
        else{
            if(b==c){//Перевіряємо на рівність числа b та c
                    Rivnist=true;
            }
            else{
                    Rivnist=false;
            }
        }
    }
    cout<< endl << Rivnist; //Якщо серед чисел є пара ріних між то виведе 1(True), інакше - 0(False)

}
