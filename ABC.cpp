#include<iostream>
using namespace std;
int main(){


int N;
cout<<"Enter the value of row:";
cin>>N;



for(int i=0;i<N; i++){

    for(int j=0; j<=i; j++){

          char letter = j+65;
          cout<<letter<<" ";
    }
    cout<<endl;
}



    return 0;
}