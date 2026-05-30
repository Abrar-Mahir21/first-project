#include <iostream>
using namespace std;

int main() {
    int prev2 = 0;
    int prev1 = 1;

    cout << prev2 << endl;
    cout << prev1 << endl;

    for (int i = 0; i < 18; i++) {
        int newFibo = prev1 + prev2;
        cout << newFibo << endl;
        
        prev2 = prev1;
        prev1 = newFibo;
    }
    cout << "The code successfully run. " << endl ;
    return 0;
}
