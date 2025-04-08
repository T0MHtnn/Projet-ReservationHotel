/********************************************************************************
** Form generated from reading UI file 'modifresadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFRESADIALOG_H
#define UI_MODIFRESADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifResaDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox_listeHotel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *logo;
    QPushButton *accueil;
    QLabel *label;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_val;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDateEdit *dateEdit_dateDep;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *dateEdit_dateArr;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_mailCli;

    void setupUi(QDialog *ModifResaDialog)
    {
        if (ModifResaDialog->objectName().isEmpty())
            ModifResaDialog->setObjectName("ModifResaDialog");
        ModifResaDialog->resize(667, 466);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        ModifResaDialog->setFont(font);
        gridLayout_2 = new QGridLayout(ModifResaDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_4 = new QLabel(ModifResaDialog);
        label_4->setObjectName("label_4");

        verticalLayout_9->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(ModifResaDialog);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(9);
        label_6->setFont(font1);

        verticalLayout_9->addWidget(label_6, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        comboBox_listeHotel = new QComboBox(ModifResaDialog);
        comboBox_listeHotel->setObjectName("comboBox_listeHotel");

        verticalLayout_7->addWidget(comboBox_listeHotel, 0, Qt::AlignVCenter);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        logo = new QLabel(ModifResaDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));

        horizontalLayout_6->addWidget(logo, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        accueil = new QPushButton(ModifResaDialog);
        accueil->setObjectName("accueil");

        horizontalLayout_6->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(ModifResaDialog);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_val = new QPushButton(ModifResaDialog);
        pushButton_val->setObjectName("pushButton_val");

        horizontalLayout_5->addWidget(pushButton_val, 0, Qt::AlignVCenter);


        verticalLayout_6->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_6, 5, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(ModifResaDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        dateEdit_dateDep = new QDateEdit(ModifResaDialog);
        dateEdit_dateDep->setObjectName("dateEdit_dateDep");
        dateEdit_dateDep->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(dateEdit_dateDep);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(ModifResaDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        dateEdit_dateArr = new QDateEdit(ModifResaDialog);
        dateEdit_dateArr->setObjectName("dateEdit_dateArr");

        horizontalLayout->addWidget(dateEdit_dateArr);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(ModifResaDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_mailCli = new QLineEdit(ModifResaDialog);
        lineEdit_mailCli->setObjectName("lineEdit_mailCli");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_mailCli->sizePolicy().hasHeightForWidth());
        lineEdit_mailCli->setSizePolicy(sizePolicy);
        lineEdit_mailCli->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(lineEdit_mailCli);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ModifResaDialog);

        QMetaObject::connectSlotsByName(ModifResaDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifResaDialog)
    {
        ModifResaDialog->setWindowTitle(QCoreApplication::translate("ModifResaDialog", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("ModifResaDialog", "Informations", nullptr));
        label_6->setText(QCoreApplication::translate("ModifResaDialog", "(Nom Hotel - Num\303\251ro de Chambre - Nombre de Couchages - Prix - Adresse)", nullptr));
        logo->setText(QString());
        accueil->setText(QCoreApplication::translate("ModifResaDialog", "Accueil", nullptr));
        label->setText(QCoreApplication::translate("ModifResaDialog", "MODIFICATION DE RESERVATION", nullptr));
        pushButton_val->setText(QCoreApplication::translate("ModifResaDialog", "VALIDER", nullptr));
        label_3->setText(QCoreApplication::translate("ModifResaDialog", "Date de D\303\251part", nullptr));
        label_2->setText(QCoreApplication::translate("ModifResaDialog", "Date d'Arriv\303\251e", nullptr));
        label_5->setText(QCoreApplication::translate("ModifResaDialog", "Mail Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifResaDialog: public Ui_ModifResaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFRESADIALOG_H
