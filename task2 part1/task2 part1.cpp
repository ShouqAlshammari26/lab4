#include <iostream> 
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter an integer value, to EXIT enter 0" << endl;

    do {
        cin >> num;

        if (num > 0)
            sum = sum + num;

    } while (num != 0);

    cout << "sum = " << sum;

    return 0;
}
