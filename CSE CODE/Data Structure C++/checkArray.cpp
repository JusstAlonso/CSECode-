#include <iostream>
#include <string>
#include "checkArray.h" 
using namespace std;


int checkArray :: checkArraySort (string* A, int arr_size )
{
   count = 0;
  for (int x = 0; x < arr_size; x++)
  {  
    for (int j = x + 1 ; j < arr_size; j ++ ) 
   {
    if(*(A + x) < *(A + j ) )
       
       count ++;
     if ( *(A + x ) > *(A + j ))
   
         count--;  
     }
   } 
     
       if ( count == -(arr_size * 2))
            return -1 ;
       if (count == (arr_size * 2) ) 
             return 1;       
         else 
              return 0;     
}

