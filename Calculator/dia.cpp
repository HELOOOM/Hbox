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
        b0 = new QPushButton(QString::number(0));
        b0->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        b0->resize(sizeHint().width(), sizeHint().height());
        //b1
         b1 = new QPushButton(QString::number(1));
         b1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b1->resize(sizeHint().width(), sizeHint().height());
         //b2
         b2 = new QPushButton(QString::number(2));
         b2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b2->resize(sizeHint().width(), sizeHint().height());
         //b3
         b3 = new QPushButton(QString::number(3));
         b3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b3->resize(sizeHint().width(), sizeHint().height());
         //b4
         b4 = new QPushButton(QString::number(4));
         b4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b4->resize(sizeHint().width(), sizeHint().height());
         //b5
         b5 = new QPushButton(QString::number(5));
         b5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b5->resize(sizeHint().width(), sizeHint().height());
         //b6
         b6 = new QPushButton(QString::number(6));
         b6->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b6->resize(sizeHint().width(), sizeHint().height());
         //b7
         b7= new QPushButton(QString::number(7));
         b7->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b7->resize(sizeHint().width(), sizeHint().height());
         //b8
         b8 = new QPushButton(QString::number(8));
         b8->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b8->resize(sizeHint().width(), sizeHint().height());
        //b9
         b9= new QPushButton(QString::number(9));
         b9->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
         b9->resize(sizeHint().width(), sizeHint().height());
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
    buttonsLayout->addWidget(b1, 0, 1);
    buttonsLayout->addWidget(b2, 0, 2);
    buttonsLayout->addWidget(b3, 0,3);
    buttonsLayout->addWidget(b4, 1, 1);
    buttonsLayout->addWidget(b5, 1 , 2);
    buttonsLayout->addWidget(b6, 1, 3);
    buttonsLayout->addWidget(b7, 2, 1);
    buttonsLayout->addWidget(b8, 2, 2);
    buttonsLayout->addWidget(b9, 2, 3);
    buttonsLayout->addWidget(b0, 3, 2,1,1);
    buttonsLayout->addWidget(enter, 3, 1, 1,1);
    buttonsLayout->addWidget(AC, 3, 3, 1,1);
}

void dia::keyPressEvent(QKeyEvent *e)
{
    if( e->key() == Qt::Key_Escape)
        qApp->exit(0);
}
