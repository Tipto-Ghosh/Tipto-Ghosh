#include<iostream>
using namespace std;

int main(){
    
int n;
cin>>n;

int tri=0;

for(int i=0; i<=n; i++){

    tri += i;
}


cout<<"triangular number = "<<tri;






    return 0;
}