#include <iostream>
#include <fstream>

using namespace std;

int const n=500;

void ciecie(int k, int* w){
	long long i=0, a=0, b=0, kpot=0, kk=k, pom=0, pot=1;
	while(kk>0){
		kk/=10;
		kpot++;
	}
	kpot/=2;
	
	for(i=0; i<kpot; i++){
		pom=k%10;
		b+=pom*pot;
		pot*=10;
		k/=10;
	}
	a=k;
	w[0]=a;
	w[1]=b;
}

int nwd(int a, int b){
	int r=0;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby1.txt");
	int w[2];
	int i=0, a=0, b=0, liczba=0, licznik=0;
	
	for(i=0; i<n; i++){
		we>>liczba;
		ciecie(liczba, w);
		a=w[0];
		b=w[1];
		if(nwd(a,b)==1)
			licznik++;
	}	
	
	cout<<licznik;
	
	return 0;
}
