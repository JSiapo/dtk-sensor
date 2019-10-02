#include <DApplication>
#include <DMainWindow>
#include <DWidgetUtil>
#include <QString>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
//    a.setTheme("light");
    a.setTheme("dark");
<<<<<<< HEAD
    a.setOrganizationName("deepinenespañol");
    a.setApplicationName("DTK-Sensor");
    a.setApplicationVersion("1.0");
    a.setProductIcon(QIcon(":/images/dtk-sensor.svg"));
    a.setProductName("DTK-Sensor");
    a.setApplicationDescription("This is a dtk application to see CPU temperature.");
=======
    a.setOrganizationName("deepin latin code - Deepin en Español");
    a.setApplicationName("DTK-Sensor");
    a.setApplicationVersion("1.0");
    a.setProductIcon(QIcon(":/images/logo.svg"));
    a.setProductName("Dtk Application");
    QString about="<span style=' font-size:8pt; font-weight:600;'>Deepin en Español </span>"
                  "<a href='https://deepinenespañol.org'>https://deepinenespañol.org</a><br/>"
                  "<span style=' font-size:8pt; font-weight:600;'>Deepin Latin Code - developers</span>";
    a.setApplicationDescription(about);
>>>>>>> Update message

    DMainWindow w;
    w.setMinimumSize(600, 500);
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
