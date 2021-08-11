#include <stdio.h>
#include <conio.h>

int main(){
	int liter, harga;
	
	printf("masukan jumlah liter : ");
	scanf("%d", &liter);
	
	if (liter <= 25){
		harga = liter * 500;
		printf("total harga : %d", harga);
	}else if (liter >= 26 && liter <= 50){
		harga = liter * 480;
		printf("total harga : %d", harga);
	}else if (liter >= 51 && liter <= 99){
		harga = liter * 460;
		printf("total harga : %d", harga);
	}else if (liter >= 100){
		harga = liter * 500;
		printf("total harga : %d", harga);
	}else{
		printf("Masukan data yang benar!");
	}
	
	return 0;
}
