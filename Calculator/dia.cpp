#include "dia.h"
#include <QKeyEvent>
#include <QApplication>


dia::dia(QWidget *parent)
    : QWidget(parent)
{
    createWidgets();
    placeWidget();
}
void dia::createWidgets()
{
    layout = new QVBoxLayout();
    layout->setSpacing(2);
    buttonsLayout = new QGridLayout;

    for (int i=0;i<10 ;i++ ) {
        numb.push_back(new QPushButton(QString::number(i)));
        numb.back()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        numb.back()->resize(sizeHint().width(), sizeHint().height());
    }


   enter = new QPushButton("Enter",this);
   enter->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
   enter->resize(sizeHint().width(), sizeHint().height());
   AC = new QPushButton("AC",this);
   AC->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
   AC->resize(sizeHint().width(), sizeHint().height());
    affiche = new QLCDNumber(this);
    affiche->setDigitCount(5);
}
void dia::placeWidget()
{
    setLayout(layout);
    layout->addWidget(affiche);
    layout->addLayout(buttonsLayout);
    buttonsLayout->addWidget(numb[1], 0, 1);
    buttonsLayout->addWidget(numb[2], 0, 2);
    buttonsLayout->addWidget(numb[3], 0,3);
    buttonsLayout->addWidget(numb[4], 1, 1);
    buttonsLayout->addWidget(numb[5], 1 , 2);
    buttonsLayout->addWidget(numb[6], 1, 3);
    buttonsLayout->addWidget(numb[7], 2, 1);
    buttonsLayout->addWidget(numb[8], 2, 2);
    buttonsLayout->addWidget(numb[9], 2, 3);
    buttonsLayout->addWidget(numb[0], 3, 2,1,1);
    buttonsLayout->addWidget(enter, 3, 1, 1,1);
    buttonsLayout->addWidget(AC, 3, 3, 1,1);
}

void dia::keyPressEvent(QKeyEvent *e)
{
    if( e->key() == Qt::Key_Escape)
        qApp->exit(0);
}
