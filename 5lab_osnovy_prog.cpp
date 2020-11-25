// ===  Задача.  Ввести натуральні числа m та n. Як результат вивести   ===
// ===  усі натуральні числа,що менші за m, сума цифр яких дорівнює n.  ===

#include <iostream>

using namespace std;

int main()
{
    int m,                    // Межа чисел, які будемо перевіряти (1,m)
        n;                    // Сума цифер числа, за якою ми будемо шукати числа-результати
    cout<<"Enter number m: ";
    cin>> m;
    cout<<"Enter number n: ";
    cin>> n;

    if((m>0)and(n>0))
    {
      for(int i=1; i<m;i++)
      {
        int new_i=i;          // Змінна для обробки значення i без його втрати
        int num_i=0;          // Сума цифр числа i
        while(new_i>0)        // Знаходженя суми цифр числа і
        {
            num_i=num_i+new_i % 10;
            new_i=new_i/10;
        }
        if(num_i==n)          // Перевірка умови рівності суми цифер числа та n
        {
            cout<< i<<" ";
        }
      }
    }
    else { cout<<"Wrong data, please enter numbers >0"; }

}

