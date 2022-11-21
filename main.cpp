#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QSlider>


#include <iostream>
#include <mywidgets.h>
#include "shape.h"

int Shape::Z_coord = 0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QLabel *label  = new QLabel();

    MainWindow w;
    w.show();

    return a.exec();
}
