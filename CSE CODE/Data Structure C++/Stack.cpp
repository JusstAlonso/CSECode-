#include <iostream>
//#include "LinkedList.h"
#include "Stack.h"

   
   LinkedList link;
   Stack:: Stack ()
 {       
                }
    Stack :: ~Stack() 
 {           
}
   void Stack:: push(int value)
  {
    
      link.insertAtFront(value);
    

     } 
  
  int Stack:: pop()
  { 
   
 
  if ( link.removeFromFront() )
     return 1;
  else 
        return 0;

    }
   
   int Stack:: top () 
  {
      return 0;

    }




