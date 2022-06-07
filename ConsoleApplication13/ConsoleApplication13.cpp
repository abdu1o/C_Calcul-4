#include <iostream>
#include <stdlib.h>
using namespace std;

//(1)---------------------------------
//int main()
//{
//	int num;
//
//	cout << "Enter number: ";
//	cin >> num;
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (num % i == 0)
//		{
//			cout << i << "\n";
//		}
//	}
//
//}
//------------------------------------


//(2)---------------------------------
//int main()
//{
//	int num;
//	
//	cout << "Enter number: ";
//	cin >> num;
//
//	for (int i = 2; i <= num; i++)
//	{
//		if (num % i == 0) 
//		{
//			if (num != i) 
//			{
//				cout << "Not simple \n";
//				break;
//			}
//			cout << "Simple\n";
//			break;
//		}
//	}
//}
//------------------------------------


//(3)---------------------------------
//int main()
//{
//	int num;
//
//	cout << "Enter number: ";
//	cin >> num;
//
//	while (num >= 10)
//	{
//		int a = num % 10;
//		int b = num % 100 / 10;
//
//		if (a == b)
//		{
//			cout << "Similar numbers go in a raw";
//			break;
//		}
//		num /= 10;
//	}
//}
//------------------------------------


//(4)---------------------------------
//int main()
//{
//	int num;
//
//	cout << "Enter number: ";
//	cin >> num;
//
//	while (num >= 0)
//	{
//		int a = num % 10;
//		int b = num % 100 / 10;
//
//		if (a < b)
//		{
//			cout << "Numbers are not in non-decreasing order";
//			break;
//		}
//		num /= 10;
//	}
//}
//------------------------------------


//(5)---------------------------------
int main()
{
	char choice;

	cout << "Guess number from 0 - 1000 \n";
	cout << "U ready? [y / n] \n";
	cin >> choice;

	if (choice == 'y')
	{
		int min = 0;
		int max = 1000;
		int mid;
		string choise;

		while (max > min)
		{
			mid = min + (max - min) / 2;

			cout << "Number more than " << mid << " or == " << mid << "? \n [y / n / ==] \n";
			cin >> choise;

			if (choise == "y")
			{
				min = mid + 1;
			}
			else if (choise == "n")
			{
				max = mid;
			}
			else if (choise == "==")
			{
				cout << "Ur number " << (min + (max - min) / 2) - min + min << endl;
				break;
			}
		}
		
	}
	else if (choice == 'n')
	{
		exit(1);
	}
}
//------------------------------------