#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QDebug>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_dol_clicked();

    void on_pushButton_gora_clicked();

    void on_pushButton_lewo_clicked();

    void on_pushButton_prawo_clicked();

private:
    Ui::MainWindow *ui;

    QPropertyAnimation *animation;
    QPropertyAnimation *animation2;

    int masa;
    int udzwig;
    bool CzyGora;
    bool CzyLewo;
};
#endif // MAINWINDOW_H
