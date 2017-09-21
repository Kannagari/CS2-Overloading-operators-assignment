#include "myStack.h"
#include <iostream>


using namespace std;


myStack::myStack(int maxSize)
{

	top = -1;
	data = new double[maxSize]; //Allocate space for a double array of size maxSize




}
bool myStack::push(double x)
{
	if (top != maxStackSize) //If Stack is not full
	{
		if (top == -1) // If stack is empty
		{
			data[0] = x;
			top = 0;
		}
		else
		{

			data[top] = x;


		}
		top++;
		return true;
	}


	return false;

}


bool myStack::pop(double& dataout)
{
	if (top==-1) // If stack is empty return flase
		return false;

	else
	{
		if (top >= 0) //Pop data from top of stack
		{
			dataout = data[top];
			top--;

		}
		return true;
	}

}
bool myStack::isEmpty()
{
	if (top == -1)
		return true;

	else
		return false;
}


myStack::~myStack() // Destructor; eliminates all the allocated memory
{
	delete[] data;
}

ostream& operator<<(ostream& oS, const myStack& S) { //Overloading stream operator
	if (S.top == -1) {
		oS << "{}" << endl;
	}

	else {
		
		oS << "{";

		for (int i = 0; i < S.top; i++) //Allowing the stream to read out our stack values
		{
			oS << S.data[i] << ",";
		}

		oS << "}" << endl;
	}
	return oS;
}

bool operator==(const myStack& S1, const myStack& S2) { //Overloading Equality operator

	
	if (S1.top != S2.top) //If the two stacks.top arent equal, return false
		return false;
	else
	{
		for (int i = 0; i < S1.top; i++) // Compare all the values in stack 1 and 2, returning false if any are not equal
		{
			if (S1.data[i] != S2.data[i])
			{
				return false;
			}
		}
		return true;
	}
}

const myStack& myStack::operator=(const myStack& otherS) // Overloading assignment operator
{
	if (this != &otherS) {
		top = otherS.top;
		maxStackSize = otherS.maxStackSize;

		for (int i = 0; i <= otherS.top; i++) //For all values in otherS, set the value of data[i] to the value of otherS.data
		{
			data[i] = otherS.data[i];
		}
	}

	return *this;
}