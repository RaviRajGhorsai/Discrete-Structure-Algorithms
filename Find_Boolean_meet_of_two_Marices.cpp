#include<iostream>
using namespace std;
int main()
{
int rows=3,cols=4;

bool A[rows][cols] = {{true,false,true,true},
                      {false,true,false,false},
                      {false,true,true,true}};
bool B[rows][cols] = {{false,true,false,false},
                      {false,false,true,false},
                      {true,false,false,true}};

cout<<"The Boolean meet of two matrices are: "<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        bool result = A[i][j] && B[i][j];
        cout<<result<<" ";
    }
    cout<<endl;
}

return 0;
}