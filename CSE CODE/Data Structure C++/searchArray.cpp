#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;

int main()
{
  int key;
  int count = 0 ;  // count variable will determine if array is increasing or decreasing
  int size ;
  int num;
  string space;
    cout<< "Enter the  array size ";
      cin >> size;
  int ary[size];         // array of int , size of array defined by user input stored in int size
      
      if(size > 0)
 {
           cout<< "Enter valuse for array , seperated by space and press enter ";
        
    for(int x = 0; x < size ; x++)
  {
             scanf("%i", &ary[x]);  // scanf will store values in array ignoring white spaces
 }
  }
      else
  {
             cout<< "Invalid array size";
               return 0;   
    }
  
       		cout<<" Enter a number to search for in the array :" << endl;
       		   cin >> key;


        for(int y = 0; y < size ; y++)
  {         
                count++;
        if ( key == ary[y])
      {
             cout <<" Found value " << key << " at index " << y << " which took " << count  
                  << " checks";
                       break;
       } 


         if (count == size - 1 && key != ary[size -1])
     {
               cout <<" The value " << key << " was not found ";
                  return 0;
      }      

    }              
	           return 0;
}

