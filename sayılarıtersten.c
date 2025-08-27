/*
1	Problemi küçük parçalara bölebiliyor muyum?
2	Aynı işlemi tekrar yapıyor muyum?
3	Durma şartım nedir? (base case)
4	Her adımda sona yaklaşıyor muyum?
5	Çıktı ileri giderken mi yoksa geri dönerken mi üretilecek?*/

#include <stdio.h>

void print_reverse(int n) {
    if (n == 0) return;

    int x;
    scanf("%d", &x);       // Sayıyı al
    print_reverse(n - 1);  // Kalanları yazdırmak için kendini çağır
    printf("%d ", x);      // Geri dönerken yazdır
}

int main() {
    int n;
    printf("Kaç sayı gireceksin: ");
    scanf("%d", &n);
    printf("Sayıları gir:\n");
    print_reverse(n);
    return 0;
}
