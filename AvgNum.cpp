/*

Write a program that reads an unspecified number of scores and determines how many are above or
equal to the average and how many are below the average.

Major Variables:

const int SIZE
int i
int a
int b
double numOfElements
int input
int sum
double avg

Progress limitation: N/A
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 100;

int main()
{
	int array[SIZE];
	int i = 0;
	int a = 0;
	int b = 0;
	double numOfElements = 0;
	int input = 0;
	int sum=0;
	double avg = 0;

	cout << fixed << setprecision(1);

	cout << "Enter a new score: ";
	cin >> input;


	while ((input > 0) && (i < SIZE))
	{
		numOfElements++;
		array[i] = input;
		i++;
		sum = sum + input;
		avg = (sum / numOfElements);
		cout << "Enter a new score: ";
		cin >> input;
		
	}
	for (int count = 0; count < numOfElements; count++)
	{
		if (array[count] >= avg)
		{
			a++;
		}
		else if (array[count] < avg)
		{
			b++;
		}
	}

	cout << "Average is: " << avg << endl;
	cout << "Number of scores above or equal to the average " << a << endl;
	cout << "Number of scores below the average " << b << endl;

	return 0;
}
