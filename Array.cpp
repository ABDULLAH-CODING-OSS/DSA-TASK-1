#include "Array.h"
#include<iostream>
using namespace std;

Array::Array()
{
     size = 0;
     capacity = 10;
    arr = new int[capacity];
}
Array::Array(int* newArr, int newSize, int newCapacity) {
    arr = newArr;
    size = newSize;
    capacity = newCapacity;



}

void Array::insertAtTail(int val) {
    if (size < capacity) {
        arr[size] = val;
        size++;
        cout << "Element inserted at Tail" << endl;
    }
    else {
        cout << "Array is Fulled " << endl;
    }

}
void Array::insertAtHead(int val) {
    if (size < capacity) {
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];

        }
        arr[0] = val;
        size++;
        cout << "Element Inserted at Head" << endl;

    }
    else {
        cout << "Array is Fulled " << endl;
    }


}
void Array::removeElement(int key){
    if (size != 0) {
        int i;
        bool flag = false;
        for (i = 0; i < size; i++) {
            if (arr[i] == key) {
                flag = true;
                break;
            }
        }
        if (flag) {
            for (int j = i; j < size ;) {
                if (arr[j] == key) {
                    for (int k = j; k < size - 1; k++) {
                        arr[k] = arr[k + 1];
                    }
                    size--;
                }
                else {
                    j++;
                }
            }

           
            cout << "Removed Successfully " << endl;
         
        }
        else {
            cout << "not Found" << endl;
        }
    }
    else {
        cout << "Array is Empty" << endl;
    }

}
void Array::updateElement(int existingElement, int updatedElement) {
    if (size != 0) {
        bool flag = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] == existingElement) {
                arr[i] = updatedElement;
                flag = true;
                break;
            }
            
        }
        if (!flag) {
            cout << "The element doesnot exist in this array" << endl;
        }
    }
    else {
        cout << "Array is Empty" << endl;
    }


}
void Array::linearSearchElement(int key) {
    if (size != 0) {
        bool flag = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                cout << "ELEMENT FOUND AT INDEX  : " << i << endl;
                flag = true;
            }
        }
        if (!flag) {
            cout << "Element Doesnot Exist" << endl;
        }
    }
    else {
        cout << "Array is Empty" << endl;
    }
}
void Array::moveBack(int & currIndex) {
    if (currIndex > 0 && currIndex<size) {
        currIndex--;
        cout << "The current Index is :  " << currIndex << endl;
        cout << "The element at current Index is  : " << arr[currIndex] << endl;
    }
    else {
        cout << "Cannot move back " << endl;
    }
}
void Array::moveForward(int& currIndex) {
    if (currIndex>=0&& currIndex<size) {
        currIndex++;
        cout << "The current Index is :  " << currIndex << endl;
        cout << "The element at current Index is  : " << arr[currIndex] << endl;
    }
    else if(currIndex>size)  {
        cout << "Cannot move forward " << endl;
    }
}
void Array::indexAt(int &index) {
    cout << "The element at index  : " << index << " is " << arr[index] << endl;
}
void Array::selectionSortAscending() {
    
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {

            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

}
void Array::selectionSortDescending() {

    for (int i = 0; i < size; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {

            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }

}
void Array::sorting() {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }



}
void Array::Print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;
    }
}
Array::~Array()
{
    delete[]arr;
}
