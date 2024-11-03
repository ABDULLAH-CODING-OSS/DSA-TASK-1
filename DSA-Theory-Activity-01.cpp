#include <iostream>
#include"Array.h"

using namespace std;

int main()
{
    
    int size=0;
    cout << "Enter the  Current Size of Array " << endl;
    cin >> size;
    int capacity=0;
    cout << "Enter the  Total Capacity  of Array " << endl;
    cin >> capacity;
    if (size > capacity) {
        cout << "ERRor" << endl;
        return 1;
    }
    int* arr = new int[capacity];
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1<<" : ";
        cin >> arr[i];

    }
    Array*obj1=new Array(arr,size,capacity);
   /* obj1->insertAtHead(5);
    obj1->Print();
    int key;
    cout << "If you want to delete an element than enter that element" << endl;
    cin >> key;
    obj1->removeElement(key);
    obj1->Print();
    int existingElement;
    cout << "ENTER THE ELEMENT YOU WANT TO CHANGE/REPLACE" << endl;
    cin >> existingElement;
    int updatedElement;
    cout << "Enter The ELEMENT YOU WANT In The ARRAY" << endl;
    cin >> updatedElement;
    obj1->updateElement(existingElement,updatedElement);
    obj1->Print();
    int searchedElement;
    cout << "Enter The Element To be Searched " << endl;
    cin >> searchedElement;
    obj1->linearSearchElement(searchedElement);*/
   /* int currIndex;
    cout << "Enter the current index from you which you want to moveBack " << endl;
    cin >> currIndex;
    obj1->moveBack(currIndex);
    int currIndex1;
    cout << "Enter the current index from you which you want to moveForward " << endl;
    cin >> currIndex1;
    obj1->moveForward(currIndex);
    int index;
    cout << "Enter the index of which element is requires " << endl;
    cin >> index;
    obj1->indexAt(index);*/
   /* obj1->selectionSortAscending();
    obj1->Print();
    obj1->selectionSortDescending();
    obj1->Print();*/
    obj1->sorting();
    obj1->Print();

    


 /*  Array obj;
    obj.insertAtTail(5);
       obj.insertAtHead(6);*/
    
      delete[]arr;
    return 0;
}
