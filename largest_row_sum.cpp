#include<iostream>
using namespace std;

int main(){


int row, col;
cout<<"Enter row and col : ";
cin>>row>>col;


int array[row][col];

for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        cin>>array[i][j];
    }
}



for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}
//int sum=0;
 int largest=0;
 int index=0;
for(int i=0; i<row; i++){

   int sum=0;
    for(int j=0; j<col; j++){
        
        sum +=array[i][j];
    }
    cout<<"Sum of all the element of row "<<i<<" is: "<<sum<<endl;

    //int largest ;

    if(sum>largest){

        largest=sum;
        index=i;
    }
   
   //cout<<"largest: "<<largest;
    
}
//cout<<largest;
cout<<"largest: "<<largest<<endl;
cout<<"Largest sum contain in row no: "<<index;

    return 0;
}