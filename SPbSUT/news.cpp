#include "news.h"
#include "ui_news.h"

news::news(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::news)
{
    ui->setupUi(this);
}

news::~news()
{
    delete ui;
}

void news::on_news_1_customContextMenuRequested(const QPoint &pos)
{

}
