#include "bcript.h"

bcript::bcript()
{
    // Construtor vazio, pode adicionar inicializações se necessário
}

QString bcript::generateHash(const QString &input) {
    QString SECRET_KEY = "deepwoken";
    QString saltedInput = SECRET_KEY + input;
    QByteArray byteArray = QCryptographicHash::hash(saltedInput.toUtf8(), QCryptographicHash::Sha256);
    return QString(byteArray.toHex());
}

