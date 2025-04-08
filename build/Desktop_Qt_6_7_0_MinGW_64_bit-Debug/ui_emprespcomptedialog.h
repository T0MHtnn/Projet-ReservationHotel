/********************************************************************************
** Form generated from reading UI file 'emprespcomptedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPRESPCOMPTEDIALOG_H
#define UI_EMPRESPCOMPTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_empRespCompteDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_6;
    QLabel *logo;
    QPushButton *pushButtonListeEmployes;
    QPushButton *pushButton_AfficherChambres;
    QPushButton *pushButton_ListeClients;
    QPushButton *pushButton_Stats;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *accueil;
    QPushButton *account;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButtonAutorisePasModif_3;
    QRadioButton *radioButtonAutoriseModif_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *labelNom_3;
    QLineEdit *lineEditNom_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *labelPrenom_3;
    QLineEdit *lineEditPrenom_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *labelMail_3;
    QLineEdit *lineEditMail_3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *labelMdp_3;
    QLineEdit *lineEditMdp_3;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_9;
    QPushButton *pushButton_Modifier_3;
    QLabel *label_10;

    void setupUi(QDialog *empRespCompteDialog)
    {
        if (empRespCompteDialog->objectName().isEmpty())
            empRespCompteDialog->setObjectName("empRespCompteDialog");
        empRespCompteDialog->resize(639, 506);
        gridLayout = new QGridLayout(empRespCompteDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        logo = new QLabel(empRespCompteDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(logo, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButtonListeEmployes = new QPushButton(empRespCompteDialog);
        pushButtonListeEmployes->setObjectName("pushButtonListeEmployes");

        gridLayout_6->addWidget(pushButtonListeEmployes, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_AfficherChambres = new QPushButton(empRespCompteDialog);
        pushButton_AfficherChambres->setObjectName("pushButton_AfficherChambres");

        gridLayout_6->addWidget(pushButton_AfficherChambres, 7, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ListeClients = new QPushButton(empRespCompteDialog);
        pushButton_ListeClients->setObjectName("pushButton_ListeClients");
        pushButton_ListeClients->setAutoFillBackground(false);

        gridLayout_6->addWidget(pushButton_ListeClients, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_Stats = new QPushButton(empRespCompteDialog);
        pushButton_Stats->setObjectName("pushButton_Stats");

        gridLayout_6->addWidget(pushButton_Stats, 8, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(gridLayout_6, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accueil = new QPushButton(empRespCompteDialog);
        accueil->setObjectName("accueil");

        horizontalLayout->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(empRespCompteDialog);
        account->setObjectName("account");

        horizontalLayout->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        radioButtonAutorisePasModif_3 = new QRadioButton(empRespCompteDialog);
        radioButtonAutorisePasModif_3->setObjectName("radioButtonAutorisePasModif_3");
        radioButtonAutorisePasModif_3->setChecked(true);

        horizontalLayout_14->addWidget(radioButtonAutorisePasModif_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        radioButtonAutoriseModif_3 = new QRadioButton(empRespCompteDialog);
        radioButtonAutoriseModif_3->setObjectName("radioButtonAutoriseModif_3");

        horizontalLayout_14->addWidget(radioButtonAutoriseModif_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        labelNom_3 = new QLabel(empRespCompteDialog);
        labelNom_3->setObjectName("labelNom_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelNom_3->sizePolicy().hasHeightForWidth());
        labelNom_3->setSizePolicy(sizePolicy);
        labelNom_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(labelNom_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditNom_3 = new QLineEdit(empRespCompteDialog);
        lineEditNom_3->setObjectName("lineEditNom_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditNom_3->sizePolicy().hasHeightForWidth());
        lineEditNom_3->setSizePolicy(sizePolicy1);
        lineEditNom_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(lineEditNom_3, 0, Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        labelPrenom_3 = new QLabel(empRespCompteDialog);
        labelPrenom_3->setObjectName("labelPrenom_3");
        sizePolicy.setHeightForWidth(labelPrenom_3->sizePolicy().hasHeightForWidth());
        labelPrenom_3->setSizePolicy(sizePolicy);
        labelPrenom_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(labelPrenom_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditPrenom_3 = new QLineEdit(empRespCompteDialog);
        lineEditPrenom_3->setObjectName("lineEditPrenom_3");
        sizePolicy1.setHeightForWidth(lineEditPrenom_3->sizePolicy().hasHeightForWidth());
        lineEditPrenom_3->setSizePolicy(sizePolicy1);
        lineEditPrenom_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(lineEditPrenom_3, 0, Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        labelMail_3 = new QLabel(empRespCompteDialog);
        labelMail_3->setObjectName("labelMail_3");
        sizePolicy.setHeightForWidth(labelMail_3->sizePolicy().hasHeightForWidth());
        labelMail_3->setSizePolicy(sizePolicy);
        labelMail_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(labelMail_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditMail_3 = new QLineEdit(empRespCompteDialog);
        lineEditMail_3->setObjectName("lineEditMail_3");
        sizePolicy1.setHeightForWidth(lineEditMail_3->sizePolicy().hasHeightForWidth());
        lineEditMail_3->setSizePolicy(sizePolicy1);
        lineEditMail_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(lineEditMail_3, 0, Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        labelMdp_3 = new QLabel(empRespCompteDialog);
        labelMdp_3->setObjectName("labelMdp_3");
        sizePolicy.setHeightForWidth(labelMdp_3->sizePolicy().hasHeightForWidth());
        labelMdp_3->setSizePolicy(sizePolicy);
        labelMdp_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(labelMdp_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditMdp_3 = new QLineEdit(empRespCompteDialog);
        lineEditMdp_3->setObjectName("lineEditMdp_3");
        sizePolicy1.setHeightForWidth(lineEditMdp_3->sizePolicy().hasHeightForWidth());
        lineEditMdp_3->setSizePolicy(sizePolicy1);
        lineEditMdp_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(lineEditMdp_3, 0, Qt::AlignVCenter);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_9 = new QLabel(empRespCompteDialog);
        label_9->setObjectName("label_9");

        horizontalLayout_19->addWidget(label_9);

        pushButton_Modifier_3 = new QPushButton(empRespCompteDialog);
        pushButton_Modifier_3->setObjectName("pushButton_Modifier_3");

        horizontalLayout_19->addWidget(pushButton_Modifier_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_10 = new QLabel(empRespCompteDialog);
        label_10->setObjectName("label_10");

        horizontalLayout_19->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_19);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(empRespCompteDialog);

        QMetaObject::connectSlotsByName(empRespCompteDialog);
    } // setupUi

    void retranslateUi(QDialog *empRespCompteDialog)
    {
        empRespCompteDialog->setWindowTitle(QCoreApplication::translate("empRespCompteDialog", "Dialog", nullptr));
        logo->setText(QString());
        pushButtonListeEmployes->setText(QCoreApplication::translate("empRespCompteDialog", "Liste des Employ\303\251s", nullptr));
        pushButton_AfficherChambres->setText(QCoreApplication::translate("empRespCompteDialog", "Liste des chambres", nullptr));
        pushButton_ListeClients->setText(QCoreApplication::translate("empRespCompteDialog", "Liste des Clients", nullptr));
        pushButton_Stats->setText(QCoreApplication::translate("empRespCompteDialog", "Statistiques de l'hotel", nullptr));
        accueil->setText(QCoreApplication::translate("empRespCompteDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("empRespCompteDialog", "Compte", nullptr));
        radioButtonAutorisePasModif_3->setText(QCoreApplication::translate("empRespCompteDialog", "Ne pas autoriser les modifications", nullptr));
        radioButtonAutoriseModif_3->setText(QCoreApplication::translate("empRespCompteDialog", "Autoriser les modifications", nullptr));
        labelNom_3->setText(QCoreApplication::translate("empRespCompteDialog", "Nom", nullptr));
        lineEditNom_3->setText(QCoreApplication::translate("empRespCompteDialog", "monNom", nullptr));
        labelPrenom_3->setText(QCoreApplication::translate("empRespCompteDialog", "Pr\303\251nom", nullptr));
        lineEditPrenom_3->setText(QCoreApplication::translate("empRespCompteDialog", "monPrenom", nullptr));
        labelMail_3->setText(QCoreApplication::translate("empRespCompteDialog", "Mail :", nullptr));
        lineEditMail_3->setText(QCoreApplication::translate("empRespCompteDialog", "mon@mail.com", nullptr));
        labelMdp_3->setText(QCoreApplication::translate("empRespCompteDialog", "Mot de passe :", nullptr));
        lineEditMdp_3->setText(QCoreApplication::translate("empRespCompteDialog", "monmotdepasse", nullptr));
        label_9->setText(QString());
        pushButton_Modifier_3->setText(QCoreApplication::translate("empRespCompteDialog", "Modifier", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class empRespCompteDialog: public Ui_empRespCompteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPRESPCOMPTEDIALOG_H
