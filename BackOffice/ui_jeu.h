/********************************************************************************
** Form generated from reading UI file 'jeu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JEU_H
#define UI_JEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Jeu
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *Header;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Logo;
    QSpacerItem *horizontalSpacer;
    QPushButton *Question;
    QPushButton *Utilisateur;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *TEMPS;
    QLabel *label;
    QSlider *Temps;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *THEME;
    QLabel *label_3;
    QSlider *Theme;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *QUESTION;
    QLabel *label_2;
    QSlider *Question_2;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *PROPOSITION;
    QLabel *label_4;
    QSlider *Proposition;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Jeu)
    {
        if (Jeu->objectName().isEmpty())
            Jeu->setObjectName(QStringLiteral("Jeu"));
        Jeu->resize(900, 700);
        verticalLayout_5 = new QVBoxLayout(Jeu);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Header = new QHBoxLayout();
        Header->setObjectName(QStringLiteral("Header"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer_4);

        Logo = new QLabel(Jeu);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        Header->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer);

        Question = new QPushButton(Jeu);
        Question->setObjectName(QStringLiteral("Question"));

        Header->addWidget(Question);

        Utilisateur = new QPushButton(Jeu);
        Utilisateur->setObjectName(QStringLiteral("Utilisateur"));

        Header->addWidget(Utilisateur);


        verticalLayout_5->addLayout(Header);

        verticalSpacer = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        TEMPS = new QVBoxLayout();
        TEMPS->setObjectName(QStringLiteral("TEMPS"));
        label = new QLabel(Jeu);
        label->setObjectName(QStringLiteral("label"));

        TEMPS->addWidget(label);

        Temps = new QSlider(Jeu);
        Temps->setObjectName(QStringLiteral("Temps"));
        Temps->setOrientation(Qt::Horizontal);

        TEMPS->addWidget(Temps);


        horizontalLayout->addLayout(TEMPS);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        THEME = new QVBoxLayout();
        THEME->setObjectName(QStringLiteral("THEME"));
        label_3 = new QLabel(Jeu);
        label_3->setObjectName(QStringLiteral("label_3"));

        THEME->addWidget(label_3);

        Theme = new QSlider(Jeu);
        Theme->setObjectName(QStringLiteral("Theme"));
        Theme->setOrientation(Qt::Horizontal);

        THEME->addWidget(Theme);


        horizontalLayout->addLayout(THEME);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 122, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        QUESTION = new QVBoxLayout();
        QUESTION->setObjectName(QStringLiteral("QUESTION"));
        label_2 = new QLabel(Jeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        QUESTION->addWidget(label_2);

        Question_2 = new QSlider(Jeu);
        Question_2->setObjectName(QStringLiteral("Question_2"));
        Question_2->setOrientation(Qt::Horizontal);

        QUESTION->addWidget(Question_2);


        horizontalLayout_2->addLayout(QUESTION);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        PROPOSITION = new QVBoxLayout();
        PROPOSITION->setObjectName(QStringLiteral("PROPOSITION"));
        label_4 = new QLabel(Jeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        PROPOSITION->addWidget(label_4);

        Proposition = new QSlider(Jeu);
        Proposition->setObjectName(QStringLiteral("Proposition"));
        Proposition->setOrientation(Qt::Horizontal);

        PROPOSITION->addWidget(Proposition);


        horizontalLayout_2->addLayout(PROPOSITION);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        retranslateUi(Jeu);

        QMetaObject::connectSlotsByName(Jeu);
    } // setupUi

    void retranslateUi(QDialog *Jeu)
    {
        Jeu->setWindowTitle(QApplication::translate("Jeu", "Jeu", Q_NULLPTR));
        Logo->setText(QString());
        Question->setText(QApplication::translate("Jeu", "Question", Q_NULLPTR));
        Utilisateur->setText(QApplication::translate("Jeu", "Utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Jeu", "Temps par question :", Q_NULLPTR));
        label_3->setText(QApplication::translate("Jeu", "Nombre de theme par partie :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Jeu", "nombre de question par theme :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Jeu", "nombre de proposition par question :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Jeu: public Ui_Jeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEU_H
