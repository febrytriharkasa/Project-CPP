#include<iostream>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<iomanip>

using namespace std;

struct nasabah{
	string nama,alamat;
	int saldo;
	string pin;
	string status;
	string rek;
}datanas[10];

int i, k;
int ketemu = 0;
string pilih, cari, milih;


void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void saldo(int k){
	system("cls");
	cout<<"=========================================================="<<endl;
	cout<<"                  ATM Bank UNTAG"<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"===================================="<<endl;
	cout<<"Saldo Anda Rp."<<datanas[i].saldo<<endl;
	cout<<"===================================="<<endl;
	getch();
}

void tarik(int k){
	float ambil;
	system("cls");
	cout<<"=========================================================="<<endl;
	cout<<"                  ATM Bank UNTAG"<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"Masukkan Nominal Uang Rp.";
	cin>>ambil;
	if(datanas[i].saldo<100000){
		cout<<endl;
		cout<<"Saldo Anda Tidak Mencukupi Rp."<<datanas[i].saldo<<endl<<endl;
	}
	else if(ambil>datanas[i].saldo){
		cout<<endl;
		cout<<"Jumlah Penarikan Tidak Bisa Dilakukan"<<endl;
		cout<<"Sisa Saldo Anda Rp."<<saldo<<endl<<endl;
	}
	else if((ambil<50000) != 0){
		cout<<endl;
		cout<<"Jumlah Penarikan Tidak Bisa Dilakukan"<<endl;
		cout<<"Kelipatan Rp. 50.000.-"<<endl<<endl;
	}
	else if(ambil>5000000){
		cout<<endl;
		cout<<"Jumlah Penarikan Tidak Bisa Dilakukan Maksimum Rp.5.000.000.-/Hari"<<endl<<endl;
	}
	else{
		datanas[i].saldo=datanas[i].saldo-ambil;
		cout<<"===================================="<<endl;
		cout<<"Sisa Saldo Anda Rp."<<datanas[i].saldo<<endl;
		cout<<"===================================="<<endl;
	}
	getch();
}

void transfer(int k){
	float transfer;
	string no;
	system("cls");
	cout<<"=========================================================="<<endl;
	cout<<"                  ATM Bank UNTAG"<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"Masukkan Renening Tujuan :";
	getline(cin,no);
	for(i=0;i<k;i++){
		if(no==datanas[i].rek){
			ketemu=1;
			cout<<"Masukkan Jumlah Uang :Rp."; 
			cin>>transfer;
			datanas[i].saldo=datanas[i].saldo+transfer;
		}
	}
	if(ketemu==0){
		cout<<"No Rekening Tidak Ada"<<endl;
	}
	datanas[i].saldo=datanas[i].saldo-transfer;
	cout<<fixed;
	cout<<setprecision(0);
	cout<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"No Rekening :"<<no<<endl;
	cout<<"Jumlah Transfer Rp."<<transfer<<endl;
	cout<<"===================================="<<endl;
	cout<<"Sisa Saldo Anda Rp."<<datanas[i].saldo<<endl;
	cout<<"===================================="<<endl;
	getch();
}

void setor(int k){
	float setor;
	system("cls");
	cout<<"=========================================================="<<endl;
	cout<<"                  ATM Bank UNTAG"<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"Masukkan Nominal Setor Rp.";
	cin>>setor;
	datanas[i].saldo=datanas[i].saldo+setor;
	cout<<"Saldo Anda Rp."<<datanas[i].saldo<<endl;
	cout<<"===================================="<<endl;
	getch();
}

void ubah (int k){
	string crs,ganti;
	system("cls");
	cout<<"__________________________________________________________"<<endl;
	cout<<"                       Bank Kematian                      "<<endl;
	gotoxy(25,i+2);cout<<datanas[i].nama<<endl;
	cout<<"__________________________________________________________"<<endl<<endl;
	cout<<"Yakin Ubah Pin ? "<<endl;
	cout<<"Tekan Y/T : ";
	getline(cin,crs);
	if(crs=="Y"||crs=="y"){
		cout<<endl;
		cout<<"Masukkan Pin Baru : ";
		getline(cin,ganti);
		datanas[i].pin=ganti;
		cout<<"Pin Telah Di Ubah"<<endl;	
	}
	else if(crs=="T"||crs=="t"){
		cout<<"Pin Tidak Jadi Di Ubah"<<endl;
	}
	getch();
}

int main(){
	string pinadmin;
	string admin;
	string pin;
	string rek,alamat;
	string edit, cari, nama, pilih;
	string ulang, yes;
	
	menu :
		system("cls");
		cout<<"Pilih Menu :"<<endl;
		cout<<"1. Login Admin"<<endl;
		cout<<"2. Login Nasabah"<<endl;
		cout<<"3. Keluar"<<endl;
		cout<<"Masukan yang dipilih = "; getline(cin, milih);
		if(milih=="1"){
			goto login;
		}
		else if(milih=="2"){
			goto nasabah;
		}
		else if(milih=="3"){
			exit(0);
		}
		getch();
		login:
		system("cls");
		cout<<"========================="<<endl;
		cout<<"       Menu login        "<<endl;
		cout<<"         Admin           "<<endl;
		cout<<"========================="<<endl;
		cout<<"Masukkan No Rekening Anda  : ";
		getline(cin, cari);
		if(cari == "admin"){
			cout<<"Masukkan Pin Anda          : ";
			getline(cin, cari);
			if(cari == "pin"){
				admin :
					ketemu=1;
					system("cls");
					cout<<"========================="<<endl;
					cout<<"       Menu Utama        "<<endl;
					cout<<"         Admin           "<<endl;
					cout<<"========================="<<endl;
					cout<<"1. Daftar Data Nasabah"<<endl;
					cout<<"2. Lihat Data Nasabah"<<endl;
					cout<<"3. Edit Data Nasabah"<<endl;
					cout<<"4. Cari Data Nasabah"<<endl;
					cout<<"5. Hapus Data Nasabah"<<endl;
					cout<<"6. Keluar"<<endl;
					cout<<"========================="<<endl;
					cout<<"Pilihan ? = ";
					getline(cin, pilih);
					if(pilih=="1"){
						tambah :
							system("cls");
							cout<<endl;
							cout<<"==++Pendaftaran Nasabah Baru++=="<<endl;
							cout<<"1. No Rekening    : ";
							getline(cin, datanas[i].rek);
							cout<<"2. Nama Nasabah   : ";
							getline(cin, datanas[i].nama);
							cout<<"3. Pin Nasabah    : ";
							getline(cin, datanas[i].pin);
							cout<<"3. Alamat Nasabah : ";
							getline(cin, datanas[i].alamat);
							cout<<"Saldo Awal Anda : Rp. 100.000"<<endl;
							datanas[i].saldo = 100000;
							datanas[i].status="Aktif";
							i++;
							k=i;
							cout<<"Lagi y/t=";
							getline(cin, yes);
							if(yes=="y"||yes=="Y"){
								goto tambah;
							}
							else if(yes=="t"||yes=="T"){
								goto admin;
							}
					}
					if(pilih=="2"){
						system("cls");
						if(k==0){
							cout<<"Data Masih Kosong";
							getch();
						}
						else{
							cout<<" No  No Rekening        Nama                 Alamat         Saldo          Status           "<<endl;
							cout<<"---------------------------------------------------------------------------------";
							for(i=0; i<k; i++){
								gotoxy(1, i+3);cout<<i+1;
								gotoxy(5, i+3);cout<<datanas[i].rek;
								gotoxy(24, i+3);cout<<datanas[i].nama;
								gotoxy(45, i+3);cout<<datanas[i].alamat;
								gotoxy(60, i+3);cout<<datanas[i].saldo;
								gotoxy(75, i+3);cout<<datanas[i].status;
								cout<<endl;
							}
							getch();
						}
						goto admin;
					}
					if(pilih=="3"){
						edit :
							int ketemu = 0;
							system("cls");
    						if (k==0){
        						cout<<"Data Kosong";
        						getch();
							}	
        					else{
        						cout<<"Masukan No Rekening Yang Di Edit = ";
        						getline(cin, edit);
    							for(i=0;i<k;i++){
    								if (datanas[i].rek == edit){
										ketemu=1;		
										cout<<" No  No Rekening        Nama                 Alamat         Saldo          Status           "<<endl;
										cout<<"---------------------------------------------------------------------------------";
										gotoxy(1, i+3);cout<<i+1;
										gotoxy(5, i+3);cout<<datanas[i].rek;
										gotoxy(24, i+3);cout<<datanas[i].nama;
										gotoxy(45, i+3);cout<<datanas[i].alamat;
										gotoxy(60, i+3);cout<<datanas[i].saldo;
										gotoxy(75, i+3);cout<<datanas[i].status;
										cout<<endl;
										while(pilih != "4"){
											cout<<endl;
											cout<<"Pilih menu yang akan diedit :"<<endl;
											cout<<"1. No Rekening  "<<endl;
											cout<<"2. Nama Nasabah "<<endl;
											cout<<"3. Alamat Nasabah"<<endl;
											cout<<"4. Selesai"<<endl;
											cout<<"Pilih   : "; 
											getline(cin, pilih);
											if(pilih=="1"){
							    				cout<<"No Rekening  : ";
							    				getline(cin, rek);
							    				datanas[i].rek = rek;
												cout<<"Data Telah Di Edit" ;
											}
											if(pilih=="2"){
							    				cout<<"Nama Nasabah : ";
							    				getline(cin, nama);
							    				datanas[i].nama = nama;
												cout<<"Data Telah Di Edit" ;
											}
											if(pilih=="3"){
							    				cout<<"Alamat Nasabah : ";
							    				getline(cin, alamat);
							    				datanas[i].alamat = alamat;
												cout<<"Data Telah Di Edit" ;
											}
											if(pilih=="4"){
							    				cout<<"Selesai";{
							    				goto admin;}
											}
						    			}
									}				
    							}
    							if (ketemu==0){
									cout<<"Data Tidak Ditemukan!!!";
								}
    							cout<<endl;
								cout<<"Lagi y/t=";getline(cin, yes);
								if(yes=="y"||yes=="Y"){
									goto edit;
								}
								else if(yes=="t"||yes=="T"){
									goto admin;
								}
							}
					}
					if(pilih=="4"){
						cari :
							int ketemu = 0;
							system("cls");
							cout<<"Masukkan No Rekening    :";
							getline(cin, cari);
							for(i=0;i<k;i++){
								if(cari==datanas[i].rek){
									ketemu=1;
									cout<<" No  No Rekening        Nama                 Alamat         Saldo          Status           "<<endl;
									cout<<"---------------------------------------------------------------------------------";
									gotoxy(1, i+3);cout<<i+1;
									gotoxy(5, i+3);cout<<datanas[i].rek;
									gotoxy(24, i+3);cout<<datanas[i].nama;
									gotoxy(45, i+3);cout<<datanas[i].alamat;
									gotoxy(60, i+3);cout<<datanas[i].saldo;
									gotoxy(75, i+3);cout<<datanas[i].status;
									cout<<endl;	
								}
							}
							if (ketemu==0){
								cout<<"Data Tidak Ditemukan!!!";
							}
				  			cout<<endl;
							cout<<"Lagi y/t=";getline(cin, yes);
							if(yes=="y"||yes=="Y"){
								goto cari;
							}
							else if(yes=="t"||yes=="T"){
								goto admin;
							}
					}
					if(pilih=="5"){
						string hapus,ulang;
						if(k==0){
							cout<<"Data Nasabah Kosong"<<endl;
						}
						else{
							hapus:
							system("cls");
							cout<<"__________________________________________________________"<<endl;
							cout<<"Masukan No Rekening Nasabah Yang Di Edit : ";
	    					getline(cin,hapus);
	    					for(i=0;i<k;i++){
								if(hapus==datanas[i].rek){
									ketemu=1;
									cout<<" No  No Rekening        Nama                 Alamat         Saldo          Status           "<<endl;
									cout<<"---------------------------------------------------------------------------------";
									gotoxy(1, i+3);cout<<i+1;
									gotoxy(5, i+3);cout<<datanas[i].rek;
									gotoxy(24, i+3);cout<<datanas[i].nama;
									gotoxy(45, i+3);cout<<datanas[i].alamat;
									gotoxy(60, i+3);cout<<datanas[i].saldo;
									gotoxy(75, i+3);cout<<datanas[i].status;		
									cout<<endl<<endl;
									cout<<"Yakin Menghapus Data Ini ?"<<endl;
									cout<<"Tekan Y/T : ";
									getline(cin,hapus);
									if(hapus=="Y"||hapus=="y")
									datanas[i].status="Non Aktif";		
								}
							}	
							if(hapus=="Y"||hapus=="y"){
								cout<<"Data Nasabah telah dihapus"<<endl ;
							}
							if(hapus=="T"||hapus=="t"){
								cout<<"Data Nasabah tidak jadi dihapus"<<endl;
							}
							cout<<"__________________________________________________________"<<endl;
							cout<<"Lagi y/t : ";getline(cin,ulang);
							if(ulang == "y" || ulang == "Y"){
								goto hapus;
							}
							else if(ulang == "t" || ulang == "T"){
								goto admin;
							}		
						}
					}
					if(pilih=="6"){
						goto menu;
					}	
			}
			else if(pin!="pin"){
				cout<<endl;
				cout<<"----------------------"<<endl;
				cout<<"Pin Anda Salah"<<endl;
				cout<<"----------------------"<<endl<<endl;
				getch();
				goto login;
			}
		}
		else if(admin!="admin"){
			cout<<endl;
			cout<<"----------------------"<<endl;
			cout<<"Rekening Anda Salah"<<endl;
			cout<<"----------------------"<<endl<<endl;
			getch();
			goto login;
		}
	nasabah :
		int ketemu=0;
		string memilih;
		system("cls");
		cout<<"========================="<<endl;
		cout<<"       Menu login        "<<endl;
		cout<<"         Nasabah         "<<endl;
		cout<<"========================="<<endl;
		cout<<"Masukkan No Rekening Anda  : ";
		getline(cin, cari);
		for(i=0;i<k;i++){
			if(datanas[i].rek == cari){
				cout<<"Masukkan Pin Anda          : ";
				getline(cin, cari);
				if(datanas[i].pin == cari){
					while(milih != "5"){
						info :
							ketemu=1;
							system("cls");
							cout<<"=========================================================="<<endl;
							cout<<"                  ATM Bank UNTAG"<<endl;
							cout<<"=========================================================="<<endl;
							cout<<"===================================="<<endl;
							cout<<"1. Cek Saldo"<<endl;
							cout<<"2. Penarikan Uang Tunai"<<endl;
							cout<<"3. Transfer Uang"<<endl;
							cout<<"4. Setor Tunai"<<endl;
							cout<<"5. Ubah Pin"<<endl;
							cout<<"6. Keluar"<<endl;
							cout<<"===================================="<<endl;
							cout<<"Masukkan Pilihan Anda :";
							getline(cin,memilih);
							cout<<"===================================="<<endl;
							if(memilih=="1")
							saldo(i);
							if(memilih=="2")
							tarik(i);
							if(memilih=="3")
							transfer(i);
							if(memilih=="4")
							setor(i);
							if(memilih=="5")
							ubah(i);
							if(memilih=="6"){
							goto menu;
							}
					}
				}
				else if(ketemu==0){
					cout<<"Pin Anda Salah"<<endl;
					getch();
					goto nasabah;
				}
			}
		}
		if(ketemu==0){
			cout<<"Rekening Anda Salah"<<endl;
			getch();
			goto nasabah;
		}
	return 0;
}
