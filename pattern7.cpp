#include<iostream>
using namespace std;
int main (){
//Line/row
for(int i=1; i<=5; i++){
    
//space
    for(int j=1; j<=5-i-1; j++){
cout<<" ";
}
//star
  for(int k=1; k<=(2*i)-1; k++){
   cout<<"*";
}
//space
     for(int j=1; j<=5-i-1; j++){
cout<<" ";
}

cout<<endl;
}

return 0;
}