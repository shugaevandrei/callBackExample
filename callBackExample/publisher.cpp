#include "publisher.h"


Publisher::Publisher(void (*pFunc)(QString), QObject *parent) : QObject(parent), pFunc_(pFunc)
{
   connect(&t_, &QTimer::timeout, this, &Publisher::notify);
   t_.start(2000);
}

void Publisher::notify()
{
    pFunc_("timeout!");
}
