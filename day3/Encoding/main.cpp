#include <QtCore>

int main(int argc, char *argv[])
{
    QFile f("/Users/ynonperek/hello.txt");
    if ( f.open(QIODevice::ReadOnly) )
    {
        QByteArray text = f.readAll();
        QTextCodec *codec = QTextCodec::codecForName("ISO8859-8");
        QString string = codec->toUnicode(text);

        qDebug() << string;
    }
    else
    {
        qDebug() << "Cant open file";
    }

    return 0;
}

