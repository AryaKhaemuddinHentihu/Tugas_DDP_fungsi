#include<iostream>
using namespace std;

int tambah(int a,int b){
	return a+b;
}

int kurang(int a,int b){
	return a-b;
}

int kali(int a,int b){
	return a*b;
}

float bagi(float a,float b){
	return a/b;
}

int mod(int a,int b){
	return a%b;
}

int main(){
	int menu;
	double a,b;
	char ulang;
	do{
		cout<<"==== KALKULATOR FUNGSI SEDERHANA ====\n";
		cout<<"1. Penjumlahan \n";
		cout<<"2. Pengurangan \n";
		cout<<"3. Perkalian \n";
		cout<<"4. Pembagian \n";
		cout<<"5. Modulus \n";
		cout<<"0. Keluar\n";
		cout<<endl;
		cout<<"Pilih menu (0/5) : ";
		cin>>menu;
		cout<<endl;
		system("cls");
		switch(menu){
			case 1:
				cout<<"=== PENJUMLAHAN ===\n";
				cout<<endl;
				cout<<"Masukan Angka Pertama : ";
				cin>>a;
				cout<<"Masukan Angka Kedua   : ";
				cin>>b;
				cout<<"==============================\n";
				cout<<"hasil dari "<<a<<" + "<<b<<" = "<<tambah(a,b);
				
				cout<<endl<<endl;
				cout<<"-------------------\n";
				cout<<"Apakah Ulang (y/n): ";
				cin>>ulang;
				
				system("cls");
				break;
			case 2:
				cout<<"=== PENGURANGAN ===\n";
				cout<<endl;
				cout<<"Masukan Angka Pertama : ";
				cin>>a;
				cout<<"Masukan Angka Kedua   : ";
				cin>>b;
				cout<<"==============================\n";
				cout<<"hasil dari "<<a<<" - "<<b<<" = "<<kurang(a,b);
				
				cout<<endl<<endl;
				cout<<"-------------------\n";
				cout<<"Apakah Ulang (y/n): ";
				cin>>ulang;
				
				system("cls");
				break;
			case 3:
				cout<<"=== PERKALIAN ===\n";
				cout<<endl;
				cout<<"Masukan Angka Pertama : ";
				cin>>a;
				cout<<"Masukan Angka Kedua   : ";
				cin>>b;
				cout<<"==============================\n";
				cout<<"hasil dari "<<a<<" * "<<b<<" = "<<kali(a,b);
				
				cout<<endl<<endl;
				cout<<"-------------------\n";
				cout<<"Apakah Ulang (y/n): ";
				cin>>ulang;
				
				system("cls");
				break;
			case 4:
				cout<<"=== PEMBAGIAN ===\n";
				cout<<endl;
				cout<<"Masukan Angka Pertama : ";
				cin>>a;
				cout<<"Masukan Angka Kedua   : ";
				cin>>b;
				cout<<"==============================\n";
				cout<<"hasil dari "<<a<<" / "<<b<<" = "<<bagi(a,b);
				
				cout<<endl<<endl;
				cout<<"-------------------\n";
				cout<<"Apakah Ulang (y/n): ";
				cin>>ulang;
				
				system("cls");
				break;
			case 5:
				cout<<"=== MODULUS ===\n";
				cout<<endl;
				cout<<"Masukan Angka Pertama : ";
				cin>>a;
				cout<<"Masukan Angka Kedua   : ";
				cin>>b;
				cout<<"==============================\n";
				cout<<"hasil dari "<<a<<" % "<<b<<" = "<<mod(a,b);
				
				cout<<endl<<endl;
				cout<<"-------------------\n";
				cout<<"Apakah Ulang (y/n): ";
				cin>>ulang;
				
				system("cls");
				
				break;
			case 0:
				
				ulang='n';
				
				break;
			default:
				cout<<"======= !WARNING! =======\n";
				cout<<"Maaf Input (0-5) dong kaka\n";
				cout<<"=========================\n";
				
				cout<<endl;
				cout<<"-------------------------\n";
				cout<<"Apakah Ulang (y/n): ";
				cin>>ulang;
				break;
		}
		if(ulang!='y'&&ulang!='n'){
			cout<<"==== !WARNING! ====\n";
			cout<<"Masukan (y/n) kakaaa\n";
			cout<<endl;
			cout<<"-------------------------\n";
			cout<<"Apakah Ulang (y/n): ";
			cin>>ulang;
			system("cls");
		}
	}while(ulang=='y');
	cout<<"=== TERIMA KASIH ===\n";	
		
	
	return 0;
}
