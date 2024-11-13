#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[] = { 37, 47, 92, 10, 28, 85 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    k = k % n;

    cout << "Початковий масив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int* temp = new int[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - k; ++i) {
        arr[i] = arr[i + k];
    }

    for (int i = 0; i < k; ++i) {
        arr[n - k + i] = temp[i];
    }

    delete[] temp;

    cout << "Масив після циклічного зсуву: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
