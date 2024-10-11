#include "test.h"

test::test(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	int a=0;
	ui.setupUi(this);
	int b = 0;
	int c = 0;

	int d;
}

test::~test()
{

}


void a()
{
	int a2;
}
		
void b()
{
	int b;
}

void c()
{
	a();
	b();
	c();
}
