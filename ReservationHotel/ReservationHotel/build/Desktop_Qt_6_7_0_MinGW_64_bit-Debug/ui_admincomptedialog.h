/********************************************************************************
** Form generated from reading UI file 'admincomptedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCOMPTEDIALOG_H
#define UI_ADMINCOMPTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminCompteDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QPushButton *account;
    QLabel *nomUser;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_Retour;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLabel *label_mailAdmin;
    QPushButton *pushButton_modifInfos;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_consulterHotels;
    QPushButton *pushButton_consulterClients;
    QPushButton *pushButton_consulterAdmins;
    QPushButton *pushButton_AjoutAdmin;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QScrollArea *scrollArea_zoneCentrale;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ClientYM;
    QPushButton *pushButton_ClientDep;
    QPushButton *pushButton_Resa;
    QScrollArea *scrollArea_Graphe;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *AdminCompteDialog)
    {
        if (AdminCompteDialog->objectName().isEmpty())
            AdminCompteDialog->setObjectName("AdminCompteDialog");
        AdminCompteDialog->setWindowModality(Qt::WindowModal);
        AdminCompteDialog->resize(453, 302);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        AdminCompteDialog->setFont(font);
        verticalLayout = new QVBoxLayout(AdminCompteDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo = new QLabel(AdminCompteDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        account = new QPushButton(AdminCompteDialog);
        account->setObjectName("account");
        account->setFont(font);

        verticalLayout_5->addWidget(account);

        nomUser = new QLabel(AdminCompteDialog);
        nomUser->setObjectName("nomUser");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        nomUser->setFont(font1);
        nomUser->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(nomUser);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton_Retour = new QPushButton(AdminCompteDialog);
        pushButton_Retour->setObjectName("pushButton_Retour");
        pushButton_Retour->setFont(font1);

        verticalLayout_2->addWidget(pushButton_Retour);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label = new QLabel(AdminCompteDialog);
        label->setObjectName("label");
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_mailAdmin = new QLabel(AdminCompteDialog);
        label_mailAdmin->setObjectName("label_mailAdmin");
        label_mailAdmin->setFont(font1);

        verticalLayout_2->addWidget(label_mailAdmin);

        pushButton_modifInfos = new QPushButton(AdminCompteDialog);
        pushButton_modifInfos->setObjectName("pushButton_modifInfos");
        pushButton_modifInfos->setFont(font1);

        verticalLayout_2->addWidget(pushButton_modifInfos);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_consulterHotels = new QPushButton(AdminCompteDialog);
        pushButton_consulterHotels->setObjectName("pushButton_consulterHotels");
        pushButton_consulterHotels->setFont(font1);
        pushButton_consulterHotels->setAutoFillBackground(false);
        pushButton_consulterHotels->setFlat(false);

        verticalLayout_2->addWidget(pushButton_consulterHotels);

        pushButton_consulterClients = new QPushButton(AdminCompteDialog);
        pushButton_consulterClients->setObjectName("pushButton_consulterClients");
        pushButton_consulterClients->setFont(font1);

        verticalLayout_2->addWidget(pushButton_consulterClients);

        pushButton_consulterAdmins = new QPushButton(AdminCompteDialog);
        pushButton_consulterAdmins->setObjectName("pushButton_consulterAdmins");
        pushButton_consulterAdmins->setFont(font1);

        verticalLayout_2->addWidget(pushButton_consulterAdmins);

        pushButton_AjoutAdmin = new QPushButton(AdminCompteDialog);
        pushButton_AjoutAdmin->setObjectName("pushButton_AjoutAdmin");
        pushButton_AjoutAdmin->setFont(font1);

        verticalLayout_2->addWidget(pushButton_AjoutAdmin);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(AdminCompteDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        scrollArea_zoneCentrale = new QScrollArea(AdminCompteDialog);
        scrollArea_zoneCentrale->setObjectName("scrollArea_zoneCentrale");
        scrollArea_zoneCentrale->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 343, 183));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_ClientYM = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_ClientYM->setObjectName("pushButton_ClientYM");
        pushButton_ClientYM->setFont(font);

        horizontalLayout_2->addWidget(pushButton_ClientYM);

        pushButton_ClientDep = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_ClientDep->setObjectName("pushButton_ClientDep");
        pushButton_ClientDep->setFont(font);

        horizontalLayout_2->addWidget(pushButton_ClientDep);

        pushButton_Resa = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_Resa->setObjectName("pushButton_Resa");
        pushButton_Resa->setFont(font);

        horizontalLayout_2->addWidget(pushButton_Resa);


        verticalLayout_10->addLayout(horizontalLayout_2);

        scrollArea_Graphe = new QScrollArea(scrollAreaWidgetContents_2);
        scrollArea_Graphe->setObjectName("scrollArea_Graphe");
        scrollArea_Graphe->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 327, 142));
        scrollArea_Graphe->setWidget(scrollAreaWidgetContents);

        verticalLayout_10->addWidget(scrollArea_Graphe);


        verticalLayout_4->addLayout(verticalLayout_10);

        scrollArea_zoneCentrale->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_zoneCentrale);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);

        retranslateUi(AdminCompteDialog);

        pushButton_consulterHotels->setDefault(false);


        QMetaObject::connectSlotsByName(AdminCompteDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminCompteDialog)
    {
        AdminCompteDialog->setWindowTitle(QCoreApplication::translate("AdminCompteDialog", "Dialog", nullptr));
        logo->setText(QString());
        account->setText(QCoreApplication::translate("AdminCompteDialog", "Compte", nullptr));
        nomUser->setText(QCoreApplication::translate("AdminCompteDialog", "nom_user", nullptr));
        pushButton_Retour->setText(QCoreApplication::translate("AdminCompteDialog", "Retour", nullptr));
        label->setText(QCoreApplication::translate("AdminCompteDialog", "Informations", nullptr));
        label_mailAdmin->setText(QCoreApplication::translate("AdminCompteDialog", "mail admin", nullptr));
        pushButton_modifInfos->setText(QCoreApplication::translate("AdminCompteDialog", "Modifier les infos", nullptr));
        pushButton_consulterHotels->setText(QCoreApplication::translate("AdminCompteDialog", "Consulter les hotels", nullptr));
        pushButton_consulterClients->setText(QCoreApplication::translate("AdminCompteDialog", "Consulter les clients", nullptr));
        pushButton_consulterAdmins->setText(QCoreApplication::translate("AdminCompteDialog", "Consulter les admins", nullptr));
        pushButton_AjoutAdmin->setText(QCoreApplication::translate("AdminCompteDialog", "Ajouter un admin", nullptr));
        label_4->setText(QCoreApplication::translate("AdminCompteDialog", "ADMINISTRATEUR", nullptr));
        pushButton_ClientYM->setText(QCoreApplication::translate("AdminCompteDialog", "Clients par mois", nullptr));
        pushButton_ClientDep->setText(QCoreApplication::translate("AdminCompteDialog", "Clients par departement", nullptr));
        pushButton_Resa->setText(QCoreApplication::translate("AdminCompteDialog", "Reservation par mois", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminCompteDialog: public Ui_AdminCompteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCOMPTEDIALOG_H
