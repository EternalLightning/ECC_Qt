#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "convert.cpp"

//int main(int argc, char *argv[]){
//	QApplication a(argc, argv);
//	QPushButton button("Hello world!", nullptr);
//	button.resize(200, 100);
//	button.show();
//	return QApplication::exec();
//}

int main(){
	int s;
	std::cin>>s;
	encryption("mihoyo", "123456");
}