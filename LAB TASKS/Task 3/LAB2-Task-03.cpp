

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array " << endl;
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int average = sum / size;
    cout << "The average is " << average << endl;
}

