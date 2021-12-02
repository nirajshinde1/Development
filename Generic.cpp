#include<iostream>
using namespace std;

// Specific function :
void Swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
// Generic Function :
template<class T>
void SwapX(T *p, T *q)
{
    T temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    char x = 'A', y = 'B';

    int i = 11, j = 21;
    cout<<"Swapping by using Specific Function:\n";
    SwapX(&x,&y);
    cout<<"Value of X becomes :"<<x<<"\n";
    cout<<"Value of Y becomes :"<<y<<"\n";
    cout<<"--------------------------------------------\n";
    cout<<"Swapping by using Generic Function:\n";
    SwapX(&i,&j);
    cout<<"Value of i becomes :"<<i<<"\n";
    cout<<"Value of j becomes :"<<j<<"\n";    

    return 0;
}
