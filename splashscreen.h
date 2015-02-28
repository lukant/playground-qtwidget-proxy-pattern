#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>
#include <QLabel>

#include <abstractmessage.hpp>

class SplashScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit SplashScreen(AbstractMessage* message, QWidget *parent = 0);
    ~SplashScreen();

signals:

public slots:
    void killYourself();

private slots:
    void messageChanged();

private:
    AbstractMessage* message;
    QLabel* label;
};

#endif // SPLASHSCREEN_H
