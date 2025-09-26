#include "mainwindow.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    
    label = new QLabel("Hello Qt5!", this);
    button = new QPushButton("Click me!", this);
    
    layout->addWidget(label);
    layout->addWidget(button);
    
    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    
    setWindowTitle("Qt5 Test App");
    resize(300, 200);
}

MainWindow::~MainWindow()
{
}

void MainWindow::onButtonClicked()
{
    label->setText("Button clicked!");
}
