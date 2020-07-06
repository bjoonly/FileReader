#include"BinaryFileReader.h"
#include"ASCIIFileReader.h"
int main() {
	string path("Text.txt");
	cout << "Text in file:\n";
	FileReader f;
	f.Display(path);
	cout << "\n\nText in file(ASCII):\n";
	ASCIIFileReader a;
	a.Display(path);
	cout << "\n\nText in file(binary code):\n";
	BinaryFileReader b;
	b.Display(path);
	return 0;
}