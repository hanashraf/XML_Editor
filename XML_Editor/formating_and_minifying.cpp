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