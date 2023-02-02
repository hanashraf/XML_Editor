#include "formating_and_minifying.h"

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

vector<string> prettifying_func(vector<string>& xml)
{
    string s = minifying_func(xml); // to minify the xml into one single string without any spaces between the tags
    xml = {}; // to empty the xml array of strings
    bool open_tag = false; // flag for open tags
    bool close_tag = false; // flag for close tags
    string temp = "";
    int number_of_tabs = 0; // number of (4 spaces)
    for (int i = 0; i < s.size(); i++) //to loop the whole string character by character
    {
        if (s[i] == '<' && s[i + 1] != '/') // condition to check for the open tag case
        {

            open_tag = true;
            temp += s[i]; // to save '<'
        }
        else if (s[i] == '<' && s[i + 1] == '/') // condition to check for the close tag case
        {
            close_tag = true;
            temp += s[i]; // to save '<'
            temp += s[i + 1]; // to save '/'
            i++; // to skip '/' character because it is already saved in the previous line
        }
        else if (s[i] == '>') // case of end of tag (open tag or closed tag)
        {
            temp += s[i]; // to save '>'
            if (open_tag == true) // in case if it was an open tag
            {
                open_tag = false;
                string tabs = getTabs(number_of_tabs); // get string of tabs(each tab equal 4 spaces)
                xml.push_back(tabs + temp); // push the open tag into the xml vector
                number_of_tabs++; // add more tab(to next insert not to the current one)
                temp = ""; // to clear the temp variable again
            }
            else if (close_tag == true) // in case the tag is a closed tag
            {
                close_tag = false;
                number_of_tabs--; // remove one tab(4 spaces) to be aligned with its open tag
                if (temp[0] != '<') // in case of text + closed tag -> (leaf)
                {
                    string tabs = getTabs(number_of_tabs);
                    // to handle long lines
                    if ((tabs.size() + temp.size()) >= 60) // to be in multiple lines
                    {

                        // to get the index of closed tag (to separate between text and closed tag)
                        int x = temp.size() - 1;
                        while (temp[x] != '<')
                        {
                            x--;
                        }
                        string line = temp.substr(0, x);// this is the line of text
                        string tag = temp.substr(x, temp.size() - x);// this is the closed tag at the end of the text
                        int threshold = 60;//max size per line
                        string lineOfText = "";
                        // the next for loop is to divide the text into multiple lines
                        // and add each line to the xml vector
                        for (int j = 0; j <= line.size(); j++)
                        {
                            if (j > threshold)
                            {
                                xml.push_back(tabs + lineOfText);
                                lineOfText = "";
                                threshold += 60;//update the threshold (3shan al j btkmel increment msh bt3ed mel awel)
                            }
                            else
                            {
                                lineOfText += line[j];
                            }

                        }
                        if (lineOfText.size() != 0) // to check if there is any characters left
                        {
                            xml.push_back(tabs + lineOfText);
                        }
                        xml.push_back(tabs + tag);
                    }
                    else // to be in single line
                    {
                        xml[xml.size() - 1] += temp; // will add the text and closed tag to the last line which was an open tag
                    }
                    temp = ""; // to clear the temp variable after adding the text lines

                }
                else // if the temp contains tag only
                {
                    string tabs = getTabs(number_of_tabs);
                    xml.push_back(tabs + temp);
                    temp = "";
                }
            }
        }
        else// case of other characters
        {
            temp += s[i];
        }
    }
    string file_name = "prettifying_result.txt"; // this file name must be created and located in your project folder
    writeFile(file_name, xml);
    return xml;
}
