/********************************************************************************
** Form generated from reading UI file 'listeclientsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTECLIENTSDIALOG_H
#define UI_LISTECLIENTSDIALOG_H

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

class Ui_listeClientsDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_AfficherChambres;
    QLabel *logo;
    QPushButton *pushButtonListeEmployes;
    QPushButton *pushButton_ListeClients;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *accueil;
    QPushButton *account;
    QVBoxLayout *verticalLayout;
    QLabel *label_CreationEmploye;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_CNom;
    QLineEdit *lineEdit_CPrenom;
    QLineEdit *lineEdit_CTel;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_CMail;
    QLineEdit *lineEdit_CMdp;
    QLabel *label_Adresse;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEdit_CNumero;
    QLineEdit *lineEdit_CRue;
    QLineEdit *lineEdit_CVille;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_13;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEdit_CCodePostal;
    QLineEdit *lineEdit_CPays;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_ValiderAjoutCli;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label;
    QComboBox *comboBoxSuppCli;
    QPushButton *pushButton_ValiderSuppCli;
    QHBoxLayout *horizontalLayout_19;
    QTableWidget *tableWidget_ListeClients;

    void setupUi(QDialog *listeClientsDialog)
    {
        if (listeClientsDialog->objectName().isEmpty())
            listeClientsDialog->setObjectName("listeClientsDialog");
        listeClientsDialog->resize(651, 539);
        horizontalLayout_2 = new QHBoxLayout(listeClientsDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        pushButton_AfficherChambres = new QPushButton(listeClientsDialog);
        pushButton_AfficherChambres->setObjectName("pushButton_AfficherChambres");

        gridLayout_6->addWidget(pushButton_AfficherChambres, 7, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        logo = new QLabel(listeClientsDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(logo, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButtonListeEmployes = new QPushButton(listeClientsDialog);
        pushButtonListeEmployes->setObjectName("pushButtonListeEmployes");

        gridLayout_6->addWidget(pushButtonListeEmployes, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ListeClients = new QPushButton(listeClientsDialog);
        pushButton_ListeClients->setObjectName("pushButton_ListeClients");
        pushButton_ListeClients->setAutoFillBackground(false);

        gridLayout_6->addWidget(pushButton_ListeClients, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_3->addLayout(gridLayout_6);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accueil = new QPushButton(listeClientsDialog);
        accueil->setObjectName("accueil");

        horizontalLayout->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(listeClientsDialog);
        account->setObjectName("account");

        horizontalLayout->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_CreationEmploye = new QLabel(listeClientsDialog);
        label_CreationEmploye->setObjectName("label_CreationEmploye");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_CreationEmploye->sizePolicy().hasHeightForWidth());
        label_CreationEmploye->setSizePolicy(sizePolicy);
        label_CreationEmploye->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_CreationEmploye);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(listeClientsDialog);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(listeClientsDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(listeClientsDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        lineEdit_CNom = new QLineEdit(listeClientsDialog);
        lineEdit_CNom->setObjectName("lineEdit_CNom");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_CNom->sizePolicy().hasHeightForWidth());
        lineEdit_CNom->setSizePolicy(sizePolicy1);
        lineEdit_CNom->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_CNom);

        lineEdit_CPrenom = new QLineEdit(listeClientsDialog);
        lineEdit_CPrenom->setObjectName("lineEdit_CPrenom");
        sizePolicy1.setHeightForWidth(lineEdit_CPrenom->sizePolicy().hasHeightForWidth());
        lineEdit_CPrenom->setSizePolicy(sizePolicy1);
        lineEdit_CPrenom->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_CPrenom);

        lineEdit_CTel = new QLineEdit(listeClientsDialog);
        lineEdit_CTel->setObjectName("lineEdit_CTel");
        sizePolicy1.setHeightForWidth(lineEdit_CTel->sizePolicy().hasHeightForWidth());
        lineEdit_CTel->setSizePolicy(sizePolicy1);
        lineEdit_CTel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_CTel);


        horizontalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(listeClientsDialog);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(listeClientsDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        lineEdit_CMail = new QLineEdit(listeClientsDialog);
        lineEdit_CMail->setObjectName("lineEdit_CMail");
        sizePolicy1.setHeightForWidth(lineEdit_CMail->sizePolicy().hasHeightForWidth());
        lineEdit_CMail->setSizePolicy(sizePolicy1);
        lineEdit_CMail->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lineEdit_CMail);

        lineEdit_CMdp = new QLineEdit(listeClientsDialog);
        lineEdit_CMdp->setObjectName("lineEdit_CMdp");
        sizePolicy1.setHeightForWidth(lineEdit_CMdp->sizePolicy().hasHeightForWidth());
        lineEdit_CMdp->setSizePolicy(sizePolicy1);
        lineEdit_CMdp->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lineEdit_CMdp);


        horizontalLayout_7->addLayout(verticalLayout_7);


        horizontalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_4);

        label_Adresse = new QLabel(listeClientsDialog);
        label_Adresse->setObjectName("label_Adresse");
        sizePolicy.setHeightForWidth(label_Adresse->sizePolicy().hasHeightForWidth());
        label_Adresse->setSizePolicy(sizePolicy);
        label_Adresse->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_Adresse);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_12 = new QLabel(listeClientsDialog);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_12);

        label_11 = new QLabel(listeClientsDialog);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_11);

        label_8 = new QLabel(listeClientsDialog);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);


        horizontalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        lineEdit_CNumero = new QLineEdit(listeClientsDialog);
        lineEdit_CNumero->setObjectName("lineEdit_CNumero");
        sizePolicy1.setHeightForWidth(lineEdit_CNumero->sizePolicy().hasHeightForWidth());
        lineEdit_CNumero->setSizePolicy(sizePolicy1);
        lineEdit_CNumero->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lineEdit_CNumero);

        lineEdit_CRue = new QLineEdit(listeClientsDialog);
        lineEdit_CRue->setObjectName("lineEdit_CRue");
        sizePolicy1.setHeightForWidth(lineEdit_CRue->sizePolicy().hasHeightForWidth());
        lineEdit_CRue->setSizePolicy(sizePolicy1);
        lineEdit_CRue->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lineEdit_CRue);

        lineEdit_CVille = new QLineEdit(listeClientsDialog);
        lineEdit_CVille->setObjectName("lineEdit_CVille");
        sizePolicy1.setHeightForWidth(lineEdit_CVille->sizePolicy().hasHeightForWidth());
        lineEdit_CVille->setSizePolicy(sizePolicy1);
        lineEdit_CVille->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lineEdit_CVille);


        horizontalLayout_10->addLayout(verticalLayout_9);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_13 = new QLabel(listeClientsDialog);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_13);

        label_14 = new QLabel(listeClientsDialog);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_14);


        horizontalLayout_11->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        lineEdit_CCodePostal = new QLineEdit(listeClientsDialog);
        lineEdit_CCodePostal->setObjectName("lineEdit_CCodePostal");
        sizePolicy1.setHeightForWidth(lineEdit_CCodePostal->sizePolicy().hasHeightForWidth());
        lineEdit_CCodePostal->setSizePolicy(sizePolicy1);
        lineEdit_CCodePostal->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lineEdit_CCodePostal);

        lineEdit_CPays = new QLineEdit(listeClientsDialog);
        lineEdit_CPays->setObjectName("lineEdit_CPays");
        sizePolicy1.setHeightForWidth(lineEdit_CPays->sizePolicy().hasHeightForWidth());
        lineEdit_CPays->setSizePolicy(sizePolicy1);
        lineEdit_CPays->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lineEdit_CPays);


        horizontalLayout_11->addLayout(verticalLayout_11);


        horizontalLayout_9->addLayout(horizontalLayout_11);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_ValiderAjoutCli = new QPushButton(listeClientsDialog);
        pushButton_ValiderAjoutCli->setObjectName("pushButton_ValiderAjoutCli");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_ValiderAjoutCli->sizePolicy().hasHeightForWidth());
        pushButton_ValiderAjoutCli->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(pushButton_ValiderAjoutCli, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label = new QLabel(listeClientsDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        comboBoxSuppCli = new QComboBox(listeClientsDialog);
        comboBoxSuppCli->setObjectName("comboBoxSuppCli");

        horizontalLayout_18->addWidget(comboBoxSuppCli, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ValiderSuppCli = new QPushButton(listeClientsDialog);
        pushButton_ValiderSuppCli->setObjectName("pushButton_ValiderSuppCli");
        sizePolicy2.setHeightForWidth(pushButton_ValiderSuppCli->sizePolicy().hasHeightForWidth());
        pushButton_ValiderSuppCli->setSizePolicy(sizePolicy2);

        horizontalLayout_18->addWidget(pushButton_ValiderSuppCli, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        tableWidget_ListeClients = new QTableWidget(listeClientsDialog);
        if (tableWidget_ListeClients->columnCount() < 7)
            tableWidget_ListeClients->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_ListeClients->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget_ListeClients->setObjectName("tableWidget_ListeClients");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget_ListeClients->sizePolicy().hasHeightForWidth());
        tableWidget_ListeClients->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(tableWidget_ListeClients);


        verticalLayout_2->addLayout(horizontalLayout_19);


        horizontalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(listeClientsDialog);

        QMetaObject::connectSlotsByName(listeClientsDialog);
    } // setupUi

    void retranslateUi(QDialog *listeClientsDialog)
    {
        listeClientsDialog->setWindowTitle(QCoreApplication::translate("listeClientsDialog", "Dialog", nullptr));
        pushButton_AfficherChambres->setText(QCoreApplication::translate("listeClientsDialog", "Liste des chambres", nullptr));
        logo->setText(QString());
        pushButtonListeEmployes->setText(QCoreApplication::translate("listeClientsDialog", "Liste des Employ\303\251s", nullptr));
        pushButton_ListeClients->setText(QCoreApplication::translate("listeClientsDialog", "Liste des Clients", nullptr));
        accueil->setText(QCoreApplication::translate("listeClientsDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("listeClientsDialog", "Compte", nullptr));
        label_CreationEmploye->setText(QCoreApplication::translate("listeClientsDialog", "Cr\303\251ation d'un client", nullptr));
        label_3->setText(QCoreApplication::translate("listeClientsDialog", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("listeClientsDialog", "Prenom :", nullptr));
        label_5->setText(QCoreApplication::translate("listeClientsDialog", "T\303\251l\303\251phone :", nullptr));
        label_6->setText(QCoreApplication::translate("listeClientsDialog", "Mail :", nullptr));
        label_7->setText(QCoreApplication::translate("listeClientsDialog", "Mot de passe :", nullptr));
        label_Adresse->setText(QCoreApplication::translate("listeClientsDialog", "Adresse :", nullptr));
        label_12->setText(QCoreApplication::translate("listeClientsDialog", "Num\303\251ro :", nullptr));
        label_11->setText(QCoreApplication::translate("listeClientsDialog", "Rue :", nullptr));
        label_8->setText(QCoreApplication::translate("listeClientsDialog", "Ville :", nullptr));
        label_13->setText(QCoreApplication::translate("listeClientsDialog", "Code Postal :", nullptr));
        label_14->setText(QCoreApplication::translate("listeClientsDialog", "Pays :", nullptr));
        pushButton_ValiderAjoutCli->setText(QCoreApplication::translate("listeClientsDialog", "VALIDER", nullptr));
        label->setText(QCoreApplication::translate("listeClientsDialog", "Veuillez s\303\251lectionner le client \303\240 supprimer : ", nullptr));
        pushButton_ValiderSuppCli->setText(QCoreApplication::translate("listeClientsDialog", "VALIDER", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeClients->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("listeClientsDialog", "idClient", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeClients->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("listeClientsDialog", "nomClient", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeClients->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("listeClientsDialog", "prenomClient", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeClients->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("listeClientsDialog", "telephone", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListeClients->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("listeClientsDialog", "mailClient", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_ListeClients->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("listeClientsDialog", "mdpClient", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_ListeClients->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("listeClientsDialog", "idAdresse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listeClientsDialog: public Ui_listeClientsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTECLIENTSDIALOG_H
