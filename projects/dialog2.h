#ifndef DIALOG2_H
#define DIALOG2_H
#include<QWidget>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>
#include<dialog1.h>
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

#endif // DIALOG2_H
