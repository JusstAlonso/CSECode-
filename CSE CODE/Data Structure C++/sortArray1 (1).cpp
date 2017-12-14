
#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;

int main()
{
  int count;  // count variable will determine if array is increasing or decreasing
  int size ;
  int num;
  int max;
  int tmax;
   int temp;
   
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
      cout<< "Invalid array size";
         
       for (int i = 0; i < size ; i++)
      {
       max = ary[i];
       tmax = i;
      
      for(int j = i+1; j < size; j++)
  {
    if(ary[j] > max )
    {
      max = ary[j];
      tmax = j ;
  }
	   
}
    if (tmax != i )    // values will swap 
     {
         temp  = ary[tmax];      
         ary[tmax] = ary[i];
         ary[i] = temp;
      }
   }
      
      for(int y =0 ; y <size; y++)
           cout << ary[y] << " ";
            cout<< "The Algorithm selected the maximum for the travese of the array "<< endl;     
	      return 0;
}


