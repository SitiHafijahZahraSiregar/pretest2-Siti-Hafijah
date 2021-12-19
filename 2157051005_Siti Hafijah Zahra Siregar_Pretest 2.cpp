#include <iostream>
using namespace std;

int main(){
	/* 
	Nama  : Siti Hafijah Zahra Siregar
	NPM   : 2157051005
	Kelas : B 
	*/
	
	//string//
	string tanggal_transaksi , bulan_transaksi , tahun_transaksi , jumlah_uang_rupiah , harga_per1_bitcoin ;
	
	//input//
	cout << "==================KONVERSI MATA UANG RUPIAH KE BITCOIN==================" << endl ;
	cout << "Masukan tanggal_transaksi : " ; cin >> tanggal_transaksi ;
	cout << "Masukan bulan_transaksi : " ; cin >> bulan_transaksi ;
	cout << "Masukan tahun_ transaksi : " ; cin>> tahun_transaksi ;
	
	cout << endl << endl ;
	
		
	float x,y ;
	
	cout<<"Masukan jumlah_uang_rupiah :" ; cin >> x ;
	cout<<"Masukan harga_per1_bitcoin :" ; cin >> y ;
	
	cout << endl << endl ;
	
    //output//
    cout << "==============================HASIL KONVERSI==============================" << endl ;
	cout << "Tanggal Transaksi : " << tanggal_transaksi<< " " << bulan_transaksi << " " << tahun_transaksi << endl ;
	cout << "Jumlah Bitcoin : " << x/y << endl ;
	
	return 0;
}
