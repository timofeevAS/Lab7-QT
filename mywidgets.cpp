#include "mywidgets.h"
#include <shape.h>
#include <QDebug>

static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}

MainWindow::MainWindow(QWidget *parent)
{
    this->resize(640,640);          // Устанавливаем размеры окна приложения
    this->setFixedSize(640,640);
    setWindowTitle("Lab7");

    createRectBtn=new QPushButton("Create Shape");
    deleteLastShapeBtn=new QPushButton("Delete Shape");
    createEllipseBtn=new QPushButton("Create Ellipse");

    widget = new QWidget(this);

    mainLayout=new QGridLayout(widget);

    //widget->setLayout(mainLayout);



    bttns = new QHBoxLayout;
    bttns->addWidget(createRectBtn);
    bttns->addWidget(createEllipseBtn);
    bttns->addWidget(deleteLastShapeBtn);


    mainLayout->addLayout(bttns,1,0);

    scene = new QGraphicsScene;
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(0,0,500,500);

    QWidget *myw=new QWidget();



    gview = new QGraphicsView(scene,myw);
    gview->resize(600,600);
    mainLayout->addWidget(gview,0,0);

    connect(createRectBtn,SIGNAL(clicked()),this,SLOT(onCrtBtnClicked()));
    connect(deleteLastShapeBtn,SIGNAL(clicked()),this,SLOT(onRmvBtnClicked()));
    connect(createEllipseBtn,SIGNAL(clicked()),this,SLOT(onCrtEllpsBtnClicked()));
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
    Shape *item = new Shape();        // Создаём графический элемент
    item->setPos(randomBetween(30, 470),    // Устанавливаем случайную позицию элемента
                 randomBetween(30, 470));
    scene->addItem(item);   // Добавляем элемент на графическую сцену

    //lastShapes.push_back(item);

    qDebug() << scene->items().size();
}



void MainWindow::onCrtEllpsBtnClicked(){
    //scene->addEllipse(QRectF(randomBetween(30, 470),randomBetween(30, 470),randomBetween(60, 100),randomBetween(60, 100)));

    Shape *item = new Shape();        // Создаём графический элемент
    item->setPos(randomBetween(30, 470),    // Устанавливаем случайную позицию элемента
                 randomBetween(30, 470));
    scene->addItem(item);   // Добавляем элемент на графическую сцену
}

MainWindow::~MainWindow()
{
    delete createRectBtn;
    delete deleteLastShapeBtn;
    delete bttns;
}
