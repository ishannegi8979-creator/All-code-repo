#include <stdio.h>

int add (); // DECLARATION OF FUNCTION 

 int add()// DEFINATION OF THE FUNCTION 

{ 
    int a = 10 , b = 30 ,c ;
        c=a+b;
        return c;
}

int main()
{
    int z =add(); // CALLING OF FUNCION
    printf(" The sum = %d" , z);
    return 0 ;
}
