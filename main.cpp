#include "mainwindow.h"
#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
	if(!QDir("Folder").exists()){
		QDir().mkdir("tmp");
	}

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
