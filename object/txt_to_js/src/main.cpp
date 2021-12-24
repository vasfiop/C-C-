#include <iostream>
#include <fstream>
#include <windows.h>

#define TXT_FILE_NAME "test.txt"
#define JS_FILE "js.js"

using namespace std;

int main()
{
	fstream txt_file;
	fstream js_file;
	int count = 1;

	txt_file.open(TXT_FILE_NAME, ios::in);
	js_file.open(JS_FILE, ios::out);
	string line;
	getline(txt_file, line);

	js_file << "var member = [" << endl;
	while (!txt_file.eof())
	{
		js_file << "{" << endl;
		js_file << "\"phone\": \"No." << count << "\"," << endl;
		js_file << " \"name\": \"" << line << "\"" << endl;
		js_file << "}," << endl;
		count++;
		getline(txt_file, line);
	}
	js_file << "]" << endl;

	txt_file.close();
	js_file.close();

	system("pause");

	return 0;
}