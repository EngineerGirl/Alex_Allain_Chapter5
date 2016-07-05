/*
 ==============================================================================================================================
 Name        : qs7.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that provides the option of tallying up the results of a poll with 3 possible
               values. The first input to the program is the poll question; the next three inputs are the possible
               answers. The first answer is indicated by 1, the second by 2, the third by 3. The answers are
               tallied until a 0 is entered. The program should then show the results of the poll—try making a
               bar graph that shows the results properly scaled to fit on your screen no matter how many
               results were entered.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int sum1, sum2, sum3, i1, i;
sum1 = sum2 = sum3 =0;
	do
	{
		cout<< "which pani puri do you like? Please enter your poll!! \n 1 for ragda \n 2 for boondi \n 3 for moong \n 0 to quit"<< endl;
		cin >>i1;

			if(i1==1)
			{
				sum1 ++;
			}
			if(i1==2)
			{
				sum2 ++;
			}
			if(i1==3)
			{
				sum3 ++;
			}
	}while (i1!=0);
cout << "\nragda ="<< sum1<<endl;
	for (i=0; i< sum1;i++)
	{
		cout<<"*";
	}
cout << "\nboondi ="<< sum2<<endl;
	for (i=0; i< sum2;i++)
	{
		cout<<"*";
	}
cout << "\nmoong ="<< sum3<<endl;
	for (i=0; i< sum3;i++)
	{
		cout<<"*";
	}
	cout<<endl;
system("pause");
return 0;	
}
