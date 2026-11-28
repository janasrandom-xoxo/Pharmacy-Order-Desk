#include "Stack.h"
#include <iostream>
using namespace std;

void intitializeStack (Stack& s)
{
    s.top = -1;
}
void pushMedicine (Stack& s, Medicine m)
{
    if (isStackFull(s))
    {
        cout<<"Stack is full! can't add more medicines"<<"\n";
        return;
    }
    s.top++;
    s.medicines[s.top] = m;
    cout<<"Medicine added to stack successfully"<<"\n";
}
void popMedicine (Stack& s)
{
if (isStackEmpty(s))
{
    cout<<"Stack is Empty! No medicine to remove"<<"\n";
    return;
}
   cout<<"Removed Medicine:"<< s.medicines[s.top].medicineName<<"\n";
   s.top--;
}
void peekMedicine (Stack s)
{
    if (isStackEmpty(s))
    {
        cout<<"Stack is Empty! No recent medicine"<<"\n";
        return;
    }
    cout<<"Most recently dispenced medicine"<<"\n";
    cout<<"Medicine ID:"<< s.medicines[s.top].medicineID<<"\n";
    cout<<"Medicine Name:"<< s.medicines[s.top].medicineName<<"\n";
    cout<<"Medicine Price:"<< s.medicines[s.top].medicinePrice<<"\n";
    cout<<"Medicine Quantity:"<< s.medicines[s.top].medicineQuantity<<"\n";
}
void displayStack (Stack s)
{
    if (isStackEmpty(s))
    {
        cout<<"Stack is Empty! No dispensed medicines"<<"\n";
        return;
    }
    cout<<"Recently dispensed medicines:"<<"\n";
    
    for (int i =s.top; i >= 0; i--)
    {
        cout<<"Medicine ID:"<< s.medicines[i].medicineID<<"\n";
        cout<<"Medicine ID:"<< s.medicines[i].medicineID<<"\n";
        cout<<"Medicine Name:"<< s.medicines[i].medicineName<<"\n";
        cout<<"Medicine Price:"<< s.medicines[i].medicinePrice<<"\n";
        cout<<"Medicine Quantity:"<< s.medicines[i].medicineQuantity<<"\n";
    }
}
bool isStackEmpty (Stack s)
{
    return (s.top == -1);
}
bool isStackFull (Stack s)
{
    return (s.top == 99)
}
int StackSize (Stack s)
{
    return (s.top + 1)
}