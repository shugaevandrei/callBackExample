#pragma once
#include <QString>
#include <QTimer>
#include <QObject>

class Publisher : public QObject
{
    Q_OBJECT

public:
    Publisher(void(*pFunc)(QString), QObject* parent = nullptr);

public slots:
    void notify();

private:
    void(*pFunc_)(QString);
    QTimer t_;
};
