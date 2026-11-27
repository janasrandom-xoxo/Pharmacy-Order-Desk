#pragma once
#include "Medicine.h"

struct Stack
{
Medicine medicines[100];
int top;
};
   void initializeStack (Stack& s);
   void pushMedicine (Stack& s, Medicine m);
   void popMedicine (Stack& s);
   void peekMedicine (Stack s);
   void displayMedicine (Stack s);
   bool isStackEmpty (Stack s);
   bool isStackFull (Stack s);

   int StackSize (Stack s);