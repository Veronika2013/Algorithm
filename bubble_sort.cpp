#include <iostream>

using namespace std;
//Bubble sort 
int main()
{
	int arr[10] = { 11, 34, 7, 83, 44, 98, 0, -66, -1, 6 };

	for (int i = 1; i < 10; ++i)
	{
		for (int r = 0; r < 10 - i; r++)
		{
			if (arr[r] > arr[r + 1])
			{
				int temp = arr[r];
				arr[r] = arr[r + 1];
				arr[r + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
}
