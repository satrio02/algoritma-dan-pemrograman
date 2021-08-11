#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int i, nim[20], menu, ndata, hadir, tugas, quiz, uas;
	float nilaiAkhir;
	char nama[100], matkul[100], nilai;
	
	printf("========================[Selamat datang]========================\n");
	printf("Pilih Menu 1 untuk Input data Mahasiswa\n");
	printf("Pilih Menu 2 untuk Input data nilai Mahasiswa\n");
	printf("Pilih Menu 3 untuk melihat nilai akhir Mahasiswa\n");
	printf("Pilih Menu 4 untuk keluar dari program\n");
	printf("================================================================\n");
	
	printf("\nMasukan Pilihan anda : ");scanf("%d", &menu);
	switch (menu){
	case 1 :
		printf("Masukan jumlah data yang akan dimasukan : ");scanf("%d", &ndata);
		printf("\n----------------------------------------------------------------\n");
		for(i=1;i<=ndata;i++){
			printf("NIM 		: ");scanf("%d", &nim);fflush(stdin);
			printf("Nama Mahasiswa 	: ");scanf("%s", &nama);fflush(stdin);
			printf("Mata Kuliah  	: ");scanf("%s", &matkul);fflush(stdin);
			printf("----------------------------------------------------------------\n");
		}
	case 2 :
		printf("Masukan jumlah data yang akan dimasukan : ");scanf("%d", &ndata);
		for(i=1;i<=ndata;i++){
			printf("\nNilai kehadiran Mahasiswa 	: ");scanf("%d", &hadir);
			printf("Nilai Tugas Mahasiswa 		: ");scanf("%d", &tugas);
			printf("Nilai Quiz Mahasiswa 		: ");scanf("%d", &quiz);
			printf("Nilai UAS Mahasiswa 		: ");scanf("%d", &uas);
			printf("----------------------------------------------------------------\n");
		}
	case 3 :
		printf("Masukan NIM : ");scanf("%d", &nim);
		nilaiAkhir = (hadir * 0.1) + (tugas * 0.2) + (quiz * 0.1) + (uas * 0.5);
		if(nilaiAkhir == 100 && nilaiAkhir >= 90){
			printf("Nilai yang diperoleh : Grade A");
		}else if(nilaiAkhir <= 89 && nilaiAkhir >= 80){
			printf("Nilai yang diperoleh : Grade B");
		}else if(nilaiAkhir <= 79 && nilaiAkhir >= 70){
			printf("Nilai yang diperoleh : Grade C");
		}else if(nilaiAkhir <= 69 && nilaiAkhir >= 60){
			printf("Nilai yang diperoleh : Grade D");
		}else if(nilaiAkhir <= 59 && nilaiAkhir >= 60){
			printf("Nilai yang diperoleh : Grade E");
		}else{
			printf("NIM tidak ditemukan");
		}
		printf("Nilai yang didapat : %c", nilaiAkhir);
	case 4 :
		printf("\n=========================[Terimakasih]==========================");
		return 0;
	}	
	
	return 0;
}
