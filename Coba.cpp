\\Suhendra TIF-RM16C 16.111.261

#include <iostream>

#define PHI 3.14 // konstanta

using namespace std;
int main () {
	float jari_jari, luas;
	
	//konstanta
	jari_jari = 2.5;

	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout<<"Data lingkaran";
	cout<<"\njari-jari : "<<jari_jari;
	cout<<"nluas: "<<luas;
	cout<<"\n";
	return 0;
}