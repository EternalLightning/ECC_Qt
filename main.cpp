#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "convert.h"

//int main(int argc, char *argv[]){
//	QApplication a(argc, argv);
//	QPushButton button("Hello world!", nullptr);
//	button.resize(200, 100);
//	button.show();
//	return QApplication::exec();
//}

int main(){
	BigInteger a,b;
	cin>>a>>b;
	cout<<a*b<<endl;
	return 0;
}