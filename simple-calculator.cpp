// Bu program temel matematiksel iþlemleri yapan bir hesap makinesidir.
// Kullanýcýdan iþlem türü ve iki sayý alýr, sonucu ekrana yazdýrýr.

#include <iostream>

using namespace std;

int main()
{
   int secim;
   double girilenSayi1 , girilenSayi2 , sonuc;

   cout<<"Hangi islemi yapmak istediginizi seciniz!"<<endl;
   cout<<"Toplama = 1"<<endl<<"Cikarma = 2"<<endl<<"Carpma = 3"<<endl<<"Bolme = 4"<<endl<<"Programi sonlandirmak = 5"<<endl;
   cout<<"Seciminiz: ";
   cin>>secim;

   if (secim<1 || secim>5)
   {
   exit(0);
   }

   if (secim == 5)
   {
   cout << "Program sonlandiriliyor..." << endl;
   return 0;
   }

   cout<<"Islem yapacaginiz 1. sayiyi giriniz!"<<endl;
   cout<<"1. Sayi: ";
   cin>>girilenSayi1;

   cout<<"Islem yapacaginiz 2. sayiyi giriniz!"<<endl;
   cout<<"2. Sayi: ";
   cin>>girilenSayi2;

   switch (secim) {

      case 1:
         sonuc = girilenSayi1 + girilenSayi2;
         cout<<"Sonuc = "<<sonuc;
         break;

      case 2:
         sonuc = girilenSayi1 - girilenSayi2;
         cout<<"Sonuc = "<<sonuc;
         break;

      case 3:
         sonuc = girilenSayi1 * girilenSayi2;
         cout<<"Sonuc = "<<sonuc;
         break;

      case 4:
         if (girilenSayi2 == 0)
         {
         cout << "Hata: 0'a bolme yapilamaz!" << endl;
         } else
           {
           sonuc = girilenSayi1 / girilenSayi2;
           cout << "Sonuc = " << sonuc;
           }
         break;

      default:
         cout<<"Gecersiz Secim!";
   }



   cin.ignore();
   cin.get();
	   return 0;

}

