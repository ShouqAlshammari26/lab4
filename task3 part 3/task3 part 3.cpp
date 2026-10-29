#include <iostream>
using namespace std;
int main() {
    int count = 0, sum = 0;
    cout << "Numbers between 100 and 200, divisible by 9:" << endl;

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " ";
            count++;
            sum = sum + i;
        }
    }

    cout << endl;
    cout << "Count = " << count << endl;
    cout << "The sum = " << sum;

    return 0;
}
