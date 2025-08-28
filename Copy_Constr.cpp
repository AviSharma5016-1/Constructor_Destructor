#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:
    Student(int a, string n) {
        age = a;
        name = n;
    }

    Student(const Student& obj) {
        age = obj.age;
        name = obj.name;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1(20, "Avi");  
    Student student2 = student1;    

    cout << "Student 1 details: ";
    student1.display();
    cout << "Student 2 details: ";
    student2.display();

    return 0;
}

/*OUTPUT
Student 1 details: Name: Avi, Age: 20
Student 2 details: Name: Avi, Age: 20
*/
