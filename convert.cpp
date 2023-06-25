#include "ECC.cpp"
#include <fstream>
#include <cstring>

bool checkName(const char* name){
	int len=std::strlen(name);
	for(int i=0;i<len;++i)
		if(!(name[i]>='0'&&name[i]<='9'||name[i]>='a'&&name[i]<='z'||name[i]>='A'&&name[i]<='Z'||name[i]=='-'||name[i]=='_'))
			return false;
	return true;
}

void encryption(const char* name, const char* pwd){
	std::string fileName="Data\\";
	fileName.append(name);
	fileName.append(".pwd");
	freopen(fileName.c_str(), "w", stdout);

}