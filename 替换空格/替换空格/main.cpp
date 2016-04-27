#include <iostream>

using namespace std;

void replaceSpace(char * &str);
int main()
{
	char *str = "We are happy.";
	cout << str << endl;
	replaceSpace(str);
	cout << str << endl;

}

void replaceSpace(char * &str)
{
	if (str == nullptr)
		return;
	int length = 0;
	int spaceNum = 0;
	char *pStr = str;
	while (*pStr != '\0')
	{
		length++;
		if (*pStr == ' ')
			spaceNum++;

		pStr++;
	}

	int newLen = length + 2 * spaceNum + 1;
	char *pnew = new char[newLen];
	memset(pnew, 0, newLen);
	newLen = 0;
	pStr = str;
	while (*pStr != '\0')
	{
 		char ch = *pStr;
		if (ch == ' ')
		{
			pnew[newLen++] = '%';
			pnew[newLen++] = '2';
			pnew[newLen++] = '0';
		}
		else
		{
			pnew[newLen++] = ch;
		}
		pStr++;
	}

	str = pnew;
}