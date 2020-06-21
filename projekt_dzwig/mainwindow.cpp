#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        this->setStyleSheet("background-color: white;");

    QPixmap dzwig("D:/Programy/QT Projekty/D-wig-master/D-wig-master/projekt_dzwig/dzwig.png");
    ui->label_dzwig->setPixmap(dzwig.scaled(1000,800,Qt::KeepAspectRatio));

    QPixmap lina("D:/Programy/QT Projekty/D-wig-master/D-wig-master/projekt_dzwig/lina.jpg");
    ui->label_lina->setPixmap(lina.scaled(50,460,Qt::KeepAspectRatio));

    QPixmap ciezar("D:/Programy/QT Projekty/D-wig-master/D-wig-master/projekt_dzwig/ciezar.png");
    ui->label_ciezar->setPixmap(ciezar.scaled(80,80,Qt::KeepAspectRatio));


    CzyGora = false;
    CzyLewo = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_dol_clicked()
{
    CzyGora = false;

    if(CzyLewo == false) // jeśli ciężar jest prawo->góra
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(870, 720, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
            animation2->setDuration(5000);
            animation2->setStartValue(ui->label_lina->geometry());
            animation2->setEndValue(QRect(900, 260, 16, 460));

        animation->start();
        animation2->start();
    } else  // jeśli ciężar jest lewo->góra
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(380, 720, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
            animation2->setDuration(5000);
            animation2->setStartValue(ui->label_lina->geometry());
            animation2->setEndValue(QRect(412, 260, 16, 460));

        animation->start();
        animation2->start();
    }
}

void MainWindow::on_pushButton_gora_clicked()
{
    if(CzyLewo == false) // Kiedy ciężar jest prawo->dół
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(870, 422, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
            animation2->setDuration(5000);
            animation2->setStartValue(ui->label_lina->geometry());
            animation2->setEndValue(QRect(900, 260, 16, 160));

        animation->start();
        animation2->start();
    } else  // Kiedy cieżar jest lewo->dół
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(380, 422, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
            animation2->setDuration(5000);
            animation2->setStartValue(ui->label_lina->geometry());
            animation2->setEndValue(QRect(412, 260, 16, 160));

        animation->start();
        animation2->start();
    }
    CzyGora = true;
}

void MainWindow::on_pushButton_lewo_clicked()
{
    if(CzyGora == false)
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(380, 720, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
           animation2->setDuration(5000);
           animation2->setStartValue(ui->label_lina->geometry());
           animation2->setEndValue(QRect(412, 260, 16, 460));

        animation->start();
        animation2->start();
    } else
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(380, 422, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
           animation2->setDuration(5000);
           animation2->setStartValue(ui->label_lina->geometry());
           animation2->setEndValue(QRect(412, 260, 16, 160));

        animation->start();
        animation2->start();
    }

    CzyLewo = true;
}


void MainWindow::on_pushButton_prawo_clicked()
{
    if(CzyGora == false)
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(870, 720, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
            animation2->setDuration(5000);
            animation2->setStartValue(ui->label_lina->geometry());
            animation2->setEndValue(QRect(900, 260, 16, 460));

        animation->start();
        animation2->start();
    } else
    {
        animation = new QPropertyAnimation(ui->label_ciezar, "geometry");
            animation->setDuration(5000);
            animation->setStartValue(ui->label_ciezar->geometry());
            animation->setEndValue(QRect(870, 422, 80, 80));

        animation2 = new QPropertyAnimation(ui->label_lina, "geometry");
            animation2->setDuration(5000);
            animation2->setStartValue(ui->label_lina->geometry());
            animation2->setEndValue(QRect(900, 260, 16, 160));

        animation->start();
        animation2->start();
    }

    CzyLewo = false;
}
