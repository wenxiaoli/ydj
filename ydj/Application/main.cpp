#include "ydj.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ydj w;
	w.show();
	return a.exec();
}
