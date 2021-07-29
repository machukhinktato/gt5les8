#include <QApplication>
#include <QDesktopWidget>
#include <QTextEdit>
#include "verticalbox.h"
//#include "buttons.h"
#include "nesting.h"


class Absolute : public QWidget {
public:
    Absolute(QWidget *parent = nullptr);
};

Absolute::Absolute(QWidget *parent)
: QWidget(parent) {
    QTextEdit *ledit = new QTextEdit(this);
    ledit->setGeometry(5, 5, 200, 150);
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

//    Absolute window;
//    VerticalBox window;
//    Buttons window;
    Layouts window;

    window.setWindowTitle("Layouts");
    window.show();

    return app.exec();
}