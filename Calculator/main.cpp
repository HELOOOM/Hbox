#include <QApplication>
#include "dia.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   dia cal;
    cal.setWindowTitle("Calculator");
    cal.resize(300,400);
    cal.show();
    return a.exec();
}
