#include <iostream>
#include <vector>
#include <double>
using namespace std;
int main() {
  int choice;

//This will show the menu Loop
while (true) {
// This will Display menu options
cout << "\nStudent Registration System" << endl;
cout << "1. Add New Student" << endl;
cout << "2. Register Course for Student" << endl;
cout << "3. Display Student Details" << endl;
cout << "4. Exit" << endl;
cout << " Enter your choice: ";
cin >> choice;

// This is the handle user input 
switch (choice) {
case 1:
cout << "Add New Student feature coming soon!" << endl;
break;
case 2:
cout << "Register Course for Student feature coming soon!" << endl;
break;
case 3:
cout << "Display Student Details feature coming soon!" << endl;
break;
case 4:
cout << "Exciting the system. Goodbye!" << endl;
break;
default: //This is the Exit program
cout << "Invalid choice. Please try again." << endl;
}
}
return 0;
}

