// ===  ������.  ������ ��������� ����� m �� n. �� ��������� �������   ===
// ===  �� ��������� �����,�� ����� �� m, ���� ���� ���� ������� n.  ===

#include <iostream>

using namespace std;

int main()
{
    int m,                    // ���� �����, �� ������ ��������� (1,m)
        n;                    // ���� ����� �����, �� ���� �� ������ ������ �����-����������
    cout<<"Enter number m: ";
    cin>> m;
    cout<<"Enter number n: ";
    cin>> n;

    if((m>0)and(n>0))
    {
      for(int i=1; i<m;i++)
      {
        int new_i=i;          // ����� ��� ������� �������� i ��� ���� ������
        int num_i=0;          // ���� ���� ����� i
        while(new_i>0)        // ���������� ���� ���� ����� �
        {
            num_i=num_i+new_i % 10;
            new_i=new_i/10;
        }
        if(num_i==n)          // �������� ����� ������ ���� ����� ����� �� n
        {
            cout<< i<<" ";
        }
      }
    }
    else { cout<<"Wrong data, please enter numbers >0"; }

}
