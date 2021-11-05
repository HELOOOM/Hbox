#include "dialog2.h"
#include <QApplication>
Dialog2::Dialog2(QWidget *parent):QWidget(parent)
{
createWidgets();
placeWidgets();
makeConnexions();
//Dialog2 *head=nullptr;
}

Dialog2 :: ~Dialog2()
{
    delete search;
    delete backward;
    delete nameEdit;
    delete nameLabel;
    delete match;
    delete close;
}

void Dialog2::createWidgets()
{
search=new QPushButton("search");
backward=new QCheckBox("search backward");
match =new QCheckBox("match case");
nameEdit=new QLineEdit();
nameLabel=new QLabel("Name");
close=new QPushButton("CLOSE");
}

void Dialog2::makeConnexions()
{
    connect(close, &QPushButton::clicked,qApp, &QApplication::exit);
}

void Dialog2::placeWidgets()
{
auto mainLayout =new QHBoxLayout;
auto leftLayout= new QVBoxLayout;
auto topLeftLayout=new QHBoxLayout;
auto rightLayout=new QVBoxLayout;
setLayout(mainLayout);

mainLayout->addLayout(leftLayout);
mainLayout->addLayout(rightLayout);

leftLayout->addLayout(topLeftLayout);

topLeftLayout->addWidget(search);
topLeftLayout->addWidget(nameEdit);
leftLayout->addWidget(match);
leftLayout->addWidget(backward);
rightLayout->addWidget(search);
rightLayout->addWidget(close);
auto policy =new QSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
rightLayout->addSpacerItem(new QSpacerItem(10,10, QSizePolicy::Expanding));





}
