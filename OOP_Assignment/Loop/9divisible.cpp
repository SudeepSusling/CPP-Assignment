#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    cout << "The numbers between 100 and 200 which are divisible by 9 are:" << endl;
    for (int i = 100; i <= 200; ++i) {
        if (i % 9 == 0) {
            cout << i << " ";
            sum += i;
            count++;
        }
    }
    cout << endl;

    cout << "The sum: " << sum << endl;
    cout << "The number of integers: " << count << endl;

    return 0;
}
