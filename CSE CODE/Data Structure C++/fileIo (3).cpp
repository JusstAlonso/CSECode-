#include <iostream>
#include <fstream>
#include <string>
#include "checkArray.h"
using namespace std;
 int main ()
 {
    string line , line1;
    int count;
    ifstream newFile ("Words.txt");
      newFile >> line;  
      
  if(newFile.is_open())
   {
     while (!newFile.eof())
     {
         count ++;
       cout<< line << '\n';
        newFile >> line;
       }
       newFile.close();   
     } 
        newFile.open("Words.txt"); 
       string * point = NULL;   
      point = new string [count];
        for(int x = 0; x < count ; x++)
           {
              newFile >> *(point + x );             
          cout << "point is now " << *(point + x) << endl;
        }

     ofstream  myfile ("Words_out.txt");
      if (myfile.is_open())
   {
         for(int i = 0; i < count; i++)
      {
         myfile << *(point + i) << '\n';
        
        }

    myfile.close();
    }
     int tesVal ;
     checkArray P1;
      tesVal = P1.checkArraySort(point , count );
              cout<< "Test valuse is " << tesVal << endl;
        if (tesVal == 1 )
           cout << " The array is in ascending order " ;
        else if (tesVal == -1 ) 
           cout << " The array is in descending order " ;
         else 
           cout << "The array is not sorted!" ;

              return 0;
  }
