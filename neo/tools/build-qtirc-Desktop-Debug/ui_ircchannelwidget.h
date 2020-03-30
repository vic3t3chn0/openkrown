/********************************************************************************
** Form generated from reading UI file 'ircchannelwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRCCHANNELWIDGET_H
#define UI_IRCCHANNELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IRCChannelWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *chatTextEdit;
    QListView *usersListView;

    void setupUi(QWidget *IRCChannelWidget)
    {
        if (IRCChannelWidget->objectName().isEmpty())
            IRCChannelWidget->setObjectName(QString::fromUtf8("IRCChannelWidget"));
        IRCChannelWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(IRCChannelWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        chatTextEdit = new QTextEdit(IRCChannelWidget);
        chatTextEdit->setObjectName(QString::fromUtf8("chatTextEdit"));
        chatTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(chatTextEdit);

        usersListView = new QListView(IRCChannelWidget);
        usersListView->setObjectName(QString::fromUtf8("usersListView"));
        usersListView->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(usersListView);


        retranslateUi(IRCChannelWidget);

        QMetaObject::connectSlotsByName(IRCChannelWidget);
    } // setupUi

    void retranslateUi(QWidget *IRCChannelWidget)
    {
        IRCChannelWidget->setWindowTitle(QApplication::translate("IRCChannelWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IRCChannelWidget: public Ui_IRCChannelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRCCHANNELWIDGET_H
