#pragma once
#include "FileReader.h"
class ASCIIFileReader :public FileReader{
public:
	virtual void Display(string path)const override;

};

