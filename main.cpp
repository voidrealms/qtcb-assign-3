/*
 * This is a comment
 *
 * This is the same comment
 */

#include <QCoreApplication>
#include <QDebug>

//! This is the program start
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Say hello
    qInfo() << "Hello World";

    return a.exec();
}
