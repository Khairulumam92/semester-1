#include <stdio.h>

const double kambingJantan1 = 120.0;
const double kambingJantan2 = 85.8;
const double kambingBetina1 = 23.0;


int main()
{
	
	int sapiJantan1, sapiBetina2;
	float sapiJantan2, sapiBetina1;
	
	
	printf("Masukkan berat sapi 1:", sapiJantan1);
	scanf("%d", &sapiJantan1);
	
	printf("Masukkan berat sapi 2:", sapiJantan2);
	scanf("%lf", &sapiJantan2);
	
	printf("Masukkan berat sapi 3:", sapiBetina1);
	scanf("%lf", &sapiBetina1);
	
	printf("Masukkan berat sapi 4:", sapiBetina2);
	scanf("%d", &sapiBetina2);
	
	//float totalBerat = (sapiJantan1 + sapiBetina2 + sapiJantan2 + sapiBetina1)
	double totalBerat = sapiJantan1 + sapiBetina2 + sapiJantan2 + sapiBetina1;
	double totalKambing = kambingJantan1 + kambingJantan2 + kambingBetina1;
	
	//printf("Hasil berat sapi : %.2lf\n", totalBerat);
	printf("Hasil berat sapi : %.2lf\n", totalBerat);
	
	printf("\n\n");
	//printf("Hasil berat kambing: %.2lf\n", totalKambing);
	printf("Hasil berat kambing: %.2lf\n", totalKambing);
	
	return 0;
}