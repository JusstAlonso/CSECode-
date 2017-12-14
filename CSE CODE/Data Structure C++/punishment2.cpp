#include <iostream>
#include <string>
using namespace std;
  int main()
 {
   string pun = " I will always use object oriented programming.";
   string typo = " I will always use objct orient programing";
    int num; // This will store the amount of time the string has to be written.
     int mis;
      cout << " Enter number of lines for punishment " ;
       cin >> num;
         cout<<"Enter line with typo";
          cin >> mis ;

        if(num > 0 )
  {
         for (int x = 0; x< num; x++ ){
          if (x != mis )
             cout<< pun;
           else if (x== mis-1)
             cout << typo ;

             else if (mis > 0) 
               cout<< "Invalid typo line";          
          }

     }


          else

             cout<< "Invalid value entered " ;


                return 0;





    }

