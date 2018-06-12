/********************************************************************************
** Form generated from reading UI file 'utilisateur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTILISATEUR_H
#define UI_UTILISATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Utilisateur
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *Header;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Logo;
    QSpacerItem *horizontalSpacer;
    QPushButton *Question;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *newName;
    QPushButton *newNameButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *newPass;
    QPushButton *newPassButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *table;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *desactivateButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *Utilisateur)
    {
        if (Utilisateur->objectName().isEmpty())
            Utilisateur->setObjectName(QStringLiteral("Utilisateur"));
        Utilisateur->resize(888, 680);
        verticalLayout_4 = new QVBoxLayout(Utilisateur);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Header = new QHBoxLayout();
        Header->setObjectName(QStringLiteral("Header"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer_4);

        Logo = new QLabel(Utilisateur);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        Header->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer);

        Question = new QPushButton(Utilisateur);
        Question->setObjectName(QStringLiteral("Question"));

        Header->addWidget(Question);


        verticalLayout_4->addLayout(Header);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        label_3 = new QLabel(Utilisateur);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        listWidget = new QListWidget(Utilisateur);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_4->addWidget(listWidget);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Utilisateur);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        newName = new QLineEdit(Utilisateur);
        newName->setObjectName(QStringLiteral("newName"));

        verticalLayout->addWidget(newName);

        newNameButton = new QPushButton(Utilisateur);
        newNameButton->setObjectName(QStringLiteral("newNameButton"));

        verticalLayout->addWidget(newNameButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(Utilisateur);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        newPass = new QLineEdit(Utilisateur);
        newPass->setObjectName(QStringLiteral("newPass"));

        verticalLayout_2->addWidget(newPass);

        newPassButton = new QPushButton(Utilisateur);
        newPassButton->setObjectName(QStringLiteral("newPassButton"));

        verticalLayout_2->addWidget(newPassButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        table = new QTableWidget(Utilisateur);
        if (table->columnCount() < 3)
            table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table->setObjectName(QStringLiteral("table"));

        verticalLayout_3->addWidget(table);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        desactivateButton = new QPushButton(Utilisateur);
        desactivateButton->setObjectName(QStringLiteral("desactivateButton"));

        horizontalLayout->addWidget(desactivateButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        deleteButton = new QPushButton(Utilisateur);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(Utilisateur);

        QMetaObject::connectSlotsByName(Utilisateur);
    } // setupUi

    void retranslateUi(QDialog *Utilisateur)
    {
        Utilisateur->setWindowTitle(QApplication::translate("Utilisateur", "Utilisateur", Q_NULLPTR));
        Logo->setText(QString());
        Question->setText(QApplication::translate("Utilisateur", "Question", Q_NULLPTR));
        label_3->setText(QApplication::translate("Utilisateur", "Gestion des Utilisateurs :", Q_NULLPTR));
        label->setText(QApplication::translate("Utilisateur", "Changer le nom d'utilisateur :", Q_NULLPTR));
        newNameButton->setText(QApplication::translate("Utilisateur", "Changer le nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("Utilisateur", "Changer le mot de passe :", Q_NULLPTR));
        newPassButton->setText(QApplication::translate("Utilisateur", "Changer le mot de passe", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Utilisateur", "Points", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Utilisateur", "Seed", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Utilisateur", "Supprimer", Q_NULLPTR));
        desactivateButton->setText(QApplication::translate("Utilisateur", "D\303\251sactiver l'utilisateur", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("Utilisateur", "Supprimer l'utilisateur", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Utilisateur: public Ui_Utilisateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTILISATEUR_H
