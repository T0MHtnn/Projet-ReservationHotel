/********************************************************************************
** Form generated from reading UI file 'listechambresrespdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTECHAMBRESRESPDIALOG_H
#define UI_LISTECHAMBRESRESPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_listeChambresRespDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logo;
    QPushButton *accueil;
    QPushButton *account;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_PrixNC;
    QLineEdit *lineEdit_nbCouchNC;
    QPushButton *pushButton_ConfimerNC;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_ChambreModifPrix;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label;
    QLineEdit *lineEdit_PrixAC;
    QPushButton *pushButton_ConfimerModifPrix;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_ChambreSupp;
    QPushButton *pushButton_ConfimerSupp;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ListeChambres;
    QPushButton *pushButton_ListeClients;
    QPushButton *pushButton_ListeEmployes;
    QTableWidget *tableWidget_ListeChambres;

    void setupUi(QDialog *listeChambresRespDialog)
    {
        if (listeChambresRespDialog->objectName().isEmpty())
            listeChambresRespDialog->setObjectName("listeChambresRespDialog");
        listeChambresRespDialog->resize(698, 514);
        gridLayout = new QGridLayout(listeChambresRespDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        logo = new QLabel(listeChambresRespDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(logo, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        accueil = new QPushButton(listeChambresRespDialog);
        accueil->setObjectName("accueil");

        horizontalLayout_3->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(listeChambresRespDialog);
        account->setObjectName("account");

        horizontalLayout_3->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_15 = new QLabel(listeChambresRespDialog);
        label_15->setObjectName("label_15");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_15, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(listeChambresRespDialog);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(listeChambresRespDialog);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_PrixNC = new QLineEdit(listeChambresRespDialog);
        lineEdit_PrixNC->setObjectName("lineEdit_PrixNC");
        sizePolicy.setHeightForWidth(lineEdit_PrixNC->sizePolicy().hasHeightForWidth());
        lineEdit_PrixNC->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_PrixNC, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_nbCouchNC = new QLineEdit(listeChambresRespDialog);
        lineEdit_nbCouchNC->setObjectName("lineEdit_nbCouchNC");
        sizePolicy.setHeightForWidth(lineEdit_nbCouchNC->sizePolicy().hasHeightForWidth());
        lineEdit_nbCouchNC->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_nbCouchNC, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_17->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_17);

        pushButton_ConfimerNC = new QPushButton(listeChambresRespDialog);
        pushButton_ConfimerNC->setObjectName("pushButton_ConfimerNC");

        verticalLayout_7->addWidget(pushButton_ConfimerNC, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_12 = new QLabel(listeChambresRespDialog);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_12, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_13 = new QLabel(listeChambresRespDialog);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_13, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        comboBox_ChambreModifPrix = new QComboBox(listeChambresRespDialog);
        comboBox_ChambreModifPrix->setObjectName("comboBox_ChambreModifPrix");

        verticalLayout_8->addWidget(comboBox_ChambreModifPrix, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label = new QLabel(listeChambresRespDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_18->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_PrixAC = new QLineEdit(listeChambresRespDialog);
        lineEdit_PrixAC->setObjectName("lineEdit_PrixAC");
        sizePolicy1.setHeightForWidth(lineEdit_PrixAC->sizePolicy().hasHeightForWidth());
        lineEdit_PrixAC->setSizePolicy(sizePolicy1);

        horizontalLayout_18->addWidget(lineEdit_PrixAC, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_8->addLayout(horizontalLayout_18);

        pushButton_ConfimerModifPrix = new QPushButton(listeChambresRespDialog);
        pushButton_ConfimerModifPrix->setObjectName("pushButton_ConfimerModifPrix");

        verticalLayout_8->addWidget(pushButton_ConfimerModifPrix, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_9 = new QLabel(listeChambresRespDialog);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_9, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_10 = new QLabel(listeChambresRespDialog);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_10, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        comboBox_ChambreSupp = new QComboBox(listeChambresRespDialog);
        comboBox_ChambreSupp->setObjectName("comboBox_ChambreSupp");

        verticalLayout_6->addWidget(comboBox_ChambreSupp, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ConfimerSupp = new QPushButton(listeChambresRespDialog);
        pushButton_ConfimerSupp->setObjectName("pushButton_ConfimerSupp");

        verticalLayout_6->addWidget(pushButton_ConfimerSupp, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_ListeChambres = new QPushButton(listeChambresRespDialog);
        pushButton_ListeChambres->setObjectName("pushButton_ListeChambres");
        sizePolicy1.setHeightForWidth(pushButton_ListeChambres->sizePolicy().hasHeightForWidth());
        pushButton_ListeChambres->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pushButton_ListeChambres, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ListeClients = new QPushButton(listeChambresRespDialog);
        pushButton_ListeClients->setObjectName("pushButton_ListeClients");
        sizePolicy1.setHeightForWidth(pushButton_ListeClients->sizePolicy().hasHeightForWidth());
        pushButton_ListeClients->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pushButton_ListeClients, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ListeEmployes = new QPushButton(listeChambresRespDialog);
        pushButton_ListeEmployes->setObjectName("pushButton_ListeEmployes");
        sizePolicy1.setHeightForWidth(pushButton_ListeEmployes->sizePolicy().hasHeightForWidth());
        pushButton_ListeEmployes->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pushButton_ListeEmployes, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        tableWidget_ListeChambres = new QTableWidget(listeChambresRespDialog);
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
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_ListeChambres->sizePolicy().hasHeightForWidth());
        tableWidget_ListeChambres->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(tableWidget_ListeChambres, 2, 0, 1, 1);


        retranslateUi(listeChambresRespDialog);

        QMetaObject::connectSlotsByName(listeChambresRespDialog);
    } // setupUi

    void retranslateUi(QDialog *listeChambresRespDialog)
    {
        listeChambresRespDialog->setWindowTitle(QCoreApplication::translate("listeChambresRespDialog", "Dialog", nullptr));
        logo->setText(QString());
        accueil->setText(QCoreApplication::translate("listeChambresRespDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("listeChambresRespDialog", "Compte", nullptr));
        label_15->setText(QCoreApplication::translate("listeChambresRespDialog", "Veuillez renseigner les informations n\303\251cessaires pour cr\303\251er la chambre", nullptr));
        label_4->setText(QCoreApplication::translate("listeChambresRespDialog", "Prix :", nullptr));
        label_5->setText(QCoreApplication::translate("listeChambresRespDialog", "Nombre de couchages :", nullptr));
        pushButton_ConfimerNC->setText(QCoreApplication::translate("listeChambresRespDialog", "CONFIRMER", nullptr));
        label_12->setText(QCoreApplication::translate("listeChambresRespDialog", "Sur chambre souhaitez-vous modifier le prix ?", nullptr));
        label_13->setText(QCoreApplication::translate("listeChambresRespDialog", "( numChambre - prix - nbCouchage - idHotel )", nullptr));
        label->setText(QCoreApplication::translate("listeChambresRespDialog", "Nouveau prix :", nullptr));
        pushButton_ConfimerModifPrix->setText(QCoreApplication::translate("listeChambresRespDialog", "CONFIRMER", nullptr));
        label_9->setText(QCoreApplication::translate("listeChambresRespDialog", "Quelle chambre souhaite-vous supprimer ?", nullptr));
        label_10->setText(QCoreApplication::translate("listeChambresRespDialog", "( numChambre - prix - nbCouchage - idHotel )", nullptr));
        pushButton_ConfimerSupp->setText(QCoreApplication::translate("listeChambresRespDialog", "CONFIRMER", nullptr));
        pushButton_ListeChambres->setText(QCoreApplication::translate("listeChambresRespDialog", "Liste des Chambres", nullptr));
        pushButton_ListeClients->setText(QCoreApplication::translate("listeChambresRespDialog", "Liste des Clients", nullptr));
        pushButton_ListeEmployes->setText(QCoreApplication::translate("listeChambresRespDialog", "Liste des Employ\303\251s", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeChambres->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("listeChambresRespDialog", "NumChambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeChambres->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("listeChambresRespDialog", "Prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeChambres->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("listeChambresRespDialog", "nbCouchages", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeChambres->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("listeChambresRespDialog", "idHotel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listeChambresRespDialog: public Ui_listeChambresRespDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTECHAMBRESRESPDIALOG_H
