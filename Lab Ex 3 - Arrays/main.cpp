
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[ ] Once the user is finished entering numbers:
			[ ] Display the five numbers in reverse order.
			[ ] Display the highest number entered.
			[ ] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int min = 0;
	int max = 0;

	int count;
	cout << "enter amount of numbers: ";
	cin >> count;
	int *nums = new int[count];
	
	for (int i = 0; i < count; i++)
	{
		cout << "enter a number: ";
		cin >> nums[i];
	}

	min = nums[0];
	max = nums[0];

	for (int i = count - 1; i >= 0; i--)
	{
		cout << nums[i] << " ";
		
		if (nums[i] < min) {
			min = nums[i];
		}
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	cout << endl;
	cout << "min is " << min << endl;
	cout << "max is " << max << endl;

	_getch();
	return 0;
}
