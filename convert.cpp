#include <fstream>
#include <cstring>
#include <direct.h>
#include "ECC.cpp"

bool checkName(const char *name){
	int len=std::strlen(name);
	for(int i=0;i<len;++i)
		if(!(name[i]>='0'&&name[i]<='9'||name[i]>='a'&&name[i]<='z'||name[i]>='A'&&name[i]<='Z'||name[i]=='-'||
		     name[i]=='_'))
			return false;
	return true;
}

bool checkPwd(const char *pwd){
	int len=std::strlen(pwd);
	for(int i=0;i<len;++i)
		if(pwd[i]<33||pwd[i]>126)
			return false;
	return true;
}

void encryption(const char *name, const char *pwd){
	if(_access("Data", 0)==-1)
		_mkdir("Data");
	std::string fileName="./Data/";
	fileName.append(name);
	fileName.append(".pwd");
	std::ofstream ouf(fileName);
	int len=std::strlen(pwd);

	ouf.close();
}

char* decryption(const char* name){
	std::ifstream inf;
	std::string fileName="./Data/";
	fileName.append(name);
	fileName.append(".pwd");
	inf.open("", std::ios::in);
	if(!inf.is_open()){
		std::cout<<"无法找到这个文件！"<<std::endl;
		return nullptr;
	}
	char buff[1024]={0};
	while(inf>>buff){
		std::cout<<buff<<std::endl;
	}
	inf.close();
}