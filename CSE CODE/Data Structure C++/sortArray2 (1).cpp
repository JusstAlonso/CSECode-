#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
  int count;  // count variable will determine if array is increasing or decreasing
  int size ;    // size of the array
  int min;  // will hold minimum value found in the array
  int tmin;   // will hold the index where min value is found
  int temp;    // will temporary hold the min value

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

       	  for (int i = 0; i < size ; i++)  // for loop is used to find min value 
      {
          	  min = ary[i];
             	   tmin = i;

          for(int j = i+1; j < size; j++)
  { 
          if(ary[j] < min )        // will compare the value to determine min value
     {
         	min = ary[j];
                tmin = j;
  }

}                             // as of here the min value in the array is given

            if (tmin != i )        // This if statment will swap the values
   {
        	count ++;
         	temp  = ary[tmin];
         	ary[tmin] = ary[i];
        	 ary[i] = temp;
      }
   }
      for(int y =0 ; y <size; y++)
           cout << ary[y] << " ";
        
             cout<< "\nThe Algorithm selected the minimum for the travese of the array "<< endl;
                cout << " It took " << count << " swaps " << endl;
                
                      return 0;
}




