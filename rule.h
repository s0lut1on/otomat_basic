#ifndef RULE_H
#define RULE_H

#include <QList>

class rule
{
public:
    rule();
    void addRule(QString input, char state, QString output);
    QString getRule(QString input, char state);
private:
    QList<QString> listInput;
    QList<char> listState;
    QList<QString> listOutput;
};

#endif // RULE_H
