#include "choicewindow.h"
#include "ui_choicewindow.h"
#include "mainwindow.h"
#include "menuwindow.h"

choicewindow* choicewindow::instance = nullptr;

choicewindow* choicewindow::getInstance(const QRect& geometry, QWidget* parent) {
    if (instance == nullptr) {
        //instance = new MainWindow(geometry, parent);
        //instance = new MainWindow(geometry, parent);
        instance = new choicewindow();
        instance->setAttribute(Qt::WA_DeleteOnClose); // Обеспечьте удаление при закрытии
    }
    instance->setGeometry(geometry);
    return instance;
}

choicewindow::choicewindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::choicewindow)
{
    ui->setupUi(this);

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
    connect(ui->pushButton_2, &QPushButton::pressed, this, &choicewindow::on_pushButton_2_pressed);
    connect(ui->pushButton_2, &QPushButton::released, this, &choicewindow::on_pushButton_2_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect3 = new QGraphicsDropShadowEffect;
    shadowEffect3->setBlurRadius(30);
    shadowEffect3->setColor(QColor(0, 0, 0, 160));
    shadowEffect3->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_3->setGraphicsEffect(shadowEffect3);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_3->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_3, &QPushButton::pressed, this, &choicewindow::on_pushButton_3_pressed);
    connect(ui->pushButton_3, &QPushButton::released, this, &choicewindow::on_pushButton_3_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect2 = new QGraphicsDropShadowEffect(this);
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
    connect(ui->pushButton_4, &QPushButton::pressed, this, &choicewindow::on_pushButton_4_pressed);
    connect(ui->pushButton_4, &QPushButton::released, this, &choicewindow::on_pushButton_4_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect4 = new QGraphicsDropShadowEffect;
    shadowEffect4->setBlurRadius(30);
    shadowEffect4->setColor(QColor(0, 0, 0, 160));
    shadowEffect4->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_5->setGraphicsEffect(shadowEffect4);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_5->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_5, &QPushButton::pressed, this, &choicewindow::on_pushButton_5_pressed);
    connect(ui->pushButton_5, &QPushButton::released, this, &choicewindow::on_pushButton_5_released);

}

choicewindow::choicewindow(const QRect &geometry, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::choicewindow)
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
    connect(ui->pushButton_2, &QPushButton::pressed, this, &choicewindow::on_pushButton_2_pressed);
    connect(ui->pushButton_2, &QPushButton::released, this, &choicewindow::on_pushButton_2_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect3 = new QGraphicsDropShadowEffect;
    shadowEffect3->setBlurRadius(30);
    shadowEffect3->setColor(QColor(0, 0, 0, 160));
    shadowEffect3->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_3->setGraphicsEffect(shadowEffect3);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_3->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_3, &QPushButton::pressed, this, &choicewindow::on_pushButton_3_pressed);
    connect(ui->pushButton_3, &QPushButton::released, this, &choicewindow::on_pushButton_3_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect2 = new QGraphicsDropShadowEffect(this);
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
    connect(ui->pushButton_4, &QPushButton::pressed, this, &choicewindow::on_pushButton_4_pressed);
    connect(ui->pushButton_4, &QPushButton::released, this, &choicewindow::on_pushButton_4_released);

    // Создаем тень для кнопки
    QGraphicsDropShadowEffect *shadowEffect4 = new QGraphicsDropShadowEffect;
    shadowEffect4->setBlurRadius(30);
    shadowEffect4->setColor(QColor(0, 0, 0, 160));
    shadowEffect4->setOffset(3, 3);

    // Применяем тень к кнопке из ui файла
    ui->pushButton_5->setGraphicsEffect(shadowEffect4);

    // Устанавливаем стили CSS для кнопки
    ui->pushButton_5->setStyleSheet("QPushButton {"
                                    "border-radius: 20px;"
                                    "}"
                                    "QPushButton:pressed {"
                                    "border-style: inset;"
                                    "}"
                                    );

    // Подключаем обработчик нажатия
    connect(ui->pushButton_5, &QPushButton::pressed, this, &choicewindow::on_pushButton_5_pressed);
    connect(ui->pushButton_5, &QPushButton::released, this, &choicewindow::on_pushButton_5_released);

}

choicewindow::~choicewindow()
{
    instance = nullptr; // Обнулите статический указатель при удалении

    delete ui;
}

void choicewindow::on_pushButton_4_pressed()
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
    connect(animation, &QPropertyAnimation::finished, this, &choicewindow::close);

    // Запускаем анимацию
    animation->start();

    // Закрываем приложение при нажатии кнопки
    //this->close();
    //MainWindow *mainWindow = new MainWindow(this->geometry());
    //mainWindow->close();
}

void choicewindow::on_pushButton_4_released()
{
    // Восстанавливаем эффект тени при отпускании
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_4->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setOffset(3, 3);
    }

    MainWindow *mainWindow = new MainWindow(this->geometry());
    mainWindow->close();
}

void choicewindow::on_pushButton_2_pressed()
{
    // Изменяем эффект тени при нажатии
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_2->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setColor(QColor(0, 0, 0, 160));
        effect->setOffset(5, 5);
    }
}


void choicewindow::on_pushButton_2_released()
{
    // Восстанавливаем эффект тени при отпускании
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_2->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setOffset(3, 3);
    }
}

void choicewindow::on_pushButton_3_pressed()
{
    // Изменяем эффект тени при нажатии
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_3->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setColor(QColor(0, 0, 0, 160));
        effect->setOffset(5, 5);
    }
}


void choicewindow::on_pushButton_3_released()
{
    // Восстанавливаем эффект тени при отпускании
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_3->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setOffset(3, 3);
    }
}

void choicewindow::releaseInstance() {
    delete instance;
    instance = nullptr;
}

void choicewindow::on_pushButton_5_pressed()
{
    // Изменяем эффект тени при нажатии
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_5->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setColor(QColor(0, 0, 0, 160));
        effect->setOffset(5, 5);
    }

    //this->close();
    //MainWindow* mainWindow = MainWindow::getInstance(this->geometry());
    //mainWindow->show();
    QRect currentGeometry = this->geometry();
    MainWindow* mainWindow = MainWindow::getInstance(currentGeometry);
    mainWindow->show();
    this->close();

    //if (mainWindow != nullptr) {
    //    mainWindow->show(); // Показывает MainWindow, если он уже был создан
    //}
    //his->close();

    // Закрываем приложение при нажатии кнопки
    //this->close();
}


void choicewindow::on_pushButton_5_released()
{
    // Восстанавливаем эффект тени при отпускании
    auto effect = dynamic_cast<QGraphicsDropShadowEffect*>(ui->pushButton_5->graphicsEffect());
    if (effect) {
        effect->setBlurRadius(30);
        effect->setOffset(3, 3);
    }
}


void choicewindow::on_pushButton_5_clicked()
{
    this->close();
    //MainWindow *mainWindow = new MainWindow(this->geometry());
    //mainWindow->show();
}


void choicewindow::on_pushButton_2_clicked()
{
    if (!menuWindowInstance) {
        menuWindowInstance = new MenuWindow(this->geometry(), this);
        menuWindowInstance->setAttribute(Qt::WA_DeleteOnClose); // Установка атрибута на удаление при закрытии
        // Подключаем слот к сигналу destroyed, чтобы обнулить указатель после удаления окна
        connect(menuWindowInstance, &choicewindow::destroyed, this, [this]() {
            menuWindowInstance = nullptr;
        });
    }

    this->hide();
    menuWindowInstance->show();
    //this->close();
    //choicewindow *choiceWindow = new choicewindow(this->geometry());
    //choiceWindow->show();
}

