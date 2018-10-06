#include"readdataclass.h"
#include"LCSStr.h"

void main()
{
	ReadData readData = ReadData("substring.txt");
	string content = readData.getcontent();

	LCSStr lcsstr = LCSStr(content);

	lcsstr.getmatrix();
	lcsstr.printfmatrix();
	cout<<lcsstr.getcommonSubstring()<<endl;

	getchar();
}