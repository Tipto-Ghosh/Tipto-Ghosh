 //Given two numbers a and b,write a program to ptint all the prime numbers between a and b.
 #include<iostream>
 using namespace std;

//Concept: run a for loop from 2 to n+1

 //creating the function

int primeAtoB(int a, int b){

   for(int i=a+1; i<b; i++){
       
       bool ans = true;
       for(int j=2; j<=i/2; j++){
          if(i%j==0){
            ans = false;
            break;
          }
       }
       if(ans==true){
        cout<<i<<" ";
       }
   }
   return 0;
}









int main(){

primeAtoB(0,100);

    return 0;
}