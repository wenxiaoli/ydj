#include "ydj.h"
#include <QtWidgets/QApplication>
#include "vld.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ydj w;
	w.show();

	return a.exec();
}
