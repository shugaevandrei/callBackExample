#include <QCoreApplication>
#include "subscriber.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Subscriber s;
    return a.exec();
}
