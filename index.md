# Hbox Report

# Definition
A **Widgets** is an element of a graphical user interface (GUI) that displays information or provides a specific way for a user to interact with the operating system or an application.
# Programming Widget Layout

 -  [**Dialog1**](#dialog1)
 
 
 -  [**Dialog1 Result**](#dialog1_result)
 
 -  [**Dialog2**](#dialog2)

-  [**Dialog2 Result**](#dialog2_result)

 -  [**Dialog3**](#dialog3)

-  [**Dialog3 Result**](#dialog3_result)

 -  [**Calculator**](#calculator)

-  [**Dia_Result**](#dia_result)
  
## Now we start with creating the **`main`** class 
```c++
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
auto D = new Dialog1;
D->show();
    return a.exec();
}
```
- #  Dialog1

###  _**Dialog1.h**_

```c++
class Dialog1: public QWidget
{
public:
    explicit Dialog1(QWidget *parent=nullptr);
protected:
    void makeConnexions();
    void createWidgets();
    void placeWidgets();
protected:
    QLabel *label;
    QLineEdit *line;
    QPushButton *search;
    QHBoxLayout *layout;
};
```
###  _**Dialog1.cpp**_

```c++
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

```
- # Dialog1_Result
![Image](image_2021-11-04_105237.png)

- #  Dialog2

### _**Dialog2.h**_

```c++
class Dialog2 : public QWidget
{
public:
    explicit Dialog2(QWidget *parent=nullptr);
protected:
    void makeConnexions();
    void createWidgets();
    void placeWidgets();
     ~Dialog2();
protected:
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QCheckBox *match;
    QCheckBox *backward;
    QPushButton *search;
     QPushButton *close;
};
```
### _**Dialog2.cpp**_
```c++
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
backward=new QCheckBox();
match =new QCheckBox();
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
```
- # Dialog2_Result

![Image](image_2021-11-05_002823.png)

- #  Dialog3

###  _**Dialog3.h**_
```c++
class Dialog3 : public QWidget
{
public:
   explicit Dialog3(QWidget *parent=nullptr);
protected:
    void makeConnexions();
    void createWidgets();
    void placeWidgets();
protected:
    QLabel *nameLabel;
    QLabel *companyLabel;
    QLabel *phoneLabel;
    QLabel *emailLabel;
    QLabel *problemLabel;
    QLabel *summaryLabel;
    QLabel *reproducibilityLabel;
    QLineEdit *nameEdit;
    QLineEdit *companyEdit;
    QLineEdit *phoneEdit;
    QLineEdit *emailEdit;
    QLineEdit *problemEdit;
    QTextEdit *summaryEdit;
    QComboBox *reproducibility;
    QPushButton *reset;
    QPushButton *submit;
    QPushButton *dontSubmit;
};
#endif // DIALOG3_H
```
###  _**Dialog3.cpp**_
```c++
#include "dialog3.h"
#include <QApplication>
Dialog3::Dialog3(QWidget *parent):QWidget(parent)
{
    createWidgets();
    placeWidgets();
//    makeConnexions();
}
void Dialog3::createWidgets()
{
   nameLabel=new QLabel("Name:");
   companyLabel=new QLabel("company");
   phoneLabel=new QLabel("phone");
   emailLabel=new QLabel("email");
   problemLabel=new QLabel("problem");
   summaryLabel=new QLabel("summary Imformation");
   reproducibilityLabel=new QLabel("reproducibility");
   nameEdit=new QLineEdit();
   companyEdit=new QLineEdit();
   phoneEdit=new QLineEdit();
   emailEdit=new QLineEdit();
   problemEdit=new QLineEdit();
   summaryEdit=new QTextEdit();
   reproducibility=new QComboBox();
   reproducibility->addItem("Always");
   reproducibility->addItem("Sometimes");
   reproducibility->addItem("Rarely");
   reset=new QPushButton("reset");
   submit=new QPushButton("submit");
   dontSubmit=new QPushButton("dont Submit");
}
void Dialog3::placeWidgets(){
    auto mainLayout =new QVBoxLayout;
    auto aLayout= new QHBoxLayout;
    auto raLayout=new QHBoxLayout;
    auto laLayout=new QHBoxLayout;
    auto bLayout=new QHBoxLayout;
    auto rbLayout=new QHBoxLayout;
    auto lbLayout=new QHBoxLayout;
    auto rcLayout=new QHBoxLayout;
    auto lcLayout=new QHBoxLayout;
    auto cLayout=new QHBoxLayout;
    auto dLayout= new QHBoxLayout;
    auto rdLayout=new QHBoxLayout;
    auto ldLayout=new QHBoxLayout;
    auto eLayout=new QHBoxLayout;
    auto reLayout=new QHBoxLayout;
    auto leLayout=new QHBoxLayout;
    auto fLayout=new QHBoxLayout;
    auto gLayout= new QHBoxLayout;
    auto rgLayout=new QHBoxLayout;
    auto lgLayout=new QHBoxLayout;
    auto hLayout=new QHBoxLayout;
    auto lhLayout=new QHBoxLayout;
    auto rhLayout=new QHBoxLayout;
    setLayout(mainLayout);
    mainLayout->addLayout(aLayout);
    mainLayout->addLayout(bLayout);
    mainLayout->addLayout(cLayout);
    mainLayout->addLayout(dLayout);
    mainLayout->addLayout(eLayout);
    mainLayout->addLayout(fLayout);
    mainLayout->addLayout(gLayout);
    mainLayout->addLayout(hLayout);
    //a
    aLayout->addLayout(laLayout);
    aLayout->addLayout(raLayout);
    laLayout->addWidget(nameLabel);
    raLayout->addWidget(nameEdit);
    //b
    bLayout->addLayout(lbLayout);
    bLayout->addLayout(rbLayout);
    lbLayout->addWidget(companyLabel);
    rbLayout->addWidget(companyEdit);
    //c
    cLayout->addLayout(lcLayout);
    cLayout->addLayout(rcLayout);
    lcLayout->addWidget(phoneLabel);
    rcLayout->addWidget(phoneEdit);
    //d
    dLayout->addLayout(ldLayout);
    dLayout->addLayout(rdLayout);
    ldLayout->addWidget(emailLabel);
    rdLayout->addWidget(emailEdit);
    //e
    eLayout->addLayout(leLayout);
    eLayout->addLayout(reLayout);
    leLayout->addWidget(problemLabel);
    reLayout->addWidget(problemEdit);
    //f
    fLayout->addWidget(summaryLabel,0,Qt::AlignTop);
    fLayout->addWidget(summaryEdit,QSizePolicy::Expanding);
    //g
    gLayout->addLayout(lgLayout);
    gLayout->addLayout(rgLayout);
    lgLayout->addWidget(reproducibilityLabel);
    rgLayout->addWidget(reproducibility,1);
    //h
    hLayout->addLayout(lhLayout);
    hLayout->addLayout(rhLayout);
    lhLayout->addWidget(reset);
    rhLayout->addWidget(submit);
    rhLayout->addWidget(dontSubmit);
    //adjusting spaces
    laLayout->addSpacerItem(new QSpacerItem(73,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    lbLayout->addSpacerItem(new QSpacerItem(61,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    lcLayout->addSpacerItem(new QSpacerItem(74,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    ldLayout->addSpacerItem(new QSpacerItem(80,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    leLayout->addSpacerItem(new QSpacerItem(66,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    lhLayout->addSpacerItem(new QSpacerItem(80,30, QSizePolicy::Expanding,QSizePolicy::Fixed));
    lgLayout->addSpacerItem(new QSpacerItem(37,0, QSizePolicy::Fixed,QSizePolicy::Fixed));
}
```
- # Dialog3_Result

![Image](dia3.png)

- # Calculator

## Now we start with creating the **`main`** class 
```c++
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   dia cal;
    cal.setWindowTitle("Calculator");
    cal.resize(600,700);
    cal.show();
    return a.exec();
}
```
###  _**Dia.h**_
class dia : public QWidget
{
    Q_OBJECT
public:
    dia(QWidget *parent = nullptr);
protected:
    void createWidgets();
    void placeWidget();

//events
protected:
    void keyPressEvent(QKeyEvent *e)override;
private:
    QGridLayout *buttonsLayout;
    QVBoxLayout *layout;
    QPushButton *b0;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *enter;
    QPushButton *AC;
    QLCDNumber *affiche;
};
#endif // CALCULATOR_H

```
### _**Dia.cpp**_
```c++
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
```
- # Dia_Result

![Image](dia3.png)
