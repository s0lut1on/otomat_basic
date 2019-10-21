#include "rule.h"

rule::rule()
{

}

void rule::addRule(QString input, char state, QString output)
{
    listInput.append(input);
    listState.append(state);
    listOutput.append(output);
}

QString rule::getRule(QString input, char state)
{
    for (int i=0; i<listInput.length(); i++) {
        if (listInput[i] == input) {
            if (listState[i] == state)
                return listOutput[i];
        }
    }
    return "";
}
