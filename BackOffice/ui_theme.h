/********************************************************************************
** Form generated from reading UI file 'theme.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEME_H
#define UI_THEME_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Theme
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *Header;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Logo;
    QSpacerItem *horizontalSpacer;
    QPushButton *Utilisateur;
    QHBoxLayout *TITRE;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *THEME;
    QTableWidget *table;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *AJOUTTHEME;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *newTheme;
    QPushButton *addTheme;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Theme)
    {
        if (Theme->objectName().isEmpty())
            Theme->setObjectName(QStringLiteral("Theme"));
        Theme->resize(870, 677);
        verticalLayout = new QVBoxLayout(Theme);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Header = new QHBoxLayout();
        Header->setObjectName(QStringLiteral("Header"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer_4);

        Logo = new QLabel(Theme);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        Header->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer);

        Utilisateur = new QPushButton(Theme);
        Utilisateur->setObjectName(QStringLiteral("Utilisateur"));

        Header->addWidget(Utilisateur);


        verticalLayout->addLayout(Header);

        TITRE = new QHBoxLayout();
        TITRE->setObjectName(QStringLiteral("TITRE"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_7);

        label = new QLabel(Theme);
        label->setObjectName(QStringLiteral("label"));

        TITRE->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(TITRE);

        verticalSpacer = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        THEME = new QHBoxLayout();
        THEME->setObjectName(QStringLiteral("THEME"));
        table = new QTableWidget(Theme);
        if (table->columnCount() < 4)
            table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table->setObjectName(QStringLiteral("table"));
        table->setAcceptDrops(false);
        table->setDragDropMode(QAbstractItemView::NoDragDrop);
        table->setShowGrid(true);
        table->horizontalHeader()->setDefaultSectionSize(200);
        table->verticalHeader()->setDefaultSectionSize(25);
        table->verticalHeader()->setMinimumSectionSize(25);

        THEME->addWidget(table);


        verticalLayout->addLayout(THEME);

        verticalSpacer_3 = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        AJOUTTHEME = new QHBoxLayout();
        AJOUTTHEME->setObjectName(QStringLiteral("AJOUTTHEME"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTTHEME->addItem(horizontalSpacer_2);

        label_2 = new QLabel(Theme);
        label_2->setObjectName(QStringLiteral("label_2"));

        AJOUTTHEME->addWidget(label_2);

        newTheme = new QLineEdit(Theme);
        newTheme->setObjectName(QStringLiteral("newTheme"));

        AJOUTTHEME->addWidget(newTheme);

        addTheme = new QPushButton(Theme);
        addTheme->setObjectName(QStringLiteral("addTheme"));

        AJOUTTHEME->addWidget(addTheme);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTTHEME->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(AJOUTTHEME);

        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Theme);

        QMetaObject::connectSlotsByName(Theme);
    } // setupUi

    void retranslateUi(QDialog *Theme)
    {
        Theme->setWindowTitle(QApplication::translate("Theme", "Theme", Q_NULLPTR));
        Logo->setText(QString());
        Utilisateur->setText(QApplication::translate("Theme", "Utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Theme", "Gestion des Th\303\250mes :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Theme", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Theme", "Activer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Theme", "Modifier", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Theme", "Supprimer", Q_NULLPTR));
        label_2->setText(QApplication::translate("Theme", "Ajouter un th\303\250me", Q_NULLPTR));
        addTheme->setText(QApplication::translate("Theme", "Ajout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Theme: public Ui_Theme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEME_H
