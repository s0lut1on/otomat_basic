#ifndef OTOMATOBJ_H
#define OTOMATOBJ_H

#include <QList>
#include <QMap>
#include "rule.h"
#include <QDebug>

class otomatObj
{
public:
    otomatObj();

    void addRule(QString input, char state, QString output);
    void setState(QList<char> state);
    void setAlphabet(QList<QString> alphabet);
    void setStart(QString start);
    void setEnd(QList<QString> end);
    bool compare(QString input);
private:
    QList<char> m_state;
    QList<QString> m_alphabet;
    QString m_start;
    QList<QString> m_end;
    rule ruleObj;

};

#endif // OTOMATOBJ_H
