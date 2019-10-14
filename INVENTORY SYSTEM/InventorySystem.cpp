#include <iostream>
#include <string>
#include <vector> // bagian dari STL
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char option;
    int maks_inv, maks_item, pilih,acak,hapus;
    vector<string> item{"Pisau . sts: 5","Pedang . sts 10"};
    vector<string> inve;
    vector<string>::iterator penunjuk;
    item.push_back("Pistol . sts: 15");
    item.push_back("Laser . sts: 20");
    item[2]="Batu . sts: 2";
    srand(static_cast<unsigned>(time(0)));

    maks_item=item.size();
    cout << "Maksimal item : "<< maks_item << endl;
    cout << "Masukan Maks Inventory : "; cin >> maks_inv;

    do{

    cout << "\nMenu :" << endl;
    cout << "1. Tampilkan Item" << endl;
    cout << "2. Tambah Item" << endl;
    cout << "3. Hapus Item" << endl;
    cout << "Pilih Menu : ";cin >> pilih;

    switch(pilih)
    {
        case 1:
            if(inve.empty()){
                cout << "\nInvetory Masih Kosong" << endl;
            }else {
                cout << endl;
               for(penunjuk=inve.begin()  ; penunjuk != inve.end();penunjuk++){
                    cout << *penunjuk << endl;
                    }
                }
            break;
        case 2:
            if(inve.size()>=maks_inv){
                cout << "\nInvetory Penuh " <<endl;
            }
            else{
            acak=rand()% maks_item;
            inve.push_back(item[acak]);
            cout << "\nItem yang ditambahkan adalah : "<< item[acak] << endl;
            }
            break;
        case 3:
            cout << "\nHapus item ke-";cin >> hapus;
            if(hapus-1>=inve.size()){
                cout << "Item Yang dipilih tidak ada" << endl;
            }else{
            hapus=hapus-1;
            inve.erase(inve.begin()+hapus);
            }
            break;
        default:
            cout << "\nPilihan Salah" << endl;
            break;       }
    cout << "\nIngin Melanjutkan (y/n)? ";cin >> option;
    }while(option == 'y');

    return 0;
}
