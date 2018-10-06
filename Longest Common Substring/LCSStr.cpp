#include"LCSStr.h"

LCSStr::LCSStr(const string compareString, const char spiltChar)
{
	int position = compareString.find(spiltChar);
	if(-1 == position)
	{
		this->compareStrA = compareString;
		this->compareStrB = compareString;
	}
	this->compareStrA = compareString.substr(0,position-1);
	this->compareStrB = compareString.substr(position+1,compareString.size());
	this->initialization();
}

bool LCSStr::equalstr(char a,char b)
{
	if(a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void LCSStr::initialization()
{
	this->Row = this->compareStrA.size() + 1;
	this->Column = this->compareStrB.size() + 1;

	this->scorematrix = new int* [this->Row];
	for(int i=0;i<this->Row;i++)
	{
		scorematrix[i] = new int[this->Column];
		memset(scorematrix[i],0,sizeof(int)*this->Column);
	}
}

void LCSStr::getmatrix()
{
	int Row = this->Row;
	int Cloumn = this->Column;


	for(int i=1;i<Row;i++)
	{
		for(int j=1;j<Cloumn;j++)
		{
			if(this->equalstr(this->compareStrA[i-1],this->compareStrB[j-1]))
			{
				this->scorematrix[i][j] = this->scorematrix[i-1][j-1] + 1;
			}
			else
			{
				this->scorematrix[i][j] = 0;
			}
		}
	}
}

void LCSStr::printfmatrix()
{
	int Row = this->Row;
	int Cloumn = this->Column;

	for(int i=0;i<Row;i++)
	{
		for(int j = 0;j<Column;j++)
		{
			cout<<this->scorematrix[i][j]<<"  ";
		}
		cout << endl;
	}
}

string LCSStr::getcommonSubstring()
{
	int maxbvalue = 0;
	int Row = this->Row;
	int Cloumn = this->Column;
	point xy ;

	for(int i=0;i<Row;i++)
	{
		for(int j = 0;j<Column;j++)
		{
			if(this->scorematrix[i][j] > maxbvalue)
			{
				maxbvalue = scorematrix[i][j];
				xy.x = i - 1;
				xy.y = j - 1;
			}
		}
	}
	this->commonSubstring = this->compareStrA.substr(xy.x-maxbvalue+1,xy.x+1);
	return this->commonSubstring;
}