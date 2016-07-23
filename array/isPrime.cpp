#include <iostream>
#include <cmath>
 using namespace std;

bool PrimeChecker(int number) {
    if (number < 0)
        return false;
    else if (number == 1)
        return true;
    else if (number == 2)
        return true;
    else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0)
                return false;
        }
        return true;
    }
    return false;
}

int main(){
    
    int number;
    cin >> number;
    if (PrimeChecker(number))
        cout << "number is prime";
    else
        cout << "number is not prime";    
    return 0;
}