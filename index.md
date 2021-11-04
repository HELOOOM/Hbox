# Hbox Report

# Definition
A **Widgets** is an element of a graphical user interface (GUI) that displays information or provides a specific way for a user to interact with the operating system or an application.

 - ## [**Dialog1**](#dialog1)
 
 - ## [**Result**](#result)
 
 - ## [**Dialog2**](#dialog2)
  
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
### Result
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










