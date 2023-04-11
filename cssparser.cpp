#include "cssparser.h"
#include <QDebug>


CSSParser::CSSParser()
{

}

QString CSSParser::transform(const QString &fileName)
{
  QFile file(fileName);
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
  {
      // I let this QDebug for you in order to handle eventual errors
      //qDebug() << "Failed to open file: " << fileName << ", error: " << file.errorString();
      return "";
  }

  QTextStream in(&file);

  QString contents = in.readAll();

  file.close();

  return contents;
}
