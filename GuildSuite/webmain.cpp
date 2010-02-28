#include <QtGui/QApplication>
#include "mainwindow.h" 
#include <QWidget>
#include <QWebView>
#include <QVBoxLayout>
#include <QUrl>

int run(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
