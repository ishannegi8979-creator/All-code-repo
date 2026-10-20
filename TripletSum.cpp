# include <iostream>
# include <limits.h>
# include <vector>

using namespace std ;

int main ()
{

    vector<int>arr{ 10 , 20 , 30 , 40};

    int sum  =80;

    for(int i = 0 ; i< arr.size() ; i++ )
    {
        int elment1 = arr [i] ; 
    
        for (int j = j+1 ; j <arr.size() ; j++)
    {

         int element2 = arr[j];

        for(int k = 0 ; k <j+1 ; k++)
        {
            int element3 = arr[k];

            if(elment1 + element2 + element3 == sum)
            {
                cout << elment1 << ","<< element2 <<"," << element3 << endl ;
            }
        }
    }
}
}