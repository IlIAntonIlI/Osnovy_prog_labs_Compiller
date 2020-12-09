#include <iostream>
#include <ctime>
using namespace std;

void input_Mass(int [], int);                       // Функція для заповнення масиву випадковими цілими числами
int search_max(int[],int[],int);                    // Пошук максимального елемента серед вибраних двох масивів
int Greatest_CD(int, int);                          // Пошук НСД
void input_Mass_C(int[], int[], int[], int, int);   // Створення масиву C
int main()
{

    int num_el;                                     // Кількість елементів першого, другого та третього масивів
    cout<<"Enter the number of elements in the arrays A and B: ";
    cin>> num_el;
    if (num_el>0)
    {
        int A[num_el],                              // Масив цілочисельних елементів А
            B[num_el],                              // Масив цілочисельних елементів B
            C[num_el];                              // Масив цілочисельних елементів C

        int max_el;

        srand(time(NULL));
        cout<<"Array A:";
        input_Mass(A,num_el);
        cout<<"Array B:";
        input_Mass(B,num_el);
        max_el=search_max(A,B,num_el);
        cout<<"Array C:";
        input_Mass_C(A,B,C,num_el,max_el);
    }
    else cout<<"The number of elements must be numbers >0.";

}

void input_Mass(int Mass[], int num_el)
{

    for (int i=0; i<num_el; i++)
    {

        Mass[i]=rand()%10+1;
        printf("%4.d",Mass[i]);
    }
    cout<< endl;
}

int search_max(int Mass1[], int Mass2[], int num_el)
{
    int max_el=Mass1[0];
    for (int i=0; i<num_el; i++)
    {
        if (max_el<=Mass1[i]) {max_el=Mass1[i];}
        if (max_el<=Mass2[i]) {max_el=Mass2[i];}
    }
    cout<<"Max_element: "<<max_el<<endl;
    return max_el;
}

int Greatest_CD(int num1, int num2)
{
    int result;
    while ((num1!=0) and (num2!=0))
    {
        if (num1>num2)
        {
            num1=num1 % num2;
        }
        else
            num2=num2 % num1;

    }
    result=num1+num2;
    return result;

}

void input_Mass_C(int Mass1[], int Mass2[], int Mass3[], int num_el, int max_el)
{
  for (int i=0; i<num_el; i++)
    {
       int divisor;
       divisor=Greatest_CD(Mass1[i],Mass2[i]);
       Mass3[i]=divisor*max_el;
       printf("%4.d",Mass3[i]);
    }
    cout<< endl;
}

