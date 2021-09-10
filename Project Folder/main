/* Proyek Tengah Semester
Kelompok = 3
Anggota =	Josephus Daniel Andrew Roong (2006577284)
			Kemas Rafly Omar Thoriq (2006577422)
Judul Program = Self Financial Management System
Tanggal Rev = 8 April 2021 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"
#include "functions.h"

struct dataBulanan {
    char bulan[20];
    double totalPemasukan;
    double totalPengeluaran;
    int urutan;
};

struct detailFinansial {
    double biayaMakan;
    double biayaOperasional;
    double biayaFix;
    double biayaMisc;

    double gaji;
    double investasi;
    double sideHustle;
};

int main(void) {
    int loop = 0, counterBulan = 0, saved = 0, pilihan;
  
    do {
      menu();
      pesanPilihanMenu(); scanf("%d", &pilihan);
      
      // Assign jumlah size struct sebesar 12
      struct dataBulanan dataBulan[12];
      struct detailFinansial dataFinansial[12];
	  
        if (pilihan == 1) {
        	system("cls");
            int i;
	  		
	  		// Input Data yang diperlukan sesuai dengan struct yang dideklarasikan
	    		printf("Masukkan nama bulan: "); scanf("%20s", dataBulan[counterBulan].bulan);
	    		printf("\n");
					printf("\n=~=~=~=~=~= Pemasukkan =~=~=~=~=~=\n");
	        printf("Masukkan Gaji: "); scanf("%lf", &dataFinansial[counterBulan].gaji);
	        printf("Masukkan Pemasukkan Sampingan: "); scanf("%lf", &dataFinansial[counterBulan].sideHustle);
	        printf("\n=~=~=~=~=~= Pengeluaran =~=~=~=~=~=\n");
	        printf("\n");
	        double biayaMakan;
	        printf("Masukkan Biaya Makanan 1x/makan: "); scanf("%lf", &biayaMakan);
	        dataFinansial[counterBulan].biayaMakan = 30 * 2 * biayaMakan;
	        printf("Masukkan Total Biaya Operasional (tranportasi, internet, parkir, pulsa) : "); scanf("%lf", &dataFinansial[counterBulan].biayaOperasional);
	        printf("Masukkan Biaya Fix kos, subscription (Spotify, Netflix, Disney+, dll: "); scanf("%lf", &dataFinansial[counterBulan].biayaFix);
	        printf("Masukkan Biaya Tambahan: "); scanf("%lf", &dataFinansial[counterBulan].biayaMisc);
	        
	      	
	      	
	      	// Menghitung total pengeluaran dengan menggunakan fungsi dari file header
	        dataBulan[counterBulan].totalPengeluaran = hitungJumlahPengeluaran(dataFinansial[counterBulan].biayaMakan, 
				dataFinansial[counterBulan].biayaOperasional, dataFinansial[counterBulan].biayaFix, dataFinansial[counterBulan].biayaMisc);
			
			// Menghitung total pemasukan dengan menggunakan fungsi dari file header
	        dataBulan[counterBulan].totalPemasukan = hitungJumlahPemasukan(dataFinansial[counterBulan].gaji, 
				dataFinansial[counterBulan].sideHustle);
			
			//Mendeklarasikan urutan menjadi 0 untuk disorting nanti
			dataBulan[counterBulan].urutan = 0;
	
	        counterBulan++;
        } else if (pilihan == 2) {
        	// Error Handling: Jika belum ada data yang tersimpan dari struct, cegah user untuk melihat data
        	if (counterBulan != 0) {
			
	      	    menuSorting();
		        int choice;
		        printf("Masukan pilihan sorting: "); scanf("%d", &choice);
		      	
		      	// Tampilkan data keseluruhan tanpa sorting / searching
		      	if (choice == 1) {
				    int i;
				    printf("Menampilkan data keseluruhan . . . ");
				    printf("\n");
				    system("pause");
				    system("cls");
				    
				    for (i = 0; i < counterBulan; ++i) {
				    	printf("\n-=-=-=-=-=-=-=-=-=-=-=- Data Bulan %s -=-=-=-=-=-=-=-=-=-=-=-\n", dataBulan[i].bulan);
							printf("Pemasukan\n");
				    	printf("Gaji (per bulan)\t\t: Rp %.2lf\n", dataFinansial[i].gaji);
				    	printf("Sampingan\t\t\t: Rp %.2lf\n", dataFinansial[i].sideHustle);
				    	printf("Pengeluaran\n");
				    	printf("Biaya Makan (1x/hari)\t\t: Rp %.2lf\n", dataFinansial[i].biayaMakan);
				    	printf("Biaya Operasional\t\t: Rp %.2lf\n", dataFinansial[i].biayaOperasional);
				    	printf("Biaya Fix\t\t\t: Rp %.2lf\n", dataFinansial[i].biayaFix);
				    	printf("Biaya Tambahan\t\t\t: Rp %.2lf\n", dataFinansial[i].biayaMisc);
				    	printf("\n");			    	
				    	
				    	printf("\nTotal Pengeluaran dan Pemasukan\n");
				    	printf("Pemasukan\t\t\t: Rp %.2lf\n", dataBulan[i].totalPemasukan);
				    	printf("Pengeluaran\t\t\t: Rp %.2lf\n", dataBulan[i].totalPengeluaran);
				    	
				    	double temp;
							temp = dataBulan[i].totalPemasukan - dataBulan[i].totalPengeluaran;
						
						// Menentukan kondisi finansial pada bulan tertentu
						if (temp > 0) {
							printf("Kondisi finansial pada bulan %s adalah surplus.\n", dataBulan[i].bulan);
						} else if (temp < 0){
							printf("Kondisi finansial pada bulan %s adalah defisit.\n", dataBulan[i].bulan);
						} else if (temp == 0) {
							printf("Kondisi finansial pada bulan %s adalah sama (setara).\n", dataBulan[i].bulan);
						}
					}
		      		
		      		printf("\n");
		      		system("pause");
		      		
		      		// Menampilkan data berdasarkan sorting (pengurutan)
		      	} else if (choice == 2) {
		      		system("cls");
					int menu;
					
					menuJenisSorting();
					scanf("%d", &menu);
					
					if (menu == 1) {
						int i, j;
						// Menentukan urutan dari struct berdasarkan total pengeluaran (semakin besar pengeluaran urutan semakin tinggi)
						for (i = 0; i < counterBulan; ++i) {
							int currentPos = 0;
							for (j = 0; j < counterBulan; ++j) {
								if (dataBulan[j].totalPengeluaran > dataBulan[i].totalPengeluaran) {
									currentPos++;
								} else if (dataBulan[j].totalPengeluaran == dataBulan[i].totalPengeluaran) {
									if (j < i) {
										currentPos++;
									}
								}
							}
							dataBulan[i].urutan = currentPos + 1;
						}
						
						printf("Anda memilih menampilkan data berdasarkan pengeluaran terbesar ke terkecil . . . \n");
						
						//Printing nilai setelah disorting
						for (i = 0; i < counterBulan; ++i) {
							for (j = 0; j < counterBulan; ++j) {
								if (dataBulan[j].urutan == i + 1) {
									printf("\n-=-=-=-=-=-=-=-=-=-=-=- Data Bulan %s -=-=-=-=-=-=-=-=-=-=-=-\n", dataBulan[j].bulan);
									printf("Total Pengeluaran: Rp %.2lf\n", dataBulan[j].totalPengeluaran);
								}
							}
						}
						
						printf("\n");						
						system("pause");
					} else if (menu == 2) {
						int i, j;
						
						// Menentukan urutan dari struct berdasarkan total pemasukan (semakin besar pemasukan urutan semakin tinggi)
						for (i = 0; i < counterBulan; ++i) {
							int currentPos = 0;
							for (j = 0; j < counterBulan; ++j) {
								if (dataBulan[j].totalPemasukan > dataBulan[i].totalPemasukan) {
									currentPos++;
								} else if (dataBulan[j].totalPemasukan == dataBulan[i].totalPemasukan) {
									if (j < i) {
										currentPos++;
									}
								}
							}
							dataBulan[i].urutan = currentPos + 1;
						}
						
						printf("Anda memilih menampilkan data berdasarkan pemasukan terbesar ke terkecil . . . \n");
						
						//Printing nilai setelah disorting
						for (i = 0; i < counterBulan; ++i) {
							for (j = 0; j < counterBulan; ++j) {
								if (dataBulan[j].urutan == i + 1) {
									printf("\n-=-=-=-=-=-=-=-=-=-=-=- Data Bulan %s -=-=-=-=-=-=-=-=-=-=-=-\n", dataBulan[j].bulan);
									printf("Total Pemasukan: Rp %.2lf\n", dataBulan[j].totalPemasukan);
								}
							}
						}
						
						printf("\n");						
						system("pause");
					} else {
						printf("\nError: Pilihan yang Anda pilih invalid!\n");
					}
		        } else if (choice == 3) {
					
		       		char input[20];
		      	
		      		printf("Masukkan bulan yang ingin dicari: "); scanf("%s", input);
		      		
		      		int i;	
		      		// searching secara linear buat cari bulan
		      		for (i = 0; i < counterBulan; ++i) {
		      	    	if (strcmpi(input, dataBulan[i].bulan) == 0) {
		      	    		
		      	    		// Printing keluaran jika data ditemukan
		      	    		printf("\n-=-=-=-=-=-=-=-=-=-=-=- Data Bulan %s -=-=-=-=-=-=-=-=-=-=-=-\n", dataBulan[i].bulan);
										printf("Pemasukan\n");
					    			printf("Gaji (per bulan)\t\t: Rp %.2lf\n", dataFinansial[i].gaji);
					    			printf("Sampingan\t\t\t: Rp %.2lf\n", dataFinansial[i].sideHustle);
					    			printf("\n");
					    			printf("Pengeluaran\n");
					    			printf("Biaya Makan (1x/hari)\t\t: Rp %.2lf\n", dataFinansial[i].biayaMakan);
					    			printf("Biaya Operasional\t\t: Rp %.2lf\n", dataFinansial[i].biayaOperasional);
					    			printf("Biaya Fix\t\t\t: Rp %.2lf\n", dataFinansial[i].biayaFix);
					    			printf("Biaya Tambahan\t\t\t: Rp %.2lf\n", dataFinansial[i].biayaMisc);
					    			
					    			printf("\nTotal Pengeluaran dan Pemasukan\n");
					    			printf("Pemasukan\t\t\t: Rp %.2lf\n", dataBulan[i].totalPemasukan);
					    			printf("Pengeluaran\t\t\t: Rp %.2lf\n", dataBulan[i].totalPengeluaran);
					    	
					    			double temp;
										temp = dataBulan[i].totalPemasukan - dataBulan[i].totalPengeluaran;
							
							if (temp > 0) {
								printf("Kondisi finansial pada bulan %s adalah surplus.\n", dataBulan[i].bulan);
							} else if (temp < 0){
								printf("Kondisi finansial pada bulan %s adalah defisit.\n", dataBulan[i].bulan);
							} else if (temp == 0) {
								printf("Kondisi finansial pada bulan %s adalah sama (setara).\n", dataBulan[i].bulan);
							}
							break;
						}
					}
					
					// Jika data tidak ditemukan, beritahu user
					if (i == counterBulan) {
						printf("Error: Data %s tidak berhasil ditemukan!\n", input);
					}
					printf("\n");
					system("pause");
				}
			
				// jika tidak ada data yang tersedia, beritahu user
			} else {
				printf("\nError: Belum ada data yang tercatat! Silahkan mengisi data terlebih dahulu.\n");
				system("pause");
			}
				
    	} else if (pilihan == 3) {
    		// Error Handling: Jika belum ada data yang tersimpan dari struct, cegah user untuk melihat data
  			if (counterBulan != 0) {
  				printf("Data tersedia untuk bulan:\n");
  				
  				int i, choice;
  				for (i = 0; i < counterBulan; ++i) {
  					printf("%d. %s\n", i + 1, dataBulan[i].bulan);
				}
				char input[20];
				printf("Silahkan memilih bulan yang ingin dilihat: "); scanf("%s", input);
				
				for (i = 0; i < counterBulan; ++i) {
  					if ((strcmpi(input, dataBulan[i].bulan) == 0) || (atoi(input)-1 == i)) {
  						// Printing data input untuk perhitungan tabungan
  						printf("Menampilkan data untuk bulan: %s\n", dataBulan[i].bulan);
  						printf("\nTotal Pengeluaran dan Pemasukan\n");
				    	printf("Pemasukan\t\t\t: Rp %.2lf\n", dataBulan[i].totalPemasukan);
				    	printf("Pengeluaran\t\t\t: Rp %.2lf\n", dataBulan[i].totalPengeluaran);
				    	
				    	double pemasukanBersih = 0, tPemasukan, tPengeluaran;
				    	tPemasukan = dataBulan[i].totalPemasukan;
				    	tPengeluaran = dataBulan[i].totalPengeluaran;
				    	pemasukanBersih = tPemasukan - tPengeluaran;
				    	
				    	// Melihat jumlah yang sebaiknya ditabungkan apabila pemasukan melebihi pengeluaran
				    	if (pemasukanBersih > 0) {
				    		double jumlahTabungan = 0;
				    		jumlahTabungan = 0.2 * pemasukanBersih;
				    		printf("Jumlah uang yang sebaiknya ditabungkan adalah Rp %.2lf\n", jumlahTabungan);
              			}
              			if (pemasukanBersih > 0){
				    		double jumlahDanaDarurat = 0;
				    		jumlahDanaDarurat = 0.1 * pemasukanBersih;
				    		printf("Jumlah uang yang sebaiknya dijadikan dana darurat adalah Rp %.2lf\n", jumlahDanaDarurat);
						}
						if (pemasukanBersih > 0){
							double duitInvestasi = 0;
							duitInvestasi = 0.2 * pemasukanBersih;
							dataFinansial[i].investasi = duitInvestasi;
							printf("Jumlah uang yang sebaiknya diinvestasikan adalah Rp %.2lf\n", duitInvestasi);
						}
						if (pemasukanBersih > 0){
							double danaHarian = 0;
							danaHarian = 0.5 * pemasukanBersih;
							printf("Jumlah uang yang bisa digunakan untuk kebutuhan sehari-hari adalah Rp %.2lf\n", danaHarian);
						}
				    		
						else {
							printf("Note: Pengeluaran Anda bulan ini lebih besar, tidak dapat menghitung uang yang ditabungkan!\n");
						}
						break;
					}
				}
				
				if (i == counterBulan) {
					printf("Error: Data %s tidak berhasil ditemukan!\n", input);
				}
				
				printf("\n");
				system("pause");
			} else {
				printf("\nBelum ada data yang tercatat! Silahkan mengisi data terlebih dahulu.\n");
				system("pause");
			}
			
		} else if (pilihan == 4) {
			
			//Fitur untuk menghitung compounding interest dalam jangka waktu tertentu dan return tertentu
			if (counterBulan != 0) {
  				printf("Data tersedia untuk bulan:\n");
  				
  				int i, choice;
  				double hasilInvestasi, returnInvestasi;
  				int durasiInvestasi;
  				for (i = 0; i < counterBulan; ++i) {
  					printf("%d. %s\n", i + 1, dataBulan[i].bulan);
				}
				char input[20];
				printf("Silahkan memilih bulan yang ingin dilihat: "); scanf("%s", input);
				
				for (i = 0; i < counterBulan; ++i) {
  					if ((strcmpi(input, dataBulan[i].bulan) == 0) || (atoi(input)-1 == i)) {
  						system("cls");
  						printf("Menampilkan data untuk bulan: %s\n", dataBulan[i].bulan);
	  					printf("Duit yang akan diinvestasikan : Rp %.2lf\n", dataFinansial[i].investasi);
	  					menuKalkulatorInvestasi();
		  				scanf("%lf", &returnInvestasi);
		  				scanf("%d", &durasiInvestasi);
		  				hasilInvestasi = perhitunganInvestasi(dataFinansial[i].investasi, returnInvestasi, durasiInvestasi);
		  				printf("Hasil perkiraan investasi anda adalah: Rp %.2lf \n", hasilInvestasi);
		  				break;
					}
				}
			}
  			system("pause");
  			
		} else if (pilihan == 5) {
			menuBantuan();
			
		} else if (pilihan == 6) {
			
			// Menyimpan data yang tersimpan dalam structure ke sebuah file exterrnal program
			if (counterBulan != 0) { 										// Error Handling: Jika belum ada data yang tersimpan dari struct, cegah user untuk menyimpan data
				FILE *pfile;
				
				pfile = fopen("dataFinansial.txt", "w");
				
				int i;
				if (pfile != NULL) {										// Error Handling: Jika file tidak ada maka jangan simpan data
					for (i = 0; i < counterBulan; ++i) {
						fprintf(pfile, "\n-=-=-=-=-=-=-=-=-=-=-=- Data Bulan %s -=-=-=-=-=-=-=-=-=-=-=-\n", dataBulan[i].bulan);
							fprintf(pfile, "Pemasukan\n");
				    	fprintf(pfile, "Gaji (per bulan)\t\t: Rp %.2lf\n", dataFinansial[i].gaji);
				    	fprintf(pfile, "Investasi\t\t\t: Rp %.2lf\n", dataFinansial[i].investasi);
				    	fprintf(pfile, "Sampingan\t\t\t: Rp %.2lf\n", dataFinansial[i].sideHustle);
				    	fprintf(pfile, "\n");
				    	fprintf(pfile, "Pengeluaran\n");
				    	fprintf(pfile, "Biaya Makan (1x/hari)\t\t: Rp %.2lf\n", dataFinansial[i].biayaMakan);
				    	fprintf(pfile, "Biaya Operasional\t\t: Rp %.2lf\n", dataFinansial[i].biayaOperasional);
				    	fprintf(pfile, "Biaya Fix\t\t\t: Rp %.2lf\n", dataFinansial[i].biayaFix);
				    	fprintf(pfile, "Biaya Tambahan\t\t\t: Rp %.2lf\n", dataFinansial[i].biayaMisc);
				    	
				    	fprintf(pfile, "\nTotal Pengeluaran dan Pemasukan\n");
				    	fprintf(pfile, "Pengeluaran\t\t\t: Rp %.2lf\n", dataBulan[i].totalPengeluaran);
				    	fprintf(pfile, "Pemasukan\t\t\t: Rp %.2lf\n", dataBulan[i].totalPemasukan);
				    	
				    	double temp;
						temp = dataBulan[i].totalPemasukan - dataBulan[i].totalPengeluaran;
						
						if (temp > 0) {
							fprintf(pfile, "Kondisi finansial pada bulan %s adalah surplus.\n", dataBulan[i].bulan);
						} else if (temp < 0) {
							fprintf(pfile, "Kondisi finansial pada bulan %s adalah defisit.\n", dataBulan[i].bulan);
						} else if (temp == 0) {
							fprintf(pfile, "Kondisi finansial pada bulan %s adalah sama (setara).\n", dataBulan[i].bulan);
						}
					}			
					fclose(pfile);											// Menutup file lagi sesuai dengan ketentuan C-programming agar tidak mengganggu program lainnya
					printf("\nSuccess: Data berhasil tersimpan!\n");
					saved = 1;
					system("pause");
				} else {
					printf("Error: FILE tidak berhasil dibuat, mohon ulangi program!\n");	
				}
			} else {
				printf("\nBelum ada data yang tercatat! Silahkan mengisi data terlebih dahulu.\n");
				system("pause");
			}
		} else if (pilihan == 7) {
			
			// Cek apakah user ingin keluar jika data yang dimasukkan belum tersimpan
			if ((saved == 0) && (counterBulan != 0)) {
				printf("Anda belum menyimpan data anda, Apakah Anda ingin melanjutkan? (Data yang tidak tersimpan akan hilang) [Ya/Tidak]\n");
				char answer[5];
				scanf("%s", answer);
				if (strcmpi(answer, "Ya") == 0) {
					menuExit();
  					loop = -1;
  					break;
				}
			} else {
				menuExit();
  				loop = -1;
  				break;
			}
		} else {
  			printf("\nError: Terjadi kesalahan pada input data!\n");
  			system("pause");
		}
  	} while (loop != -1);
  	
  	return 0;
}
