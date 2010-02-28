#ifndef GUIMAINWINDOW_H
#define GUIMAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QMessageBox>


namespace Ui {
    class GUIMainWindow;
}

class GUIMainWindow : public QMainWindow {
    Q_OBJECT

public:
    GUIMainWindow(QWidget *parent = 0);
    ~GUIMainWindow();
    void processError(QProcess::ProcessError err);

    QProcess process;

public slots:
    void webButton();
   // void mumbleButton();

protected:
    void changeEvent(QEvent *e);
    void openWeb();


private:
    Ui::GUIMainWindow *ui;


};

#endif // GUIMAINWINDOW_H
