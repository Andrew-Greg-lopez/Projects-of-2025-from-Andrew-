#include <iostream>
#include <vector>
#include <string> 

using namespace std;

// main classes to store course name 
class Course {
public: 
string courseName;

Course(string name) {
courseName= name;
}
};

// Student class definition 
class Student {
public:
string name;
vector<Course> courses; // List of courses for each student

// teacher or higher up to initialize student with a name 
Student(string studentName) {
name = studentName;
}

// Function to display student details and registered courses 
void registerCourse(const string& courseName) {
  courses.push_back(Course(courseName));
}

// function to show student details and registered courses

void displayDetails() {
  cout << "Student Name: " << name << endl;
  cout << "Registered Courses:" << endl;
  if (courses.empty()) {
cout << " None" << endl;
  } else {
for (const auto& course : courses) {
cout << " -" << course.courseName << endl;
}
  }
}
};

// Function prototypes
void addStudent(vector<Student>& students);
void registerStudent(vector<Student>& students);
void displayStudent(const vector<Student>& students);

int main() {
  vector<Student> students; // all students will be stored here
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

// Handle menu choices
switch (choice) {
case 1:
addStudent(students);
break;
case 2:
registerStudent(students);
break;
case 3:
displayStudent(students);
break;
case 4:
cout << "Exiting the system. Goodbye!" << endl;
return 0;
default:
cout << "Invalid choice. Please try again. " << endl;
}
}

return 0;
}






