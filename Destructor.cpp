#include <iostream>
using namespace std;

int objectCount = 0;

class Student {
public:
    Student() {
        objectCount++;
        cout << "Objects created so far: " << objectCount << endl;
    }

    ~Student() {
        objectCount--;
        cout << "Objects remaining after destruction: " << objectCount << endl;
    }
};

int main() {
    Student s1, s2, s3; 

    {
        Student temp;  
    }  

    return 0;
}

/*OUTPUT
Objects created so far: 1
Objects created so far: 2
Objects created so far: 3
Objects created so far: 4
Objects remaining after destruction: 3
Objects remaining after destruction: 2
Objects remaining after destruction: 1
Objects remaining after destruction: 0
*/
