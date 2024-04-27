#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "choicewindow.h"

MainWindow* MainWindow::instance = nullptr;

MainWindow* MainWindow::getInstance(const QRect& geometry, QWidget* parent) {
    if (instance == nullptr) {
        //instance = new MainWindow(geometry, parent);
        //instance = new MainWindow(geometry, parent);
        instance = new MainWindow();
        instance->setAttribute(Qt::WA_DeleteOnClose); // Обеспечьте удаление при закрытии
    }
    instance->setGeometry(geometry);
    return instance;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ваша инициализация для конструктора по умолчанию
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    // ...
    // Сохраняем размеры окна
    savedGeometry = this->geometry();

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(30);
    shadowEffect->setColor(QColor(0, 0, 0, 160));
    shadowEffect->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_2->setGraphicsEffect(shadowEffect);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_2->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_2, &QPushButton::pressed, this, &MainWindow::on_pushButton_2_pressed);
    connect(ui->pushButton_2, &QPushButton::released, this, &MainWindow::on_pushButton_2_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect2 = new QGraphicsDropShadowEffect;
    shadowEffect2->setBlurRadius(30);
    shadowEffect2->setColor(QColor(0, 0, 0, 160));
    shadowEffect2->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_4->setGraphicsEffect(shadowEffect2);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_4->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_4, &QPushButton::pressed, this, &MainWindow::on_pushButton_4_pressed);
    connect(ui->pushButton_4, &QPushButton::released, this, &MainWindow::on_pushButton_4_released);

    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_2_clicked);
}

MainWindow::MainWindow(const QRect &geometry, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGeometry(geometry);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    // Сохраняем размеры окна
    savedGeometry = this->geometry();

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(30);
    shadowEffect->setColor(QColor(0, 0, 0, 160));
    shadowEffect->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_2->setGraphicsEffect(shadowEffect);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_2->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_2, &QPushButton::pressed, this, &MainWindow::on_pushButton_2_pressed);
    connect(ui->pushButton_2, &QPushButton::released, this, &MainWindow::on_pushButton_2_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect2 = new QGraphicsDropShadowEffect;
    shadowEffect2->setBlurRadius(30);
    shadowEffect2->setColor(QColor(0, 0, 0, 160));
    shadowEffect2->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_4->setGraphicsEffect(shadowEffect2);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_4->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_4, &QPushButton::pressed, this, &MainWindow::on_pushButton_4_pressed);
    connect(ui->pushButton_4, &QPushButton::released, this, &MainWindow::on_pushButton_4_released);

    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_2_clicked);
}

MainWindow::~MainWindow()
{
    //if (instance == this) {
        //instance = nullptr; // Обнулите статический указатель при удалении
    //}

    instance = nullptr; // Обнулите статический указатель при удалении

    delete ui;
    //delete choiceWindowInstance; // Добавляем удаление choicewindow
}

void MainWindow::releaseInstance() {
    delete instance;
    instance = nullptr;
}

void MainWindow::on_pushButton_2_pressed()
{
    // Изменяем эффект тени при нажатии
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_2->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setColor(QColor(0, 0, 0, 160));
        effect->setOffset(5, 5);
    }
}


void MainWindow::on_pushButton_2_released()
{
    // Восстанавливаем эффект тени при отпускании
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_2->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setOffset(3, 3);
    }
}


void MainWindow::on_pushButton_4_pressed()
{
    // Изменяем эффект тени при нажатии
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_4->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setColor(QColor(0, 0, 0, 160));
        effect->setOffset(5, 5);
    }

    // Создаем анимацию изменения прозрачности окна
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(500); // Устанавливаем длительность анимации (в миллисекундах)
    animation->setStartValue(1.0); // Начальное значение прозрачности (полностью непрозрачное)
    animation->setEndValue(0.0); // Конечное значение прозрачности (полностью прозрачное)

    // Подключаем слот, который будет вызван по завершении анимации, чтобы закрыть окно
    connect(animation, &QPropertyAnimation::finished, this, &MainWindow::close);

    // Запускаем анимацию
    animation->start();

    // Закрываем приложение при нажатии кнопки
    //this->close();
}


void MainWindow::on_pushButton_4_released()
{
    // Восстанавливаем эффект тени при отпускании
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_4->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setOffset(3, 3);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (!choiceWindowInstance) {
        choiceWindowInstance = new choicewindow(this->geometry(), this);
        choiceWindowInstance->setAttribute(Qt::WA_DeleteOnClose); // Установка атрибута на удаление при закрытии
        // Подключаем слот к сигналу destroyed, чтобы обнулить указатель после удаления окна
        connect(choiceWindowInstance, &choicewindow::destroyed, this, [this]() {
            choiceWindowInstance = nullptr;
        });
    }

    this->hide();
    choiceWindowInstance->show();
    //this->close();
    //choicewindow *choiceWindow = new choicewindow(this->geometry());
    //choiceWindow->show();
}

