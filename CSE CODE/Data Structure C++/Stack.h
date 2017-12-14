#ifndef Stacks
#define Stacks
#include "LinkedList.h"
using namespace std; 




 class Stack 
  {
   public :
      Stack();   // constructor
      ~Stack(); // Destructor
      void push(int value); // instert new element
      int pop();
     int top(); 
    

   };
  #endif
