#include <windows.h>

void menu();
void menuSimpan();
void pesanPilihanMenu();
void menuBantuan();
void menuExit();

void menu() {
	system("cls");
	printf("~~~~~~~~~~~~~~ Self Financial Management System ~~~~~~~~~~~~~~\n\n");
  	printf("-=-=-=-=-=-=-=-=- Tampilan Menu -=-=-=-=-=-=-=-=-\n");
  	printf("1. Masukan Data Minggu Baru\n");
  	printf("2. Lihat Data Finansialku\n");
  	printf("3. Lihat kondisi keuanganku\n");
  	printf("4. Kalkulator Investasi\n");
  	printf("5. Bantuan\n");
  	printf("6. Simpan Data\n");
  	printf("7. Keluar dari program\n");
  	printf("-=-=-=-=-=-=-=-=- Tampilan Menu -=-=-=-=-=-=-=-=-\n");
}
//void errorMsg(int param) {
//  if (param == 1) {
//    printf("Error: Terjadi kesalahan pada input pilihan!\n");
//  }
//}

void menuSimpan() {
  printf("\n");
  printf("*********************************************\n");
  printf("\n");
  printf("Apakah Anda ingin menyimpan data Anda?\n");
  printf("\n");
  printf("*********************************************\n");
}

void pesanPilihanMenu() {
  printf("\n");
  printf("Masukkan pilihan menu: ");
}

void menuBantuan(){
	system("cls");
	printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n\n");
	printf("Program ini adalah sebuah program yang berjudul Self Financial Management System.\n");
	printf("Program ini dapat men-track segala kegiatan finansial anda.\n");
	printf("Pada pilihan menu pertama user diminta untuk memasukkan data finansial anda yang nanti akan tersimpan didalam sistem.\n");
	printf("Pada menu kedua user dapat melihat data finansial yang dimiliki oleh user.\n");
	printf("Pada pilihan menu ketiga user dapat melihat kondisi finansial yang dimiliki user.\n");
	printf("Pada pilihan keempat user dapat menggunakan kalkulator investasi untuk memperkirakan hasil investasinya.\n");
	printf("Pada menu kelima user dapat melihat help menu yang membantu menjelaskan cara menggunakan program ini.\n");
	printf("Pada menu keenam user dapat menyimpan data yang telah diinputkan.");
	printf("Pada pilihan menu terakhir user dapat keluar dari program ini.\n");
	printf("\n=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n\n");
	printf("\n\n\npress any key to continue...\n");
	getch();
	system("cls");
}

void menuExit(){
	system("cls");
		printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");
		printf("\n~~~~~~~~~~~~~~~~~ Terimakasih telah menggunakan program ini, and as always take care ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		printf("~~~~~~~~~~ This program was made by : Josephus Daniel Andrew Roong dan Kemas Rafly Omar Thoriq ~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n\n");
		system("pause");
	system("cls");
}

void menuSorting() {
	system("cls");
	
	printf("\n");
	printf("Silahkan memilih metode pencarian data finansial:\n");
	printf("1. Tampilkan semua data finansial\n");
	printf("2. Tampilkan berdasarkan urutan\n");
	printf("3. Cari berdasarkan nama bulan\n");
	printf("\n");
	
}

void menuJenisSorting() {
	printf("\n");
	printf("Silahkan memilih jenis pengurutan: \n");
	printf("1. Pengeluaran Terbesar ke terkecil\n");
	printf("2. Pemasukan Terbesar ke terkecil\n");
	printf("\n");
}

void menuKalkulatorInvestasi() { 
	printf("\n");
	printf("Silahkan masukkan harapan return(dalam persen): \n");
	printf("dan durasi investasi (tahun) secara berturut-urut: ");
	printf("\n");
}
