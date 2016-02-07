

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#define CONST 30;
#define CONSTANT 31;

using namespace std;
int main()
{
	int a;
	int g;
	cout << " Vavedete nomer na mesec: ";
	cin >> a;
	switch (a)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:; a = CONSTANT; cout<<" " << a<<"dni\n"; break;
	case 4:case 6:case 9:case 11:; a = CONST; cout <<" "<< a<<"dni\\n"; break;
	case 2:; 
		cout<<" Enter year: ";
		cin >> g;
		if (g % 400 == 0 || g % 4 == 0 || g % 100 == 0)
		{
			cout << " 29 dni\n" ; break;
		}
		else
		{
			cout << " 28 dni\n" << g; break;
		}

	default:cout << "Greshka\n";
		break;
	}
	

	


	
	





    return 0;
}

