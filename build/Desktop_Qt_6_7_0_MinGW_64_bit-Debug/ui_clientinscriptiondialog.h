/********************************************************************************
** Form generated from reading UI file 'clientinscriptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTINSCRIPTIONDIALOG_H
#define UI_CLIENTINSCRIPTIONDIALOG_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientInscriptionDialog
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QLabel *Inscription;
    QLabel *logo;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *ClientRad;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_val;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *InfoGenerales;
    QLabel *Nom;
    QLineEdit *TextFieldNom;
    QLabel *Prenom;
    QLineEdit *TextFieldPrenom;
    QLabel *Tel;
    QLineEdit *TextFieldTel;
    QLabel *Mail;
    QLineEdit *TextFieldMail;
    QLabel *MDP;
    QLineEdit *TextFieldMDP;
    QVBoxLayout *verticalLayout;
    QLabel *Adresse;
    QLabel *Num;
    QLineEdit *TextFieldNumero;
    QLabel *Rue;
    QLineEdit *TextFieldRue;
    QLabel *Ville;
    QLineEdit *TextFieldVille;
    QLabel *CodePostal;
    QLineEdit *TextFieldCodePostal;
    QLabel *Pays;
    QLineEdit *TextFieldPays;
    QWidget *widget_7;

    void setupUi(QDialog *ClientInscriptionDialog)
    {
        if (ClientInscriptionDialog->objectName().isEmpty())
            ClientInscriptionDialog->setObjectName("ClientInscriptionDialog");
        ClientInscriptionDialog->resize(360, 408);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        ClientInscriptionDialog->setFont(font);
        gridLayout_2 = new QGridLayout(ClientInscriptionDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_5 = new QWidget(ClientInscriptionDialog);
        widget_5->setObjectName("widget_5");
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName("gridLayout");
        Inscription = new QLabel(widget_5);
        Inscription->setObjectName("Inscription");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        Inscription->setFont(font1);
        Inscription->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Inscription, 0, 1, 1, 1);

        logo = new QLabel(widget_5);
        logo->setObjectName("logo");
        logo->setPixmap(QPixmap(QString::fromUtf8("logoProjet_petit_petit.png")));

        gridLayout->addWidget(logo, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(widget_5, 0, 0, 1, 1);

        widget_6 = new QWidget(ClientInscriptionDialog);
        widget_6->setObjectName("widget_6");
        widget_6->setEnabled(true);
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ClientRad = new QRadioButton(widget_6);
        ClientRad->setObjectName("ClientRad");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientRad->sizePolicy().hasHeightForWidth());
        ClientRad->setSizePolicy(sizePolicy);
        ClientRad->setFont(font);
        ClientRad->setCheckable(true);
        ClientRad->setChecked(true);

        horizontalLayout->addWidget(ClientRad);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_5->addLayout(verticalLayout_3, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_val = new QPushButton(widget_6);
        pushButton_val->setObjectName("pushButton_val");
        pushButton_val->setFont(font);

        horizontalLayout_4->addWidget(pushButton_val);


        verticalLayout_4->addLayout(horizontalLayout_4);


        gridLayout_5->addLayout(verticalLayout_4, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        InfoGenerales = new QLabel(widget_6);
        InfoGenerales->setObjectName("InfoGenerales");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setUnderline(true);
        InfoGenerales->setFont(font2);
        InfoGenerales->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(InfoGenerales);

        Nom = new QLabel(widget_6);
        Nom->setObjectName("Nom");
        Nom->setFont(font);

        verticalLayout_2->addWidget(Nom);

        TextFieldNom = new QLineEdit(widget_6);
        TextFieldNom->setObjectName("TextFieldNom");
        TextFieldNom->setFont(font);

        verticalLayout_2->addWidget(TextFieldNom);

        Prenom = new QLabel(widget_6);
        Prenom->setObjectName("Prenom");
        Prenom->setFont(font);

        verticalLayout_2->addWidget(Prenom);

        TextFieldPrenom = new QLineEdit(widget_6);
        TextFieldPrenom->setObjectName("TextFieldPrenom");
        TextFieldPrenom->setFont(font);

        verticalLayout_2->addWidget(TextFieldPrenom);

        Tel = new QLabel(widget_6);
        Tel->setObjectName("Tel");
        Tel->setFont(font);

        verticalLayout_2->addWidget(Tel);

        TextFieldTel = new QLineEdit(widget_6);
        TextFieldTel->setObjectName("TextFieldTel");
        TextFieldTel->setFont(font);

        verticalLayout_2->addWidget(TextFieldTel);

        Mail = new QLabel(widget_6);
        Mail->setObjectName("Mail");
        Mail->setFont(font);

        verticalLayout_2->addWidget(Mail);

        TextFieldMail = new QLineEdit(widget_6);
        TextFieldMail->setObjectName("TextFieldMail");
        TextFieldMail->setFont(font);

        verticalLayout_2->addWidget(TextFieldMail);

        MDP = new QLabel(widget_6);
        MDP->setObjectName("MDP");
        MDP->setFont(font);

        verticalLayout_2->addWidget(MDP);

        TextFieldMDP = new QLineEdit(widget_6);
        TextFieldMDP->setObjectName("TextFieldMDP");
        TextFieldMDP->setFont(font);

        verticalLayout_2->addWidget(TextFieldMDP);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        Adresse = new QLabel(widget_6);
        Adresse->setObjectName("Adresse");
        Adresse->setFont(font2);
        Adresse->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Adresse);

        Num = new QLabel(widget_6);
        Num->setObjectName("Num");
        Num->setFont(font);

        verticalLayout->addWidget(Num);

        TextFieldNumero = new QLineEdit(widget_6);
        TextFieldNumero->setObjectName("TextFieldNumero");
        TextFieldNumero->setFont(font);

        verticalLayout->addWidget(TextFieldNumero);

        Rue = new QLabel(widget_6);
        Rue->setObjectName("Rue");
        Rue->setFont(font);

        verticalLayout->addWidget(Rue);

        TextFieldRue = new QLineEdit(widget_6);
        TextFieldRue->setObjectName("TextFieldRue");
        TextFieldRue->setFont(font);

        verticalLayout->addWidget(TextFieldRue);

        Ville = new QLabel(widget_6);
        Ville->setObjectName("Ville");
        Ville->setFont(font);

        verticalLayout->addWidget(Ville);

        TextFieldVille = new QLineEdit(widget_6);
        TextFieldVille->setObjectName("TextFieldVille");
        TextFieldVille->setFont(font);

        verticalLayout->addWidget(TextFieldVille);

        CodePostal = new QLabel(widget_6);
        CodePostal->setObjectName("CodePostal");
        CodePostal->setFont(font);

        verticalLayout->addWidget(CodePostal);

        TextFieldCodePostal = new QLineEdit(widget_6);
        TextFieldCodePostal->setObjectName("TextFieldCodePostal");
        TextFieldCodePostal->setFont(font);

        verticalLayout->addWidget(TextFieldCodePostal);

        Pays = new QLabel(widget_6);
        Pays->setObjectName("Pays");
        Pays->setFont(font);

        verticalLayout->addWidget(Pays);

        TextFieldPays = new QLineEdit(widget_6);
        TextFieldPays->setObjectName("TextFieldPays");
        TextFieldPays->setFont(font);

        verticalLayout->addWidget(TextFieldPays);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_6, 1, 0, 1, 1);

        widget_7 = new QWidget(ClientInscriptionDialog);
        widget_7->setObjectName("widget_7");

        gridLayout_2->addWidget(widget_7, 2, 0, 1, 1);

        QWidget::setTabOrder(TextFieldNom, TextFieldPrenom);
        QWidget::setTabOrder(TextFieldPrenom, TextFieldTel);
        QWidget::setTabOrder(TextFieldTel, TextFieldMail);
        QWidget::setTabOrder(TextFieldMail, TextFieldMDP);
        QWidget::setTabOrder(TextFieldMDP, TextFieldNumero);
        QWidget::setTabOrder(TextFieldNumero, TextFieldRue);
        QWidget::setTabOrder(TextFieldRue, TextFieldVille);
        QWidget::setTabOrder(TextFieldVille, TextFieldCodePostal);
        QWidget::setTabOrder(TextFieldCodePostal, TextFieldPays);
        QWidget::setTabOrder(TextFieldPays, ClientRad);
        QWidget::setTabOrder(ClientRad, pushButton_val);

        retranslateUi(ClientInscriptionDialog);

        QMetaObject::connectSlotsByName(ClientInscriptionDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientInscriptionDialog)
    {
        ClientInscriptionDialog->setWindowTitle(QCoreApplication::translate("ClientInscriptionDialog", "Dialog", nullptr));
        Inscription->setText(QCoreApplication::translate("ClientInscriptionDialog", "INSCRIPTION CLIENT", nullptr));
        logo->setText(QString());
        ClientRad->setText(QCoreApplication::translate("ClientInscriptionDialog", "Client", nullptr));
        pushButton_val->setText(QCoreApplication::translate("ClientInscriptionDialog", "Valider", nullptr));
        InfoGenerales->setText(QCoreApplication::translate("ClientInscriptionDialog", "Infos g\303\251n\303\251rales :", nullptr));
        Nom->setText(QCoreApplication::translate("ClientInscriptionDialog", "Nom :", nullptr));
        Prenom->setText(QCoreApplication::translate("ClientInscriptionDialog", "Pr\303\251nom :", nullptr));
        Tel->setText(QCoreApplication::translate("ClientInscriptionDialog", "T\303\251l\303\251phone :", nullptr));
        Mail->setText(QCoreApplication::translate("ClientInscriptionDialog", "Mail :", nullptr));
        MDP->setText(QCoreApplication::translate("ClientInscriptionDialog", "Mot de passe :", nullptr));
        Adresse->setText(QCoreApplication::translate("ClientInscriptionDialog", "Adresse :", nullptr));
        Num->setText(QCoreApplication::translate("ClientInscriptionDialog", "Num\303\251ro :", nullptr));
        Rue->setText(QCoreApplication::translate("ClientInscriptionDialog", "Rue :", nullptr));
        Ville->setText(QCoreApplication::translate("ClientInscriptionDialog", "Ville :", nullptr));
        CodePostal->setText(QCoreApplication::translate("ClientInscriptionDialog", "Code Postal :", nullptr));
        Pays->setText(QCoreApplication::translate("ClientInscriptionDialog", "Pays :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientInscriptionDialog: public Ui_ClientInscriptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINSCRIPTIONDIALOG_H
