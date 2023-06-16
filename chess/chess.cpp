#include <iostream>
#include <vector>
using namespace std;

int main() {
    string pos1, pos2;
    cin >> pos1 >> pos2;
    vector<string> a1, a2;
    for (int i = 1; i < 12; i++) {
        string s1 = ""; s1 += pos1[0];
        string s2 = ""; s2 += pos2[0];
        string p1 = pos1, p2 = pos2;
        s1 += to_string(i);
        s2 += to_string(i);
        if (s1 != pos1 && 11 - i >= abs('f' - pos1[0])) {
            a1.push_back(s1);
        }
        if (s2 != pos2 && 11 - i >= abs('f' - pos2[0])) {
            a2.push_back(s2);
        }
    }
    string p1 = "", p2 = "";
    for (int i = 1; i < pos2.size(); i++) {
        p2 += pos2[i];
    }
    for (int i = 1; i < pos1.size(); i++) {
        p1 += pos1[i];
    }
    for (int i = 97; i < 108; i++) {


    }
}
for (auto el : a1) {
    cout << el << ' ';
}
cout << endl;
for (auto el : a2) {
    cout << el << ' ';
}
}