/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a password prompt that gives a user only a certain number of password entry attempts—
               so that the user cannot easily write a password cracker.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int i =0;
int username1;
string password1;

while (i<3)
	{
		cout<<"Enter your username: "<<endl;
		cin >> username1;
		cout<<"Enter your Password: "<<endl;
		cin >> password1;
			if ((username1 == 1 && password1 == "rose") || (username1 == 2 && password1 == "jasmine") || (username1 == 3 && password1 =="lotus"))
			{
				cout << "welcome!! \n"; break;
			}
			else
			{i++; 
			cout << "try again \n";
			}
	}
			if(i==3)
			cout<< "Sorry...you have exceeded your trials"<<endl;
system("pause");
return 0;	
}
