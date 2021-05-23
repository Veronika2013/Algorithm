#include <iostream>
using namespace std;
void sort() {

    int arr[10] = { 97, 20, 38, 0, 28, 71, 940, -383, 2940, 2946 };
    int key = 0;
    int i = 0;
    for (int j = 1; j < 10; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}
int main()
{
    sort();
}
