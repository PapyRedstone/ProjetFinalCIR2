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
    QPushButton *Utilisateur;
    QHBoxLayout *TITRE;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *PROPOSITION;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *AJOUTPROPOSITION;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *AjoutQuestion;
    QPushButton *pushButton;
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
        tableWidget = new QTableWidget(Proposition);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAcceptDrops(false);
        tableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget->setShowGrid(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(25);
        tableWidget->verticalHeader()->setMinimumSectionSize(25);

        PROPOSITION->addWidget(tableWidget);


        verticalLayout->addLayout(PROPOSITION);

        verticalSpacer_3 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        AJOUTPROPOSITION = new QHBoxLayout();
        AJOUTPROPOSITION->setObjectName(QStringLiteral("AJOUTPROPOSITION"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTPROPOSITION->addItem(horizontalSpacer_2);

        label_2 = new QLabel(Proposition);
        label_2->setObjectName(QStringLiteral("label_2"));

        AJOUTPROPOSITION->addWidget(label_2);

        AjoutQuestion = new QLineEdit(Proposition);
        AjoutQuestion->setObjectName(QStringLiteral("AjoutQuestion"));

        AJOUTPROPOSITION->addWidget(AjoutQuestion);

        pushButton = new QPushButton(Proposition);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        AJOUTPROPOSITION->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

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
        Utilisateur->setText(QApplication::translate("Proposition", "Utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Proposition", "Gestion des Question :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Proposition", "Note", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Proposition", "Activer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Proposition", "Modifier", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Proposition", "Supprimer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Proposition", "CIR,CSI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Proposition", "RENNAIS,BRESTOIS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Proposition", "TATOU,PIKACHU", Q_NULLPTR));
        label_2->setText(QApplication::translate("Proposition", "Ajouter une question :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Proposition", "Ajout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Proposition: public Ui_Proposition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSITION_H
