#include <iostream>
using namespace std;

int main() {
    int my_array[] = {7, 12, 9, 4, 11};
    int minVal = my_array[0];

    for(int i = 0; i < 5; i++) {
        if(my_array[i] < minVal) {
            minVal = my_array[i];
        }
    }

    cout << "Lowest value: " << minVal << endl;
    cout << "Abrar Mahir" << endl;
    cout << "The code is also successfully loaded. " << endl;

    return 0;
}
