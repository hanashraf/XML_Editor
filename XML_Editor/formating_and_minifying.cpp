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

string minifying_func(vector<string>& xml)
{
	//string fady hrg3 feeh al result ale 3mltha be minifying nafsahaa
	string result = "";
	// el variable i dah ale h-loop beeh 3ala kol al elements elly fel array element by element y3ne line by line
	for (int i = 0; i < xml.size(); i++)
	{
		// el variable j dah ale h-loop beh 3al line al m3aya (element) lahdd akhroo
		for (int j = 0; j < xml[i].size(); j++)
		{
			// hafdal a-loop 3al line lahd mal charachter ale ana wa2f 3ndo msh be space fadya ' ' w mesh be tab ( asci of tab space equals 9 decimal )
			if (xml[i][j] != ' ' && xml[i][j] != 9)
			{
				//khale al xml[i] bysawe al xml[i] mn awel al charachters lahd al akher 
				xml[i] = xml[i].substr(j, xml[i].size() - j);
				break;
			}
		}
		// variable j dh h-loop beeh 3al line mn awel charachter mawgud fel akher lahdd al awel mel shemal  
		for (int j = xml[i].size() - 1; j >= 0; j--)
		{
			// law al charachter ale ana wa2f 3ndo msh be space fadya ' ' w mesh be tab ( asci of tab space equals 9 decimal )
			if (xml[i][j] != ' ' && xml[i][j] != 9)
			{
				//khale al xml[i] mn awel el charachters lahd akher charachter abl awel space
				xml[i] = xml[i].substr(0, j + 1);
				break;
			}
		}
		result += xml[i];
	}

	string file_name = "test_result.txt"; // this file name must be created and located in your project folder
	vector<string> res; // array to store the xml lines
	res.push_back(result); // to store the lines line by line
	writeFile(file_name, res); // to save the xml lines as line by line in the .txt file 
	return result; // return the whole xml file as one 
}

string getTabs(int n)
{
    string tabs = ""; // for alignment of the tags
    string tab = "  "; // equals 4 spaces
    for (int i = 0; i < n; i++)
    {
        tabs += tab;
    }
    return tabs;
}