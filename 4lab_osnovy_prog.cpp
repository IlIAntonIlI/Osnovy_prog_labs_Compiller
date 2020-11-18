// ===  Нехай х0=с;     x1=d;      xk=q*xk-1+r*xk-2+b;   k=2,3…          ===
// ===  Дано дійсні числа q, r, b, c, d, натуральне n>=2. Отримати xn.   ===

#include <iostream>

using namespace std;
int main()
{
    double first_num,           // Значення першого x
    second_num,                 // Значення другого x
    coef_q,                     // Значення коефіцієнта q у формулі
    coef_r,                     // Значення коефіцієнта r у формулі
    num_b,                      // Значення числа b у формулі
    x0,                         // Значення числа x позапопереднього даному
    x1,                         // Значення числа x попереднього даному
    x_k;                        // Значення числа х з номером k
    int num_it;                 // Номер шуканого х


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
        x_k=coef_q*x1+coef_r*x0+num_b; // Знаходження х під номером k
        x0=x1;                         // Збереження значення попереднього х
        x1=x_k;                        // Збереження значення х з номером k
    }
    cout<<endl<<endl<< "Number you are looking for: "<<x_k;
        }
    else cout << "Number of x must be >=2";

}
