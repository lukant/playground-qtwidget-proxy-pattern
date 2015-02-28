#include "translatedMessage.h"

TranslatedMessage::TranslatedMessage(Message message, QObject *parent)
    : AbstractMessage(parent), message(message)
{

}

TranslatedMessage::~TranslatedMessage()
{
}

QString TranslatedMessage::getMessage()
{
    switch(message)
    {
        case STARTUP:
    {
        return "Startup";
    }
    case OTHER:
    {
        return "Other";
    }
    default:
        return "Should not happen";
    }
}

