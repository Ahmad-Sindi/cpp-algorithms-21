// Algorithm Challenge
// 21 Circle Area Through Circumference

#include <iostream>
#include <cmath> // Use cmath instead of math.h for modern C++
using namespace std;

int main()
{
    float L;                            // Variable to store the circumference
    cout << "Type the Circumference: "; // Ask the user to input the circumference
    cin >> L;

    const float pi = 3.14; // Define pi as a constant value

    // Formula: Area = (Circumference^2) / (4 * π)
    float area = (L * L) / (4 * pi);

    // Note: Parentheses ensure the correct order of operations
    cout << "The Area of the Circle is: " << area << endl;

    return 0;
}
