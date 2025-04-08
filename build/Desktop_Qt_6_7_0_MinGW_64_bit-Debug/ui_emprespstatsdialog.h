/********************************************************************************
** Form generated from reading UI file 'emprespstatsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPRESPSTATSDIALOG_H
#define UI_EMPRESPSTATSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_empRespStatsDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_8;
    QPushButton *pushButtonListeEmployes_3;
    QPushButton *pushButton_ListeClients_3;
    QLabel *logo_3;
    QPushButton *pushButton_AfficherChambres_3;
    QPushButton *pushButton_Stats;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *accueil_3;
    QPushButton *account_3;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *pushButton_NbResaYM;
    QPushButton *pushButton_NbClientsVille;
    QPushButton *pushButton_PrixMoyenChambre;
    QScrollArea *scrollArea_Graphe;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *empRespStatsDialog)
    {
        if (empRespStatsDialog->objectName().isEmpty())
            empRespStatsDialog->setObjectName("empRespStatsDialog");
        empRespStatsDialog->resize(455, 318);
        gridLayout = new QGridLayout(empRespStatsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        pushButtonListeEmployes_3 = new QPushButton(empRespStatsDialog);
        pushButtonListeEmployes_3->setObjectName("pushButtonListeEmployes_3");

        gridLayout_8->addWidget(pushButtonListeEmployes_3, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ListeClients_3 = new QPushButton(empRespStatsDialog);
        pushButton_ListeClients_3->setObjectName("pushButton_ListeClients_3");
        pushButton_ListeClients_3->setAutoFillBackground(false);

        gridLayout_8->addWidget(pushButton_ListeClients_3, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        logo_3 = new QLabel(empRespStatsDialog);
        logo_3->setObjectName("logo_3");
        logo_3->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit.png")));
        logo_3->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(logo_3, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_AfficherChambres_3 = new QPushButton(empRespStatsDialog);
        pushButton_AfficherChambres_3->setObjectName("pushButton_AfficherChambres_3");

        gridLayout_8->addWidget(pushButton_AfficherChambres_3, 7, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_Stats = new QPushButton(empRespStatsDialog);
        pushButton_Stats->setObjectName("pushButton_Stats");

        gridLayout_8->addWidget(pushButton_Stats, 8, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(gridLayout_8, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        accueil_3 = new QPushButton(empRespStatsDialog);
        accueil_3->setObjectName("accueil_3");

        horizontalLayout_3->addWidget(accueil_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account_3 = new QPushButton(empRespStatsDialog);
        account_3->setObjectName("account_3");

        horizontalLayout_3->addWidget(account_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        pushButton_NbResaYM = new QPushButton(empRespStatsDialog);
        pushButton_NbResaYM->setObjectName("pushButton_NbResaYM");

        horizontalLayout_26->addWidget(pushButton_NbResaYM);

        pushButton_NbClientsVille = new QPushButton(empRespStatsDialog);
        pushButton_NbClientsVille->setObjectName("pushButton_NbClientsVille");

        horizontalLayout_26->addWidget(pushButton_NbClientsVille);

        pushButton_PrixMoyenChambre = new QPushButton(empRespStatsDialog);
        pushButton_PrixMoyenChambre->setObjectName("pushButton_PrixMoyenChambre");

        horizontalLayout_26->addWidget(pushButton_PrixMoyenChambre);


        verticalLayout_4->addLayout(horizontalLayout_26);

        scrollArea_Graphe = new QScrollArea(empRespStatsDialog);
        scrollArea_Graphe->setObjectName("scrollArea_Graphe");
        scrollArea_Graphe->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 323, 254));
        scrollArea_Graphe->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea_Graphe);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        retranslateUi(empRespStatsDialog);

        QMetaObject::connectSlotsByName(empRespStatsDialog);
    } // setupUi

    void retranslateUi(QDialog *empRespStatsDialog)
    {
        empRespStatsDialog->setWindowTitle(QCoreApplication::translate("empRespStatsDialog", "Dialog", nullptr));
        pushButtonListeEmployes_3->setText(QCoreApplication::translate("empRespStatsDialog", "Liste des Employ\303\251s", nullptr));
        pushButton_ListeClients_3->setText(QCoreApplication::translate("empRespStatsDialog", "Liste des Clients", nullptr));
        logo_3->setText(QString());
        pushButton_AfficherChambres_3->setText(QCoreApplication::translate("empRespStatsDialog", "Liste des chambres", nullptr));
        pushButton_Stats->setText(QCoreApplication::translate("empRespStatsDialog", "Statistiques de l'hotel", nullptr));
        accueil_3->setText(QCoreApplication::translate("empRespStatsDialog", "Accueil", nullptr));
        account_3->setText(QCoreApplication::translate("empRespStatsDialog", "Compte", nullptr));
        pushButton_NbResaYM->setText(QCoreApplication::translate("empRespStatsDialog", "Nombre reservations", nullptr));
        pushButton_NbClientsVille->setText(QCoreApplication::translate("empRespStatsDialog", "Nombre clients par ville", nullptr));
        pushButton_PrixMoyenChambre->setText(QCoreApplication::translate("empRespStatsDialog", "Prix moyen chambre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class empRespStatsDialog: public Ui_empRespStatsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPRESPSTATSDIALOG_H
