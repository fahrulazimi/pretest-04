/*
	Nama 	  : Muhamad Fahrul Azimi
	NPM		  : 140810180027
	Kelas	  : A
	Tanggal	  : 19 Maret 2019
*/

// nama file : pretest-04.cpp

#include<iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct ElemtList{
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First){
	First=NULL;
}

void createElemt(pointer& pBaru){
	pointer p;
	cout << "Input Data Mahasiswa :" <<endl;
	p = new ElemtList;
	cout << "NPM 	: "; cin >> p->npm;
	cout << "Nama 	: "; cin >> p->nama;
	cout << "IPK 	: "; cin >> p->ipk;
	
}

void insertSortNPM(List& First, pointer pBaru){
	pointer last;
    if (First==NULL){
        First=pBaru;
    }
    else{
        last=First;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=pBaru;
    }
}

void traversal(List First){
	pointer pB;
    cout<<"\tDAFTAR MAHASISWA\n";
    cout<<"     (NPM  NAMA  IPK)\n\n";
    if (First==NULL){
        cout<<"    ^^LIST MAHASISWA KOSONG^^\n";
    }
    else{
        pB=First;
        while(pB!=NULL){
            cout << pB->npm << " " << pB->nama << " " << pB->ipk <<endl;
            pB=pB->next;
        }
    }
}

int main(){
	pointer p;
	List First;
	int menu;
	createList(First);
	do{
		
		traversal(First);
		cout << "1. Tambah Data" <<endl;
		cout << "2. Keluar" <<endl;
		cout << "Pilih : "; cin >> menu;
		cout <<endl;
		switch (menu)
		{
			case 1:
			createElemt(p);
			insertSortNPM(First,p);
			break;
			
			case 2:
			cout << "^^Terima Kasih Telah Menggunakan Program Ini^^";
			break;
			
			default:
			cout << "^^ANGKA YANG ANDA INPUT SALAH^^" <<endl;
            cout << "^^Tekan <Enter> Untuk Mengulang^^";
            getch();
            break;
		}
	}while (menu!=2);
}
