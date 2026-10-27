#include <iostream>
#include <vector>
#include <limits.h>

using namespace std ; 

//?? UDF For Max

void transpose(int arr[][3], int row ,int col , int  transposeArr[][3])
{
    
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<col ; j++)
        {
            // swap(arr[i][j] , arr[j][i]);
            transposeArr[j][i]= arr[i][j];
        }
    }
}

void printArray(int arr[][3], int row ,int col)
{
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<col ; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout <<endl;    
    }
}
// 2D array making 
int main ()
{
    int arr[3][3];
    int row =3;
    int col = 3;

    cout << " Enter the digits " << endl ;
    for (int i = 0 ; i< row ; i++)
    {
        for(int j = 0 ; j <col ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout << endl;

    cout << " Printing " << endl;

    for (int i = 0 ; i< row ; i++)
    {
        for(int j = 0 ; j <col ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    
    }
    cout << endl;
    
    cout << "Array" << endl;

    printArray(arr , row ,col);

    cout << "transpose" << endl;

    int transposeArr[3][3];

        transpose(arr , row , col , transposeArr);

    cout << "Transposed one " << endl;

        printArray(transposeArr , row ,col);

   return 0 ;
}