#include<iostream>
#include<string>

using namespace std;

int main() {
    int arr[7];
    cout << "Enter 7 numbers: ";
    for(int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    
    // Sort in ascending order
    sort(arr, arr + 7);
    
    // Print in reverse (descending order)
    cout << "Numbers in descending order: ";
    for(int i = 6; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
