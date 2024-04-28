#ifndef CHOICEWINDOW_H
#define CHOICEWINDOW_H

#include <QWidget>
#include <QRect>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui {
class choicewindow;
}
QT_END_NAMESPACE

class MenuWindow; // Вперёд-объявление класса

class choicewindow : public QWidget
{
    Q_OBJECT

public:
    static choicewindow* getInstance();
    static void releaseInstance();
    choicewindow(QWidget *parent = nullptr);
    choicewindow(const QRect &geometry, QWidget *parent = nullptr);
    ~choicewindow();

    static choicewindow* getInstance(const QRect& geometry, QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override {
        // Запомнить начальную позицию при нажатии на кнопку мыши
        if (event->button() == Qt::LeftButton) {
            m_dragging = true;
            m_dragPosition = event->globalPos() - frameGeometry().topLeft();
            event->accept();
        }
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        // Перемещать окно при зажатой левой кнопке мыши
        if (event->buttons() & Qt::LeftButton && m_dragging) {
            move(event->globalPos() - m_dragPosition);
            event->accept();
        }
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        // Остановить перемещение окна при отпускании кнопки мыши
        if (event->button() == Qt::LeftButton) {
            m_dragging = false;
            event->accept();
        }
    }

private slots:
    void on_pushButton_4_pressed();

    void on_pushButton_4_released();

    void on_pushButton_2_pressed();

    void on_pushButton_2_released();

    void on_pushButton_3_pressed();

    void on_pushButton_3_released();

    void on_pushButton_5_pressed();

    void on_pushButton_5_released();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

private:
    static choicewindow* instance; // Статический указатель на экземпляр
    Ui::choicewindow *ui;
    MenuWindow *menuWindowInstance = nullptr; // Добавленный указатель на menuwindow
    bool m_dragging = false;
    QPoint m_dragPosition;
    QRect savedGeometry;



    void setupUi();
};

#endif // CHOICEWINDOW_H
