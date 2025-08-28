#include <iostream>
#include <ctime>
using namespace std;

class construct {
    int day, month, year;
public:
    construct(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void display() {
        cout << "Today's Date: " << day << "-" << month << "-" << year << endl;
    }
};

int main() {
    
    time_t t = time(0);
    tm *now = localtime(&t);
    int day = now->tm_mday;
    int month = now->tm_mon + 1; 
    int year = now->tm_year + 1900;

    construct today(day, month, year);
    today.display();

    return 0;
}

/*OUTPUT
Today's Date: 28-8-2025
*/
