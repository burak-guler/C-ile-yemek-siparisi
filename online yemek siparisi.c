#include <stdio.h>
#include <stdlib.h>
 

int main() { int durum,durum2,durum3,durum4,durum5,durum6,durum7,durum8,durum9;
            int no1,no2,no3,no4,no5,no6;
            float toplam[6];
            char a[1],il[20],ilce[20],mahalle[25],sokak[20],binano[3],daireno[2];
            
    printf("***************************************HOSGELDiNiZ**************************************\n\n");
	while(1)
	{ 
	printf("----------------------MENU CESiTLERi------------------- \n");
	printf("ev yemekleri cesitleri         ---------> no:[1]\n");
	printf("hamburger cesitleri            ---------> no:[2]\n");
	printf("pizza cesitleri                ---------> no:[3]\n");
	printf("aperatif yemek cesitleri(meze) ---------> no:[4]\n");
	printf("tatli cesitleri                ---------> no:[5]\n");
	printf("icecek cesitleri               ---------> no:[6]\n\n");
	printf("bakmak istediginiz menu cesidinin numarasini giriniz: ");
	scanf("%d",&durum);
	system("CLS");
	if(durum==1)
	{
		printf("\n      *************ev yemekleri cesitleri************ \n");
		printf("-ezogelin corba     -------> 7,00  TL no:[1]\n");
		printf("-yayla corbasi      -------> 7,00  TL no:[2]\n");
		printf("-mercimek corba     -------> 7,00  TL no:[3]\n");
		printf("-kelle paca corba   -------> 15,00 TL no:[4]\n");
		printf("-tavuk suyu corba   -------> 7,00  TL no:[5]\n");
		printf("-etli barbunya      -------> 12,00 TL no:[6]\n");
		printf("-kiymali ispanak    -------> 15,00 TL no:[7]\n");
		printf("-kuru fasulye       -------> 12,00 TL no:[8]\n");
		printf("-patlican musakka   -------> 12,00 TL no:[9]\n");
		printf("-kadinbudu kofte    -------> 18,00 TL no:[10]\n");
		printf("-dalyan kofte       -------> 18,00 TL no:[11]\n");
		printf("-tas kebab          -------> 20,00 TL no:[12]\n");
		printf("-peynirli makarna   -------> 10,00 TL no:[13]\n");
		printf("-pirinc pilav       -------> 14,00 TL no:[14]\n");
		printf("-bulgur pilav       -------> 14,00 TL no:[15]\n");
		printf("-firinda makarna    -------> 10,00 TL no:[16]\n");
		while(1)
		{
		printf("\nsatin almak istediginiz yemegin numarasini giriniz giriniz: ");
		scanf("%d",&no1);
		   if(no1==1)
		   toplam[0]+=7;
		   if(no1==2)
		   toplam[0]+=7;
		   if(no1==3)
		   toplam[0]+=7;
		   if(no1==4)
		   toplam[0]+=15;
		   if(no1==5)
		   toplam[0]+=7;
		   if(no1==6)
		   toplam[0]+=12;
		   if(no1==7)
		   toplam[0]+=15;
		   if(no1==8)
		   toplam[0]+=12;
		   if(no1==9)
		   toplam[0]+=12;
		   if(no1==10)
		   toplam[0]+=18;
		   if(no1==11)
		   toplam[0]+=18;
		   if(no1==12)
		   toplam[0]+=20;
		   if(no1==13)
		   toplam[0]+=10;
		   if(no1==14)
		   toplam[0]+=14;
		   if(no1==15)
		   toplam[0]+=14;
		   if(no1==16)
		   toplam[0]+=10;
		printf("\nev yemeklerinden satin almaya devam edicekmisiniz\nevet(1)-hayir(0): ");
		scanf("%d",&durum2);
		if(durum2==0)
			break;
		}	
	}
	if(durum==2)
	{	
		printf("\n      *************hamburger cesitleri************ \n");
		printf("-kofte burger               -------> 14,99 TL  no:[1]\n");
		printf("-double kofte burger        -------> 19,95 TL  no:[2]\n");
		printf("-etli barbekü               -------> 17,99 TL  no:[3]\n");
		printf("-double cheeseburger        -------> 18,99 TL  no:[4]\n");
		printf("-hamburger                  -------> 8,99  TL  no:[5]\n");
		printf("-mangalda izgara tavuk      -------> 23,99 TL  no:[6]\n");
		printf("-klasik gurme tavuk         -------> 24,95 TL  no:[7]\n");
		printf("-tavuklu barbeku            -------> 22,99 TL  no:[8]\n");
		printf("-tavuk burger               -------> 8,99  TL  no:[9]\n");
		printf("-tavuk burger cheese        -------> 10,99 TL  no:[10]\n");
		while(1)
		{
		printf("\nsatin almak istediginiz yemegin numarasini giriniz giriniz: ");
		scanf("%d",&no2);
		   if(no2==1)
		   toplam[1]+=14.99;
		   if(no2==2)
		   toplam[1]+=19.95;
		   if(no2==3)
		   toplam[1]+=17.99;
		   if(no2==4)
		   toplam[1]+=18.99;
		   if(no2==5)
		   toplam[1]+=8.99;
		   if(no2==6)
		   toplam[1]+=23.99;
		   if(no2==7)
		   toplam[1]+=24.95;
		   if(no2==8)
		   toplam[1]+=22.99;
		   if(no2==9)
		   toplam[1]+=8.99;
		   if(no2==10)
		   toplam[1]+=10.99;
		printf("\nhamburgerlerden satin almaya devam edicekmisiniz\nevet(1)-hayir(0): ");
		scanf("%d",&durum3);
		if(durum3==0)
			break;
		}
	}
	if(durum==3)
	{
	printf("\n      *************pizza cesitleri************ \n");
		printf("-karisik pizza                       -------> 79,99 TL  no:[1]\n");
		printf("-ton balikli pizza                   -------> 39,99 TL  no:[2]\n");
		printf("-sucuklu pizza                       -------> 49,99 TL  no:[3]\n");
		printf("-BBQ tavuk pizza                     -------> 69,99 TL  no:[4]\n");
		printf("-mozarella ve feslegenli pizza       -------> 59,99 TL  no:[5]\n");
		printf("-etli pizza                          -------> 59,99 TL  no:[6]\n");
		printf("-sade pizza                          -------> 39,99 TL  no:[7]\n");
		printf("-mantarli pizza                      -------> 49,99 TL  no:[8]\n");
		while(1)
		{
		printf("\nsatin almak istediginiz yemegin numarasini giriniz giriniz: ");
		scanf("%d",&no3);
		   if(no3==1)
		   toplam[2]+=79.99;
		   if(no3==2)
		   toplam[2]+=39.99;
		   if(no3==3)
		   toplam[2]+=49.99;
		   if(no3==4)
		   toplam[2]+=69.99;
		   if(no3==5)
		   toplam[2]+=59.99;
		   if(no3==6)
		   toplam[2]+=59.99;
		   if(no3==7)
		   toplam[2]+=39.99;
		   if(no3==8)
		   toplam[2]+=49.99;
		   printf("\npizzalardan satin almaya devam edicekmisiniz\nevet(1)-hayir(0): ");
		scanf("%d",&durum4);
		if(durum4==0)
			break;
		}
	}
	if(durum==4)
	{
	printf("\n      *************aperatif yemek cesitleri************ \n");
		printf("-cig kofte          -------> 36,90 TL  no:[1]\n");
		printf("-rus salata         -------> 10,00 TL  no:[2]\n");
		printf("-yaprak sarma       -------> 53,00 TL  no:[3]\n");
		printf("-amerikan salata    -------> 15,00 TL  no:[4]\n");
		printf("-barbunya           -------> 12,00 TL  no:[5]\n");
		printf("-haydari            -------> 12,00 TL  no:[6]\n");
		printf("-acili ezme         -------> 15,00 TL  no:[7]\n");
		printf("-saksuka            -------> 49,90 TL  no:[8]\n");	
		while(1)
		{
		printf("\nsatin almak istediginiz yemegin numarasini giriniz giriniz: ");
		scanf("%d",&no4);
		   if(no4==1)
		   toplam[3]+=36.90;
		   if(no4==2)
		   toplam[3]+=10;
		   if(no4==3)
		   toplam[3]+=53;
		   if(no4==4)
		   toplam[3]+=15;
		   if(no4==5)
		   toplam[3]+=12;
		   if(no4==6)
		   toplam[3]+=12;
		   if(no4==7)
		   toplam[3]+=15;
		   if(no4==8)
		   toplam[3]+=49.90;
		   printf("\nmezelerden satin almaya devam edicekmisiniz\nevet(1)-hayir(0): ");
		scanf("%d",&durum5);
		if(durum5==0)
			break;
	}
	}
	if(durum==5)
	{
	printf("\n      *************tatli cesitleri************ \n");
		printf("-fistikli baklava               -------> 62,50 TL  no:[1]\n");
		printf("-fistikli kuru baklava          -------> 70,00 TL  no:[2]\n");
		printf("-cevizli baklava                -------> 50,00 TL  no:[3]\n");
		printf("-fistikli dolama                -------> 90,00 TL  no:[4]\n");
		printf("-cikolatali fistikli baklava    -------> 62,50 TL  no:[5]\n");
		printf("-burma kadayif                  -------> 70,00 TL  no:[6]\n");
		printf("-sutlac                         -------> 22,50 TL  no:[7]\n");
		printf("-sufle                          -------> 15,00 TL  no:[8]\n");
		printf("-kunefe                         -------> 25,50 TL  no:[9]\n");
		while(1)
		{
		printf("\nsatin almak istediginiz yemegin numarasini giriniz giriniz: ");
		scanf("%d",&no5);
		   if(no5==1)
		   toplam[4]+=62.50;
		   if(no5==2)
		   toplam[4]+=70;
		   if(no5==3)
		   toplam[4]+=50;
		   if(no5==4)
		   toplam[4]+=90;
		   if(no5==5)
		   toplam[4]+=62.50;
		   if(no5==6)
		   toplam[4]+=70;
		   if(no5==7)
		   toplam[4]+=22.50;
		   if(no5==8)
		   toplam[4]+=15;
		   if(no5==9)
		   toplam[4]+=25.50;
		   printf("\ntatlilardan satin almaya devam edicekmisiniz\nevet(1)-hayir(0): ");
		scanf("%d",&durum6);
		if(durum6==0)
			break;	
	}
}
	if(durum==6)
	{
		printf("\n      *************icecek cesitleri************ \n");
		printf("-kola        -------> 5,00 TL  no:[1]\n");
		printf("-fanta       -------> 5,00 TL  no:[2]\n");
		printf("-gazoz       -------> 5,00 TL  no:[3]\n");
		printf("-ice tea     -------> 4,50 TL  no:[4]\n");
		printf("-meyve suyu  -------> 3,50 TL  no:[5]\n");
		printf("-soda        -------> 3,50 TL  no:[6]\n");
		printf("-limonata    -------> 5,00 TL  no:[7]\n");
		printf("-ayran       -------> 3,50 TL  no:[8]\n");
		printf("-su          -------> 2,00 TL  no:[9]\n");
		while(1)
		{
		printf("\nsatin almak istediginiz yemegin numarasini giriniz giriniz: ");
		scanf("%d",&no6);
		   if(no6==1)
		   toplam[5]+=5;
		   if(no6==2)
		  toplam[5]+=5;
		   if(no6==3)
		   toplam[5]+=5;
		   if(no6==4)
		   toplam[5]+=4.50;
		   if(no6==5)
		   toplam[5]+=3.50;
		   if(no6==6)
		   toplam[5]+=3.50;
		   if(no6==7)
		   toplam[5]+=5;
		   if(no6==8)
		   toplam[5]+=3.50;
		   if(no6==9)
		   toplam[5]+=2;
		   printf("\niceceklerden satin almaya devam edicekmisiniz\nevet(1)-hayir(0): ");
		scanf("%d",&durum7);
		if(durum7==0)
			break;	
	    }
	} 
	printf("\ndiger menu cesitlerinden satin alicakmisiniz\nevet-(1)--hayir(0): ");
	scanf("%d",&durum8);
	system("CLS");
	if(durum8==0)
	  break;  
}
printf("satin alinanlarin toplam tutari: ");
float fistoplam=top(toplam,6);
printf("\n\n");
printf("adres bilgilerinizi girmek icin-(1)\nsiparisi iptal edip cikmak icin-(0)\ntuslayiniz: ");
scanf("%d",&durum9);
if(durum9==1)
{
	system("CLS");
   printf("\n\n********ASAGiYA ADRES BiLGiLERiNiZi GiRiNiZ********\n\n");
   gets(a);
   printf("il: ");
   gets(il);
   printf("\n");
   printf("ilce: ");
   gets(ilce);
   printf("\n");
   printf("mahalle: ");
   gets(mahalle);
   printf("\n");
   printf("sokak: ");
   gets(sokak);
   printf("\n");
   printf("bina no: ");
   gets(binano);
   printf("\n");
   printf("daire no: ");
   gets(daireno);
}
system("CLS"); 
FILE *fis;
fis=fopen("fis.txt","w");
fprintf(fis,"****************FiS************** \n\n",fis);
fprintf(fis,"               il: %s \n",il);
fprintf(fis,"               ilce: %s \n",ilce);
fprintf(fis,"               mahalle: %s \n",mahalle);
fprintf(fis,"               sokak: %s \n",sokak);
fprintf(fis,"               bina no: %s \n",binano);
fprintf(fis,"               daire no: %s \n",daireno);
fprintf(fis,"   adresine 30dk icinde ulastiralacaktir.\n\n");
fprintf(fis,"                               siparis tutariniz: %.2f TL ",fistoplam);
if(fopen("fis.txt","w"))
{
printf("|*fis yazdirildi*|\n");
printf("------------------\n");
}
else
{
printf("|*fis yazdirilamadi*|\n");
printf("---------------------\n");
}
fclose(fis);
printf("****************FiS**************");
printf("\n");
printf("               il: ");puts(il);
printf("               ilce: ");puts(ilce);
printf("               mahalle: ");puts(mahalle);
printf("               sokak: ");puts(sokak);
printf("               bina no: ");puts(binano);
printf("               daire no: ");puts(daireno);
printf("   adresine 30dk icinde ulastiralacaktir.\n\n");
printf("                               siparis tutariniz: ");
top(toplam,6);
printf("\n\nBiZi TERCiH ETTiGiNiZ iCiN TESEKKURLER :)");
if(durum9==0)
{
	system("CLS");
	printf("siparisiniz iptal edilmistir iyi gunler.");
}
	return 0;
}
int top( float matris[],int size)
{
	int i;
	float toplam_tutar;
	for(i=0;i<size;i++)
	{
		toplam_tutar+=matris[i];
	}
	printf("%.2f TL",toplam_tutar);
	return toplam_tutar;
}
