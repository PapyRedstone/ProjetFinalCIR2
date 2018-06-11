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
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *AJOUTTHEME;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *Ajoutheme;
    QPushButton *pushButton;
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
        tableWidget = new QTableWidget(Theme);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAcceptDrops(false);
        tableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget->setShowGrid(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(25);
        tableWidget->verticalHeader()->setMinimumSectionSize(25);

        THEME->addWidget(tableWidget);


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

        Ajoutheme = new QLineEdit(Theme);
        Ajoutheme->setObjectName(QStringLiteral("Ajoutheme"));

        AJOUTTHEME->addWidget(Ajoutheme);

        pushButton = new QPushButton(Theme);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        AJOUTTHEME->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTTHEME->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(AJOUTTHEME);

        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label->raise();
        Ajoutheme->raise();
        label_2->raise();
        label_2->raise();
        pushButton->raise();
        tableWidget->raise();

        retranslateUi(Theme);

        QMetaObject::connectSlotsByName(Theme);
    } // setupUi

    void retranslateUi(QDialog *Theme)
    {
        Theme->setWindowTitle(QApplication::translate("Theme", "Theme", Q_NULLPTR));
        Logo->setText(QString());
        Utilisateur->setText(QApplication::translate("Theme", "Utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Theme", "Gestion des Th\303\250mes :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Theme", "Activer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Theme", "Modifier", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Theme", "Supprimer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Theme", "Isen", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Theme", "Animaux", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Theme", "People", Q_NULLPTR));
        label_2->setText(QApplication::translate("Theme", "Ajouter un th\303\250me", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Theme", "Ajout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Theme: public Ui_Theme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEME_H
