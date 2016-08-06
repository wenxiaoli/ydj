#ifndef YDJ_H
#define YDJ_H

#include <QtWidgets\qmainwindow.h>
#include "ui_ydj.h"

class ydj : public QMainWindow
{
	Q_OBJECT

public:
	ydj(QWidget *parent = 0);
	~ydj();

private:
	Ui::ydjClass ui;
};

#endif // YDJ_H
