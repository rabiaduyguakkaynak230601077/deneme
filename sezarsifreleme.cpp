#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main(){
 	char ifade[20],  char sifrelenmisifade[20]; //dizi tanimladik
 	int anahtar=0; int i=0;
 	char c;
 	printf("sirelenecek metni giriniz");
 	scanf("%s",& ifade);
 	
 	printf ("Anahtar giriniz ");
 	scanf("%d", &anahtar);
 	while(i<strlen(ifade))  {// ifadedeki karakter sayisini bulur
 	c=ifade[i];
 	sifrelemesifade[i]= (char)(((int)c)+anahtar) //ASCII koduna gore harfleri numaraland�rd�k
 	i++;
 	
	 }
	 printf("Sifrelenmis ifade:%s",sifrelenmisifade[]);
	 return 0;
 	
 }
