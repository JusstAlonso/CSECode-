#ifndef Stacks
#define Stacks
#include "LinkedList_char.h"
using namespace std;




 class Stack
  {
   public :
      Stack();   // constructor
      ~Stack(); // Destructor
      void push(char value); // instert new element
      char pop();
     char top();


   };
  #endif


