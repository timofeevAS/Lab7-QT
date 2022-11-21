#ifndef MYWIDGETS_H
#define MYWIDGETS_H
#include <QWidget>
#include <QMainWindow>
#include <QSpinBox>
#include <QScrollBar>
#include <QSlider>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include<QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QList>
#include <shape.h>
#include <ellipse.h>
#include <myrect.h>
#include <triangle.h>

#include <vector>

class MainWindow : public QWidget{
    Q_OBJECT
private:
    QPushButton *createRectBtn;
    QPushButton *createEllipseBtn;
    QPushButton *createTriangleBtn;
    QPushButton *deleteLastShapeBtn;

    QHBoxLayout *bttns;
    QGridLayout *mainLayout;


    QGraphicsScene *scene;
    QGraphicsView *gview;

    QWidget *widget;

private slots:
    void onCrtBtnClicked();
    void onRmvBtnClicked();
    void onCrtEllpsBtnClicked();
    void onCrtTrnglBtnClicked();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();




};

#endif // MYWIDGETS_H
