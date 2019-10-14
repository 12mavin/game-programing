#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string kata, jawaban, tebakan;
    char temp, lagi;
    int indeks1, indeks2, jumlah, nyawa;
    bool ans = true;
    do{
    system("CLS");
    nyawa=3;
    cout << "Masukan Kata Yang diacak : "; cin >> kata;
    jumlah=kata.size();
    jawaban=kata;
    cout << "Jumlah Huruf dari '"<<kata<<"' adalah : " << jumlah << endl;
    srand(static_cast<unsigned>(time(0)));

    for (int y=jumlah ; y>0 ; y--){
        ///swap(kata[rand()% jumlah],kata[y-1]); ///optional plan hehehe...
        indeks1=rand()% y;
        indeks2=y-1;
        temp=kata[indeks1];
        kata[indeks1]=kata[indeks2];
        kata[indeks2]=temp;

    }
    cout << "Hasil acak kata : ";
    for(int i=0;i<jumlah;i++){
        cout << kata[i];
    }
    cout << endl;
/// game
    do {
    cout << "\nTebak kata yang dimaksud : "; cin >> tebakan;
    if (tebakan==jawaban){
        cout << "Tebakan Benar"<<endl;
        ans=true;
    }
    else{
        nyawa--;
        cout << "Tebakan Salah"<<endl;
        cout << "Nyawa sisa : "<< nyawa<<endl;
        ans=false;
        if(nyawa==0){
            cout << "\nJawaban yang benar adalah: " << jawaban << endl;
            cout << "GAME OVER!!!"<<endl;
        }
    }
} while (ans==false&&nyawa!=0);
    cout << "\nMau main lagi (y/n)? ";cin >> lagi;
    }while(lagi=='y');
    return 0;
}
