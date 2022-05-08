#include <iostream>
#include"include/PersegiPanjang.hpp"


using namespace std;


int main()

{
    double tikteng_x,tikteng_y,panjang,lebar;
    cout << "Masukkan data persegi panjang 1: " << endl;
    cout << "Titik tengah sumbu X :";
    cin >>tikteng_x; 
    cout << "Titik tengah sumbu Y :";
    cin >>tikteng_y;
    cout << "Panjang :";
    cin >>panjang;
    cout << "Lebar :";
    cin >>lebar;
    PersegiPanjang pp1(tikteng_x, tikteng_y, panjang, lebar);
    pp1.print();
    
   
    cout << "Masukkan data persegi panjang 2: " << endl;
    cout << "Titik tengah sumbu X :";
    cin >>tikteng_x;
    cout << "Titik tengah sumbu Y :";
    cin >>tikteng_y;
    cout << "Panjang :";
    cin >>panjang;
    cout << "Lebar :";
    cin >>lebar;
    PersegiPanjang pp2(tikteng_x, tikteng_y, panjang, lebar);
    pp2.print();
    
    cout << endl << "Menambah pp1 dan pp2: " << endl;
    PersegiPanjang pp3 = pp1 + pp2;
    pp3.print();
    
    cout << endl << "Mengurangi pp1 dan pp2: " << endl;
    PersegiPanjang pp4 = pp1 - pp2;
    pp4.print();
    
    cout << endl << "Melakukan operator ++ pada pp1: " << endl;
    ++pp1;
    pp1.print();

    cout << endl << "Melakukan operator -- pada pp1: " << endl;
    --pp2;
    pp2.print();

    cout << endl << "Apakah pp1 dan pp2 beririsan: " << endl;
    cout << ((pp1 == pp2) ? "Ya" : "Tidak") << endl;
    cin.ignore();

    cout << endl << "Selesai" << endl;
    return 0;
}