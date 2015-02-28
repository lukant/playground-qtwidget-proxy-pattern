#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

#include "splashscreen.h"
#include "translatedMessage.h"
#include "flyingdotsmessage.h"

#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton, SIGNAL(clicked()),
                     this, SLOT(btn1()));

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()),
                     this, SLOT(btn2()));

    QObject::connect(ui->pushButton_3, SIGNAL(clicked()),
                     this, SLOT(btn3()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btn1()
{
    TranslatedMessage* message = new TranslatedMessage(OTHER, 0);

    SplashScreen* splash = new SplashScreen(message, this);

    QTimer::singleShot(5000, Qt::CoarseTimer, splash, SLOT(killYourself()));

    splash->show();

    std::cout << "Btn1" << std::endl;
}

void MainWindow::btn2()
{
    TranslatedMessage* message = new TranslatedMessage(STARTUP, 0);

    SplashScreen* splash = new SplashScreen(message, this);

    QTimer::singleShot(5000, Qt::CoarseTimer, splash, SLOT(killYourself()));

    splash->show();

    std::cout << "Btn2" << std::endl;
}

void MainWindow::btn3()
{
    TranslatedMessage* message = new TranslatedMessage(OTHER, 0);
    FlyingDotsMessage* flyingDots = new FlyingDotsMessage(message, 0);

    SplashScreen* splash = new SplashScreen(flyingDots, this);

    QTimer::singleShot(5000, Qt::CoarseTimer, splash, SLOT(killYourself()));

    splash->show();

    std::cout << "Btn3" << std::endl;

}
