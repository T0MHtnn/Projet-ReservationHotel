/********************************************************************************
** Form generated from reading UI file 'annuleresadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNULERESADIALOG_H
#define UI_ANNULERESADIALOG_H

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

class Ui_AnnuleResaDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_mailCli;
    QLabel *label__nh;
    QLineEdit *lineEdit_nh;
    QLabel *label_vh;
    QLineEdit *lineEdit_vh;
    QPushButton *pushButton_search;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_listeHotelResa;
    QPushButton *pushButton_val;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget_ListeHotelResa;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *logo;
    QPushButton *accueil;
    QPushButton *account;

    void setupUi(QDialog *AnnuleResaDialog)
    {
        if (AnnuleResaDialog->objectName().isEmpty())
            AnnuleResaDialog->setObjectName("AnnuleResaDialog");
        AnnuleResaDialog->resize(660, 484);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        AnnuleResaDialog->setFont(font);
        gridLayout = new QGridLayout(AnnuleResaDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(AnnuleResaDialog);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit_mailCli = new QLineEdit(AnnuleResaDialog);
        lineEdit_mailCli->setObjectName("lineEdit_mailCli");
        lineEdit_mailCli->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_mailCli);

        label__nh = new QLabel(AnnuleResaDialog);
        label__nh->setObjectName("label__nh");
        label__nh->setFont(font);

        horizontalLayout_2->addWidget(label__nh);

        lineEdit_nh = new QLineEdit(AnnuleResaDialog);
        lineEdit_nh->setObjectName("lineEdit_nh");
        lineEdit_nh->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_nh);

        label_vh = new QLabel(AnnuleResaDialog);
        label_vh->setObjectName("label_vh");
        label_vh->setFont(font);

        horizontalLayout_2->addWidget(label_vh);

        lineEdit_vh = new QLineEdit(AnnuleResaDialog);
        lineEdit_vh->setObjectName("lineEdit_vh");
        lineEdit_vh->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_vh);

        pushButton_search = new QPushButton(AnnuleResaDialog);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setMaximumSize(QSize(16777215, 16777215));
        pushButton_search->setFont(font);

        horizontalLayout_2->addWidget(pushButton_search);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");

        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(AnnuleResaDialog);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(AnnuleResaDialog);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(9);
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        comboBox_listeHotelResa = new QComboBox(AnnuleResaDialog);
        comboBox_listeHotelResa->setObjectName("comboBox_listeHotelResa");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setBold(false);
        comboBox_listeHotelResa->setFont(font2);

        horizontalLayout_6->addWidget(comboBox_listeHotelResa);

        pushButton_val = new QPushButton(AnnuleResaDialog);
        pushButton_val->setObjectName("pushButton_val");
        pushButton_val->setFont(font);

        horizontalLayout_6->addWidget(pushButton_val);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableWidget_ListeHotelResa = new QTableWidget(AnnuleResaDialog);
        if (tableWidget_ListeHotelResa->columnCount() < 8)
            tableWidget_ListeHotelResa->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_ListeHotelResa->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_ListeHotelResa->setObjectName("tableWidget_ListeHotelResa");
        tableWidget_ListeHotelResa->setFont(font);
        tableWidget_ListeHotelResa->setAutoFillBackground(false);
        tableWidget_ListeHotelResa->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_ListeHotelResa->setAlternatingRowColors(true);
        tableWidget_ListeHotelResa->horizontalHeader()->setVisible(true);
        tableWidget_ListeHotelResa->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_ListeHotelResa->horizontalHeader()->setDefaultSectionSize(91);
        tableWidget_ListeHotelResa->horizontalHeader()->setStretchLastSection(false);

        horizontalLayout->addWidget(tableWidget_ListeHotelResa);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        logo = new QLabel(AnnuleResaDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(logo, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        accueil = new QPushButton(AnnuleResaDialog);
        accueil->setObjectName("accueil");

        horizontalLayout_5->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(AnnuleResaDialog);
        account->setObjectName("account");

        horizontalLayout_5->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_6->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(AnnuleResaDialog);

        QMetaObject::connectSlotsByName(AnnuleResaDialog);
    } // setupUi

    void retranslateUi(QDialog *AnnuleResaDialog)
    {
        AnnuleResaDialog->setWindowTitle(QCoreApplication::translate("AnnuleResaDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AnnuleResaDialog", "Mail Client", nullptr));
        label__nh->setText(QCoreApplication::translate("AnnuleResaDialog", "Nom de l'h\303\264tel", nullptr));
        label_vh->setText(QCoreApplication::translate("AnnuleResaDialog", "Ville de l'h\303\264tel", nullptr));
        pushButton_search->setText(QCoreApplication::translate("AnnuleResaDialog", "RECHERCHER", nullptr));
        label_2->setText(QCoreApplication::translate("AnnuleResaDialog", "Quelle r\303\251servation souhaitez-vous annuler ?", nullptr));
        label_3->setText(QCoreApplication::translate("AnnuleResaDialog", "(Nom Hotel - Num\303\251ro Chambre - Prix Chambre - Adresse Hotel - Date Arriv\303\251e - Date D\303\251part)", nullptr));
        pushButton_val->setText(QCoreApplication::translate("AnnuleResaDialog", "VALIDER", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeHotelResa->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AnnuleResaDialog", "Nom_Hotel", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeHotelResa->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AnnuleResaDialog", "Numero_Chambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeHotelResa->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AnnuleResaDialog", "Nombre_Couchage", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeHotelResa->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AnnuleResaDialog", "Prix_Chambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListeHotelResa->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AnnuleResaDialog", "Adresse_Hotel", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_ListeHotelResa->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AnnuleResaDialog", "Date_Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_ListeHotelResa->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AnnuleResaDialog", "Date_D\303\251part", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_ListeHotelResa->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AnnuleResaDialog", "Statut", nullptr));
        logo->setText(QString());
        accueil->setText(QCoreApplication::translate("AnnuleResaDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("AnnuleResaDialog", "Compte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnnuleResaDialog: public Ui_AnnuleResaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNULERESADIALOG_H
