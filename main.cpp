#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

void setColor(int textColor, int bgColor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4)|textColor);
}

double pangkat(int p,int o)
{
    double g;
    g = pow(p,o);
    return g;

}

double kuadrat(int x)
{
    double y;
    y = sqrt(x);
    return y;

}

void judul()
{
    cout<<"=============================================================================================="<<endl;
    cout<<"=====------------------------ WALCOME TO PEMOGRAMAN KALKULATOR --------------------------====="<<endl;
    cout<<"=============================================================================================="<<endl;
}

void menu()
{
    judul();
    int pilih;
    cout<<"=====------- 1. Perogram Kalkulator Perkalian, Pertambahan, Pengurangan, Pembagian ------====="<<endl;
    cout<<"=====------------------------------ 2. Perogram Akar Kuadrat ----------------------------====="<<endl;
    cout<<"=====------------------------------ 3. Perogram Pangkat ---------------------------------====="<<endl;
    cout<<"=====------------------------------ 4. Keluar Aplikasi ----------------------------------====="<<endl << endl;
    cout << "Masukkan Pilihan : "; cin >> pilih;
    // kalo pilih satu
    if (pilih == 1)
    {
        system("cls");
        char op;
        float angka1, angka2;

        do {
            cout << "========================= Perogram Kalkulator Perkalian, Pertambahan, Pengurangan, Pembagian =========================" << endl;
            cout << "\nMasukkan (+, -, *, /) atau tekan 'k' untuk Kembali ke Menu : ";
            cin >> op;

            // Keluar dari loop jika pengguna memilih untuk keluar
            if (op == 'k') {
                system("cls");
                menu();
                break;
            }

            cout << "\nMasukkan angka pertama: ";
            cin >> angka1;
            cout << "\nMasukkan angka kedua: ";
            cin >> angka2;

            switch(op) {
                case '+':
                    cout << "\n===== Hasilnya adalah =====\n\n" <<angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
                    break;
                case '-':
                    cout << "\n===== Hasilnya adalah =====\n\n" <<angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
                    break;
                case '*':
                    cout << "\n===== Hasilnya adalah =====\n\n" <<angka1 << " * " << angka2 << " = " << angka1 * angka2 << endl;
                    break;
                case '/':
                    if(angka2 == 0)
                        cout << "\n========== Error! Pembagian dengan nol tidak diperbolehkan. ==========" << endl;
                    else
                        cout << "\nHasilnya adalah\n\n" <<angka1 << " / " << angka2 << " = " << angka1 / angka2 << endl;
                    break;
                default:
                    // Operator tidak valid
                    cout << "\n========== Error! Operator tidak valid. ==========" << endl;
                    break;
            }
        } while(true); // Teruskan loop secara tak terbatas
    }
    //kalo pilih dua
    else if (pilih == 2)
    {
        cout << endl << endl;
        system ("PAUSE");
        system ("cls");
        double hasil3,input1;
        char ljt;
        cout << "\t\t========================= Pemograman Akar Kuadrat =========================" << endl;
        cout << "Masukkan Angka : "; cin >> input1; hasil3 = kuadrat(input1);
        cout << "Hasil Akar Dari " << input1 <<" Adalah : " << hasil3 << endl;
        cout << "Apakah ingin lanjut menghitung ? [y/n] "; cin >> ljt;
        do{
            if(ljt == 'y')
        {
            cout << endl << endl;
            system ("PAUSE");
            system("cls");
            cout << "\t\t========================= Pemograman Akar Kuadrat =========================" << endl;
            cout << "Masukkan Angka : "; cin >> input1; hasil3 = kuadrat(input1);
            cout << "Hasil Akar Dari " << input1 << " Adalah : " << hasil3 << endl;
            cout << "Apakah ingin lanjut menghitung ? [y/n] "; cin >> ljt;
        }
            else if(ljt == 'n'){
                    char ljt2;
                    cout << "Apakah Anda Ingin Kembali ? [y/n]"; cin >> ljt2;
                    if(ljt2 == 'y'){
                        cout << endl << endl;
                        system("PAUSE");
                        system("cls");
                        menu();
                    }
                    else if(ljt2 == 'n'){
                            cout << endl << endl;
                            system("PAUSE");
                            system("cls");
                            cout << "\t\t========================= Pemograman Akar Kuadrat =========================" << endl;
                            cout << "Masukkan Angka : "; cin >> input1; hasil3 = kuadrat(input1);
                            cout << "Hasil Akar Dari " << input1 << " Adalah : " << hasil3 << endl;
                            cout << "Apakah ingin lanjut menghitung ? [y/n] "; cin >> ljt;
                    }
            }
        }while(true);

    }

    else if (pilih == 3)
    {
        cout << endl << endl;
        system("PAUSE");
        system("cls");
        int di,dalam;
        double hasil8;
        char ljt6;
        cout <<"\t\t============================== PEROGRAM PANGKAT ==============================" << endl;
        cout << "Masukkan Angka : "; cin >> di;
        cout << "Masukkan Pangkatnya : "; cin >> dalam;
        hasil8 = pangkat(di,dalam);
        cout << "Hasil dari " << di << " pangkat " << dalam << " adalah : " << hasil8 << endl << endl;

    }

    else if (pilih == 4)
    {
        cout << endl <<"\t==================== Trimakasih Telah Menggunakan Program Kami!! ====================" << endl;
        cout << endl << "\t\t======================== Thanks you very much ========================" << endl;
    }
    else
    {
        setColor(15,4);
        cout << "INPUT YANG ANDA MASUKKAN SALAH!!" << endl;
        setColor(7,0);
        system("PAUSE");
        system("cls");
        menu();

    }
}

int main()
{

    menu();
    return 0;
    exit(EXIT_SUCCESS);


}
