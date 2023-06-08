 /* Nama    : Membuat Pemograman Switch Case
  * Tanggal :10 september 2021
  * Author  : Timoteus Simanjuntak
  * Tujuan  : Membuat program Toko sederhana dengan Switch Case */

  #include<stdio.h>
  int main(){
      int pilihan, uang, kembalian, jlh, harga1, harga2, harga3, harga4, harga5, harga6, harga7, harga8, harga9, harga10;
    harga1 = 13000;
    harga2 = 13000;
    harga3 = 10000;
    harga4 = 10000;
    harga5 = 15000;
    harga6 = 15000;
    harga7 = 15000;
    harga8 =  7000;
    harga9 =  8000;
    harga10= 10000;

       printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\t warung kita \n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
       printf("PROMO DISKON 10 PERSEN DI SETIAP PESANAN !!!\n\n");
        printf(" 1.Indomie Goreng Aceh       = Rp.13.000,-\n");
        printf(" 2.Indomie Kuah Aceh         = Rp.13.000,-\n");
        printf(" 3.Kwetiaw/Mihun Goreng      = Rp.10.000,-\n");
        printf(" 4.Kwetiaw/Mihun Kuah        = Rp.10.000,-\n");
        printf(" 5.Nasi Goreng Kampung       = Rp.15.000,-\n");
        printf(" 6.Dimsum ayam               = Rp.15.000,-\n");
        printf(" 7.Dimsum Udang              = Rp.15.000,-\n");
        printf(" 8.Teh Manis Panas/Dingin    = Rp. 7.000,-\n");
        printf(" 9.Kopi Manis/Pahit          = Rp. 8.000,-\n");
        printf("10.Kopi spesial Kedhe        = Rp.10.000,-\n\n");
        printf("Masukkan Pilihan Anda          : ");
        scanf  ("%d",  &pilihan);
        printf("Masukkan Jumlah Pesanan Anda   : ");
        scanf  ("%d",  &jlh);
        printf("Masukkan Uang Anda             : ");
        scanf  ("%d",  &uang);

        switch(pilihan){
        case 1:
            kembalian = uang - ((harga1 - (harga1 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 2:
            kembalian = uang - ((harga2 - (harga2 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 3:
            kembalian = uang - ((harga3 - (harga3 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 4:
            kembalian = uang - ((harga4 - (harga4 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 5:
            kembalian = uang - ((harga5 - (harga5 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 6:
            kembalian = uang - ((harga6 - (harga6 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 7:
            kembalian = uang - ((harga7 - (harga7 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 8:
            kembalian = uang - ((harga8 - (harga8 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 9:
            kembalian = uang - ((harga9 - (harga9 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        case 10:
            kembalian = uang - ((harga10 - (harga10 * 10 / 100)) * jlh);
            printf("Kembalian : %d", kembalian);
            break;
        default:
            printf("Pilihan Tidak Tersedia");
}
  printf("\n-----------------------------------------------\n");
    printf("\t T E R I M A  K A S I H!!!!!\n");
    printf("-----------------------------------------------\n");

  return 0;
  }
