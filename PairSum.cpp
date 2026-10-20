#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main ()
{

      vector<int> arr{ 10  , 20 , 30 , 40 , 50 };    
      int sum = 80;
      
    // Loop that will work for each elements
    for (int i = 0 ;  i <arr.size() ; i++ )
    {
        int element = arr[i];
    
    //The loop that work for every element and  will move to one element ahead
    for(int  j = i+1  ; j <arr.size() ; j++)
    {
        //Printing the sum and finding the pair 
       if(element + arr[j] == sum)
       {
         cout <<"Pair found " << "(" <<   element << "," << arr[j] << ")" << endl ;
       }
    
    }
    }   
}
