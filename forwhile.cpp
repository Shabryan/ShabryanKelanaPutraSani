for

#include <iostream>
using namespace std;

int main() {
    cout << "Angka Genap:" << endl;
    for (int i = 1; i <= 35; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    cout << "\nAngka Ganjil:" << endl;
    for (int i = 1; i <= 35; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}



while

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    cout << "Angka Genap: ";
    while (i <= 35) {
        if (i % 2 == 0) {
            cout << i << " "; // Menampilkan angka genap dengan spasi
        }
        i++;
    }

    i = 1; // Reset i untuk mencetak angka ganjil
    cout << "\nAngka Ganjil: ";
    while (i <= 35) {
        if (i % 2 != 0) {
            cout << i << " "; // Menampilkan angka ganjil dengan spasi
        }
        i++;
    }

    cout << endl; // Menambahkan newline di akhir
    return 0;
}
