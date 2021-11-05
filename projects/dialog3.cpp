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
//    auto leftLayout =new QVBoxLayout;
//    auto rightLayout=new QVBoxLayout;

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
//    auto rfLayout=new QHBoxLayout;
//    auto lfLayout=new QHBoxLayout;
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

//    fLayout->addLayout(lfLayout);
//    fLayout->addLayout(rfLayout);
    fLayout->addWidget(summaryLabel,0,Qt::AlignTop);
    fLayout->addWidget(summaryEdit,QSizePolicy::Expanding);


    //g
//    gLayout->addLayout(lgLayout);
//    gLayout->addLayout(rgLayout);
//    lgLayout->addWidget(reproducibilityLabel);
//    rgLayout->addWidget(reproducibility);

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
//    hLayout->addWidget(reset);
//    hLayout->addWidget(submit);
//    hLayout->addWidget(dontSubmit);

//    mainLayout->addLayout(leftLayout);
//    mainLayout->addLayout(rightLayout);
//    leftLayout->addWidget(nameLabel);
//    leftLayout->addWidget(companyLabel);
//    leftLayout->addWidget(phoneLabel);
//    leftLayout->addWidget(emailLabel);
//    leftLayout->addWidget(problemLabel);
//    leftLayout->addWidget(summaryLabel);
//    leftLayout->addWidget(reproducibilityLabel);
//    leftLayout->addWidget(reset);
//    rightLayout->addWidget(nameEdit);
//    rightLayout->addWidget(companyEdit);
//    rightLayout->addWidget(phoneEdit);
//    rightLayout->addWidget(emailEdit);
//    rightLayout->addWidget(problemEdit);
//    rightLayout->addWidget(summaryEdit);
    laLayout->addSpacerItem(new QSpacerItem(73,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    lbLayout->addSpacerItem(new QSpacerItem(61,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    lcLayout->addSpacerItem(new QSpacerItem(74,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    ldLayout->addSpacerItem(new QSpacerItem(80,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    leLayout->addSpacerItem(new QSpacerItem(66,10, QSizePolicy::Fixed,QSizePolicy::Fixed));
    lhLayout->addSpacerItem(new QSpacerItem(80,30, QSizePolicy::Expanding,QSizePolicy::Fixed));
    lgLayout->addSpacerItem(new QSpacerItem(37,0, QSizePolicy::Fixed,QSizePolicy::Fixed));
//    lgLayout->addSpacerItem(new QSpacerItem(1,0, QSizePolicy::Fixed,QSizePolicy::Fixed));




//    rightLayout->addWidget(reproducibility);
//    rightLayout->addLayout(drightLayout);
//    drightLayout->addWidget(submit);
//    drightLayout->addWidget(dontSubmit);
}
