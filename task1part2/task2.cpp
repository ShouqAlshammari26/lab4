#include <iostream> 
using namespace std;
int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    while (ch != 'n') {
        cout << "hello" << endl;
        cin >> ch;
    }

    return 0;
}
