#include "splashscreen.h"

SplashScreen::SplashScreen(AbstractMessage *message, QWidget *parent)
    : QMainWindow(parent), message(message)
{
    label = new QLabel(this);
    messageChanged();

    QObject::connect(message, SIGNAL(messageChanged()),
                     this, SLOT(messageChanged()));
}

SplashScreen::~SplashScreen()
{
    delete message;
}

void SplashScreen::killYourself()
{
    this->deleteLater();
}

void SplashScreen::messageChanged()
{
    QString text = message->getMessage();

    label->setText(text);
}

