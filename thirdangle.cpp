#include 

using namespace std;

int main() {
    double angle1, angle2, angle3;
    cout << "Enter two angles of the triangle: ";
    cin >> angle1 >> angle2;
    
    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        cout << "Invalid angles entered for a triangle!" << endl;
    } else {
        angle3 = 180.0 - (angle1 + angle2);
        cout << "The third angle is: " << angle3 << " degrees" << endl;
    }
    
    return 0;
}
