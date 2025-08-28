#include <iostream>
using namespace std;
class date{
    int d;
    int m;
    int y;
    public:
    date() {
        cout << "Constructor called" << endl;
        d = 28;
        m = 8;
        y = 2025;
    }

    
void display(){
    cout << "Today's date is: "<< d << "/" << m << "/"<< y << endl;
}
};
int main() {
    date mydate;
    mydate.display();
    

    return 0;
}
/*OUTPUT
Constructor called
Today's date is: 28/08/2025
*/
