
#include <iostream>
#include <string>
#include <fstream>
#include "checkArray.h"
using namespace std;


  int  binarySearchL(string *A, int start, int end , string k)
{  
   
   int mid;
   while ( start <= end )
  {
     mid = (start + end ) / 2;
      if (*(A + mid) == k)
       {
           return mid;       
            break;        
   }
     if (k < *(A + mid ))
       {
         end = mid -1;
         }
      if(k> *(A + mid))
        start = mid +1; 


    }



}
int main ()
{
    int count;
   int begg = 0;
    int arrOrd;
    string key;
    ifstream newFile;
  newFile.open("Words.txt");
       string * point = NULL;
      point = new string [count];
        for(int x = 0; x < count ; x++)
            {
             count++;
              newFile >> *(point + x );
          cout << "point is now " << *(point + x) 
<< endl;
        }


    newFile.close();
   checkArray sort;
   arrOrd = sort.checkArraySort(point , (count-1));
     if (arrOrd == 1)
{
           cout<<"array is in descending order " 
<<endl;
     }
     else if (arrOrd == -1 )
   {
      cout << " Array is in acsending order " << 
endl;
}
      else
     {
         cout<< "Array is not sorted, Program will end now "<<endl;
          return 0;
        }

     cout << "Enter a key to search for :"<<endl;
     cin >> key;
      int val = binarySearchL(point, begg, (count-1), key );
  cout << "The value is " << val<< endl ;



}



