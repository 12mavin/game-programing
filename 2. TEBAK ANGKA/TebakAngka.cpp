#include <iostream>
#include <String>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int kunci, tebakan, maks, nyawa = 3;
    srand(static_cast<unsigned>(time(0)));

    do{
    cout << "Masukan maksimal nilai (10-100) : "; cin>> maks;
        if(maks<10||maks>100){
            cout << "Masukan angka antara 10-100!!!" << endl;
            cout << endl;
        }
    }while(maks<10||maks>100);


    cout << "Silahkan tebak nilai antara 0 sampai "<<maks<<" !!"<<endl;
    kunci = rand() % maks + 1;
    cout << "(Cheat: ini adalah angka yang ditebak) : "<< kunci<<endl<<endl;
  do {
    cout << "Masukan tebakan anda ";cin >> tebakan;
    if (tebakan<kunci){
        cout <<"Tebakan Anda terlalu kecil"<< endl;
        nyawa--;
        cout <<"Tebakan Anda salah, nyawa : "<<nyawa<<endl<<endl;
    }
    else if(tebakan>kunci) {
        cout <<"Tebakan Anda terlalu besar"<<endl;
        nyawa--;
        cout <<"Tebakan Anda salah, nyawa : "<<nyawa<<endl<<endl;
    }
    else if(kunci==tebakan){
        cout <<"Tebakan Anda Benar"<<endl;
    }
    if (nyawa==0){
        cout << "GAME OVER" << endl;
    }
} while (kunci!=tebakan && nyawa!=0);

    return 0;
}

