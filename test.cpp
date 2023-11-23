#include <iostream>
using namespace std;
int main()
{
    int numberOfSmallRooms, numberOfLargeRooms;
    cin >> numberOfSmallRooms >> numberOfLargeRooms;
    const double pricePerSmallRoom{25.0};
    const double pricePerLargeRoom{35.0};
    const double salesTax{0.06};
    const int estimateExpiration{30}; // days
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numberOfSmallRooms << endl;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << (pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms) << endl;
    cout << "Tax: $" << ((pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms)) * salesTax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << ((pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms)) + (((pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms)) * salesTax) << endl;
    cout << "This estimate is valid for " << estimateExpiration << " days" << endl;

    return 0;
}