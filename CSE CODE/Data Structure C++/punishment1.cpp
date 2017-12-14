#include <iostream>
#include <string>
using namespace std;
  int main()
 {
   string pun = " I will always use object oriented programming.";
    int num; // This will store the amount of time the string has to be written.
   
      cout << " Enter number of lines for punishment " ; 
       cin >> num;

        if(num > 0 ) 
           for (int x = 0; x< num; x++ )
  
             cout<< pun;
          else 
            
             cout<< "Invalid value entered " ;


		return 0;   


      


    }
