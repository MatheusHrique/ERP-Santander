#ifndef BCRIPT_H
#define BCRIPT_H

#include <QString>
#include <QCryptographicHash>

class bcript
{
public:
    bcript();
    QString generateHash(const QString &input);
};

#endif

