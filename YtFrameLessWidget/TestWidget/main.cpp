#include "maindlg.h"
#include <QApplication>
#include <QDebug>
#include "ytframelessdlg.h"
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDlg w;
    //w.show();
    YtFrameLessWidgetLib::YtSetShowForm(&w);
    return 0;
}
