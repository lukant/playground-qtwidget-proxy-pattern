#pragma once


#include <QObject>
#include <QString>

class AbstractMessage : public QObject
{
    Q_OBJECT
public:
    AbstractMessage(QObject* parent);
    virtual ~AbstractMessage() {}

    virtual QString getMessage() = 0;

signals:
    void messageChanged();
};
