#include<iostream>
using namespace std;

int pangkat(int a,int b){
	if(b<=1){
		return a;
	}else{
		return a*pangkat(a,b-1);	
	}
}

int main(){
	int n,p;
	char ulang;
	
	do{
		cout<<"====== PERPANGKATAN ======\n";
		cout<<"Masukan Angkanya   : ";
		cin>>n;
		cout<<"Masukan pangkatnya : ";
		cin>>p;
		cout<<"==========================\n";
		cout<<"Hasil dari "<<n<<"^"<<p<<" = "<<pangkat(n,p)<<endl;
		
		cout<<endl;
		cout<<"--------------------------\n";
		cout<<"Apakah Ingin Mengulang (y/n) : ";
		cin>>ulang;
		system("cls");
		
		if(ulang!='y'&&ulang!='n'){
			do{
				cout<<"==== !WARNING! ====\n";
				cout<<"Masukan (y/n) kakaaa\n";
				cout<<endl;
				cout<<"-------------------------\n";
				cout<<"Apakah Ingin Mengulang (y/n): ";
				cin>>ulang;
				system("cls");
			}while(ulang!='n'&&ulang!='y');
		}
		
	}while(ulang=='y');
	cout<<"=== TERIMA KASIH ===\n";	
	
	return 0;
}
