#include <iostream>
#include "LinkedList_char.h"
#include "Stack_char.h"


   LinkedList link;
   Stack:: Stack ()
 {
                }
    Stack :: ~Stack()
 {
}
   void Stack:: push(char value)
  {

      link.insertAtFront(value);


     }

  char Stack:: pop()
  {


  if ( link.removeFromFront() )
     return 1;
  else
        return 0;

    }

   char Stack:: top ()
  {
      return 0;

    }

