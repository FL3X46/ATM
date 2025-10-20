# 💳 C++ ATM Projesi

Bu proje, C++ programlama dili kullanılarak geliştirilmiş **temel bir ATM (Automated Teller Machine)** simülasyonudur.  
Gerçek bir banka sistemine bağlı değildir ve **başlangıç bakiyesi tamamen hayalidir**.  
Amaç, kullanıcıların bankacılık işlemlerini C++ dilinde fonksiyonel olarak nasıl uygulayabileceğini göstermektir.

---

## 🧩 Proje Özeti

Program, kullanıcıdan giriş bilgilerini aldıktan sonra bir ATM menüsü sunar.  
Kullanıcı menü aracılığıyla aşağıdaki işlemleri gerçekleştirebilir:

- 🔹 Bakiye Sorgulama  
- 🔹 Para Yatırma  
- 🔹 Para Çekme  
- 🔹 Hesap Özeti Görüntüleme  
- 🔹 Çıkış Yapma  

Tüm işlemler belirli fonksiyonlar aracılığıyla yapılır.  
Programın başında belirlenen **başlangıç bakiyesi (örneğin 1000₺)** sadece örnek amaçlıdır ve **gerçek bir para değerini temsil etmez**.

---

## ⚙️ Kullanılan Teknolojiler

- **Programlama Dili:** C++  
- **Derleyici:** g++ veya herhangi bir C++17 uyumlu derleyici  
- **IDE (isteğe bağlı):** Code::Blocks, Visual Studio, CLion veya VSCode  

---

## 🔧 Fonksiyonlar

Projede kullanılan bazı temel fonksiyonlar:

| Fonksiyon Adı | Açıklama |
|----------------|-----------|
| `void showMenu()` | ATM menüsünü ekrana yazar. |
| `void checkBalance(double balance)` | Mevcut bakiyeyi gösterir. |
| `void depositMoney(double &balance)` | Kullanıcıdan para yatırma işlemi alır. |
| `void withdrawMoney(double &balance)` | Para çekme işlemini gerçekleştirir. |
| `void transactionHistory()` | Kullanıcının yaptığı işlemleri listeler. |

Tüm fonksiyonlar **modüler ve okunabilir** olacak şekilde yazılmıştır.

---

## ▶️ Çalıştırma

### 1. Derleme
Terminal veya komut satırında:
```bash
g++ main.cpp functions.cpp -o atm
