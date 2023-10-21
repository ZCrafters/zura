#include <iostream>
#include <string.h>
using namespace std;

int main () {
string anggrek [] = {"dendrobium", "tebu", "bulan", "violet", "anggrek", "kebutan"};
string warna [] = {"merah", "kuning", "ungu", "biru", "jingga", "hijau"};   
int i;

int ujanggaming99 = sizeof (anggrek) / sizeof (anggrek)[0]; 	
	
cout <<"Pameran Anggrek" <<endl;			
cout <<"===============" <<endl;                              

for (i=0;i<ujanggaming99; i++) {
cout <<"Anggreknya :" <<anggrek[i] <<endl;
cout <<"warna anggreknya :"<<warna[i] <<endl;     
	}
	
}
