#include <QApplication>
#include"digitalclock.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto D = new digitalclock;
D->setWindowTitle("Digital Clock");
   D->show();

    return a.exec();
}
