#include <iostream>
#include <cstdio>
using namespace std;
// Structure to store date
struct Date {
    int month;
    int day;
    int year;
};
int main() {
    Date myDate;
    cout << "Date Validation Program" << endl;
    // Loop until user enters a valid date
    while (true) {
        cout << "\nEnter date in format (MM/DD/YYYY): ";
        scanf_s("%d/%d/%d", &myDate.month, &myDate.day, &myDate.year);

        // Simple validation check
        if (myDate.month >= 1 && myDate.month <= 12 &&
            myDate.day >= 1 && myDate.day <= 31 &&
            myDate.year > 0) {

            break; // valid date found
        }
        else {
            cout << "Invalid date! Please try again." << endl;
        }
    }
    cout << "\n===== Valid Date Entered =====" << endl;
    cout << "Date: " << myDate.month << "/"
        << myDate.day << "/"
        << myDate.year << endl;

    return 0;
}