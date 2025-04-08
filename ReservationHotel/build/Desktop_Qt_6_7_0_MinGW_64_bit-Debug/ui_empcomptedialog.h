/********************************************************************************
** Form generated from reading UI file 'empcomptedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPCOMPTEDIALOG_H
#define UI_EMPCOMPTEDIALOG_H

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

class Ui_EmpCompteDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_AfficherChambres;
    QLabel *logo;
    QPushButton *pushButton_ValiderResa;
    QLabel *label_filtre;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelMdp;
    QLineEdit *lineEditMdp;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *pushButton_Modifier;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMail;
    QLineEdit *lineEditMail;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonAutorisePasModif;
    QRadioButton *radioButtonAutoriseModif;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *accueil;
    QPushButton *account;

    void setupUi(QDialog *EmpCompteDialog)
    {
        if (EmpCompteDialog->objectName().isEmpty())
            EmpCompteDialog->setObjectName("EmpCompteDialog");
        EmpCompteDialog->resize(600, 431);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        EmpCompteDialog->setFont(font);
        gridLayout = new QGridLayout(EmpCompteDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        pushButton_AfficherChambres = new QPushButton(EmpCompteDialog);
        pushButton_AfficherChambres->setObjectName("pushButton_AfficherChambres");

        gridLayout_5->addWidget(pushButton_AfficherChambres, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        logo = new QLabel(EmpCompteDialog);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit.png")));
        logo->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(logo, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_ValiderResa = new QPushButton(EmpCompteDialog);
        pushButton_ValiderResa->setObjectName("pushButton_ValiderResa");
        pushButton_ValiderResa->setAutoFillBackground(false);

        gridLayout_5->addWidget(pushButton_ValiderResa, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_filtre = new QLabel(EmpCompteDialog);
        label_filtre->setObjectName("label_filtre");
        label_filtre->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_filtre, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelMdp = new QLabel(EmpCompteDialog);
        labelMdp->setObjectName("labelMdp");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelMdp->sizePolicy().hasHeightForWidth());
        labelMdp->setSizePolicy(sizePolicy);
        labelMdp->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelMdp, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditMdp = new QLineEdit(EmpCompteDialog);
        lineEditMdp->setObjectName("lineEditMdp");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditMdp->sizePolicy().hasHeightForWidth());
        lineEditMdp->setSizePolicy(sizePolicy1);
        lineEditMdp->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEditMdp, 0, Qt::AlignVCenter);


        gridLayout_3->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelPrenom = new QLabel(EmpCompteDialog);
        labelPrenom->setObjectName("labelPrenom");
        sizePolicy.setHeightForWidth(labelPrenom->sizePolicy().hasHeightForWidth());
        labelPrenom->setSizePolicy(sizePolicy);
        labelPrenom->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelPrenom, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditPrenom = new QLineEdit(EmpCompteDialog);
        lineEditPrenom->setObjectName("lineEditPrenom");
        sizePolicy1.setHeightForWidth(lineEditPrenom->sizePolicy().hasHeightForWidth());
        lineEditPrenom->setSizePolicy(sizePolicy1);
        lineEditPrenom->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEditPrenom, 0, Qt::AlignVCenter);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(EmpCompteDialog);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        pushButton_Modifier = new QPushButton(EmpCompteDialog);
        pushButton_Modifier->setObjectName("pushButton_Modifier");

        horizontalLayout->addWidget(pushButton_Modifier, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(EmpCompteDialog);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        gridLayout_3->addLayout(horizontalLayout, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelMail = new QLabel(EmpCompteDialog);
        labelMail->setObjectName("labelMail");
        sizePolicy.setHeightForWidth(labelMail->sizePolicy().hasHeightForWidth());
        labelMail->setSizePolicy(sizePolicy);
        labelMail->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelMail, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditMail = new QLineEdit(EmpCompteDialog);
        lineEditMail->setObjectName("lineEditMail");
        sizePolicy1.setHeightForWidth(lineEditMail->sizePolicy().hasHeightForWidth());
        lineEditMail->setSizePolicy(sizePolicy1);
        lineEditMail->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEditMail, 0, Qt::AlignVCenter);


        gridLayout_3->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        labelNom = new QLabel(EmpCompteDialog);
        labelNom->setObjectName("labelNom");
        sizePolicy.setHeightForWidth(labelNom->sizePolicy().hasHeightForWidth());
        labelNom->setSizePolicy(sizePolicy);
        labelNom->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelNom, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEditNom = new QLineEdit(EmpCompteDialog);
        lineEditNom->setObjectName("lineEditNom");
        sizePolicy1.setHeightForWidth(lineEditNom->sizePolicy().hasHeightForWidth());
        lineEditNom->setSizePolicy(sizePolicy1);
        lineEditNom->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lineEditNom, 0, Qt::AlignVCenter);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButtonAutorisePasModif = new QRadioButton(EmpCompteDialog);
        radioButtonAutorisePasModif->setObjectName("radioButtonAutorisePasModif");
        radioButtonAutorisePasModif->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonAutorisePasModif);

        radioButtonAutoriseModif = new QRadioButton(EmpCompteDialog);
        radioButtonAutoriseModif->setObjectName("radioButtonAutoriseModif");

        horizontalLayout_4->addWidget(radioButtonAutoriseModif);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        accueil = new QPushButton(EmpCompteDialog);
        accueil->setObjectName("accueil");

        horizontalLayout_5->addWidget(accueil, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        account = new QPushButton(EmpCompteDialog);
        account->setObjectName("account");

        horizontalLayout_5->addWidget(account, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(EmpCompteDialog);

        QMetaObject::connectSlotsByName(EmpCompteDialog);
    } // setupUi

    void retranslateUi(QDialog *EmpCompteDialog)
    {
        EmpCompteDialog->setWindowTitle(QCoreApplication::translate("EmpCompteDialog", "Dialog", nullptr));
        pushButton_AfficherChambres->setText(QCoreApplication::translate("EmpCompteDialog", "Liste des chambres", nullptr));
        logo->setText(QString());
        pushButton_ValiderResa->setText(QCoreApplication::translate("EmpCompteDialog", "R\303\251servations \303\240 valider", nullptr));
        label_filtre->setText(QCoreApplication::translate("EmpCompteDialog", "ACTIONS", nullptr));
        labelMdp->setText(QCoreApplication::translate("EmpCompteDialog", "Mot de passe :", nullptr));
        lineEditMdp->setText(QCoreApplication::translate("EmpCompteDialog", "monmotdepasse", nullptr));
        labelPrenom->setText(QCoreApplication::translate("EmpCompteDialog", "Pr\303\251nom", nullptr));
        lineEditPrenom->setText(QCoreApplication::translate("EmpCompteDialog", "monPrenom", nullptr));
        label_6->setText(QString());
        pushButton_Modifier->setText(QCoreApplication::translate("EmpCompteDialog", "Modifier", nullptr));
        label_5->setText(QString());
        labelMail->setText(QCoreApplication::translate("EmpCompteDialog", "Mail :", nullptr));
        lineEditMail->setText(QCoreApplication::translate("EmpCompteDialog", "mon@mail.com", nullptr));
        labelNom->setText(QCoreApplication::translate("EmpCompteDialog", "Nom", nullptr));
        lineEditNom->setText(QCoreApplication::translate("EmpCompteDialog", "monNom", nullptr));
        radioButtonAutorisePasModif->setText(QCoreApplication::translate("EmpCompteDialog", "Ne pas autoriser les modifications", nullptr));
        radioButtonAutoriseModif->setText(QCoreApplication::translate("EmpCompteDialog", "Autoriser les modifications", nullptr));
        accueil->setText(QCoreApplication::translate("EmpCompteDialog", "Accueil", nullptr));
        account->setText(QCoreApplication::translate("EmpCompteDialog", "Compte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmpCompteDialog: public Ui_EmpCompteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPCOMPTEDIALOG_H
