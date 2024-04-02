#include <iostream>
using namespace std;
int main() {
    
    string nama;
    int NIM, nilai1, nilai2, nilai3, rata2;
    
    cout << "Algotitma Rata-rata Nilai Siswa" << endl;
    cout << "Nama Siswa: ";
    cin >>nama;
    cout << " Masukan NIM: ";
    cin >>NIM;
    cout << " Masukan Nilai 1: ";
    cin >>nilai1;
    cout << " Masukan Nilai 2: ";
    cin >>nilai2;
    cout << " Masukan Nilai 3: ";
    cin >>nilai3;
    
    rata2 = (nilai1+nilai2+nilai3)/3;
    
    cout << "Algotitma Rata-rata Nilai Siswa";
    cout << "Nama Siswa: " << nama << endl;
    cout << "NIM Siswa : " << NIM << endl;
    cout << " Nilai 1: " << nilai1 << endl;
    cout << " Nilai 2: " << nilai2 << endl;
    cout << " Nilai 3: " << nilai3 << endl;
    cout << " Rata-rata Nilai  Siswa: " << rata2 << endl;
    cout << " Nim " << NIM << " Siswa yang bernama " << nama << endl;
	cout << " Memperoleh nilai rata-rata " << rata2 << " dari hasil tugas yang diikutinya.";
    return 0;
}
