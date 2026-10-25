#include <iostream>
#include <vector>
#include <limits.h>

using namespace std ; 

//?? UDF For searching 

bool search(int arr[][3], int row , int col , int key)
{
    for (int i = 0 ; i < row ; i++)
    {
        for (int j= 0 ;j <col ; j++)
        {
            if(arr[i][j]== key)
            return true;
        }
    }   
    return false;
}

int main ()
{
    int arr[3][3];
    int row =3;
    int col = 3;

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

    cout << endl ;

    cout << search(arr , 3 ,3 , 12);

    return 0 ;
}