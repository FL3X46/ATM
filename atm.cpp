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
cout << "KENGERBANK'A HOSGELDINIZ "  ;
while (true) {
int secim ;

cout << "Lutfen hangi islemi yapmak istediginizi seciniz 1 - 9: " <<  endl;
cin >> secim ;
if  (secim < 1 || secim > 9 ) {
	cout << "yanlis bir deger girdiniz: "  ;
	continue ;
	
}



	switch (secim) {
		case 1: paracekme() ;
			break ;
		case 2: parayatirma(nakit) ;
			break ;
		case 3: elektrikborcu(elektrikborc) ;
			break ;
	
		case 4: suborcu(suborc) ;
			break ;
		case 5: telefonborcu(telefonborc) ;
			break ;
		case 6: internetborcu(internet) ;
			break ;
	 	case 7: asgariborc(asgari) ;
			break ;
		case 8: kreditamami(tamami) ;
			break ;
		case 9: cikis() ;
			return 0 ;
	}
		}
			}
					
	

		 
	
	
