#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     connect(ui->actionnew, &QAction::triggered, this, &MainWindow::exit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exit()
{
    QCoreApplication::quit();
}
