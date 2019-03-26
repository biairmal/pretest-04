/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Kelas	: A
Tanggal	: 26 Maret 2019
*/

#include <iostream>
using namespace std;

struct ElemtList{
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer list;

void createList(list& first);
void createElement(pointer& pBaru);
void insertSortNPM(list& first, pointer pBaru);
void traversal(list first);

main(){
	int menu;
	pointer baru;
	list first;
	createList(first);
	
	do{
		cout <<"1. Tambah Data\n2. Exit\n"; cin >> menu;
		switch(menu){
			case 1:
				createElement(baru);
				insertSortNPM(first, baru);
				traversal(first);
				break;
			case 2:
				
				break;
		}
	}while(menu!=2);
}

void createList(list& first){
	first = 0;
}

void createElement(pointer& pBaru){
	pBaru = new ElemtList;
	cout << endl;
	cout << "NPM\t: "; cin >> pBaru->npm;
	cout << "Nama\t: "; cin>> pBaru->nama;
	cout << "IPK\t: "; cin >> pBaru->ipk;
	pBaru->next = 0;
}

void insertSortNPM(list& first, pointer pBaru){
	pointer last;
	if (first == 0){
		pBaru = first;
	}
	else{
		last = first;
		while(last->next != 0){
			last=last->next;
		}
		last->next = pBaru;
	}
}

void traversal(list first){
	pointer  pBantu;
	pBantu = first;
	int i=1;
	cout <<"============================================================="<<endl;
	cout <<"No\tNPM\t\tNama\t\tIPK"<<endl;
	cout <<"-------------------------------------------------------------"<<endl;
	do{
		cout << i <<"\t"<< pBantu->npm <<'\t'<< pBantu->nama <<"\t\t"<< pBantu->ipk <<endl;
		pBantu = pBantu -> next;
		i++;
	}while(pBantu  != 0);
	cout <<"============================================================="<<endl;
}

