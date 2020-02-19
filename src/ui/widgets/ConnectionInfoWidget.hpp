#pragma once

#include <QWidget>
#include "ui_ConnectionInfoWidget.h"
#include "core/handler/ConnectionHandler.hpp"

class ConnectionInfoWidget : public QWidget, private Ui::ConnectionInfoWidget
{
        Q_OBJECT

    public:
        explicit ConnectionInfoWidget(QWidget *parent = nullptr);
        void ShowConnectionDetails(const ConnectionIdentifier &_identifier);
        ~ConnectionInfoWidget();
    private slots:
        void on_connectBtn_clicked();
        void on_editBtn_clicked();
        void on_editJsonBtn_clicked();
        void on_pushButton_clicked();

    private:
        ConnectionIdentifier identifier;
};
