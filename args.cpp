#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Program name: '" << argv[0] << "'" << endl;
    cout << "called with " << argc - 1 << " arguments: ";
    for (int i = 1; i < argc; ++i) {
        cout << "'" << argv[i] << "'";
        if (i < argc - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
