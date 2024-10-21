#include <iostream>

using namespace std;

void powerset(char set[], char s[], int set_size, int size, int index) {
    if (index == set_size) {
        cout << "{";
        for (int i = 0; i < size; i++) {
            if (i != 0) cout << ", ";
            cout << s[i];
        }
        cout << "}" << endl;
        return;
    }
    s[size] = set[index];
    powerset(set, s, set_size, size + 1, index + 1);

    powerset(set, s, set_size, size, index + 1);
}

int main() {
    char set[] = { 'a', 'b', 'c' };  
    char s[3];  

    cout << "集合的冪集為: " << endl;
    powerset(set, s, 3, 0, 0);

    return 0;
}