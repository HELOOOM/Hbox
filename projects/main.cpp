#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSlider>
#include <QSpinBox>
//#include <dialog1.h>
#include <dialog2.h>
//#include <dialog3.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
auto D = new Dialog2;
D->show();
    return a.exec();
}
