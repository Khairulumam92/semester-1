#include<stdio.h>

int main(){
    int nilai;

    printf("Masukkan nilai anda: ");
    scanf("%d", &nilai);

    if (nilai >= 0 && nilai <= 100){
        if (nilai >= 90) { /*harus menggunakan ">=90" bukan "<=90",
		jika menggunakan "<=90" maka jika kita input nilai 0-100  hasilnya akan tetap A*/
            printf("Nilai anda adalah A.\n");
        } else if (nilai >= 80) {
            printf("Nilai anda adalah B.\n");
        } else if (nilai >= 70) {
            printf("Nilai anda adalah C.\n");
        } else if (nilai >= 60) {//
            printf("Nilai anda adalah D.\n");
        } else if (nilai >= 0){ //menggunakan 0-59 untuk memberikan hasil nilai E jika menginput nilai dari rentang tersebut
            printf("Nilai anda adalah E.\n");
        //printf("Program selesai"); tidak perlu //default dan break tidak digunakan karena tidak menggunakan pernyataan switch 
	}
    } else if (nilai < 0 || nilai > 100){
        printf("Input tidak valid. nilai harus berada dalam rentang 0 hingga 100.\n");
    }
    printf("Program selesai");//pindah kebawah
    
    return 0;

}