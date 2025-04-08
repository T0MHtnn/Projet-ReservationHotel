/********************************************************************************
** Form generated from reading UI file 'listeemployesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEEMPLOYESDIALOG_H
#define UI_LISTEEMPLOYESDIALOG_H

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

class Ui_listeEmployesDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_6;
    QPushButton *pushButtonListeEmployes;
    QLabel *logo;
    QPushButton *pushButton_ListeClients;
    QPushButton *pushButton_AfficherChambres;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *accueil;
    QPushButton *account;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_CPoste;
    QLineEdit *lineEdit_CNom;
    QLineEdit *lineEdit_CPrenom;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_CMail;
    QLineEdit *lineEdit_CMdp;
    QComboBox *comboBox_CResp;
    QPushButton *pushButton_ValiderAjoutEmp;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QComboBox *comboBoxSuppEmp;
    QPushButton *pushButton_ValiderSuppEmp;
    QHBoxLayout *horizontalLayout_19;
    QTableWidget *tableWidget_ListeEmploye;

    void setupUi(QDialog *listeEmployesDialog)
    {
        if (listeEmployesDialog->objectName().isEmpty())
            listeEmployesDialog->setObjectName("listeEmployesDialog");
        listeEmployesDialog->resize(832, 524);
        gridLayout_2 = new QGridLayout(listeEmployesDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        pushButtonListeEmployes = new QPushButton(listeEmployesDialog);
        pushButtonListeEmployes->setObjectName("pushButtonListeEmployes");

        gridLayout_6->addWidget(pushButtonListeEmployes, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        logo = new QLabel(listeEmployesDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(logo, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ListeClients = new QPushButton(listeEmployesDialog);
        pushButton_ListeClients->setObjectName("pushButton_ListeClients");
        pushButton_ListeClients->setAutoFillBackground(false);

        gridLayout_6->addWidget(pushButton_ListeClients, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_AfficherChambres = new QPushButton(listeEmployesDialog);
        pushButton_AfficherChambres->setObjectName("pushButton_AfficherChambres");

        gridLayout_6->addWidget(pushButton_AfficherChambres, 7, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_3->addLayout(gridLayout_6);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accueil = new QPushButton(listeEmployesDialog);
        accueil->setObjectName("accueil");

        horizontalLayout->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(listeEmployesDialog);
        account->setObjectName("account");

        horizontalLayout->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(listeEmployesDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(listeEmployesDialog);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(listeEmployesDialog);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(listeEmployesDialog);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        lineEdit_CPoste = new QLineEdit(listeEmployesDialog);
        lineEdit_CPoste->setObjectName("lineEdit_CPoste");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_CPoste->sizePolicy().hasHeightForWidth());
        lineEdit_CPoste->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(lineEdit_CPoste, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_CNom = new QLineEdit(listeEmployesDialog);
        lineEdit_CNom->setObjectName("lineEdit_CNom");
        sizePolicy1.setHeightForWidth(lineEdit_CNom->sizePolicy().hasHeightForWidth());
        lineEdit_CNom->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(lineEdit_CNom, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_CPrenom = new QLineEdit(listeEmployesDialog);
        lineEdit_CPrenom->setObjectName("lineEdit_CPrenom");
        sizePolicy1.setHeightForWidth(lineEdit_CPrenom->sizePolicy().hasHeightForWidth());
        lineEdit_CPrenom->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(lineEdit_CPrenom, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(listeEmployesDialog);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(listeEmployesDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(listeEmployesDialog);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        lineEdit_CMail = new QLineEdit(listeEmployesDialog);
        lineEdit_CMail->setObjectName("lineEdit_CMail");
        sizePolicy1.setHeightForWidth(lineEdit_CMail->sizePolicy().hasHeightForWidth());
        lineEdit_CMail->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(lineEdit_CMail, 0, Qt::AlignHCenter);

        lineEdit_CMdp = new QLineEdit(listeEmployesDialog);
        lineEdit_CMdp->setObjectName("lineEdit_CMdp");
        sizePolicy1.setHeightForWidth(lineEdit_CMdp->sizePolicy().hasHeightForWidth());
        lineEdit_CMdp->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(lineEdit_CMdp, 0, Qt::AlignHCenter);

        comboBox_CResp = new QComboBox(listeEmployesDialog);
        comboBox_CResp->setObjectName("comboBox_CResp");
        sizePolicy1.setHeightForWidth(comboBox_CResp->sizePolicy().hasHeightForWidth());
        comboBox_CResp->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(comboBox_CResp, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_7->addLayout(verticalLayout_7);


        horizontalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_ValiderAjoutEmp = new QPushButton(listeEmployesDialog);
        pushButton_ValiderAjoutEmp->setObjectName("pushButton_ValiderAjoutEmp");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_ValiderAjoutEmp->sizePolicy().hasHeightForWidth());
        pushButton_ValiderAjoutEmp->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pushButton_ValiderAjoutEmp, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label = new QLabel(listeEmployesDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_9 = new QLabel(listeEmployesDialog);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy4);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_9, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        comboBoxSuppEmp = new QComboBox(listeEmployesDialog);
        comboBoxSuppEmp->setObjectName("comboBoxSuppEmp");
        sizePolicy.setHeightForWidth(comboBoxSuppEmp->sizePolicy().hasHeightForWidth());
        comboBoxSuppEmp->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(comboBoxSuppEmp, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_18->addLayout(verticalLayout_5);

        pushButton_ValiderSuppEmp = new QPushButton(listeEmployesDialog);
        pushButton_ValiderSuppEmp->setObjectName("pushButton_ValiderSuppEmp");
        sizePolicy2.setHeightForWidth(pushButton_ValiderSuppEmp->sizePolicy().hasHeightForWidth());
        pushButton_ValiderSuppEmp->setSizePolicy(sizePolicy2);

        horizontalLayout_18->addWidget(pushButton_ValiderSuppEmp, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        tableWidget_ListeEmploye = new QTableWidget(listeEmployesDialog);
        if (tableWidget_ListeEmploye->columnCount() < 8)
            tableWidget_ListeEmploye->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_ListeEmploye->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_ListeEmploye->setObjectName("tableWidget_ListeEmploye");
        sizePolicy4.setHeightForWidth(tableWidget_ListeEmploye->sizePolicy().hasHeightForWidth());
        tableWidget_ListeEmploye->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(tableWidget_ListeEmploye);


        verticalLayout_2->addLayout(horizontalLayout_19);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(listeEmployesDialog);

        QMetaObject::connectSlotsByName(listeEmployesDialog);
    } // setupUi

    void retranslateUi(QDialog *listeEmployesDialog)
    {
        listeEmployesDialog->setWindowTitle(QCoreApplication::translate("listeEmployesDialog", "Dialog", nullptr));
        pushButtonListeEmployes->setText(QCoreApplication::translate("listeEmployesDialog", "Liste des Employ\303\251s", nullptr));
        logo->setText(QString());
        pushButton_ListeClients->setText(QCoreApplication::translate("listeEmployesDialog", "Liste des Clients", nullptr));
        pushButton_AfficherChambres->setText(QCoreApplication::translate("listeEmployesDialog", "Liste des chambres", nullptr));
        accueil->setText(QCoreApplication::translate("listeEmployesDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("listeEmployesDialog", "Compte", nullptr));
        label_2->setText(QCoreApplication::translate("listeEmployesDialog", "Cr\303\251ation d'un employ\303\251", nullptr));
        label_3->setText(QCoreApplication::translate("listeEmployesDialog", "Poste :", nullptr));
        label_4->setText(QCoreApplication::translate("listeEmployesDialog", "Nom :", nullptr));
        label_5->setText(QCoreApplication::translate("listeEmployesDialog", "Prenom :", nullptr));
        label_6->setText(QCoreApplication::translate("listeEmployesDialog", "Mail :", nullptr));
        label_7->setText(QCoreApplication::translate("listeEmployesDialog", "Mot de passe :", nullptr));
        label_8->setText(QCoreApplication::translate("listeEmployesDialog", "Responsable ? :", nullptr));
        pushButton_ValiderAjoutEmp->setText(QCoreApplication::translate("listeEmployesDialog", "VALIDER", nullptr));
        label->setText(QCoreApplication::translate("listeEmployesDialog", "Veuillez s\303\251lectionner l'employ\303\251 \303\240 supprimer : ", nullptr));
        label_9->setText(QCoreApplication::translate("listeEmployesDialog", "( numEmploye - poste - nomEmploye - prenomEmploye - mdpEmploye - estResponsable - mailEmploye - idHotel )", nullptr));
        pushButton_ValiderSuppEmp->setText(QCoreApplication::translate("listeEmployesDialog", "VALIDER", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeEmploye->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("listeEmployesDialog", "numEmploye", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeEmploye->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("listeEmployesDialog", "Poste", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeEmploye->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("listeEmployesDialog", "nomEmploye", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeEmploye->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("listeEmployesDialog", "prenomEmploye", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListeEmploye->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("listeEmployesDialog", "mdpEmploye", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_ListeEmploye->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("listeEmployesDialog", "estResponsable", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_ListeEmploye->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("listeEmployesDialog", "mailEmploye", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_ListeEmploye->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("listeEmployesDialog", "nomHotel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listeEmployesDialog: public Ui_listeEmployesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEEMPLOYESDIALOG_H
