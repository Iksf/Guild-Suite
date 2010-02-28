#include "guimainwindow.h"
#include "ui_guimainwindow.h"

GUIMainWindow::GUIMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUIMainWindow)
{
    ui->setupUi(this);
    //connect error() to slot processError() to get error, if occurs.
    QObject::connect( &process, SIGNAL(error(QProcess::ProcessError)),
                          this, SLOT(processError(QProcess::ProcessError)));
    connect(ui->webButton, SIGNAL(clicked()), this,
            SLOT(webButton()));

    }

 

GUIMainWindow::~GUIMainWindow()
{
    delete ui;
}

void GUIMainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void GUIMainWindow::webButton()
{
     process.start("GuildSuiteBrowse");
}


void GUIMainWindow::processError(QProcess::ProcessError err)
{
        switch(err)
        {
        case QProcess::FailedToStart:
                QMessageBox::information(0,"FailedToStart","FailedToStart");
                break;
        case QProcess::Crashed:
                QMessageBox::information(0,"Crashed","Crashed");
                break;
        case QProcess::Timedout:
                QMessageBox::information(0,"FailedToStart","FailedToStart");
                break;
        case QProcess::WriteError:
                QMessageBox::information(0,"Timedout","Timedout");
                break;
        case QProcess::ReadError:
                QMessageBox::information(0,"ReadError","ReadError");
                break;
        case QProcess::UnknownError:
                QMessageBox::information(0,"UnknownError","UnknownError");
                break;
        default:
                QMessageBox::information(0,"default","default");
                break;
        }
}
