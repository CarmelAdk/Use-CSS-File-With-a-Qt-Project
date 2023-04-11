#ifndef CSSPARSER_H
#define CSSPARSER_H

#include <QString>
#include <QFile>
#include <QTextStream>


class CSSParser
{
public:
    CSSParser();
    QString static transform(const QString&);

};

#endif // CSSPARSER_H
