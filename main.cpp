/*
    Program max A dan B
    Ket : Program untuk mencari nilai max antara A dan B
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int A, B, hasil;
    //string hasil;
    //Algoritma
    cout << "Masukkan Bilangan A : " ;
    cin >> A;
    cout << "Masukkan Bilangan B : " ;
    cin >> B;
    //hasil = ( A >= B )? "Nilai Paling Besar adalah A" : "Bilangan Paling Besar adalah B";
    //cout << hasil;
    hasil = ( A >= B )? A:B;
    cout << "Nilai Tertinggi adalah " << hasil;
    cout << endl << "Cek Selesai";
    return 0;
}
