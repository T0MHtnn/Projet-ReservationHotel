/********************************************************************************
** Form generated from reading UI file 'clientcomptedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCOMPTEDIALOG_H
#define UI_CLIENTCOMPTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_ClientCompteDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QPushButton *accueil;
    QPushButton *account;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_nomC;
    QLineEdit *lineEdit_prenomC;
    QLineEdit *lineEdit_mailC;
    QLineEdit *lineEdit_telCli;
    QLineEdit *lineEdit_mdpCli;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_rue;
    QLineEdit *lineEdit_numero;
    QLineEdit *lineEdit_ville;
    QLineEdit *lineEdit_cp;
    QLineEdit *lineEdit_pays;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_modifCli;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget_ListeResaHisto;

    void setupUi(QDialog *ClientCompteDialog)
    {
        if (ClientCompteDialog->objectName().isEmpty())
            ClientCompteDialog->setObjectName("ClientCompteDialog");
        ClientCompteDialog->resize(669, 323);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        ClientCompteDialog->setFont(font);
        gridLayout = new QGridLayout(ClientCompteDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        logo = new QLabel(ClientCompteDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(logo, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        accueil = new QPushButton(ClientCompteDialog);
        accueil->setObjectName("accueil");

        horizontalLayout_2->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(ClientCompteDialog);
        account->setObjectName("account");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(false);
        account->setFont(font1);

        horizontalLayout_2->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_nomC = new QLineEdit(ClientCompteDialog);
        lineEdit_nomC->setObjectName("lineEdit_nomC");
        lineEdit_nomC->setFont(font);
        lineEdit_nomC->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_nomC);

        lineEdit_prenomC = new QLineEdit(ClientCompteDialog);
        lineEdit_prenomC->setObjectName("lineEdit_prenomC");
        lineEdit_prenomC->setFont(font);
        lineEdit_prenomC->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_prenomC);

        lineEdit_mailC = new QLineEdit(ClientCompteDialog);
        lineEdit_mailC->setObjectName("lineEdit_mailC");
        lineEdit_mailC->setFont(font);
        lineEdit_mailC->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_mailC);

        lineEdit_telCli = new QLineEdit(ClientCompteDialog);
        lineEdit_telCli->setObjectName("lineEdit_telCli");
        lineEdit_telCli->setFont(font);
        lineEdit_telCli->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_telCli);

        lineEdit_mdpCli = new QLineEdit(ClientCompteDialog);
        lineEdit_mdpCli->setObjectName("lineEdit_mdpCli");
        lineEdit_mdpCli->setFont(font);
        lineEdit_mdpCli->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_mdpCli);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_rue = new QLineEdit(ClientCompteDialog);
        lineEdit_rue->setObjectName("lineEdit_rue");
        lineEdit_rue->setFont(font);
        lineEdit_rue->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_rue);

        lineEdit_numero = new QLineEdit(ClientCompteDialog);
        lineEdit_numero->setObjectName("lineEdit_numero");
        lineEdit_numero->setFont(font);
        lineEdit_numero->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_numero);

        lineEdit_ville = new QLineEdit(ClientCompteDialog);
        lineEdit_ville->setObjectName("lineEdit_ville");
        lineEdit_ville->setFont(font);
        lineEdit_ville->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_ville);

        lineEdit_cp = new QLineEdit(ClientCompteDialog);
        lineEdit_cp->setObjectName("lineEdit_cp");
        lineEdit_cp->setFont(font);
        lineEdit_cp->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_cp);

        lineEdit_pays = new QLineEdit(ClientCompteDialog);
        lineEdit_pays->setObjectName("lineEdit_pays");
        lineEdit_pays->setFont(font);
        lineEdit_pays->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_pays);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_modifCli = new QPushButton(ClientCompteDialog);
        pushButton_modifCli->setObjectName("pushButton_modifCli");
        pushButton_modifCli->setFont(font);

        verticalLayout_2->addWidget(pushButton_modifCli, 0, Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableWidget_ListeResaHisto = new QTableWidget(ClientCompteDialog);
        if (tableWidget_ListeResaHisto->columnCount() < 8)
            tableWidget_ListeResaHisto->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_ListeResaHisto->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_ListeResaHisto->setObjectName("tableWidget_ListeResaHisto");
        tableWidget_ListeResaHisto->setFont(font);
        tableWidget_ListeResaHisto->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_ListeResaHisto->horizontalHeader()->setDefaultSectionSize(93);

        horizontalLayout->addWidget(tableWidget_ListeResaHisto);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_prenomC, lineEdit_nomC);
        QWidget::setTabOrder(lineEdit_nomC, lineEdit_mailC);
        QWidget::setTabOrder(lineEdit_mailC, lineEdit_telCli);
        QWidget::setTabOrder(lineEdit_telCli, lineEdit_mdpCli);
        QWidget::setTabOrder(lineEdit_mdpCli, lineEdit_numero);
        QWidget::setTabOrder(lineEdit_numero, lineEdit_rue);
        QWidget::setTabOrder(lineEdit_rue, lineEdit_ville);
        QWidget::setTabOrder(lineEdit_ville, lineEdit_cp);
        QWidget::setTabOrder(lineEdit_cp, lineEdit_pays);
        QWidget::setTabOrder(lineEdit_pays, account);

        retranslateUi(ClientCompteDialog);

        QMetaObject::connectSlotsByName(ClientCompteDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientCompteDialog)
    {
        ClientCompteDialog->setWindowTitle(QCoreApplication::translate("ClientCompteDialog", "Dialog", nullptr));
        logo->setText(QString());
        accueil->setText(QCoreApplication::translate("ClientCompteDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("ClientCompteDialog", "Compte", nullptr));
        pushButton_modifCli->setText(QCoreApplication::translate("ClientCompteDialog", "MODIFIER INFORMATIONS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListeResaHisto->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ClientCompteDialog", "Nom_Hotel", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListeResaHisto->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ClientCompteDialog", "Numero_Chambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListeResaHisto->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ClientCompteDialog", "Nombre_Couchage", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListeResaHisto->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ClientCompteDialog", "Prix_Chambre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListeResaHisto->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ClientCompteDialog", "Adresse_Hotel", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_ListeResaHisto->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ClientCompteDialog", "Date_Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_ListeResaHisto->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ClientCompteDialog", "Date_D\303\251part", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_ListeResaHisto->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ClientCompteDialog", "Statut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientCompteDialog: public Ui_ClientCompteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCOMPTEDIALOG_H
