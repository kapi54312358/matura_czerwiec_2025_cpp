#include <iostream>
#include <fstream>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby2.txt");
	int i=0, j=0, pot=1, stopien_Kaprekara=0, najw=0, id_najw=0;
	int liczby[n];
	long long a=0, b=0, c=11;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}

	for(i=0; i<n; i++){
		a=liczby[i]*liczby[i];
		b=0;
		c=11;
		j=0;
		pot=1;
		stopien_Kaprekara=0;
		
		while(c>10){
			pot*=10;
			b=a%pot;
			c=a/pot;
			if(c+b<=liczby[i]) stopien_Kaprekara++;
		}
		
		if(stopien_Kaprekara>najw){
			najw=stopien_Kaprekara;
			id_najw=i;
		}
	}
	
	cout<<najw<<endl<<liczby[id_najw];
	
	return 0;
}
