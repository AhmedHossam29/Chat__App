#include "Chat_App.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chat_App w;
    w.show();
    return a.exec();
}
