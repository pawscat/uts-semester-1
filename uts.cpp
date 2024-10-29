#include <iostream>

using namespace std;

int main(){

    string nama, nim, kelas, grade;
    double berat, hasil;
    float tinggi;

        cout<<"Data IMT Mahasiswa Amikom\n\n";
        cout<<"Masukkan Nama Anda : ";
        cin>>nama;
        cout<<"Masukkan NIM Anda : ";
        cin>>nim;
        cout<<"Masukkan Kelas Anda : ";
        cin>>kelas;
        cout<<"Masukkan Tinggi Badan Anda (dalam satuan meter): ";
        cin>>tinggi;
        cout<<"Masukkan Berat Badan Anda (dalam satuan kg): ";
        cin>>berat;

            hasil = berat / (tinggi * tinggi);

                if (hasil < 18.5)
                    {
                        grade = "kurus.";
                    }
                else if (hasil < 24.9)
                    {
                        grade = "ideal.";
                    }
                else if (hasil < 29.9)
                    {
                        grade = "kelebihan berat badan.";
                    }
                else
                    {
                        grade = "obesitas.";
                    }

        cout<<"\n\nHasil Pengolahan Data Anda"<<endl;
        cout<<"Nama : "<<nama<<endl;
        cout<<"NIM : "<<nim<<endl;
        cout<<"Kelas : "<<kelas<<endl;
        cout<<"Tinggi Badan : "<<tinggi<<endl;
        cout<<"Berat Badan : "<<berat<<endl;
        cout<<"Jumlah IMT kamu "<<hasil<<", jadi kamu memiliki tubuh yang "<<grade<<endl;

return 0;
}
