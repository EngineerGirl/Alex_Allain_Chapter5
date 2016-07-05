/*
 ==============================================================================================================================
 Name        : qs6.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a menu program that lets the user select from a list of options, and if the input is not one
               of the options, reprint the list
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

	int main()
{
	while(1)
	{
		int no;
	cout<< "\nPlease enter 1,2 or 3 \n"<< endl;

		cin >> no;
		if (no == 1 || no == 2 || no==3)
		{
			if (no==1)
			{
				cout<<"Choice entered 1 \n";
			}
			if (no==2)
			{
				cout<<"Choice entered  2 \n";
			}
			if (no==3)
			{
				cout<<"Choice entered  3 \n";
			}
		}
			else cout<< " WRONG CHOICE! Try again \n" << endl;
	}

system("pause");
return 0;	
}
