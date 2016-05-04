#include "review.h"
#include "ui_review.h"
#include <QGridLayout>
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>

Review::Review(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);

    QGridLayout *grid =new QGridLayout(this);
    grid->setVerticalSpacing(15);
    grid->setHorizontalSpacing(30);

    QLabel *title=new QLabel("Title:",this);
    grid->addWidget(title,0,0,1,1);
  //  title->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

    QLineEdit *edit1=new QLineEdit(this);
    grid->addWidget(edit1,0,1,1,1);

    QLabel *author=new QLabel("Author:",this);
    grid->addWidget(author,1,0,1,1);
 //   author->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    QLineEdit *edit2=new QLineEdit(this);
    grid->addWidget(edit2,1,1,1,1);

    QLabel *review=new QLabel("Review",this);
    grid->addWidget(review,2,0,1,1);
    review->setAlignment(Qt::AlignRight|Qt::AlignTop);

    QTextEdit *te=new QTextEdit(this);
    grid->addWidget(te,2,1,3,1);

    setLayout(grid);



}

Review::~Review()
{
    delete ui;
}
