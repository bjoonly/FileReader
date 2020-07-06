#pragma once
#include<bitset>
#include "FileReader.h"
class BinaryFileReader :public FileReader{
public:
	virtual void Display(string path)const override;

};

