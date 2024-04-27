#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class choicewindow; // Вперёд-объявление класса

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static MainWindow* getInstance();
    static void releaseInstance();
    MainWindow(QWidget *parent = nullptr);
    MainWindow(const QRect &geometry, QWidget *parent = nullptr);
    ~MainWindow();

    static MainWindow* getInstance(const QRect& geometry, QWidget* parent = nullptr);

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
    void on_pushButton_2_pressed();

    void on_pushButton_2_released();

    void on_pushButton_4_pressed();

    void on_pushButton_4_released();

    void on_pushButton_2_clicked();

private:
    static MainWindow* instance; // Статический указатель на экземпляр
    Ui::MainWindow *ui;
    choicewindow *choiceWindowInstance = nullptr; // Добавленный указатель на choicewindow
    bool m_dragging = false;
    QPoint m_dragPosition;
    QRect savedGeometry;

    void setupUi();
};
#endif // MAINWINDOW_H
