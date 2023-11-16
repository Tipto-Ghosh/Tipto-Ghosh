#include<iostream>
using namespace std;
//Question type-1
//find the element of [n][r]
//we will make a function and we will take input as n and r.
int main(){

int row, col;
cout<<"Enter row and col: ";
cin>>row>>col;

//Find the factorial of row

int fact_row = 1;

for(int i=0; i<=row; i++){

    fact_row *= i;
}

cout<<"fact_row = "<<fact_row<<endl;



//Find the factoral of col

int fact_col = 1;

for(int i=0; i<=col; i++){

    fact_col *= i;
}

cout<<"fact_col = "<<fact_col<<endl;




//find the factorial if (row - col)

int fact_row_col = 1;

for(int i=0; i<=(row - col); i++){

    fact_row_col *= i;
}

cout<<"fact_row_col = "<<fact_row_col<<endl;


//ans = (fact. row)/(fact.col * fact.(roe - col))





    return 0;
}