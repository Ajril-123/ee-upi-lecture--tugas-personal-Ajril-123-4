#include <stdio.h>

int main(){
    int i, data=5, data_initial=5;
    int nilai [] = {10,30,50,60,70};
    char initial [] = {'A','B','C','D', 'E'};
    int jumlah_data = data;
    int total =0, max = nilai[0],min = nilai[0];
    
    printf("masukkan index (0-4): ");
    scanf("%d", &i) ;

    if (i < 0 || i >= jumlah_data)  {
        printf("index di luar jangkauan!\n");
        return 1;
    }
    
    printf("\nData berdasarkan index %d:\n", i);
    printf("nilai[%d] : %d\n", i, nilai[i]);
    printf("initial[%d] : %c\n", i, initial[i]);
    
    printf("\nData seluruhnya:\n");
    for (int j = 0; j < jumlah_data; j++) {
        printf("%d. initial: %c, nilai: %d\n", j +1, initial[j], nilai[j]);
        total += nilai[j];
        if (nilai[j] > max) max = nilai[j];
        if (nilai[j] < min) min = nilai[j];
    }

    float average = (float)total / jumlah_data;

    printf("\n Jumlah data total : %d", jumlah_data);
    printf ("rata-rata nilai : %.2f\n", average);
    printf ("nilai maksimum : %d\n", max);
    printf ("nilai minimum : %d\n", min);

    getchar();
    getchar();
    return 0;
}
