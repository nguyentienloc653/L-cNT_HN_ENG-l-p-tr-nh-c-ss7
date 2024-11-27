#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    printf("Nhap cac phan tu le vao mang:\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ",i+1);
            scanf("%d", &array[i]);
        } while (array[i] % 2 == 0);
    }
    printf("Mang sau khi nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
