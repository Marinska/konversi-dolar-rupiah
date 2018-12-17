#include <stdio.h>
int main()
{
	float rupiah,dolar;
	dolar=15180.25;
	printf("Masukan nilai rupiah : ");
	scanf("%f",&rupiah);
	printf("Nilai Rp%.0f sama dengan %.2f$",rupiah,rupiah/dolar);
}
