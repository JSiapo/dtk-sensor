#include <DApplication>
#include <DMainWindow>
#include <DWidgetUtil>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
//    a.setTheme("light");
    a.setTheme("dark");
    a.setOrganizationName("deepin");
    a.setApplicationName("DTK-Sensor");
    a.setApplicationVersion("1.0");
    a.setProductIcon(QIcon(":/images/logo.svg"));
    a.setProductName("Dtk Application");
    a.setApplicationDescription("This is a dtk application to see CPU temperature.");

    DMainWindow w;
    w.setMinimumSize(500, 500);
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
