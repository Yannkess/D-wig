#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap dzwig("C:/Users/route/Desktop/Studia/Programowanie/Techniki programowania/Projekt 4/projekt_dzwig/dzwig.png");
    ui->label_dzwig->setPixmap(dzwig.scaled(1000,800,Qt::KeepAspectRatio));

    QPixmap lina("C:/Users/route/Desktop/Studia/Programowanie/Techniki programowania/Projekt 4/projekt_dzwig/lina.jpg");
    ui->label_lina->setPixmap(lina.scaled(50,460,Qt::KeepAspectRatio));

    QPixmap ciezar("C:/Users/route/Desktop/Studia/Programowanie/Techniki programowania/Projekt 4/projekt_dzwig/ciezar.png");
    ui->label_ciezar->setPixmap(ciezar.scaled(80,80,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_dol_clicked()
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
}

void MainWindow::on_pushButton_gora_clicked()
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
