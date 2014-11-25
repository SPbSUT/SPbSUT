#ifndef NEWSITEM_H
#define NEWSITEM_H

#include <QWidget>

namespace Ui {
class newsItem;
}

class newsItem : public QWidget
{
    Q_OBJECT

public:
    explicit newsItem(QWidget *parent = 0);
    ~newsItem();

private:
    Ui::newsItem *ui;
};

#endif // NEWSITEM_H
