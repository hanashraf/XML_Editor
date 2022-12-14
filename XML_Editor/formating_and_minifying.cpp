#include "Formating_and_minifying.h"
bool writeFile(string fileName, const vector<string>& xml) {
	fstream out;
	out.open(fileName, ios::out);
	if (!out) {
		cout << "Cannot open the File : " << fileName << endl;
		return false;
	}
	if (out.is_open()) {
		for (int i = 0; i < (int)xml.size(); i++) {
			out << xml[i] << "\n";
		}
	}
	out.close();
	return true;
}

bool readFile(string fileName, vector<string>& xml)
{
	ifstream in(fileName.c_str());
	if (!in)
	{
		cout << "Cannot open the File : " << fileName << endl;
		return false;
	}
	string str;
	while (getline(in, str))
	{
		if (str.size() > 0)
			xml.push_back(str);
	}
	in.close();
	return true;
}