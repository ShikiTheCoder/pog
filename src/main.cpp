#include <iostream>
#include <string>
#include "primes.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Использование: " << argv[0] << " <число n>\n";
        return 1;
    }

    int n = stoi(argv[1]);

    if (n < 2) {
        cerr << "Пожалуйста, введите число n, которое не меньше 2.\n";
        return 1;
    }

    //cout << "Prime numbers from 2 until " << n << ":\n";
    
    int primeCount = 0;

    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            //cout << i << " ";
            ++primeCount;
        }
    }

    //cout << "\n";
    cout << primeCount;

    return 0;
}