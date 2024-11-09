

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    string* arr = new string[size];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;;
    }

}

