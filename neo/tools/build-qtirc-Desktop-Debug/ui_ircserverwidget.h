/********************************************************************************
** Form generated from reading UI file 'ircserverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRCSERVERWIDGET_H
#define UI_IRCSERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IRCServerWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *serverTextEdit;

    void setupUi(QWidget *IRCServerWidget)
    {
        if (IRCServerWidget->objectName().isEmpty())
            IRCServerWidget->setObjectName(QString::fromUtf8("IRCServerWidget"));
        IRCServerWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(IRCServerWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        serverTextEdit = new QTextEdit(IRCServerWidget);
        serverTextEdit->setObjectName(QString::fromUtf8("serverTextEdit"));
        serverTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(serverTextEdit);


        retranslateUi(IRCServerWidget);

        QMetaObject::connectSlotsByName(IRCServerWidget);
    } // setupUi

    void retranslateUi(QWidget *IRCServerWidget)
    {
        IRCServerWidget->setWindowTitle(QApplication::translate("IRCServerWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IRCServerWidget: public Ui_IRCServerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRCSERVERWIDGET_H
