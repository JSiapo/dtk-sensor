/* Copyright (C) 2019 Deepin Latin Code - developers.
*                    Comunidad de Deepin En Español
*
* Authors:     José Siapo<jsiapo@unitru.edu.pe>
*              Alvaro Samudio(G4SP3R)<alvarosamudio@criptext.com>
*
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <DApplication>
#include <QApplication>
#include <DMainWindow>
#include <DWidgetUtil>
#include <QApplication>
#include <DAboutDialog>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    DAboutDialog dialog;
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
//    a.setTheme("light");
    a.setTheme("dark");
    a.setOrganizationName("Deepin en Español");
    a.setApplicationName("DTK Sensor");
    a.setApplicationVersion("1.0");
    a.setProductIcon(QIcon(":/images/dtk-sensor.svg"));
    a.setProductName("DTK-Sensor");
    dialog.setWebsiteName("deepinenespañol.org");
    dialog.setWebsiteLink("https://deepinenespañol.org");
    a.setAboutDialog(&dialog);
//Agrega la pagina a el "Acknowledgement"
    a.setApplicationAcknowledgementPage("https://deepinenespañol.org");
//De este modo se podra traducir a otros idiomas
    a.loadTranslator();
    a.setApplicationDisplayName(QObject::tr("DTK Sensor"));
    a.setApplicationDescription(QObject::tr(
                                    "<span style=' font-size:8pt; font-weight:600;'>Deepin en Español </span>"
                                    "<a href='https://deepinenespañol.org'>https://deepinenespañol.org</a><br/>"
                                    "<span style=' font-size:8pt; font-weight:600;'>Deepin Latin Code - developers</span>"));


    DMainWindow w;
    w.setMinimumSize(600, 500);
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
