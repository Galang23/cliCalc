// cliCalc, Copyright 2016 Galang2. Licensed under GPLv3.
// Original programming language is  C#, ported to C++ by Galang2.
// Model pemberian versi: Major.minor.build.jumlahBugsFixed

#include <iostream>
using namespace std;

double a, b, c, d;
char yn;

void TambahUlang(){
	cout << "Lanjutan dari sebelumnya" << endl;
	a = c;
	cout << "a = " << a << endl;
	cout << "b = ";
	cin >>  b;
	if(b != (int)b){
		cout << "Masukkan angka!" << endl;
	}
	c = a + b;
	cout << a << " + " << b << " = " << c << endl;
	
	cout << "Lanjutkan ? (y/n) ";
	cin >> yn;
	if(yn == 'y'){
		TambahUlang();
	}
}

void KurangUlang(){
	cout << "Lanjutan dari sebelumnya" << endl;
	a = c;
	cout << "a = " << a << endl;
	cout << "b = ";
	cin >>  b;
	c = a - b;
	cout << a << " - " << b << " = " << c << endl;
	
	cout << "Lanjutkan ? (y/n) ";
	cin >> yn;
	if(yn == 'y'){
		KurangUlang();
	}
}

void KaliUlang(){
	cout << "Lanjutan dari sebelumnya" << endl;
	a = c;
	cout << "a = " << a << endl;
	cout << "b = ";
	cin >>  b;
	c = a * b;
	cout << a << " * " << b << " = " << c << endl;
	
	cout << "Lanjutkan ? (y/n) ";
	cin >> yn;
	if(yn == 'y'){
		KaliUlang();
	}
}

void BagiUlang(){
	cout << "Lanjutan dari sebelumnya" << endl;
	a = c;
	cout << "a = " << a << endl;
	cout << "b = ";
	cin >>  b;
	c = a / b;
	cout << a << " / " << b << " = " << c << endl;
	
	cout << "Lanjutkan ? (y/n) ";
	cin >> yn;
	if(yn == 'y'){
		BagiUlang();
	}
}

void Tambah(){
	cout << "Tambah\n";

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	c = a + b;

	cout << a << " + " << b << " = " << c << endl;;
	
	cout << "Ulangi pertambahan ? (y/n)" ;
	cin >> yn;
	
	switch(yn){
		case 'y':
		    TambahUlang();
		break;
		case 'n':
		    cout << "Cancelled" << endl;
		break;
	}
}

void Kurang(){
	cout << "Kurang\n";

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	c = a - b;

	cout << a << " - " << b << " = " << c << endl;

	cout << "Ulangi pengurangan ? (y/n)" ;
	cin >> yn;
	
	switch(yn){
		case 'y':
		    KurangUlang();
		break;
		case 'n':
		    cout << "Keluar" << endl;
		break;
	}
}

void Kali(){
	cout << "Kali\n";

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	c = a * b;

	cout << a << " * " << b << " = " << c << endl;
	
	cout << "Ulangi pengalian ? (y/n)" ;
	cin >> yn;
	
	switch(yn){
		case 'y':
		    KaliUlang();
		break;
		case 'n':
		    cout << "Kelar" << endl;
		break;
	}
}

void Bagi(){
	cout << "Bagi\n";

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	c = a / b;

	cout << a << " / " << b << " = " << c << endl;
	
	cout << "Ulangi pembagian ? (y/n)" ;
	cin >> yn;
	
	switch(yn){
		case 'y':
		    BagiUlang();
		break;
		case 'n':
		    cout << "Selesai" << endl;
		break;
	}
}

void Welcome(){
	cout << "cliCalc, Kalkulator command line" << endl;
	cout << "Pilih Mode <+|-|*|/> : ";

	char bb;
	cin >> bb;
	cout << endl;

	switch (bb){
	case '+':
		Tambah();
		break;
	case '-':
		Kurang();
		break;
	case '*':
		Kali();
		break;
	case '/':
		Bagi();
		break;
	}
}

int main(int argc, char* argv[]){
    Welcome();
}
