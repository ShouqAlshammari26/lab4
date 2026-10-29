#include <iostream> 
using namespace std;
int main() {
    char ch; int a = 0, b = 0, c = 0;
    do {
        cout << "Enter a character (to EXIT enter x): ";
        cin >> ch;

        if (ch == 'a')
            a++;
        else if (ch == 'b')
            b++;
        else if (ch == 'c')
            c++;

    } while (ch != 'x');

    cout << "Number of 'a' character is: " << a << endl;
    cout << "Number of 'b' character is: " << b << endl;
    cout << "Number of 'c' character is: " << c << endl;

    return 0;
}
