#include<iostream>
using namespace std;

bool prime(int x)
{
    for(int i = 2; i<x; i++)
    {
        if(x%i == 0){
            cout<<"not a prime";
        }
            return false;
    }
    cout<<" prime";
    return true;
}

int main()
{
    int num;
    cin>>num;
    cout << prime(num) << "\n";
   // cout << prime(10) << "\n";
    return 0;
}									
