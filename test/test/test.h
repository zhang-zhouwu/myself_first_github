#ifndef TEST_H
#define TEST_H

#include <QtGui/QMainWindow>
#include "ui_test.h"


class test : public QMainWindow
{
	Q_OBJECT

public:
	test(QWidget *parent = 0, Qt::WFlags flags = 0);
	~test();
	void a();
	void b();
	public slots:
		

private:
	Ui::testClass ui;
};

#endif // TEST_H
