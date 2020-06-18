#include <stdio.h>

int isGanjil(int angka){
    return angka%2 == 1;
}

int isGenap(int angka){
    return angka%2 == 0;
}

float hitungRataRata(int angka1, int angka2){
    return ((float)angka1 + (float)angka2)/2;
}

int hitungKuadrat(int angka){
    return angka * angka;
}

int main()
{
    int bilangan1, bilangan2;

    int counter = 0;
    do{
        if(counter > 0){
            printf("\nMohon masukkan angka ganjil!");
        }
        printf("\nMasukan sebuah Bilangan 1 (angka harus ganjil) : ");
        scanf("%d", &bilangan1);
        counter++;
    } while (isGanjil(bilangan1) == 0);

    counter = 0;
    do{
        if(counter > 0){
            printf("\nMohon masukkan angka genap!");
        }
        printf("\nMasukan sebuah Bilangan 2 (angka harus genap) : ");
        scanf("%d", &bilangan2);
        counter++;
    } while (isGenap(bilangan2) == 0);

    printf("\nRata rata kedua bilangan: %.2f", hitungRataRata(bilangan1, bilangan2));
    printf("\nKuadrat dari bilangan %d adalah %d", bilangan1, hitungKuadrat(bilangan1));
    printf("\nKuadrat dari bilangan %d adalah %d", bilangan2, hitungKuadrat(bilangan2));
    return 0;
}

