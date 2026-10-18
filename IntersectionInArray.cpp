#include <iostream>
#include <limits.h>
#include <vector>

using namespace std ; 

int main ()
{
    // initialization of dynamic arrays
    vector <int> arr{ 1 ,2 , 3, 4, 5 , 6};
    vector <int> brr{ 3 , 4 , 9 };

    vector <int> ans;
    // outer loop on a
    for (int i =  0 ; i< arr.size() ; i++)
    {
        int element = arr[i];
    // loop for every element of the b 
    for (int j = 0 ; j <brr.size() ; j++)
    {
        if(element == brr[j])
        {
            ans.push_back(element);
        }
    }
}
    //printing the intersection point on both array 
    for (auto value: ans)
    {
        cout << value << " " ; 
    }
    cout << endl ;
}
    
