#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Dunia";

    teks.replace(5, 5, "Semua"); // ganti "Dunia" -> "Semua"

    cout << teks << endl;

    return 0;
}
