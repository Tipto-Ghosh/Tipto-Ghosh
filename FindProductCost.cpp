/*5. A mail order house sells five different products whose retail prices are: product 1 — BDT
200.75, product 2—345.50, product 3— BDT 775.75, product 4— BDT 400.35 and product 5—
BDT
1200.75. Write a program that reads a series of pairs of numbers as follows:
a. product number. (Hint: 1, 2, 3.. etc. are product number)
b. quantity sold.
Your program should calculate and display the total retail value of products sold.*/

#include<iostream>
using namespace std;

int main(){

float product[5]={200.75,345.50,775.75,400.35,1200.75};

int total_amount = 0;

for(int i=0; i<5; i++){
    int num;
    cout<<"Product "<<i+1<<" total sell:";
    cin>>num;
    product[i]=product[i]*num;

    total_amount += product[i];
}

cout<<"Total retail value of sold product is:"<<total_amount;



    return 0;
}