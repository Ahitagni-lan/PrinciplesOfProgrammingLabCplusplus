#include 

using namespace std;

int main() {
    long long num;
    cout << "Enter any non-negative number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }
    
    if (num < 10) {
        cout << "Swapped number: " << num << endl;
        return 0;
    }
    
    long long temp = num;
    long long lastDigit = num % 10;
    long long divisor = 1;
    
    // Find the divisor and first digit
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    long long firstDigit = temp;
    
    // Extract the middle part of the number
    long long middlePart = (num % divisor) / 10;
    
    // Reconstruct the number with swapped first and last digits
    long long swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;
    
    cout << "Number after swapping first and last digits: " << swappedNum << endl;
    
    return 0;
}
