/********************************************************************************
** Form generated from reading UI file 'homepagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEDIALOG_H
#define UI_HOMEPAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePageDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_modifResa;
    QLabel *label_filtre;
    QPushButton *pushButton_delResa;
    QPushButton *pushButton_dmdResa;
    QLabel *logo;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_ListeHotel;
    QGridLayout *gridLayout_3;
    QLabel *label_vh;
    QLineEdit *lineEdit_nh;
    QLineEdit *lineEdit_vh;
    QLabel *label__nh;
    QPushButton *pushButton_search;
    QPushButton *account;

    void setupUi(QDialog *HomePageDialog)
    {
        if (HomePageDialog->objectName().isEmpty())
            HomePageDialog->setObjectName("HomePageDialog");
        HomePageDialog->resize(661, 472);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        HomePageDialog->setFont(font);
        HomePageDialog->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(HomePageDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        pushButton_modifResa = new QPushButton(HomePageDialog);
        pushButton_modifResa->setObjectName("pushButton_modifResa");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        pushButton_modifResa->setFont(font1);

        gridLayout_5->addWidget(pushButton_modifResa, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_filtre = new QLabel(HomePageDialog);
        label_filtre->setObjectName("label_filtre");
        label_filtre->setFont(font1);

        gridLayout_5->addWidget(label_filtre, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_delResa = new QPushButton(HomePageDialog);
        pushButton_delResa->setObjectName("pushButton_delResa");
        pushButton_delResa->setFont(font1);

        gridLayout_5->addWidget(pushButton_delResa, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_dmdResa = new QPushButton(HomePageDialog);
        pushButton_dmdResa->setObjectName("pushButton_dmdResa");
        pushButton_dmdResa->setFont(font1);
        pushButton_dmdResa->setAutoFillBackground(false);

        gridLayout_5->addWidget(pushButton_dmdResa, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        logo = new QLabel(HomePageDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(logo, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        tableWidget_ListeHotel = new QTableWidget(HomePageDialog);
        if (tableWidget_ListeHotel->columnCount() < 5)
            tableWidget_ListeHotel->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeHotel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeHotel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeHotel->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeHotel->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListeHotel->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_ListeHotel->setObjectName("tableWidget_ListeHotel");
        tableWidget_ListeHotel->setFont(font1);
        tableWidget_ListeHotel->setAutoFillBackground(false);
        tableWidget_ListeHotel->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_ListeHotel->setAlternatingRowColors(true);
        tableWidget_ListeHotel->setSortingEnabled(true);
        tableWidget_ListeHotel->setWordWrap(false);
        tableWidget_ListeHotel->horizontalHeader()->setVisible(true);
        tableWidget_ListeHotel->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_ListeHotel->horizontalHeader()->setMinimumSectionSize(97);
        tableWidget_ListeHotel->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget_ListeHotel->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_ListeHotel->horizontalHeader()->setStretchLastSection(false);
        tableWidget_ListeHotel->verticalHeader()->setMinimumSectionSize(50);
        tableWidget_ListeHotel->verticalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tableWidget_ListeHotel, 2, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_vh = new QLabel(HomePageDialog);
        label_vh->setObjectName("label_vh");
        label_vh->setFont(font1);

        gridLayout_3->addWidget(label_vh, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_nh = new QLineEdit(HomePageDialog);
        lineEdit_nh->setObjectName("lineEdit_nh");
        lineEdit_nh->setFont(font1);

        gridLayout_3->addWidget(lineEdit_nh, 0, 1, 1, 1, Qt::AlignVCenter);

        lineEdit_vh = new QLineEdit(HomePageDialog);
        lineEdit_vh->setObjectName("lineEdit_vh");
        lineEdit_vh->setFont(font1);

        gridLayout_3->addWidget(lineEdit_vh, 0, 3, 1, 1, Qt::AlignVCenter);

        label__nh = new QLabel(HomePageDialog);
        label__nh->setObjectName("label__nh");
        label__nh->setFont(font1);

        gridLayout_3->addWidget(label__nh, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_search = new QPushButton(HomePageDialog);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setMaximumSize(QSize(16777215, 16777215));
        pushButton_search->setFont(font1);

        gridLayout_3->addWidget(pushButton_search, 0, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout_3, 1, 1, 1, 1);

        account = new QPushButton(HomePageDialog);
        account->setObjectName("account");
        account->setFont(font1);

        gridLayout_2->addWidget(account, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        QWidget::setTabOrder(tableWidget_ListeHotel, lineEdit_nh);
        QWidget::setTabOrder(lineEdit_nh, lineEdit_vh);
        QWidget::setTabOrder(lineEdit_vh, pushButton_dmdResa);
        QWidget::setTabOrder(pushButton_dmdResa, pushButton_delResa);

        retranslateUi(HomePageDialog);

        QMetaObject::connectSlotsByName(HomePageDialog);
    } // setupUi

    void retranslateUi(QDialog *HomePageDialog)
    {
        HomePageDialog->setWindowTitle(QCoreApplication::translate("HomePageDialog", "HomePage", nullptr));
        pushButton_modifResa->setText(QCoreApplication::translate("HomePageDialog", "Modifier Reservation", nullptr));
        label_filtre->setText(QCoreApplication::translate("HomePageDialog", "VOS ACTIONS", nullptr));
        pushButton_delResa->setText(QCoreApplication::translate("HomePageDialog", "Annuler Reservation", nullptr));
        pushButton_dmdResa->setText(QCoreApplication::translate("HomePageDialog", "Demander Reservation", nullptr));
        logo->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeHotel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HomePageDialog", "Nom_Hotel", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeHotel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HomePageDialog", "Numero_Chambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeHotel->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("HomePageDialog", "Nombre_Couchage", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeHotel->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("HomePageDialog", "Prix_Chambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListeHotel->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("HomePageDialog", "Adresse_Hotel", nullptr));
        label_vh->setText(QCoreApplication::translate("HomePageDialog", "Ville de l'h\303\264tel", nullptr));
        label__nh->setText(QCoreApplication::translate("HomePageDialog", "Nom de l'h\303\264tel", nullptr));
        pushButton_search->setText(QCoreApplication::translate("HomePageDialog", "Rechercher", nullptr));
        account->setText(QCoreApplication::translate("HomePageDialog", "Compte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePageDialog: public Ui_HomePageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEDIALOG_H
