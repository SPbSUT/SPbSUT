#include "newsitem.h"
#include "ui_newsitem.h"

newsItem::newsItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newsItem)
{
    ui->setupUi(this);
}

newsItem::~newsItem()
{
    delete ui;
}
