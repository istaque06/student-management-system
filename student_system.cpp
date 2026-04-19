#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
};

vector<Student> students;

// Add Student
void addStudent() {
    Student s;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Age: ";
    cin >> s.age;

    students.push_back(s);
    cout << "Student Added Successfully!\n";
}

// Display Students
void displayStudents() {
    if (students.size() == 0) {
        cout << "No Students Found!\n";
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        cout << "\nID: " << students[i].id;
        cout << "\nName: " << students[i].name;
        cout << "\nAge: " << students[i].age << "\n";
    }
}

// Search Student
void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "Student Found1\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            return;
        }
    }
    cout << "Student Not Found!\n";
}

// Delete Student
void deleteStudent() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "Student Deleted!\n";
            return;
        }
    }
    cout << "Student Not Found!\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: cout << "Invalid Choice!\n";
        }
    }

    return 0;

     
}