#include 

using namespace std;

int main() {
    double cm, meters, kilometers;
    cout << "Enter length in centimeters (cm): ";
    cin >> cm;
    
    meters = cm / 100.0;
    kilometers = cm / 100000.0;
    
    cout << "Length in meters: " << meters << " m" << endl;
    cout << "Length in kilometers: " << kilometers << " km" << endl;
    
    return 0;
}
