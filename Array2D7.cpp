#include <iostream>
#include <vector>
#include <limits.h>

using namespace std ; 

//?? UDF For Max

int getmax(int arr[][3], int row, int col)
{
    int maxi =INT_MIN;
    for (int i = 0 ; i<row ; i++)
    {
        for(int j= 0  ;j<col ; j++)
        {
            if(arr[i][j] >maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi ;

        }

int getmin(int arr[][3], int row, int col)
{
    int mini =INT_MAX;
    for (int i = 0 ; i<row ; i++)
    {
        for(int j= 0  ;j<col ; j++)
        {
            if(arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini ;

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
   cout << getmax(arr , row  , col ) << endl;
   cout << getmin(arr , row  , col ) << endl;

   return 0 ;
}