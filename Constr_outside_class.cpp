#include <iostream>
using namespace std;
class student{
    int rno;
    char name;
    int fee;
    


public:
student();
void display();
};

student::student(){
    cout << "Enter the roll number: ";
    cin >> rno;
    cout << "Enter the name: ";
    cin >> name;
     cout << "Enter the fees: ";
    cin >> fee;
}
void student::display(){
cout <<rno << endl << name << fee <<endl; 
}
int main() {
    student person;
    person.display();
    

    return 0;
}



/*OUPUT
Enter the roll number: 25
Enter the name: Avi
Enter the fees: 35
*/
