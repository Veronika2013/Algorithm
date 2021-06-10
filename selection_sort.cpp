

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void selectionSort()
{
    int arr [10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 1000;
    }

    int j = 0;
    int tmp = 0;
    for (int i = 0; i < 10; i++) {
        j = i;
        for (int k = i; k < 10; k++) {
            if (arr[j] > arr[k]) {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
	setlocale(LC_ALL, "rus");
    
    selectionSort();
	return 0;
    }
