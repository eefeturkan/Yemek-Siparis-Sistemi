#include <stdio.h>
#include <string.h>
#include <ctype.h>


struct user_info {
  char tel_no[11];  // telefon numarasý 11 haneli olabilir
  char sifre[16];  // þifre en fazla 16 karakter olabilir
};

int main() {
  struct user_info user;  

  // kullanýcýya telefon numarasý formatý hakkýnda bilgi
  printf("Lutfen telefon numaranizi giriniz (11 haneli rakamlardan olusmalidir): ");

  // kullanýcýdan telefon numarasý giriþi iste
  scanf("%s", user.tel_no);

  // telefon numarasýnýn doðru formatta girildiðini ve sadece rakamlardan oluþtuðunu kontrol edelim
 // kullanýcý telefon numarasýný yanlýþ giriyorsa tekrar telefon numarasýný girmesi için bir uyarý mesajý ver
  while (strlen(user.tel_no) != 11 || !isdigit(user.tel_no[0])) {
  printf("Telefon numaraniz 11 haneli ve sadece rakamlardan olusmalidir! Lutfen tekrar giriniz: ");
  scanf("%s", user.tel_no);
  }

  // kullanýcýya girmeyi düþündüðü þifrenin formatta olup olmadýðý hakkýnda bilgi ver
  printf("Lutfen sifrenizi giriniz (En az 8, en fazla 16 karakter): ");

  // kullanýcýdan þifre giriþi iste
  scanf("%s", user.sifre);

  // þifrenin en az 8 karakterden oluþtuðunu kontrol edelim
 // kullanýcý þifresini yanlýþ giriyorsa tekrar þifresini girmesi için bir uyarý mesajý gösterelim
  while (strlen(user.sifre) < 8) {
  printf("Sifreniz en az 8 karakterden olusmalidir! Lutfen tekrar giriniz: ");
  scanf("%s", user.sifre);
  }
// bir restoran seçip menü secimi yapma
int secim, secim2, fiyat=0;
printf("1- Spaghetti Restoran\n");
printf("2- Pizza Restoran\n");
printf("3- Hamburger Restoran\n");
printf("Lutfen tercih ettiginiz restoranin numarasini giriniz: ");
scanf("%d", &secim);
    while (secim < 1 || secim > 3){
        printf("Gecersiz secim yaptýnýz. Lutfen tekrar giriniz: ");
        scanf("%d", &secim); }
if (secim == 1)
{
    printf("1- Spaghetti Bolognese - 25 TL\n");
    printf("2- Spaghetti Carbonara - 30 TL\n");
    printf("3- Spaghetti Napolitana - 25 TL\n");
    printf("4- Spaghetti Arrabiata - 25 TL\n");
    printf("5- Spaghetti Marinara - 30 TL\n");
    printf("Lutfen tercih ettiginiz yemegin numarasini giriniz: ");
    scanf("%d", &secim2);
    while (secim2 < 1 || secim2 > 5){
        printf("Gecersiz secim yaptýnýz. Lutfen tekrar giriniz: ");
        scanf("%d", &secim2); }
    if (secim2 == 1)
    {
        fiyat = 25;
    }
    else if (secim2 == 2)
    {
        fiyat = 30;
    }
    else if (secim2 == 3)
    {
        fiyat = 25;
    }
    else if (secim2 == 4)
    {
        fiyat = 25;
    }
    else if (secim2 == 5)
    {
        fiyat = 30;
    }
}
else if (secim == 2)
{
    printf("1- Margherita Pizza - 35 TL\n");
    printf("2- Quattro Formaggi Pizza - 40 TL\n");
    printf("3- Pepperoni Pizza - 40 TL\n");
    printf("4- Prosciutto Pizza - 45 TL\n");
    printf("5- Vegetarian Pizza - 40 TL\n");
    printf("Lutfen tercih ettiginiz yemegin numarasini giriniz: ");
    scanf("%d", &secim2);
    while (secim2 < 1 || secim2 > 5){
        printf("Gecersiz secim yaptýnýz. Lutfen tekrar giriniz: ");
        scanf("%d", &secim2); }

    if (secim2 == 1)
    {
        fiyat = 35;
    }
    else if (secim2 == 2)
    {
        fiyat = 40;
    }
    else if (secim2 == 3)
    {
        fiyat = 40;
    }
    else if (secim2 == 4)
    {
        fiyat = 45;
    }
    else if (secim2 == 5)
    {
        fiyat =40;
}
}
else if (secim == 3)
{
	printf("1- Cheeseburger - 15 TL\n");
	printf("2- Double Cheeseburger - 20 TL\n");
	printf("3- Triple Cheeseburger - 25 TL\n");
	printf("4- BBQ Burger - 25 TL\n");
	printf("5- Veggie Burger - 20 TL\n");
	printf("Lutfen tercih ettiginiz yemegin numarasini giriniz: ");
	scanf("%d", &secim2);
	while (secim2 < 1 || secim2 > 5){
        printf("Gecersiz secim yaptýnýz. Lutfen tekrar giriniz: ");
        scanf("%d", &secim2); }
	if (secim2 == 1)
	{
	fiyat = 15;
	}
	else if (secim2 == 2)
	{
	fiyat = 20;
	}
	else if (secim2 == 3)
	{
	fiyat = 25;
	}
	else if (secim2 == 4)
	{
	fiyat = 25;
	}
	else if (secim2 == 5)
	{
	fiyat = 20;
	}
}

// içecek seçimi yapma
int secim3;
	printf("1- Coca-Cola - 10 TL\n");
	printf("2- Fanta - 10 TL\n");
	printf("3- Sprite - 10 TL\n");
	printf("4- Ayran - 8 TL\n");
	printf("5- Su - 5 TL\n");
	printf("Lutfen tercih ettiginiz icecegin numarasini giriniz: ");
	scanf("%d", &secim3);
	while (secim3 < 1 || secim3 > 5){
        printf("Gecersiz secim yaptýnýz. Lutfen tekrar giriniz: ");
        scanf("%d", &secim3); }
	if (secim3 == 1)
	{
	    fiyat += 10;
	}
	else if (secim3 == 2)
	{
	    fiyat += 10;
	}
	else if (secim3 == 3)
	{
	    fiyat += 10;
	}
	else if (secim3 == 4)
	{
	    fiyat += 8;
	}
	else if (secim3 == 5)
	{
	    fiyat += 5;
	}
printf("Odemeniz gereken fiyat: %d TL\n", fiyat);
// ödeme yöntemini sorma
int odemeYontemi;
odemeSecimi();

// kullanýcý geçerli bir seçim yaptýysa ödemeniz alýndý yazacak
printf("Odemeniz alindi.\n");

printf("Siparis Ozeti:\n");
if (secim == 1) {
printf("Restoran: Spaghetti Restoran\n");
} else if (secim == 2) {
printf("Restoran: Pizza Restoran\n");
} else if (secim == 3) {
printf("Restoran: Hamburger Restoran\n");
}
if (secim == 1) {
if (secim2 == 1) {
printf("Yemek: Spaghetti Bolognese\n");
} else if (secim2 == 2) {
printf("Yemek: Spaghetti Carbonara\n");
} else if (secim2 == 3) {
printf("Yemek: Spaghetti Napolitana\n");
} else if (secim2 == 4) {
printf("Yemek: Spaghetti Arrabiata\n");
} else if (secim2 == 5) {
printf("Yemek: Spaghetti Marinara\n");
}
} else if (secim == 2) {
if (secim2 == 1) {
printf("Yemek: Margherita Pizza\n");
} else if (secim2 == 2) {
printf("Yemek: Quattro Formaggi Pizza\n");
} else if (secim2 == 3) {
printf("Yemek: Pepperoni Pizza\n");
} else if (secim2 == 4) {
printf("Yemek: BBQ Chicken Pizza\n");
} else if (secim2 == 5) {
printf("Yemek: Hawaiian Pizza\n");
}
} else if (secim == 3) {
if (secim2 == 1) {
printf("Yemek: Cheeseburger\n");
} else if (secim2 == 2) {
printf("Yemek: Hamburger\n");
} else if (secim2 == 3) {
printf("Yemek: Double Cheeseburger\n");
} else if (secim2 == 4) {
printf("Yemek: Chicken Burger\n");
} else if (secim2 == 5) {
printf("Yemek: Veggie Burger\n");
}
}
printf("Toplam Tutar: %d TL\n", fiyat); 

FILE *dosya;
dosya = fopen("siparisler.txt", "a");
fprintf(dosya, "Sipariþ Özeti:\n");
fprintf(dosya, "Telefon numarasý: %s\n", user.tel_no);
fprintf(dosya, "Restoran: %d\n", secim);
fprintf(dosya, "Yemek: %d\n", secim2);
fprintf(dosya, "Icecek: %d\n", secim3);
fprintf(dosya, "Fiyat: %d TL\n", fiyat);
//teslim süresi
srand(time(NULL));
int teslimSuresi = 20 + rand() % 41; 
printf("Tahmini teslim suresi: %d dk\n", teslimSuresi);
//indirim kuponu
int discountCoupon = getDiscountCoupon(fiyat);
  return 0;
}


int getDiscountCoupon(int fiyat) {
  if (fiyat >=30 && fiyat <50)
  {
      printf("Bu siparisinizden 10 TL indirim kuponu kazandiniz!");
      return 10;
  }
  else if (fiyat >=50 && fiyat <80)
  {
      printf("Bu siparisinizden 20 TL indirim kuponu kazandiniz!");
      return 20;
  }
  else if (fiyat >80)
  {
      printf("Bu siparisinizden 30 TL indirim kuponu kazandiniz!");
      return 30;
  }
}

void odemeSecimi() {
    int odemeYontemi;
    printf("Lutfen odeme yontemini seciniz:\n");
    printf("1- Kapida Odeme\n");
    printf("2- Kredi Karti\n");
    printf("3- Havale/EFT\n");
    scanf("%d", &odemeYontemi);
while (odemeYontemi < 1 || odemeYontemi > 3) {
  printf("Gecersiz secim yaptiniz. Lutfen tekrar giriniz: ");
  scanf("%d", &odemeYontemi);
}
char kartno[17];  // kart numarasýný tutacak dizi
if (odemeYontemi == 2) {
	printf("Lutfen kart bilgilerinizi giriniz.\n");
	scanf("%s",&kartno);
while (strlen(kartno) != 16 || !isdigit(kartno[0])) {
  printf("Kart numaraniz 16 haneli ve sadece rakamlardan olusmalidir! Lutfen tekrar giriniz: ");
  scanf("%s",&kartno);
}
}
if (odemeYontemi == 3) {
  printf("Odemeyi asagida verilen IBAN'a gonderiniz.\n");
  printf("EFE TURKAN\nYAPI KREDI BANKASI\nTR590006701000000068533318\n\n\n");

  char cevap;  // kullanýcýnýn yanýtýný tutacak deðiþken
  do {
    printf("Odemeyi yaptiniz mi? (E/H) ");
    scanf(" %c", &cevap);  

    if (cevap == 'H' || cevap == 'h') {
      printf("Lutfen odemeyi gerceklestiriniz. Odemeyi gerceklestirdikten sonra E tusu ile onay veriniz\n");
    }
  } while (cevap != 'E' && cevap != 'e');
}
}
