#include "UI/HomePage/homepage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Auda::UI::HomePage w;
    w.show();
    return a.exec();
}
