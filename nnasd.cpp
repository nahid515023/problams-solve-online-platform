#include <iostream>
using namespace std;

void convertTo12HourFormat(int hour, int minute) {
    string period;
    
    // Determine AM or PM
    if (hour < 12) {
        period = "AM";
        if (hour == 0)
            hour = 12;
    } else {
        period = "PM";
        if (hour > 12)
            hour -= 12;
    }
    
    // Print the time in 12-hour format
    cout << "Equivalent time in 12-hour format: " << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
}

int main() {

    
    int hour, minute;
    
    // Input time in 24-hour format
    cout << "Enter time in 24-hour format (HH:MM): ";
    cin >> hour >> minute;
    
    // Check if input values are valid
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Invalid input!" << endl;
        return 1;
    }
    
    // Convert and print the time in 12-hour format
    convertTo12HourFormat(hour, minute);
    
    return 0;
}
