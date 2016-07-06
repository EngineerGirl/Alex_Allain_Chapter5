/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that computes a running sum of inputs from the user, terminating when the
               user gives an input value of 0
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int no = 1;
	int sum = 0;
	while ( no != 0)
	{
		cin>>no;
		sum = sum+no;
		cout<<"Sum = "<< sum<< endl;
	}
system("pause");
return 0;	
}

