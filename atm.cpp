/*
MIT License

Copyright (c) 2025 Muhammed Emin KENGER

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <iostream> 
#include <string>
#include <list>
using namespace std ;

double bakiye = 65750 ;
double nakit ;
double cekilecektutar ;
double elektrikborc = 5000 ;
double suborc = 2500 ;
double telefonborc = 400 ;
double internet = 800 ;
double asgari = 600 ;
double  tamami = 1300 ;

void mevcutbakiye (double bakiye) {
	cout << bakiye ;
}
void paracekme() {
    while (true){
    	cout << "Cekilecek tutari giriniz:  ";
    	cin >> cekilecektutar;
    	if (cekilecektutar <= 0) {
        	cout << "Yanlis bir sayi girdiniz!" << endl;
        	continue;
    } 
	 	if (cekilecektutar > bakiye) {
	 		cout  << "yetersiz bakiye " " " ;
	 		continue;
		 }
	
        bakiye -= cekilecektutar;
        cout << "Lutfen paranizi aliniz , cekilen miktar    " << cekilecektutar << " " " bakiyeniz: " << bakiye <<  endl;
		break ;
	}
	
	
    }


void parayatirma (double nakit) {
	cout << "yatirilacak miktari giriniz: " ;
	cin >> nakit ;
	if (nakit <= 0) {
		cout <<"yanlis bir sayi girdiniz:  " " "<< endl ;
	}
	else {
	
	bakiye = bakiye + nakit ;
	cout << "paraniz yatirilmistir, yatirilan miktar   " << nakit << " " " toplam bakiyeniz: " " "<< bakiye << endl ;
}
	
}


void elektrikborcu (double elektrikborc) {
	bakiye = bakiye - elektrikborc ;
	cout << "elektrik borcunuz odenmistir fatura tutari:  " << elektrikborc << " " " kalan bakiyeniz:"  " "  <<bakiye << endl;  
}
void suborcu (double suborc) {
	bakiye = bakiye - suborc ;
	cout << "su borcunuz odenmistir fatura tutari: " << suborc << " " " kalan bakiyeniz:" " " << bakiye << endl;
}

void telefonborcu (double telefonborc) {
	bakiye = bakiye - telefonborc ;
	cout << "telefon borcunuz odenmistir odenen tutar:   " << telefonborc  << " " " bakiyeniz" " " << bakiye << endl;
	
}

void internetborcu (double internet) {
	bakiye = bakiye - internet;
	cout << "internet fatura borcunuz odenmistir odenen tutar: " << internet << " " " kalan bakiyeniz: " " "  << bakiye << endl;
}

void asgariborc (double asgari) {
	bakiye = bakiye - asgari ;
	cout << "kredi karti borcunuzun asgarisi odenmistir odenen tutar:  " << asgari << " "  "kalan bakiyeniz: " " " << bakiye <<    endl;
}

void kreditamami (double tamami) {
	bakiye = bakiye - tamami ;
	cout << "kredi karti borcunuzun tamami odenmistir odenen tutar: " << tamami << " " " kalan bakiyeniz "" "  << bakiye <<  endl;
}

void  cikis () {
	cout <<"cikis yapilmistir iyi gunler dileriz (:" << endl;
}
int main() {
cout << "KENGERBANK'A HOSGELDINIZ "  << endl ;
cout << "-------	Menu ------- "  << endl ;
cout <<		 "1-Bakiye Goruntuleme" << endl ;
cout <<		 "2-Para Cekme " << endl ;
cout <<		 "3-Para Yatirma" << endl ;
cout <<		 "4-Elektrik Faturasi Borcu Yatirma " << endl ;
cout <<		 "5-Su Faturasi Borcu Yatirma " << endl;
cout <<		 "6-Telefon Faturasi Borcu Yatirma " << endl ;
cout <<		 "7-internet Faturasi Borcu Yatirma  " << endl ;
cout <<		 "8-Kredi Kartinin Asgari Borcunu Odeme " << endl;
cout <<		 "9-Kredi Karti borcunun tamamini Odeme  " << endl ;
cout <<		 "10- Cikis" << endl ;		 	

while (true) {
int secim ;
	 
cout << "Lutfen hangi islemi yapmak istediginizi seciniz 1 - 10: " <<  endl;
cin >> secim ;
if  (secim < 1 || secim > 10 ) {
	cout << "yanlis bir deger girdiniz: "  ;
	continue ;
	
}



	switch (secim) {
		
		case 1:  ;
			break ;
		case 2: paracekme() ;
			break ;
		case 3: parayatirma(nakit) ;
			break ;
		case 4: elektrikborcu(elektrikborc) ;
			break ;
	
		case 5: suborcu(suborc) ;
			break ;
		case 6: telefonborcu(telefonborc) ;
			break ;
		case 7: internetborcu(internet) ;
			break ;
	 	case 8: asgariborc(asgari) ;
			break ;
		case 9: kreditamami(tamami) ;
			break ;
		case 10: cikis() ;
			return 0 ;
	}
		}
			}
					
	

		 
	
	
