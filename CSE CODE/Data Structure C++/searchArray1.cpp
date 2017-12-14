#include <iostream>
#include <string>
#include <fstream>
#include "checkArray.h"
using namespace std;


  int  binarySearchR(string *A, int start, int last, string k)
 {
    if(start == last)
   {      
      if (k == *A)
     { cout<<" Element is found at index 0"<< endl;
            return 0;  
        } 
   else
     {
        cout<<"Data not found"<<endl;
       return -1;
 }
    } else {

   int mid =(last + start) /2 ;
   if (k == *(A + mid))
  {
       cout<<"Element is found at index " << mid<< endl;
         return mid;
      }
   else if (*(A + mid) > k)
   
       binarySearchR(A, start,(mid -1),k );

   else if (*(A + mid )< k)
    binarySearchR(A, (mid+1),last,k );
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
          cout << "point is now " << *(point + x) << endl;
        }


    newFile.close();
   checkArray sort;
   arrOrd = sort.checkArraySort(point , count);
     if (arrOrd == 1)  
{
           cout<<"array is in descending order " <<endl;
     }
     else if (arrOrd == -1 )
   {
      cout << " Array is in acsending order " << endl;
}
      else 
     {
         cout<< "Array is not sorted, Program will end now ";
          return 0;
        }

     cout << "Enter a key to search for :"<<endl;
     cin >> key;
      int val = binarySearchR(point, begg, (count), key );
  cout << "The value is " << val<< endl ;



}


