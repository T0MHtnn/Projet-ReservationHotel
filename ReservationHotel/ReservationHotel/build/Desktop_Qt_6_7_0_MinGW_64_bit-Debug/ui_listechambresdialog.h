/********************************************************************************
** Form generated from reading UI file 'listechambresdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTECHAMBRESDIALOG_H
#define UI_LISTECHAMBRESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_listeChambresDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *account;
    QLabel *logo;
    QPushButton *accueil;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_filtre;
    QPushButton *pushButton_ValiderResa;
    QPushButton *pushButton_AfficherChambres;
    QTableWidget *tableWidget_ListeChambres;

    void setupUi(QDialog *listeChambresDialog)
    {
        if (listeChambresDialog->objectName().isEmpty())
            listeChambresDialog->setObjectName("listeChambresDialog");
        listeChambresDialog->resize(691, 532);
        gridLayout_2 = new QGridLayout(listeChambresDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        account = new QPushButton(listeChambresDialog);
        account->setObjectName("account");

        gridLayout->addWidget(account, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        logo = new QLabel(listeChambresDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(logo, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        accueil = new QPushButton(listeChambresDialog);
        accueil->setObjectName("accueil");

        gridLayout->addWidget(accueil, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_filtre = new QLabel(listeChambresDialog);
        label_filtre->setObjectName("label_filtre");
        label_filtre->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_filtre, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ValiderResa = new QPushButton(listeChambresDialog);
        pushButton_ValiderResa->setObjectName("pushButton_ValiderResa");
        pushButton_ValiderResa->setAutoFillBackground(false);

        horizontalLayout->addWidget(pushButton_ValiderResa, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_AfficherChambres = new QPushButton(listeChambresDialog);
        pushButton_AfficherChambres->setObjectName("pushButton_AfficherChambres");

        horizontalLayout->addWidget(pushButton_AfficherChambres, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_3->addLayout(horizontalLayout);

        tableWidget_ListeChambres = new QTableWidget(listeChambresDialog);
        if (tableWidget_ListeChambres->columnCount() < 4)
            tableWidget_ListeChambres->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeChambres->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeChambres->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeChambres->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeChambres->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_ListeChambres->setObjectName("tableWidget_ListeChambres");

        verticalLayout_3->addWidget(tableWidget_ListeChambres);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 1);


        retranslateUi(listeChambresDialog);

        QMetaObject::connectSlotsByName(listeChambresDialog);
    } // setupUi

    void retranslateUi(QDialog *listeChambresDialog)
    {
        listeChambresDialog->setWindowTitle(QCoreApplication::translate("listeChambresDialog", "Dialog", nullptr));
        account->setText(QCoreApplication::translate("listeChambresDialog", "Compte", nullptr));
        logo->setText(QString());
        accueil->setText(QCoreApplication::translate("listeChambresDialog", "Accueil", nullptr));
        label_filtre->setText(QCoreApplication::translate("listeChambresDialog", "ACTIONS", nullptr));
        pushButton_ValiderResa->setText(QCoreApplication::translate("listeChambresDialog", "R\303\251servations \303\240 valider", nullptr));
        pushButton_AfficherChambres->setText(QCoreApplication::translate("listeChambresDialog", "Liste  des chambres", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeChambres->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("listeChambresDialog", "NumChambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeChambres->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("listeChambresDialog", "Prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeChambres->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("listeChambresDialog", "nbCouchages", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeChambres->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("listeChambresDialog", "idHotel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listeChambresDialog: public Ui_listeChambresDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTECHAMBRESDIALOG_H
