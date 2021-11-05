#ifndef DIALOG1_H
#define DIALOG1_H
#include<QWidget>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>




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

#endif // DIALOG1_H
