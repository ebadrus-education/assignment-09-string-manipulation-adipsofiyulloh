#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Program C++";

    string potong = teks.substr(0, 7); // ambil "Program"

    cout << potong << endl;

    return 0;
}
