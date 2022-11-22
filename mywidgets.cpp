#include "mywidgets.h"
#include <shape.h>
#include <QDebug>

static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}

MainWindow::MainWindow(QWidget *parent)
{
    this->resize(530,550);          // Устанавливаем размеры окна приложения
    this->setFixedSize(530,550);
    setWindowTitle("Lab7");

    createRectBtn=new QPushButton("Create Shape");
    deleteLastShapeBtn=new QPushButton("Delete Shape");
    createEllipseBtn=new QPushButton("Create Ellipse");
    createTriangleBtn=new QPushButton("Create Triangle");

    widget = new QWidget(this);

    mainLayout=new QGridLayout(widget);

    //widget->setLayout(mainLayout);



    bttns = new QHBoxLayout;
    bttns->addWidget(createRectBtn);
    bttns->addWidget(createEllipseBtn);
    bttns->addWidget(createTriangleBtn);
    bttns->addWidget(deleteLastShapeBtn);


    mainLayout->addLayout(bttns,1,0);

    scene = new QGraphicsScene;
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(0,0,500,500);

    QWidget *myw=new QWidget(this);



    gview = new QGraphicsView(scene,myw);

    //gview->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    //gview->setDragMode(QGraphicsView::RubberBandDrag);
    //gview->setMouseTracking(false);
    gview->resize(600,600);
    mainLayout->addWidget(gview,0,0);

    connect(createRectBtn,SIGNAL(clicked()),this,SLOT(onCrtBtnClicked()));
    connect(deleteLastShapeBtn,SIGNAL(clicked()),this,SLOT(onRmvBtnClicked()));
    connect(createEllipseBtn,SIGNAL(clicked()),this,SLOT(onCrtEllpsBtnClicked()));
    connect(createTriangleBtn,SIGNAL(clicked()),this,SLOT(onCrtTrnglBtnClicked()));
}

void MainWindow::onRmvBtnClicked(){
    if(!(scene->items().size())){
            QMessageBox *msgBox= new QMessageBox(QMessageBox::Warning,QString("WARNING!"),QString("You didn't match one more shapes!"),QMessageBox::Ok,this);
            msgBox->show();
            return;
        }


    delete scene->items().last();
    //delete lastShapes.back();
    //lastShapes.pop_back();
    qDebug() << scene->items().size();


}


void MainWindow::onCrtBtnClicked()
{
    MyRect *item = new MyRect();        // Создаём графический элемент
    item->setPos(randomBetween(30, 470),    // Устанавливаем случайную позицию элемента
                 randomBetween(30, 470));
    scene->addItem(item);   // Добавляем элемент на графическую сцену

    //lastShapes.push_back(item);

    qDebug() << scene->items().size();
}



void MainWindow::onCrtEllpsBtnClicked(){
    //scene->addEllipse(QRectF(randomBetween(30, 470),randomBetween(30, 470),randomBetween(60, 100),randomBetween(60, 100)));

    Ellipse *item = new Ellipse();        // Создаём графический элемент
    item->setPos(randomBetween(30, 470),    // Устанавливаем случайную позицию элемента
                 randomBetween(30, 470));
    scene->addItem(item);   // Добавляем элемент на графическую сцену
}

void MainWindow::onCrtTrnglBtnClicked(){
    //scene->addEllipse(QRectF(randomBetween(30, 470),randomBetween(30, 470),randomBetween(60, 100),randomBetween(60, 100)));

    Triangle *item = new Triangle(30,30,-30,-30,30,-30);        // Создаём графический элемент
    item->setPos(randomBetween(30, 470),    // Устанавливаем случайную позицию элемента
                 randomBetween(30, 470));
    scene->addItem(item);   // Добавляем элемент на графическую сцену
}



MainWindow::~MainWindow()
{
    delete createRectBtn;
    delete deleteLastShapeBtn;
    delete createEllipseBtn;
    delete createTriangleBtn;
    delete bttns;
}
