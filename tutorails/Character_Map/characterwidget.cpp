#include "characterwidget.h"

CharacterWidget::CharacterWidget(QWidget *parent) : QWidget(parent)
{
    squareSize=24;
    columns=16;
    lastKey=-1;
    setMouseTracking(true);
}
void CharacterWidget::updateFont(const QFont &font)
{
    displayFont.setFamily(font.family());
    squareSize= qMax(24,QFontMetrics(displayFont).xHeight()*3);
    adjustSize();
    update();
}

QSize CharacterWidget::sizeHint()const
{
    return QSize(columns*squareSize,(65536/columns)*squareSize);
}

void CharacterWidget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.fillRect(e->rect(),QBrush(Qt::white));
    painter.setFont(displayFont);

    QRect redrawRect =e->rect();
    int beginRow=redrawRect.top()/squareSize;
    int endRow =redrawRect.bottom()/squareSize;
    int beginColum = redrawRect.left()/squareSize;
    int endColumn = redrawRect.right()/squareSize;

    painter.setPen(QPen(Qt::gray));
    for (int row = beginRow; row <= endRow; ++row)
    {
        for (int column = beginColumn; column <= endColumn; ++column)
        {
            painter.drawRect(column*squareSize, row*squareSize, squareSize, squareSize);
        }
    }

    QFontMetrics fontMetrics(displayFont);
    painter.setPen(QPen(Qt::black));
    for(int row=beginRow;row<=endRow;++row)
    {
        for(int column =beginColumn;column<=endColumn;++column)
        {
            int key=row*columns+column;
            painter.setClipRect(column*quareSize,row*squareSize,squareSize,squareSize );

            if(key==lastKey )
             painter.fillRect(column*squareSize+1,row*squareSize + 1,squareSize, squareSize, QBrush(Qt::red)  );

            painter.drawText(column*squareSize+(squareSize/2)-fontMetrics.width(QChar(key))/2,
                             row*squareSize + 4 + fontMetrics.ascent(),
                                                          QString(QChar(key)));


        }
    }

}


void CharacterWidget::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        lastKey=(e->y()/squareSize)*columns+e->x()/squareSize;
        if(QChar(lastKey).category()!=QChar::Other_NotAssigned)
        {
            emit characterSelected(QString(Qchar(lastKey)));
            update();
        }
        else
        {
            QWidget::mousePressEvent(e);
        }



    }
}


void CharacterWidget::mouseMoveEvent(QMouseEvent *e)
{
    QPoint widgetPosition = mapFromGlobal(e->globalPos());
    uint key=(widgetPosition.y()/squareSize)*columns+widgetPosition.x()/squareSize;

    QString text=QString::fromLatin1("<p>character:<span style=\"font-size: 24pt; font-family: %1\">").arg(displayFont.family())
            + QChar(key)
            + QString::fromLatin1("</span><p>Value: 0x")
            + QString::number(key, 16);

    QToolTip::showText(e->globalPos(),text,this);



}



