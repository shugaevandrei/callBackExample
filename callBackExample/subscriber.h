#pragma once
#include <memory>
#include <QString>

class Publisher;
class Subscriber
{

public:
    Subscriber();
    ~Subscriber();
    static void subscribe(QString message);

private:
    void (*pFunc_)(QString);
    std::unique_ptr<Publisher> publisher_;
};

