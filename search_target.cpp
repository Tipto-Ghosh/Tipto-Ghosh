#include<iostream>
using namespace std;


//function for search the target element.
bool isPresent(int array[][4], int target, int row, int col){
    
    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){

            if(array[i][j]==target){

                cout<<"Element found.";
                return 1;
            }
           /* else{
                cout<<"element not found.";
                return 0;
            } */
        
    

        }
    }
    return 0;
}



int main(){

int row, col;
cout<<"Enter row and col : ";
cin>>row>>col;
int array[row][col];


//take input as element
for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        cin>>array[i][j];
    }

    
}

//print the array

for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

int row, col;
cout<<"Enter row and col: ";
cin>>row>>col;
int target;
cout<<"Enter the target element: ";
cin>>target;
int array[row][col];

isPresent(int array[row][col], int target, int row, int col);







    return 0;
}