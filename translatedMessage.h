#pragma once

#include <QObject>
#include <abstractmessage.hpp>

enum Message
{
    STARTUP,
    OTHER
};

class TranslatedMessage : public AbstractMessage
{
    Q_OBJECT
public:
    explicit TranslatedMessage(Message message, QObject *parent = 0);
    ~TranslatedMessage();
    QString getMessage();

public slots:

private:
    Message message;
};

