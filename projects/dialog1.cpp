#include "dialog1.h"
Dialog1::Dialog1(QWidget *parent):QWidget(parent)
{
createWidgets();
placeWidgets();
}
void Dialog1::createWidgets()
{
    label= new QLabel("Name");
    line =new QLineEdit();
    search= new QPushButton("search");
    layout =new QHBoxLayout();
    setLayout(layout);
}

void Dialog1::placeWidgets()
{
    layout->addWidget(label);
    layout->addWidget(line);
    layout->addWidget(search);
}
