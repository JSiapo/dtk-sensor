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
    a.setOrganizationName("Deepin en Español");
    a.setApplicationName("DTK-Sensor");
    a.setApplicationVersion("1.0");
    a.setProductIcon(QIcon(":/images/dtk-sensor.svg"));
    a.setProductName("DTK-Sensor");
    QString about="<span style=' font-size:8pt; font-weight:600;'>Deepin en Español </span>"
                  "<a href='https://deepinenespañol.org'>https://deepinenespañol.org</a><br/>"
                  "<span style=' font-size:8pt; font-weight:600;'>Deepin Latin Code - developers</span>";
    a.setApplicationDescription(about);

    DMainWindow w;
    w.setMinimumSize(600, 500);
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
