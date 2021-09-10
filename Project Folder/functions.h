#include <math.h>

double hitungJumlahPemasukan(double gaji, double sideHustle);
double hitungJumlahPengeluaran(double biayaMakan, double biayaOperasional, double biayaFix, double biayaMisc);
double hitungJumlahInvestasi(double nilai, float returnInvestasi);
double hitungHasilInvestasi(double danaInvestasi, float returnInvestasi, int jangkaWaktu);


// Fungsi untuk menghitung jumlah pemasukan
double hitungJumlahPemasukan(double gaji, double sideHustle){
  double jumlahPemasukan=0;
  jumlahPemasukan = gaji + sideHustle;
  return jumlahPemasukan;
}

// Fungsi untuk menghitung jumlah pengeluaran
double hitungJumlahPengeluaran(double biayaMakan, double biayaOperasional, double biayaFix, double biayaMisc){
  double jumlahPengeluaran=0;
  jumlahPengeluaran = biayaMakan + biayaOperasional + biayaFix + biayaMisc;
  return jumlahPengeluaran; 
}

//double hitungJumlahInvestasi(double nilai, float returnInvestasi) {
//  double jumlahInvestasi = 0;
//  return jumlahInvestasi = ((returnInvestasi / 100) * nilai) / 12;
//}

// Fungsi untuk compounding interest dalam jangka waktu tertentu
//double hitungHasilInvestasi(double danaInvestasi, float returnInvestasi, int jangkaWaktu) {
//  double hasilInvestasi;
//  float persentaseReturn;
//
//  persentaseReturn = returnInvestasi / 100;
//
//  hasilInvestasi = danaInvestasi * persentaseReturn * jangkaWaktu;
//
//  return hasilInvestasi;
//}

double perhitunganInvestasi(double uangInvestasi,double returnInvestasi,int durasiInvestasi){
	int i;
	double hasilPerhitungan, hasilTotal;
	hasilTotal = uangInvestasi * pow((1 + (returnInvestasi / 100)), durasiInvestasi);
	return hasilTotal;
}
