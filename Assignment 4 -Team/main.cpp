#include <QApplication>
#include "window.h"

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 window _window;
 _window.show();

 return app.exec();
}
