#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    const int max = 10;
    Student s[max]; 
    int num = 0;
    cout << "Enter the number of students to add (max " << max << "): " << endl;
    cin >> num;

   
    if (num > max) {
        cout << "You can't add more than " << max << " students." << endl;
        num = max;  
    }

    
    cin.ignore();

 
    for (int i = 0; i < num; i++) {
        string name, section;
        int age, phone;

        cout << "Enter the details of student " << i + 1 << ": " << endl;

        cout << "Name: ";
        getline(cin, name);  

       
        cout << "Section: ";
        getline(cin, section);  

      
        cout << "Age: ";
        cin >> age;  
        cin.ignore();  

        cout << "Phone: ";
        cin >> phone; 
       
        s[i] = Student(name, age, section, phone);
    }


    cout << "\nStudent Details: " << endl;
    for (int i = 0; i < num; i++) {
        s[i].display();
    }

    return 0;
}
