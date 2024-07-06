#include "subscriber.h"
#include "publisher.h"
#include <QDebug>

Subscriber::Subscriber() : pFunc_(&Subscriber::subscribe),
                           publisher_(std::make_unique<Publisher>(pFunc_))
{}

Subscriber::~Subscriber() = default;

void Subscriber::subscribe(QString message)
{
    qDebug()<<"входящее сообщение" <<message;
}
