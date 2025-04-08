/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *logo;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_signup;
    QPushButton *pushButton_val;
    QVBoxLayout *verticalLayout_radbtn;
    QGridLayout *gridLayout_13;
    QRadioButton *radioAdmin;
    QRadioButton *radioClient;
    QRadioButton *radioEmploye;
    QVBoxLayout *verticalLayout_mdp;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QVBoxLayout *verticalLayout_mail;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QWidget *widget_4;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(656, 442);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_9 = new QGridLayout(widget);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        logo = new QLabel(widget);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit.png")));
        logo->setScaledContents(false);

        gridLayout_3->addWidget(logo, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(22);
        font1.setBold(true);
        label_5->setFont(font1);
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        label->setFont(font2);
        label->setScaledContents(true);

        gridLayout_4->addWidget(label, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout_4, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        gridLayout_11 = new QGridLayout(widget_2);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(-1, 5, -1, -1);
        pushButton_signup = new QPushButton(widget_2);
        pushButton_signup->setObjectName("pushButton_signup");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        pushButton_signup->setFont(font3);

        gridLayout_7->addWidget(pushButton_signup, 0, 0, 1, 1);

        pushButton_val = new QPushButton(widget_2);
        pushButton_val->setObjectName("pushButton_val");
        pushButton_val->setFont(font3);

        gridLayout_7->addWidget(pushButton_val, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_6, 5, 0, 1, 1);

        verticalLayout_radbtn = new QVBoxLayout();
        verticalLayout_radbtn->setSpacing(4);
        verticalLayout_radbtn->setObjectName("verticalLayout_radbtn");
        verticalLayout_radbtn->setContentsMargins(-1, -1, -1, 0);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName("gridLayout_13");
        radioAdmin = new QRadioButton(widget_2);
        radioAdmin->setObjectName("radioAdmin");
        radioAdmin->setFont(font3);

        gridLayout_13->addWidget(radioAdmin, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        radioClient = new QRadioButton(widget_2);
        radioClient->setObjectName("radioClient");
        radioClient->setFont(font3);
        radioClient->setChecked(true);

        gridLayout_13->addWidget(radioClient, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        radioEmploye = new QRadioButton(widget_2);
        radioEmploye->setObjectName("radioEmploye");
        radioEmploye->setFont(font3);

        gridLayout_13->addWidget(radioEmploye, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_radbtn->addLayout(gridLayout_13);


        gridLayout_11->addLayout(verticalLayout_radbtn, 4, 0, 1, 1);

        verticalLayout_mdp = new QVBoxLayout();
        verticalLayout_mdp->setSpacing(0);
        verticalLayout_mdp->setObjectName("verticalLayout_mdp");
        label_mdp = new QLabel(widget_2);
        label_mdp->setObjectName("label_mdp");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        label_mdp->setFont(font4);
        label_mdp->setScaledContents(true);
        label_mdp->setAlignment(Qt::AlignCenter);

        verticalLayout_mdp->addWidget(label_mdp, 0, Qt::AlignHCenter|Qt::AlignTop);

        lineEdit_mdp = new QLineEdit(widget_2);
        lineEdit_mdp->setObjectName("lineEdit_mdp");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_mdp->sizePolicy().hasHeightForWidth());
        lineEdit_mdp->setSizePolicy(sizePolicy);
        lineEdit_mdp->setFont(font3);
        lineEdit_mdp->setAlignment(Qt::AlignCenter);

        verticalLayout_mdp->addWidget(lineEdit_mdp);


        gridLayout_11->addLayout(verticalLayout_mdp, 3, 0, 1, 1);

        verticalLayout_mail = new QVBoxLayout();
        verticalLayout_mail->setObjectName("verticalLayout_mail");
        label_id = new QLabel(widget_2);
        label_id->setObjectName("label_id");
        label_id->setFont(font4);
        label_id->setScaledContents(true);

        verticalLayout_mail->addWidget(label_id, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_id = new QLineEdit(widget_2);
        lineEdit_id->setObjectName("lineEdit_id");
        sizePolicy.setHeightForWidth(lineEdit_id->sizePolicy().hasHeightForWidth());
        lineEdit_id->setSizePolicy(sizePolicy);
        lineEdit_id->setFont(font3);
        lineEdit_id->setAlignment(Qt::AlignCenter);

        verticalLayout_mail->addWidget(lineEdit_id);


        gridLayout_11->addLayout(verticalLayout_mail, 2, 0, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        gridLayout_12 = new QGridLayout(widget_4);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName("gridLayout_10");

        gridLayout_12->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout->addWidget(widget_4, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit_id, lineEdit_mdp);
        QWidget::setTabOrder(lineEdit_mdp, radioAdmin);
        QWidget::setTabOrder(radioAdmin, radioClient);
        QWidget::setTabOrder(radioClient, radioEmploye);
        QWidget::setTabOrder(radioEmploye, pushButton_signup);
        QWidget::setTabOrder(pushButton_signup, pushButton_val);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Bienvenue sur JVT Hotels !", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Veuillez vous connecter ", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("MainWindow", "Je n'ai pas de compte ...", nullptr));
        pushButton_val->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        radioAdmin->setText(QCoreApplication::translate("MainWindow", "Administrateur", nullptr));
        radioClient->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
        radioEmploye->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        label_mdp->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        label_id->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
