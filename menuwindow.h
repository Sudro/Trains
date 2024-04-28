#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>
#include <QRect>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui {
class MenuWindow;
}
QT_END_NAMESPACE

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
    MenuWindow(QWidget *parent = nullptr);
    MenuWindow(const QRect &geometry, QWidget *parent = nullptr);
    ~MenuWindow();

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

    void on_pushButton_5_pressed();

    void on_pushButton_5_released();

    void on_pushButton_5_clicked();

    void on_pushButton_4_released();

    void on_pushButton_2_pressed();

    void on_pushButton_2_released();

    void on_pushButton_3_pressed();

    void on_pushButton_3_released();

    void on_pushButton_6_pressed();

    void on_pushButton_6_released();

    void on_pushButton_7_pressed();

    void on_pushButton_7_released();

private:
    Ui::MenuWindow *ui;
    bool m_dragging = false;
    QPoint m_dragPosition;
    QRect savedGeometry;
};

#endif // MENUWINDOW_H
