#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "Halo";

    // Ubah ke huruf besar
    for (char &c : teks)
        c = toupper(c);

    cout << "Upper: " << teks << endl;

    // Ubah ke huruf kecil
    for (char &c : teks)
        c = tolower(c);

    cout << "Lower: " << teks << endl;

    return 0;
}
