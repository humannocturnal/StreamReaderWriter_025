#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah interger maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain interger maka lock ini akan dieksekusi*/
		cout << "default Pengecualian dieksekusi" << endl;
	}

	return 0;
}