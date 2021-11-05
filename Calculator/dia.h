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
   QVector<QPushButton*>numb;
    QPushButton *enter;
    QPushButton *AC;
    QLCDNumber *affiche;
};
#endif // CALCULATOR_H
