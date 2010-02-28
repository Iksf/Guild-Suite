#include <QtGui/QApplication>
#include "guimainwindow.h"
#include <QWidget>
#include <QWebView>
#include <QVBoxLayout>
#include <QUrl>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GUIMainWindow w;
    w.show();
    return a.exec();
}
