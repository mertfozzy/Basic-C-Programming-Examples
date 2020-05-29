#include <stdio.h>

#include <string.h>

void hosgeldiniz() {
  printf("Yarismaya hosgeldiniz.\n\nDevam etmek icin giris yapin veya kayit olun:\n\n\n");

}

int secimFonksiyonu() {
  int rakam;
  printf("[1]-Giris yapin\n\n[2]-Kayit olun\n");
  scanf("%d", & rakam);
  return rakam;

}

int girisFonksiyonu(char isim[200], char sifre[200]) {
  char isimVeri[200];
  char sifreVeri[200];

  tekrar:
    printf("\nKullanici adinizi giriniz: \n");
  scanf("%s", & isimVeri);
  printf("Sayisal sifrenizi giriniz : \n");
  scanf("%s", & sifreVeri);

  if (strcmp(isim, isimVeri) == 0 && strcmp(sifre, sifreVeri) == 0) {
    printf("\nGiris basarili !\n ****Yarisma basliyor.**** \n");
  } else {
    printf("Hatali giris yaptiniz.\n Tekrar deneyiniz veya kayit olunuz.\n");
    goto tekrar;

  }

}

int kayitFonksiyonu() {
  char isim[200];
  char sifre[200];

  printf("\nKullanici adini belirleyiniz : \n");
  scanf("%s", & isim);
  printf("Sayiyasl sifre belirleyiniz : \n"),
    scanf("%s", & sifre);

  printf("\n ***Kayit basarili. Giris yapabilirsiniz.*** \n");

  girisFonksiyonu(isim, sifre);
}

yarismaFonksiyonu() {
  int cevap, puan = 0;
  printf("[SORU-1] : Hangisi bir element degildir ?\n[1]-Ates\t[2]-Su\t[3]-Tahta\t[4]-Toprak\n");
  scanf("%d", & cevap);
  if (cevap == 3) {
    puan += 10;
    printf("Dogru cevap ! Yeni puan %d\nSonraki soruya gecelim.\n\n", puan); //1.soru bitti...................................................

    int cevap2;
    printf("\n\n[SORU-2] : Hangi dizi motorcu cetesini konu alir ?\n[1]-Prison Break\t[2]-Sons of Anarchy\t[3]-Breaking Bad\t[4]-Lucifer\n");
    scanf("%d", & cevap2);
    if (cevap2 == 2) {
      puan += 10;
      printf("\nDogru cevap ! Yeni puan %d\nSonraki soruya gecelim.\n", puan); //2.soru bitti.............................................

      int cevap3;
      printf("\n\n[SORU-3] : Asagidakilerden hangisi sadece mobil icin gelistirilmis bir isletim sistemidir ?");
      printf("\n[1]-Windows\t[2]-Mac OS\t[3]-Linux\t[4]-Symbian OS\n");
      scanf("%d", & cevap3);
      if (cevap3 == 4) {
        puan += 10;
        printf("\nDogru cevap ! Yeni puan %d\nSonraki soruya gecelim.\n", puan); //3.soru bitti.............................................
        
        int cevap4;
        printf("\n\n[SORU-3] : Asagida verilen ilk cag uygarliklarindan hangisi yaziyi icat etmistir?");
        printf("\n[1]-Hititler\t[2]-Elamlar\t[3]-Sumerler\t[4]-Urartular\n");
        scanf("%d", & cevap4);
        if (cevap4 == 3){
         puan += 10;
         printf("\nDogru cevap ! Yeni puan %d\nSonraki soruya gecelim.\n", puan); //4.soru bitti.............................................
		}
		 else {
         printf("\nYanlis cevap. Puan %d Kaybettiniz.\n", puan);
      }
		
      } else {
        printf("\nYanlis cevap. Puan %d Kaybettiniz.\n", puan);
      }
    } else {
      printf("\nYanlis cevap. Puan %d Kaybettiniz.\n", puan);
    }

  } else {
    printf("Yanlis cevap. Puan %d Kaybettiniz.\n", puan);
  }
}

int main() {
  char isim[200] = "Mert";
  char sifre[100] = "1234";

  hosgeldiniz();
  int rakam = secimFonksiyonu();
  switch (rakam) {
  case 1:
    girisFonksiyonu(isim, sifre);
    break;

  case 2:
    kayitFonksiyonu();
    break;

  default:
    printf("\nHatali secim yaptiniz, tekrar deneyin.\n");
    break;
  }

  yarismaFonksiyonu();

  return 0;
}
