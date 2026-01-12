#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a;
    cin >>  b;

    if (a > b) {
        cout << " a is Greater" << endl;
    }
    else if (a < b) {
        cout << "B is greater" << endl;
    }
    else {
        cout << "Equal numbers" << endl;
    }

    return 0;
}
