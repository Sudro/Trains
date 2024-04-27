/********************************************************************************
** Form generated from reading UI file 'choicewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICEWINDOW_H
#define UI_CHOICEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choicewindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QWidget *choicewindow)
    {
        if (choicewindow->objectName().isEmpty())
            choicewindow->setObjectName("choicewindow");
        choicewindow->resize(982, 628);
        choicewindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(choicewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 111, 111));
        label->setStyleSheet(QString::fromUtf8("color:#ED5009;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/newMiniTrainIcon.png")));
        label_2 = new QLabel(choicewindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, -10, 311, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Faustina")});
        font.setPointSize(70);
        font.setBold(true);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(choicewindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(910, 10, 61, 61));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFocusPolicy(Qt::ClickFocus);
        pushButton_4->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-radius: 20px; "));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/newnewPlusIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(300, 200));
        pushButton_2 = new QPushButton(choicewindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 270, 321, 101));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFocusPolicy(Qt::ClickFocus);
        pushButton_2->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 20px; "));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/userButton2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(300, 200));
        pushButton_3 = new QPushButton(choicewindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(600, 270, 321, 101));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFocusPolicy(Qt::ClickFocus);
        pushButton_3->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 20px; "));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/adminButtonTest.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(300, 200));
        pushButton_5 = new QPushButton(choicewindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(830, 10, 61, 61));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFocusPolicy(Qt::ClickFocus);
        pushButton_5->setContextMenuPolicy(Qt::CustomContextMenu);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-radius: 20px; "));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Group 29.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(300, 200));

        retranslateUi(choicewindow);

        QMetaObject::connectSlotsByName(choicewindow);
    } // setupUi

    void retranslateUi(QWidget *choicewindow)
    {
        choicewindow->setWindowTitle(QCoreApplication::translate("choicewindow", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("choicewindow", "Choice", nullptr));
        pushButton_4->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class choicewindow: public Ui_choicewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICEWINDOW_H
