#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Halo ";
    string b = "Dunia";

    string hasil1 = a.append(b);
    string hasil2 = a + b;

    cout << hasil1 << endl;
    cout << hasil2 << endl;

    return 0;
}
