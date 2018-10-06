#ifndef DEF_LCSSTR
#define DEF_LCSSTR DEF_LCSSTR

#include <iostream>
#include <string>
using namespace std;
typedef struct point
{
	int x;
	int y;
};
class LCSStr
{
private:
	string compareStrA;
	string compareStrB;
	string commonSubstring;
	int Row;
	int Column;
	int ** scorematrix;
	void initialization();
	bool equalstr(char a,char b);
public:
	LCSStr(string compareStrA, string compareStrB):compareStrA(compareStrA),compareStrB(compareStrB){this->initialization();};
	LCSStr(const string compareString, const char spiltChar = '\n');
	void getmatrix();
	void printfmatrix();
	string getcommonSubstring();
};
#endif