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

int main(int argc, char** argv) {
	ifstream we("C:/cpp/dane.txt");
	string ciag="", l="";
	vector <string> liczby;
	int i=0, j=0, w=0;
	
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
		if(l.size()==9 && l[0]=='5')
			cout<<l<<endl;
	}
	
	return 0;
}
