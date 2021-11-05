#ifndef DIA_H
#define DIA_H

#include <QMainWindow>
#include <QGridLayout>
#include <QVector>
#include <QPushButton>
#include <QLCDNumber>

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
