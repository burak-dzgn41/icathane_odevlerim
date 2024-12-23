#include <stdio.h>
int main() {
int sayi1;
int sayi2;
int sonuc;
 printf("sayi1 giriniz:");
 scanf("%d", &sayi1);
 
 printf("sayi2 giriniz:");
 scanf("%d", &sayi2); 
  
  sonuc=sayi1+sayi2;
   printf("toplamanin sonuc:%d\n",sonuc);
   
   sonuc=sayi1-sayi2;
   printf("cikarma sonuc:%d\n",sonuc);
  
   sonuc=sayi1*sayi2;
   printf("carpma sonuc:%d\n",sonuc);
   
   sonuc=sayi1/sayi2;
   printf("bolme sonuc:%d\n",sonuc);
   
   
   }