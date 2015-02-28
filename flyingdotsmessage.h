#ifndef FLYINGDOTSMESSAGE_H
#define FLYINGDOTSMESSAGE_H

#include <QObject>
#include "abstractmessage.hpp"

class FlyingDotsMessage : public AbstractMessage
{
    Q_OBJECT
public:
    FlyingDotsMessage(AbstractMessage* message, QObject* parent);
    ~FlyingDotsMessage();

private:
    AbstractMessage* message;

private slots:
    void internalMessageChanged();
    void timeElapsed();

public:
    QString getMessage();
    unsigned int dotsNumber;
};

#endif // FLYINGDOTSMESSAGE_H
