/********************************************************************************
** Form generated from reading UI file 'reservationavaliderdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONAVALIDERDIALOG_H
#define UI_RESERVATIONAVALIDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReservationAvaliderDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *logo;
    QPushButton *accueil;
    QPushButton *account;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_filtre;
    QPushButton *pushButton_AfficherChambres;
    QPushButton *pushButton_ValiderResa;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_listeResaNT;
    QCheckBox *checkBox_ValiderResaNT;
    QPushButton *pushButton_ConfimerNT;
    QTableWidget *tableWidget_ListeResaNT;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QTableWidget *tableWidget_ListeResaDV;

    void setupUi(QDialog *ReservationAvaliderDialog)
    {
        if (ReservationAvaliderDialog->objectName().isEmpty())
            ReservationAvaliderDialog->setObjectName("ReservationAvaliderDialog");
        ReservationAvaliderDialog->resize(852, 597);
        gridLayout = new QGridLayout(ReservationAvaliderDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        logo = new QLabel(ReservationAvaliderDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(logo, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        accueil = new QPushButton(ReservationAvaliderDialog);
        accueil->setObjectName("accueil");

        horizontalLayout_5->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(ReservationAvaliderDialog);
        account->setObjectName("account");

        horizontalLayout_5->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_filtre = new QLabel(ReservationAvaliderDialog);
        label_filtre->setObjectName("label_filtre");

        verticalLayout_7->addWidget(label_filtre, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_AfficherChambres = new QPushButton(ReservationAvaliderDialog);
        pushButton_AfficherChambres->setObjectName("pushButton_AfficherChambres");

        verticalLayout_7->addWidget(pushButton_AfficherChambres, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ValiderResa = new QPushButton(ReservationAvaliderDialog);
        pushButton_ValiderResa->setObjectName("pushButton_ValiderResa");
        pushButton_ValiderResa->setAutoFillBackground(false);

        verticalLayout_7->addWidget(pushButton_ValiderResa, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(ReservationAvaliderDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(ReservationAvaliderDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(ReservationAvaliderDialog);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        comboBox_listeResaNT = new QComboBox(ReservationAvaliderDialog);
        comboBox_listeResaNT->setObjectName("comboBox_listeResaNT");

        verticalLayout_4->addWidget(comboBox_listeResaNT, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        checkBox_ValiderResaNT = new QCheckBox(ReservationAvaliderDialog);
        checkBox_ValiderResaNT->setObjectName("checkBox_ValiderResaNT");

        horizontalLayout_6->addWidget(checkBox_ValiderResaNT, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ConfimerNT = new QPushButton(ReservationAvaliderDialog);
        pushButton_ConfimerNT->setObjectName("pushButton_ConfimerNT");

        horizontalLayout_6->addWidget(pushButton_ConfimerNT, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tableWidget_ListeResaNT = new QTableWidget(ReservationAvaliderDialog);
        if (tableWidget_ListeResaNT->columnCount() < 7)
            tableWidget_ListeResaNT->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_ListeResaNT->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget_ListeResaNT->setObjectName("tableWidget_ListeResaNT");

        verticalLayout_3->addWidget(tableWidget_ListeResaNT);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_9 = new QLabel(ReservationAvaliderDialog);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_9);

        tableWidget_ListeResaDV = new QTableWidget(ReservationAvaliderDialog);
        if (tableWidget_ListeResaDV->columnCount() < 7)
            tableWidget_ListeResaDV->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_ListeResaDV->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        tableWidget_ListeResaDV->setObjectName("tableWidget_ListeResaDV");

        verticalLayout_5->addWidget(tableWidget_ListeResaDV);


        verticalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_4);


        verticalLayout_9->addLayout(verticalLayout_8);


        gridLayout->addLayout(verticalLayout_9, 0, 0, 1, 1);


        retranslateUi(ReservationAvaliderDialog);

        QMetaObject::connectSlotsByName(ReservationAvaliderDialog);
    } // setupUi

    void retranslateUi(QDialog *ReservationAvaliderDialog)
    {
        ReservationAvaliderDialog->setWindowTitle(QCoreApplication::translate("ReservationAvaliderDialog", "Dialog", nullptr));
        logo->setText(QString());
        accueil->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Compte", nullptr));
        label_filtre->setText(QCoreApplication::translate("ReservationAvaliderDialog", "ACTIONS", nullptr));
        pushButton_AfficherChambres->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Liste  des chambres", nullptr));
        pushButton_ValiderResa->setText(QCoreApplication::translate("ReservationAvaliderDialog", "R\303\251servations \303\240 valider", nullptr));
        label_5->setText(QCoreApplication::translate("ReservationAvaliderDialog", "R\303\251servations non-trait\303\251es", nullptr));
        label_3->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Quelle r\303\251servation souhaitez-vous modifier ?", nullptr));
        label_4->setText(QCoreApplication::translate("ReservationAvaliderDialog", "( idReservation - dateArrive - dateDepart - estValide - estTraite - numChambre - idClient )", nullptr));
        checkBox_ValiderResaNT->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Valider la r\303\251servation", nullptr));
        pushButton_ConfimerNT->setText(QCoreApplication::translate("ReservationAvaliderDialog", "CONFIRMER", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeResaNT->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReservationAvaliderDialog", "idR\303\251servation", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeResaNT->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Date Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeResaNT->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Date D\303\251part", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeResaNT->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReservationAvaliderDialog", "estValide", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListeResaNT->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReservationAvaliderDialog", "estTraite", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_ListeResaNT->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ReservationAvaliderDialog", "numChambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_ListeResaNT->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ReservationAvaliderDialog", "idClient", nullptr));
        label_9->setText(QCoreApplication::translate("ReservationAvaliderDialog", "R\303\251servations d\303\251j\303\240 valid\303\251es", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_ListeResaDV->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ReservationAvaliderDialog", "idR\303\251servation", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_ListeResaDV->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Date Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_ListeResaDV->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ReservationAvaliderDialog", "Date D\303\251part", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_ListeResaDV->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("ReservationAvaliderDialog", "estValide", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_ListeResaDV->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("ReservationAvaliderDialog", "estTraite", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_ListeResaDV->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("ReservationAvaliderDialog", "numChambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_ListeResaDV->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("ReservationAvaliderDialog", "idClient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservationAvaliderDialog: public Ui_ReservationAvaliderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONAVALIDERDIALOG_H
