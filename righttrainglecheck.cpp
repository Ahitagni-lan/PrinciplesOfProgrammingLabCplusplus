#include 
#include 

using namespace std;

int main() {
    double sides[3];
    cout << "Enter the lengths of three sides: ";
    cin >> sides[0] >> sides[1] >> sides[2];
    
    // Sort sides so that sides[2] is the largest (hypotenuse candidate)
    sort(sides, sides + 3);
    
    // Check Pythagorean theorem: a^2 + b^2 = c^2
    if (sides[0] > 0 && (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2])) {
        cout << "The given sides form a right triangle." << endl;
    } else {
        cout << "The given sides do not form a right triangle." << endl;
    }
    
    return 0;
}
