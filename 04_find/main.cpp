#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat = "Saya belajar C++";

    int posisi = kalimat.find("belajar");

    cout << "Posisi kata 'belajar': " << posisi << endl;

    return 0;
}
