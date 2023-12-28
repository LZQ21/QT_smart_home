#ifndef FINDBACK_H
#define FINDBACK_H

#include <QPaintEvent>
#include <QWidget>

namespace Ui {
class FindBack;
}

class FindBack : public QWidget
{
    Q_OBJECT

public:
    explicit FindBack(QWidget *parent = nullptr);
    ~FindBack();
    //自定义槽
    void onFind();//从保存文件中，比对账号，获取密码
    void paintEvent(QPaintEvent *event) override;//绘图事件获取背景
    void closeEvent(QCloseEvent *event) override;
signals:
    void toBack();//返回信号
private:
    Ui::FindBack *ui;
};

#endif // FINDBACK_H
