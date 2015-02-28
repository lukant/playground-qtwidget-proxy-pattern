#include "flyingdotsmessage.h"

#include <QTimer>

namespace
{

const unsigned int DELAY = 500;
const unsigned int MAX_DOTS = 5;

}

FlyingDotsMessage::FlyingDotsMessage(AbstractMessage *message, QObject *parent)
    : AbstractMessage(parent), message(message), dotsNumber(0)
{
    QObject::connect(message, SIGNAL(messageChanged()),
                     this, SLOT(internalMessageChanged()));

    QTimer::singleShot(DELAY, Qt::CoarseTimer, this, SLOT(timeElapsed()));
}

FlyingDotsMessage::~FlyingDotsMessage()
{
    delete message;
}

void FlyingDotsMessage::internalMessageChanged()
{
    emit messageChanged();

}

void FlyingDotsMessage::timeElapsed()
{
    dotsNumber = ((dotsNumber+1) % MAX_DOTS);

    QTimer::singleShot(DELAY, Qt::CoarseTimer, this, SLOT(timeElapsed()));
    emit messageChanged();
}

QString FlyingDotsMessage::getMessage()
{
    QString internalString = message->getMessage();

    for(unsigned int i = 0; i < dotsNumber; i++)
        internalString.append(QChar('.'));

    return internalString;
}

