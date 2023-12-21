/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * Bu program, iki matrisin toplamını hesaplar.
 * **/

#include <stdio.h>

// Sabitler: Matris boyutları
#define Satir 2
#define Sutun 2

// Fonksiyon: İki matrisin toplamını hesaplar
int matristoplam(int a[Satir][Sutun], int b[Satir][Sutun], int c[Satir][Sutun]) {
    int i, j;

    // Matris elemanlarını topla
    for (i = 0; i < Satir; i++) {
        for (j = 0; j < Sutun; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Fonksiyon: Kullanıcıdan matris elemanlarını alır
int matrisolusturma(int a[Satir][Sutun]) {
    int i, j;

    // Kullanıcıdan matris elemanlarını al
    for (i = 0; i < Satir; i++) {
        for (j = 0; j < Sutun; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

// Fonksiyon: Matrisi ekrana yazdırır
int matrisyazdir(int a[Satir][Sutun]) {
    int i, j;

    // Matrisi ekrana yazdır
    for (i = 0; i < Satir; i++) {
        printf("\n");
        for (j = 0; j < Sutun; j++) {
            printf("%d\t", a[i][j]);
        }
    }
}


int main() {
    // Matrislerin tanımlanması
    int matris1[Satir][Sutun];
    int matris2[Satir][Sutun];
    int matris3[Satir][Sutun];

    // Kullanıcıdan 1. matrisin elemanlarını alma
    printf("1. matrisin elemanlarini giriniz \n");
    matrisolusturma(matris1);

    // Kullanıcıdan 2. matrisin elemanlarını alma
    printf("2. matrisin elemanlarini giriniz \n");
    matrisolusturma(matris2);

    // Matrislerin toplanması
    matristoplam(matris1, matris2, matris3);

    // Sonucun ekrana yazdırılması
    printf("Matrislerin toplamini veren matris");
    matrisyazdir(matris3);


    return 0;
}