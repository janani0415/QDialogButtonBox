#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
/* Open an existing directories
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                     "C://",
                                                     QFileDialog::ShowDirsOnly
                                                     | QFileDialog::DontResolveSymlinks);
    qDebug()<<"Your chosen Directory is:"<<dir;
*/
/* to open a file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                "/home/jana/untitled.png",
                                tr("Images (*.png *.xpm *.jpg)"));

    qDebug()<<"Your chosen File is:"<<fileName;
*/
/* To chose multiple files
    QStringList files = QFileDialog::getOpenFileNames(
                             this,
                             "Select one or more files to open",
                             "/home",
                             "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
    qDebug()<<"Your chosen Files are:"<<files;
*/
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                "/home/jana/untitled.png",
                                tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
    qDebug()<<"Your chosen saved Files are:"<<fileName;

}
