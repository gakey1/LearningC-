#include <iostream>
using namespace std;

int main() {
    string favoriteColors[3];

    for (int i = 0; i < 3; i++){
        cout << "Enter your favorite color " << (i + 1) << ": " << endl;
        cin >> favoriteColors[i];
    }

    cout << "Your favorite colors are: " << ": " << endl;
    for(int i = 0; i < 3; i++){
        cout << favoriteColors[i] << "\n";
    }
    return 0;
}
