#include <stdio.h>

int main (){
	
	int lebar, panjang;
	int hasil;
	
	printf("Masukan Nilai Lebar : ");
	scanf("%d", &lebar);
	printf("Masukan Nilai Panjang : ");
	scanf("%d", &panjang);
	
	if(lebar < panjang){
		printf("sebuah Persegi Panjang\n\n");
		hasil = panjang * lebar;
		printf("Memiliki luas : %d\n", hasil);
	}else if(lebar > panjang){
		printf("sebuah Persegi Panjang\n\n");
		hasil = panjang * lebar;
		printf("Memiliki luas : %d\n", hasil);
	}else if(panjang == lebar){
		printf("sebuah Persegi\n\n");
		hasil = panjang * lebar;
		printf("Memiliki luas : %d", hasil);
	}else{
		printf("\n\nData yang dimasukan salah!");
	}
	
	return 0;
}
