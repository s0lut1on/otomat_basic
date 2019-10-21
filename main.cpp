#include <QCoreApplication>
#include <QMap>
#include "otomatobj.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> alphabet = {"S", "S1", "S2", "S3", "S4"};
    QList<char> state = {'a', 'b', 'c'};
    QString start = "S";
    QList<QString> end = {"S4"};

    otomatObj obj;
    obj.setAlphabet(alphabet);
    obj.setState(state);
    obj.setStart(start);
    obj.setEnd(end);

    obj.addRule("S", 'a', "S1");
    obj.addRule("S1", 'a', "S1");
    obj.addRule("S1", 'b', "S2");
    obj.addRule("S1", 'c', "S3");
    obj.addRule("S2", 'b', "S2");
    obj.addRule("S2", 'c', "S3");
    obj.addRule("S3", 'c', "S4");
    obj.addRule("S4", 'c', "S4");

    QString word = "aaaabbbbcccc";
    QString word2 = "aabaaccccccc";


    if (obj.compare(word)) {
        qDebug() << "word 1 valid";
    } else {
        qDebug() << "word 1 invalid";
    }

    if (obj.compare(word2)) {
        qDebug() << "word 2 valid";
    } else {
        qDebug() << "word 2 invalid";
    }


    return a.exec();
}
