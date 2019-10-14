#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama_item;
    int stat, stat_terhebat, stat_terlemah;
    bool item_pertama;
    string item_sebelumnya, item_terhebat, item_terlemah;
    char option;

    do{
    cout << "Masukan nama item: "; cin >> nama_item;
    cout << "Masukan stat: ";cin >> stat;

    cout << "Item Anda adalah: "<<nama_item<<endl;
    cout << "Stat: "<<stat<<endl;

    if(item_pertama==1){
    item_sebelumnya="Tidak Ada";
    }
    cout << "Item Sebelumnya: "<<item_sebelumnya<<endl;


    if(item_pertama==1){
            item_terhebat=nama_item;
            stat_terhebat=stat;
    }
    else{
            if(stat>stat_terhebat){
                item_terhebat=nama_item;
                stat_terhebat=stat;
            }
    }
    cout << "Item Terhebat: "<<item_terhebat<<endl;

    if(item_pertama==1){
            item_terlemah=nama_item;
            stat_terlemah=stat;
    }
    else {
            if(stat<stat_terlemah){
                item_terlemah=nama_item;
                stat_terlemah=stat;
            }
    }
    cout << "Item Terlemah: "<<item_terlemah<<endl;
    cout << "Input item Lagi? (y/n)"<<endl; cin >>option;
    item_sebelumnya=nama_item;
    item_pertama=0;
    }while(option=='y');


    return 0;
}
