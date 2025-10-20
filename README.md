#  C++ ATM Projesi

Bu proje, C++ programlama dili kullanılarak geliştirilmiş **temel bir ATM (Automated Teller Machine)** simülasyonudur.  
Gerçek bir banka sistemine bağlı değildir ve **başlangıç bakiyesi tamamen hayalidir**.  
Amaç, kullanıcıların bankacılık işlemlerini C++ dilinde fonksiyonel olarak nasıl uygulayabileceğini göstermektir.

---

##  Proje Özeti

Program, kullanıcıdan giriş bilgilerini aldıktan sonra bir ATM menüsü sunar.  
Kullanıcı menü aracılığıyla aşağıdaki işlemleri gerçekleştirebilir:

-  
-  Para Yatırma  
-  Para Çekme  
-  Fatura Ödeme
-  Çıkış Yapma  

Tüm işlemler belirli fonksiyonlar aracılığıyla yapılır.  
Programın başında belirlenen **başlangıç bakiyesi (örneğin 1000₺)** ve fatura borçları tamamen hayalidir ve  sadece örnek amaçlıdır 

---

##  Kullanılan Teknolojiler

- **Programlama Dili:** C++  
- **Derleyici:** g++ veya herhangi bir C++17 uyumlu derleyici  
- **IDE (isteğe bağlı):** Code::Blocks, Visual Studio, CLion veya VSCode  

---

##  Fonksiyonlar

Projede kullanılan bazı temel fonksiyonlar:

| Fonksiyon Adı | Açıklama |
|----------------|-----------|
| `void paracekme()` | Mevcut bakiyeden klavyeden girilen miktar kadar para çekilir . |
| `void parayatirma (double nakit) ` | Mevcut bakiyenin üstüne klavyeden girilen miktar kadar para eklenir. |
| `void elektrikborcu (double elektrikborc)` | Kullanıcının elektrik faturasını öder. |
| `void suborcu (double suborc)` | Kullanıcının su faturası borcunu öder. |
| `void telefonborcu (double telefonborc)` | Kullanıcının telefon borcunu öder. |
| `void internetborcu (double internet) {` | Kullanıcının internet borcunu öder. |
| `void asgariborc (double asgari)` | Kullanıcının kredi kartı borcunun sadece asgari tutarını öder. |
| `void kreditamami (double tamami) ` | Kullanıcının kredi kartı borcunun tamamını öder. |
| `void  cikis ()` | Programdan çıkış yapılmasını sağlar. |

Tüm fonksiyonlar **modüler ve okunabilir** olacak şekilde yazılmıştır.

---

##  Çalıştırma

### 1. Derleme
Terminal veya komut satırında:
```bash
g++ main.cpp functions.cpp -o atm
