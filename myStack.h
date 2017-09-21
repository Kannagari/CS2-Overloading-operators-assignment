#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>

using namespace std;

/*A stack is a data structure which consits of a list (array)
where elements are added and removed from one end of the list only (called the top of the list).  
This means that the last element added will be the first one removed.  This is known as LIFO (Last In First Out).
Example: If the stack content is {12, 134, 45, 78}.  
The operation to add 42,  called "push(42)" will result in : {12,134,45,78, 42}
Then operation to remove an element,  called "pop()" will result in : {12,134,45,78}.  If we run pop() again : The operation to add 42,  called "push(42)" will result in : {12,134,45}
*/

class myStack
{
	friend ostream& operator<<(ostream&, const myStack&);
	//overloading the stream insertion operator.  E.g., if S is a stack with content {12, 134, 45, 78} 
	//cout<<S  should print out {12, 134, 45, 78}.  If S is empty, cout<<S should print {}.

	friend bool operator==(const myStack&, const myStack&);
	//overloading the equality operator ==.  
	//For two stacks S1 and S2,  S1==S2 returns true if S1 and S2 have the same elements in the stack.

public:
	myStack(int=1000);
	/* Default constructor.  Sets the maxStackSize to the parameter value passed.  
	   Allocates memory for data for maxStackSize elements.  Sets top=-1. */
	bool push(double x);
	/*Inserts an element to the top of the stack if the stack is not already full. Update top (top++).
	  Returns true if it is succesful.  Otherwise it returns false. */
	bool pop(double& dataout);
	/*Removes an element from the top of the stack if the stack is not empty.  This element is assigned to dataout. Update top (top--)  
	Returns true if the operation is succesful*/

	bool isEmpty(); //return true if the stack is empty -- i.e., no elements in the stack.

	~myStack();  //Destructor.  

	const myStack& operator=(const myStack&);
	//overload the assignment operator

protected:
	int maxStackSize;     // the maximum capacity of the stack
	int top;         // the index of the top element in the stack
	double *data;    // the data in the stack
};





#endif