/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *LOGO;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Logo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *TITRE;
    QSpacerItem *horizontalSpacer_2;
    QLabel *Titre;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *MENU;
    QPushButton *Question;
    QPushButton *Utilisateur;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(994, 708);
        verticalLayout = new QVBoxLayout(Menu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LOGO = new QHBoxLayout();
        LOGO->setObjectName(QStringLiteral("LOGO"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LOGO->addItem(horizontalSpacer_4);

        Logo = new QLabel(Menu);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        LOGO->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LOGO->addItem(horizontalSpacer);


        verticalLayout->addLayout(LOGO);

        verticalSpacer = new QSpacerItem(20, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        TITRE = new QHBoxLayout();
        TITRE->setObjectName(QStringLiteral("TITRE"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_2);

        Titre = new QLabel(Menu);
        Titre->setObjectName(QStringLiteral("Titre"));

        TITRE->addWidget(Titre);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(TITRE);

        verticalSpacer_2 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        MENU = new QHBoxLayout();
        MENU->setObjectName(QStringLiteral("MENU"));
        Question = new QPushButton(Menu);
        Question->setObjectName(QStringLiteral("Question"));

        MENU->addWidget(Question);

        Utilisateur = new QPushButton(Menu);
        Utilisateur->setObjectName(QStringLiteral("Utilisateur"));

        MENU->addWidget(Utilisateur);


        verticalLayout->addLayout(MENU);

        verticalSpacer_3 = new QSpacerItem(20, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", Q_NULLPTR));
        Logo->setText(QString());
        Titre->setText(QApplication::translate("Menu", "Administer :", Q_NULLPTR));
        Question->setText(QApplication::translate("Menu", "Theme", Q_NULLPTR));
        Utilisateur->setText(QApplication::translate("Menu", "Utilisateur", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
