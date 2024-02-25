#include <stdio.h>

enum Makanan {
    NasiGoreng = 1,
    MieGoreng,
    AyamGoreng,
    AyamGeprek,
    Sate
};

enum Minuman {
    AirMineral = 1,
    EsTeh,
    JusJeruk,
    SodaGembira,
    Kopi
};

int main(){
    int pilihMakan;
    printf("===== Rumah Makan =====\nMenu Makanan:\n1. Nasi Goreng\tRp. 12.000\n2. Mie Goreng\tRp. 10.000\n3. Ayam Goreng\tRp. 15.000\n4. Ayam Geprek\tRP. 15.000\n5. Sate enak\tRp. 20.000\n\n");
    printf("Pilih menu makanan (1-5): ");
    scanf("%d", &pilihMakan);
    
    enum Makanan makan;
    if (pilihMakan == 1) {
        makan = NasiGoreng;
    }else if (pilihMakan == 2) {
        makan = MieGoreng;
    }else if (pilihMakan == 3) {
        makan = AyamGoreng;
    }else if (pilihMakan == 4) {
        makan = AyamGeprek;
    }else if (pilihMakan == 5) {
        makan = Sate;
    }else {
        printf("Anda hanya dapat memilih dari 1-5");
    };
    
    float hargaMakan;
    switch(makan) {
        case 1:
            hargaMakan = 12000;
            break;
        case 2: 
            hargaMakan = 10000;
            break;
        case 3: 
            hargaMakan = 15000;
		case 4: 
  	 	    hargaMakan = 15000;
	    case 5: 
            hargaMakan = 20000;
            break;
    }
    
    int pilihMinum;
    printf("\n\nMenu Minuman:\n1. Air Mineral\tRp. 13.000\n2. Es Teh\tRp. 15.000\n3. Jus Jeruk\tRp. 20.000\n4. Soda Gembira\tRp. 10.000\n5. Kopi Hitam\tRp. 7.000\n\n");
    printf("Pilih menu minuman (1-5): ");
    scanf("%d", &pilihMinum);
    
    enum Minuman minum;
    if (pilihMinum == 1) {
        minum = AirMineral;
    }else if (pilihMinum == 2) {
        minum = EsTeh;
    }else if (pilihMinum == 3) {
        minum = JusJeruk;
    }else if (pilihMinum == 4) {
        minum = SodaGembira;
    }else if (pilihMinum == 5) {
        minum = Kopi;
    }else {
        printf("Anda hanya dapat memilih dari 1-5");
    }
    
    float hargaMinum;
    switch(minum) {
        case 1:
            hargaMinum = 13000;
            break;
        case 2: 
            hargaMinum = 15000;
            break;
        case 3: 
            hargaMinum = 20000;
        case 4: 
            hargaMinum = 10000;
        case 5: 
            hargaMinum = 7000;
            break;
    }
    
    char apakahMember;
    float TotalBiaya;
    printf("\n\nApakah Anda adalah member? (Y/N): ");
    scanf(" %c", &apakahMember);
    if (apakahMember == 'y' || apakahMember == 'Y') {
        TotalBiaya = (hargaMakan + hargaMinum) * 0.9;
        printf("\nTotal harga: Rp. %.2f", TotalBiaya);
    }else if (apakahMember == 'n' || apakahMember == 'N'){
        TotalBiaya = hargaMakan + hargaMinum;
        printf("\nTotal harga: Rp. %.2f", TotalBiaya);
    }else {
        printf("\nHanya dapat input Y/N.");
        return 0;
    }
    
    float uangBayar;
    printf("\nAlamat memori variabel total: %p\n", &TotalBiaya);
    printf("\nMasukkan uang pembayaran: ");
    scanf("%f", &uangBayar);
    
    if (uangBayar < TotalBiaya) {
        printf("\nUang pembayaran anda kurang.");
        return 0;
    }else if (uangBayar > TotalBiaya) {
        float uangKembali = uangBayar - TotalBiaya;
        printf("\nKembalian Anda: Rp. %.2f", uangKembali);
        return 0;
    }else {
        printf("\nTerima kasih telah membeli");
    }
    
    
    return 0;
}