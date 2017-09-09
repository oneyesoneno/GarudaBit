/********************************************************************************
** Form generated from reading UI file 'distributedivdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTEDIVDIALOG_H
#define UI_DISTRIBUTEDIVDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DistributeDivDialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *calcDividendsButton;
    QLabel *label;
    QLineEdit *totalDividend;
    QLabel *label_2;
    QPushButton *getShareholdsListButton;
    QDialogButtonBox *buttonBox;
    QDateTimeEdit *recordDate;
    QPushButton *exportButton;

    void setupUi(QDialog *DistributeDivDialog)
    {
        if (DistributeDivDialog->objectName().isEmpty())
            DistributeDivDialog->setObjectName(QString::fromUtf8("DistributeDivDialog"));
        DistributeDivDialog->setWindowModality(Qt::ApplicationModal);
        DistributeDivDialog->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DistributeDivDialog->sizePolicy().hasHeightForWidth());
        DistributeDivDialog->setSizePolicy(sizePolicy);
        DistributeDivDialog->setMinimumSize(QSize(400, 200));
        DistributeDivDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        DistributeDivDialog->setModal(true);
        gridLayout = new QGridLayout(DistributeDivDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(DistributeDivDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 3);

        calcDividendsButton = new QPushButton(DistributeDivDialog);
        calcDividendsButton->setObjectName(QString::fromUtf8("calcDividendsButton"));
        calcDividendsButton->setMinimumSize(QSize(141, 31));

        gridLayout->addWidget(calcDividendsButton, 1, 2, 1, 1);

        label = new QLabel(DistributeDivDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        totalDividend = new QLineEdit(DistributeDivDialog);
        totalDividend->setObjectName(QString::fromUtf8("totalDividend"));
        totalDividend->setMinimumSize(QSize(111, 31));
        totalDividend->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        totalDividend->setText(QString::fromUtf8(""));
        totalDividend->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(totalDividend, 1, 1, 1, 1);

        label_2 = new QLabel(DistributeDivDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        getShareholdsListButton = new QPushButton(DistributeDivDialog);
        getShareholdsListButton->setObjectName(QString::fromUtf8("getShareholdsListButton"));
        getShareholdsListButton->setMinimumSize(QSize(141, 31));

        gridLayout->addWidget(getShareholdsListButton, 0, 2, 1, 1);

        buttonBox = new QDialogButtonBox(DistributeDivDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 2, 1, 1);

        recordDate = new QDateTimeEdit(DistributeDivDialog);
        recordDate->setObjectName(QString::fromUtf8("recordDate"));
        recordDate->setMinimumSize(QSize(111, 31));
        recordDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        recordDate->setMinimumDateTime(QDateTime(QDate(2014, 3, 1), QTime(0, 0, 0)));
        recordDate->setCurrentSection(QDateTimeEdit::DaySection);
        recordDate->setCalendarPopup(true);

        gridLayout->addWidget(recordDate, 0, 1, 1, 1);

        exportButton = new QPushButton(DistributeDivDialog);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout->addWidget(exportButton, 4, 1, 1, 1);

        QWidget::setTabOrder(recordDate, getShareholdsListButton);
        QWidget::setTabOrder(getShareholdsListButton, totalDividend);
        QWidget::setTabOrder(totalDividend, calcDividendsButton);
        QWidget::setTabOrder(calcDividendsButton, tableView);
        QWidget::setTabOrder(tableView, buttonBox);

        retranslateUi(DistributeDivDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DistributeDivDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DistributeDivDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DistributeDivDialog);
    } // setupUi

    void retranslateUi(QDialog *DistributeDivDialog)
    {
        DistributeDivDialog->setWindowTitle(QApplication::translate("DistributeDivDialog", "Distribute Dividends", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DistributeDivDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        calcDividendsButton->setText(QApplication::translate("DistributeDivDialog", "Calculate Dividends", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DistributeDivDialog", "Number of peercoins to distribute to shareholders:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DistributeDivDialog", "Record date (local time):", 0, QApplication::UnicodeUTF8));
        getShareholdsListButton->setText(QApplication::translate("DistributeDivDialog", "Get List of Shareholders", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        recordDate->setToolTip(QApplication::translate("DistributeDivDialog", "Shareholders on record on this date will receive dividends.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exportButton->setText(QApplication::translate("DistributeDivDialog", "Export List ...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DistributeDivDialog: public Ui_DistributeDivDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTEDIVDIALOG_H
