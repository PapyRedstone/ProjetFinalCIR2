/********************************************************************************
** Form generated from reading UI file 'proposition.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSITION_H
#define UI_PROPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Proposition
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *Header;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Logo;
    QSpacerItem *horizontalSpacer;
    QPushButton *theme;
    QPushButton *Utilisateur;
    QHBoxLayout *TITRE;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *PROPOSITION;
    QTableWidget *table;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *AJOUTPROPOSITION;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *proposition;
    QPushButton *ajouterProposition;
    QRadioButton *choix1;
    QRadioButton *choix2;
    QRadioButton *choix3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Proposition)
    {
        if (Proposition->objectName().isEmpty())
            Proposition->setObjectName(QStringLiteral("Proposition"));
        Proposition->resize(907, 705);
        verticalLayout = new QVBoxLayout(Proposition);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Header = new QHBoxLayout();
        Header->setObjectName(QStringLiteral("Header"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer_4);

        Logo = new QLabel(Proposition);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        Header->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer);

        theme = new QPushButton(Proposition);
        theme->setObjectName(QStringLiteral("theme"));

        Header->addWidget(theme);

        Utilisateur = new QPushButton(Proposition);
        Utilisateur->setObjectName(QStringLiteral("Utilisateur"));

        Header->addWidget(Utilisateur);


        verticalLayout->addLayout(Header);

        TITRE = new QHBoxLayout();
        TITRE->setObjectName(QStringLiteral("TITRE"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_7);

        label = new QLabel(Proposition);
        label->setObjectName(QStringLiteral("label"));

        TITRE->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(TITRE);

        verticalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        PROPOSITION = new QHBoxLayout();
        PROPOSITION->setObjectName(QStringLiteral("PROPOSITION"));
        table = new QTableWidget(Proposition);
        if (table->columnCount() < 3)
            table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table->setObjectName(QStringLiteral("table"));
        table->setAcceptDrops(false);
        table->setDragDropMode(QAbstractItemView::NoDragDrop);
        table->setShowGrid(true);
        table->horizontalHeader()->setDefaultSectionSize(200);
        table->horizontalHeader()->setMinimumSectionSize(49);
        table->verticalHeader()->setDefaultSectionSize(25);
        table->verticalHeader()->setMinimumSectionSize(25);

        PROPOSITION->addWidget(table);


        verticalLayout->addLayout(PROPOSITION);

        verticalSpacer_3 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        AJOUTPROPOSITION = new QHBoxLayout();
        AJOUTPROPOSITION->setObjectName(QStringLiteral("AJOUTPROPOSITION"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTPROPOSITION->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        label_2 = new QLabel(Proposition);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        proposition = new QLineEdit(Proposition);
        proposition->setObjectName(QStringLiteral("proposition"));

        horizontalLayout->addWidget(proposition);

        ajouterProposition = new QPushButton(Proposition);
        ajouterProposition->setObjectName(QStringLiteral("ajouterProposition"));

        horizontalLayout->addWidget(ajouterProposition);


        verticalLayout_2->addLayout(horizontalLayout);

        choix1 = new QRadioButton(Proposition);
        choix1->setObjectName(QStringLiteral("choix1"));

        verticalLayout_2->addWidget(choix1, 0, Qt::AlignHCenter);

        choix2 = new QRadioButton(Proposition);
        choix2->setObjectName(QStringLiteral("choix2"));
        choix2->setChecked(false);

        verticalLayout_2->addWidget(choix2, 0, Qt::AlignHCenter);

        choix3 = new QRadioButton(Proposition);
        choix3->setObjectName(QStringLiteral("choix3"));
        choix3->setChecked(true);

        verticalLayout_2->addWidget(choix3, 0, Qt::AlignHCenter);


        AJOUTPROPOSITION->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTPROPOSITION->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(AJOUTPROPOSITION);

        verticalSpacer_2 = new QSpacerItem(20, 79, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Proposition);

        QMetaObject::connectSlotsByName(Proposition);
    } // setupUi

    void retranslateUi(QDialog *Proposition)
    {
        Proposition->setWindowTitle(QApplication::translate("Proposition", "Dialog", Q_NULLPTR));
        Logo->setText(QString());
        theme->setText(QApplication::translate("Proposition", "Theme", Q_NULLPTR));
        Utilisateur->setText(QApplication::translate("Proposition", "Utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Proposition", "Gestion des Question :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Proposition", "Proposition", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Proposition", "Activer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Proposition", "Supprimer", Q_NULLPTR));
        label_2->setText(QApplication::translate("Proposition", "Ajouter une propsition :", Q_NULLPTR));
        ajouterProposition->setText(QApplication::translate("Proposition", "Ajout", Q_NULLPTR));
        choix1->setText(QString());
        choix2->setText(QString());
        choix3->setText(QApplication::translate("Proposition", "Les deux", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Proposition: public Ui_Proposition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSITION_H
