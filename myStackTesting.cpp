#include "myStack.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	myStack S1, S2, S3;
	double x;
	//testing push and <<
	cout<<"Empty stack S1: "<<S1<<endl;

	for (int i=0; i<5; i++)
	{ 
		x=rand()%100+1;
		S1.push(x);
	}
	cout<<"Stack S1 after 5 random inserts: "<<S1<<endl;
    system("pause");

	//testing =, ==, 
	cout<<"\nAfter S2=S1 [testing '=='] :"<<endl;
	S2=S1;
	if (S2==S1)
		cout<<"S1 and S2 are equal"<<endl;
	else
		cout<<"Error: == is not working properly"<<endl;

	system("pause");
	S2.push(-39);	S1.pop(x);

	cout<<"\nAfter S2.push(-39); S1.pop(x);  [Testing '=' and '=='] : "<<endl<<endl;

	if (S1==S2)
		cout<<"Error: '==' or '=' is not working properly"<<endl;
	else
	{
		cout<<"Not equal :"<<endl;
		cout<<"S1 : "<<S1<<endl;
		cout<<"S2 : "<<S2<<endl;
	}
	system("pause");

	cout<<"\nEmptying S1 into S3 [Testing 'pop', 'isEmpty'] :"<<endl<<endl;
	cout<<"Before:"<<endl;
	cout<<"S1 : "<<S1<<endl;
	cout<<"S3 : "<<S3<<endl<<endl;

	while (!S1.isEmpty())
	{
		S1.pop(x);
		S3.push(x);
	}
	cout<<"After:"<<endl;
	cout<<"S1 : "<<S1<<endl;
	cout<<"S3 : "<<S3<<endl;

	system("pause");
	cout<<"\nTrying to pop from an empty stack: "<<endl<<endl;
	if  (S1.pop(x))
		cout<<"This better not print out"<<endl;
	else
		cout<<"S1 is empty, nothing to remove"<<endl;

	system("pause");
	return 0;
}
