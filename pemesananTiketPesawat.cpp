#include <iostream>
#include <conio.h>

using namespace std;

int harga, jarak;
char yakin;

void pesawat(){
	int pilih1;
	while(pilih1 != 3){
		system("cls");
		cout<<"Pilih Pesawat\n";
		cout<<"---------------------------\n";
		cout<<"1. Garuda\n2. Lion Air\n3. Kembali\n";
		cout<<"Masukkan pilihan Pesawat : ";
		cin>>pilih1;
		if(pilih1==1){
			cout<<"Garuda\n";
			cout<<"Masukkan jarak tempuh : Km.";
			cin>>jarak;
			harga = jarak * 100000;
			cout<<"Total Harga : Rp."<<harga;
			cout<<"\nApakah sudah yakin y/t : ";
			cin>>yakin;
			if(yakin=='y')
			cout<<"\nTiket berhasil dibeli";
			if(yakin=='t')
			cout<<"\nTiket gagal dibeli";
			getch();
		}
		if(pilih1==2){
			cout<<"Lion Air\n";
			cout<<"Masukkan jarak tempuh : Rp.";
			cin>>jarak;
			harga = jarak * 80000;
			cout<<"Total Harga : Rp."<<harga;
			cout<<"\nApakah sudah yakin y/t : ";
			cin>>yakin;
			if(yakin=='y')
			cout<<"\nTiket berhasil dibeli";
			if(yakin=='t')
			cout<<"\nTiket gagal dibeli";
			getch();
		}		
	}
}

void kereta(){
	int pilih2;
	while(pilih2!=3){
		system("cls");
		cout<<"Pilih Kereta\n";
		cout<<"---------------------------\n";
		cout<<"1. Eksekutif\n2. Bisnis\n3. Kembali\n";
		cout<<"Masukkan pilihan Kereta : ";
		cin>>pilih2;
		if(pilih2==1){
			cout<<"Kereta Eksekutif\n";
			cout<<"Masukkan jarak tempuh : Km.";
			cin>>jarak;
			harga = jarak * 50000;
			cout<<"Total Harga : Rp."<<harga;
			cout<<"\nApakah sudah yakin y/t : ";
			cin>>yakin;
			if(yakin=='y')
			cout<<"\nTiket berhasil dibeli";
			if(yakin=='t')
			cout<<"\nTiket gagal dibeli"; 
			getch();
		}
		if(pilih2==2){
			cout<<"Kereta Bisnis\n";
			cout<<"Masukkan jarak tempuh : Rp.";
			cin>>jarak;
			harga = jarak * 30000;
			cout<<"Total Harga : Rp."<<harga;
			cout<<"\nApakah sudah yakin y/t : ";
			cin>>yakin;
			if(yakin=='y')
			cout<<"\nTiket berhasil dibeli";
			if(yakin=='t')
			cout<<"\nTiket gagal dibeli";
			getch();
		}
	}
}

int main(){
	int pilih;
	while(pilih != 3){
		system("cls");
		cout<<"Pemesanan Tiket\n";
		cout<<"-------------------\n";
		cout<<"1. Pesawat\n2. Kereta\n3. Keluar\n";
		cout<<"Pilih : ";
		cin>>pilih;
		if(pilih==1)
			pesawat();
		else if(pilih==2)
			kereta();
		else if(pilih==3)
			cout<<"\nTerimakasih telah menggunakan jasa kami :)";
		else{
			cout<<"\nsalah memasukkan pilihan";
			getch();
		}
	}
	return 0;
}
