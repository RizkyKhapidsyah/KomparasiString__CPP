#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	string Input;
	string Kata("RizkyKhapidsyah");

	cout << "Masukkan Sebuah Kata  : ";
	cin >> Input;

	if (Kata == Input)
	{
		cout << "Kata yang Anda masukkan, Sama dengan isi dari variabel";
	}
	else
	{
		cout << "Kata yang Anda masukkan, Tidak Sama dengan isi dari variabel";
	}

	puts("\n");

	while (true)
	{
		cout << "Tebak Sebuah Nama            : ";
		cin >> Input;
		
		if (Input == Kata)
		{
			cout << "Tebakan Anda Benar." << endl;
			break;
		}
		else
		{
			cout << "Tebakan Anda Salah!" << endl << endl;
		}
	}

	cout << "Program Selesai.";
	_getch();
	return 0;
}