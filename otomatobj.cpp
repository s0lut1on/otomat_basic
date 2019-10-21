#include "otomatobj.h"

otomatObj::otomatObj()
{

}

void otomatObj::addRule(QString input, char state, QString output)
{
    if (m_alphabet.contains(input) && m_alphabet.contains(output) && m_state.contains(state)) {
        ruleObj.addRule(input, state, output);
    } else {
        qDebug() << "Can't add rule";
    }
}

void otomatObj::setState(QList<char> state)
{
    m_state = state;
}

void otomatObj::setAlphabet(QList<QString> alphabet)
{
    m_alphabet = alphabet;
}

void otomatObj::setStart(QString start)
{
    m_start = start;
}

void otomatObj::setEnd(QList<QString> end)
{
    m_end = end;
}

bool otomatObj::compare(QString input)
{
    if (input.length() == 0) {
        qDebug() << "Not found input";
        return false;
    }
    QString item1 = ruleObj.getRule(m_start, input[0].toLatin1());
    int i = 1;
    while (i < input.length()) {
        item1 = ruleObj.getRule(item1, input[i].toLatin1());
        if (item1 == "") {
            return false;
        }
        i++;
    }
    if (i == input.length()) {
        return true;
    }
    return false;
}
