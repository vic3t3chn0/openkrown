#include "mainwindow.h"
#include <QApplication>
#include "tabdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    QString fileName;

        if (argc >= 2)
            fileName = argv[1];
        else
            fileName = ".";

       TabDialog tabdialog(fileName);
       tabdialog.show();
       tabdialog.resize(640, 480);
       tabdialog.show();
       tabdialog.setWindowTitle(
           QApplication::translate("toplevel", "OpenKrown"));

    //window.show();

    return a.exec();
}
