#ifndef DIALOG3_H
#define DIALOG3_H
#include<QWidget>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>
#include<dialog1.h>
#include<QTextEdit>
#include<QComboBox>
#include <QFormLayout>
#include <QSpacerItem>
#include <QGridLayout>
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
