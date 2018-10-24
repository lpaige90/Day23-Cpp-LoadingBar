#include "loading.h"
#include <QApplication>
#include <QProgressBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Loading w;
    w.show();

    return a.exec();
}
