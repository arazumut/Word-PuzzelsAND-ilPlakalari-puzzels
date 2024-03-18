#include <iostream>
#include <clocale>
#include <ctime>		
#include <iomanip>		
#include <thread>		
#include <chrono>		

using namespace std;



int main() {
	setlocale(LC_ALL, "tr_TR.UTF-8");
	int soru = 1, rastgele = 0, kacSoru = 5, dogruSayisi = 0, yanlisSayisi = 0, plakaCevap = 0;
	float sonuc = 0;
	string ilCevap;
	srand(time(0));


	//	KAPAK
	cout << "\t\t" << (char)15 << "-----------------------------------------------" << (char)15 << endl;
	cout << "\t\t|By  Kamil Kamil Umut Araz instagram : k.umutarazz|" << endl;
	cout << "\t\t" << char(15) << "-----------------------------------------------" << (char)15 << endl << endl;
	cout << "\t\tSeçtiğiniz kadar soru sayısıyla sınanarak Türkiye'den iller ve plaka kodları ile" << endl;
	cout << "\t\tsınandığınız, başarı oranınızla kendinizi test ettiğiniz programdır." << endl << endl;

	//	IL ARRAYI
	string il[82] = { "0","Adana","Adıyaman","Afyon","Ağrı","Amasya","Ankara","Antalya","Artvin","Aydın","Balıkesir",
						"Bilecik","Bingöl","Bitlis","Bolu","Burdur","Bursa","Çanakkale","Çankırı","Çorum","Denizli",
						"Diyarbakır","Edirne","Elazığ","Erzincan","Erzurum","Eskişehir","Gaziantep","Giresun","Gümüşhane","Hakkari",
						"Hatay","Isparta","İçel","İstanbul","İzmir","Kars","Kastamonu","Kayseri","Kırklareli","Kırşehir",
						"Kocaeli","Konya","Kütahya","Malatya","Manisa","Maraş","Mardin","Muğla","Muş","Nevşehir",
						"Niğde","Ordu","Rize","Sakarya","Samsun","Siirt","Sinop","Sivas","Tekirdağ","Tokat",
						"Trabzon","Tunceli","Urfa","Uşak","Van","Yozgat","Zonguldak","Aksaray","Bayburt","Karaman",
						"Kırıkkale","Batman","Şırnak","Bartın","Ardahan","Iğdır","Yalova","Karabük","Kilis","Osmaniye",
						"Düzce" };

	// Kaç soru soralım?
	cout << "\t\tKendinizi kac soruyla sinamak istersiniz: "; cin >> kacSoru;
	cout << "\033[2J\033[1;1H";		

	// Yarışma
	while (soru <= kacSoru) {
		cout << "\tİl Plakaları" << endl << "\t................." << endl << "\tSORU " << soru << endl;
		rastgele = rand() % (81 - 1 + 1) + 1;
		cout << "\t" << il[rastgele] << ": ";
		cin >> plakaCevap;
		if (plakaCevap == rastgele) {
			cout << "\tDogru!" << endl;
			dogruSayisi++;
		}
		else {
			cout << "\tYanlis, dogrusu " << setfill('0') << setw(2) << rastgele << endl;
			yanlisSayisi++;
		}soru++;
		this_thread::sleep_for(chrono::milliseconds(1000));
		cout << "\033[2J\033[1;1H";	
	}


	// Hesap 
	cout << "\t Kamil Umut Araz" << endl << "\t............................................" << endl;
	cout << "\t- " << kacSoru << " soruda " << dogruSayisi << " doğru / " << yanlisSayisi << " yanlış" << endl;
	sonuc = dogruSayisi * 100 / (float)kacSoru;
	cout << "\t  % " << fixed << setprecision(2) << sonuc << " başarılı oldunuz." << endl << endl;

	cout << "\t- Solo Test'e göre ";

	if (sonuc < 11.12) { cout << "Beyinsiz"; }
	else if (sonuc < 22.23) { cout << "Gerizekalı"; }
	else if (sonuc < 33.34) { cout << "Aptal"; }
	else if (sonuc < 44.45) { cout << "Tecrübesiz"; }
	else if (sonuc < 55.56) { cout << "Normal"; }
	else if (sonuc < 66.67) { cout << "Başarılı"; }
	else if (sonuc < 77.78) { cout << "Kurnaz"; }
	else if (sonuc < 88.89) { cout << "Zeki"; }
	else { cout << "Bilgin"; }
	cout << " derecesindesiniz.\n\t- İlköğretim Kurumları Yönetmeliğine göre ";

	if (sonuc < 45) { cout << "(1) Başarısız"; }
	else if (sonuc < 55) { cout << "(2) Geçer"; }
	else if (sonuc < 69) { cout << "(3) Orta"; }
	else if (sonuc < 85) { cout << "(4) İyi"; }
	else { cout << "(5) Pekiyi"; }
	cout << " not aldınız." << endl << endl;

	cout << "\t- Yüksek sonuçlar için kendinizi sınamaya devam edebilir,\n\t  hassas sonuçlar için soru sayısını yüksek tutabilirsiniz." << endl << endl;

	cout << endl; return 0;
}