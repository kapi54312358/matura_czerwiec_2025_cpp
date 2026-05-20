#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int const n=10000;

bool czy_cyfra(char a){
	if(a>=48 && a<=57)
		return true;
	else
		return false;
}

int z_ilu_cyfr(string a){
	int w=0, i=0, pom=0;
	char l=0;
	int Licznik[10];
	for(i=0; i<10; i++){
		Licznik[i]=0;
	}
	
	for(i=0; i<a.size(); i++){
		pom=a[i];
		if(pom>=48 && pom<=57){
			pom-='0';
			Licznik[pom]++;
		}	
	}
	
	for(i=0; i<10; i++){
		if(Licznik[i]!=0) w++;	
	}
	
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/dane.txt");
	string ciag="", l="";
	vector <string> liczby;
	int i=0, j=0, w=0, najm=1000;
	
	we>>ciag;
	
	for(i=0; i<n; i++){
		if(czy_cyfra(ciag[i])){
			l="";
			l+=ciag[i];
			j=i+1;
			while(czy_cyfra(ciag[j])){
				l+=ciag[j];
				j++;
			}
			liczby.push_back(l);
			i=j;
		}
	}
	
	for(i=0; i<liczby.size(); i++){
		l=liczby[i];
		if(l.size()==9){
			w=z_ilu_cyfr(l);
			if(w<najm){
				najm=w;
			}
		}
	}
	
	for(i=0; i<liczby.size(); i++){
		l=liczby[i];
		if(l.size()==9){
			w=z_ilu_cyfr(l);
			if(w==najm){
				cout<<l<<endl;
			}
		}
	}
	
	return 0;
}
