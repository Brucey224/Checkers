#include <iostream>

using namespace std;

int main() {
    int rows = 8;
    int cols = 8;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Alternate between '#' and ' ' depending on the sum of row and column indexes
            if ((i + j) % 2 == 0)
                cout << "#";
            else
                cout << "o";
        }
        cout << endl;
    }

    return 0;
}