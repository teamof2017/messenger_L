#ifndef LOGINPAGE_H
#define LOGINPAGE_H
#include"register.h"
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrlQuery>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include<QDebug>


namespace Ui {
class MainWindow;
}

class LoginPage : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LoginPage(QWidget *parent = 0);
    void login();
    ~LoginPage();
    void replyLog(QNetworkReply * reply);
    QString getToken();
    bool succeed;
private:

    QNetworkAccessManager *log;
    QString token;
    QNetworkRequest req;
    Ui::MainWindow *ui;
    Register *regist;
public slots:


private slots:
    void on_signup_clicked();
};



#endif // LOGINPAGE_H
