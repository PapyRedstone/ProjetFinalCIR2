/********************************************************************************
** Form generated from reading UI file 'question.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTION_H
#define UI_QUESTION_H

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

class Ui_Question
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
    QHBoxLayout *QUESTION;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *AJOUTQUESTION;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *AjoutQuestion;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Question)
    {
        if (Question->objectName().isEmpty())
            Question->setObjectName(QStringLiteral("Question"));
        Question->resize(881, 722);
        verticalLayout = new QVBoxLayout(Question);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Header = new QHBoxLayout();
        Header->setObjectName(QStringLiteral("Header"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer_4);

        Logo = new QLabel(Question);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        Header->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Header->addItem(horizontalSpacer);

        Utilisateur = new QPushButton(Question);
        Utilisateur->setObjectName(QStringLiteral("Utilisateur"));

        Header->addWidget(Utilisateur);


        verticalLayout->addLayout(Header);

        TITRE = new QHBoxLayout();
        TITRE->setObjectName(QStringLiteral("TITRE"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_7);

        label = new QLabel(Question);
        label->setObjectName(QStringLiteral("label"));

        TITRE->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TITRE->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(TITRE);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QUESTION = new QHBoxLayout();
        QUESTION->setObjectName(QStringLiteral("QUESTION"));
        tableWidget = new QTableWidget(Question);
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

        QUESTION->addWidget(tableWidget);


        verticalLayout->addLayout(QUESTION);

        verticalSpacer_3 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        AJOUTQUESTION = new QHBoxLayout();
        AJOUTQUESTION->setObjectName(QStringLiteral("AJOUTQUESTION"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTQUESTION->addItem(horizontalSpacer_2);

        label_2 = new QLabel(Question);
        label_2->setObjectName(QStringLiteral("label_2"));

        AJOUTQUESTION->addWidget(label_2);

        AjoutQuestion = new QLineEdit(Question);
        AjoutQuestion->setObjectName(QStringLiteral("AjoutQuestion"));

        AJOUTQUESTION->addWidget(AjoutQuestion);

        pushButton = new QPushButton(Question);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        AJOUTQUESTION->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AJOUTQUESTION->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(AJOUTQUESTION);

        verticalSpacer_2 = new QSpacerItem(20, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Question);

        QMetaObject::connectSlotsByName(Question);
    } // setupUi

    void retranslateUi(QDialog *Question)
    {
        Question->setWindowTitle(QApplication::translate("Question", "Dialog", Q_NULLPTR));
        Logo->setText(QString());
        Utilisateur->setText(QApplication::translate("Question", "Utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Question", "Gestion des Question :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Question", "Activer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Question", "Modifier", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Question", "Supprimer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Question", "CIR,CSI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Question", "RENNAIS,BRESTOIS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Question", "TATOU,PIKACHU", Q_NULLPTR));
        label_2->setText(QApplication::translate("Question", "Ajouter une question :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Question", "Ajout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Question: public Ui_Question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTION_H