#include "droparea.h"
#include "elementeditor.h"
#include "elementeditormimedata.h"
#include "hyperlink.h"
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QMimeData>
#include <QTest>

DropArea::DropArea()
{
    m_layout = new QHBoxLayout();
    m_link = new Hyperlink("(+) Insert Module");
    m_layout->addWidget(m_link, 1, Qt::AlignCenter);
    setLayout(m_layout);
    setMinimumWidth(120);
    setMinimumHeight(50);
    setMaximumHeight(50);
    setAcceptDrops(true);
    m_normalColor = QColor(palette().base().color().name()).lighter().name();
    m_highlightColor = QColor(palette().base().color().name()).lighter().lighter().name();
    setColor(m_normalColor);
    setAutoFillBackground(true);
}

void DropArea::setColor(QString name)
{
    QPalette pal = palette();
    pal.setColor(QPalette::Background, QColor(name));
    setPalette(pal);
}

void DropArea::dragEnterEvent(QDragEnterEvent *event)
{
    /*
    const ElementEditorMimeData *myData = qobject_cast<const ElementEditorMimeData *>(event->mimeData());
    if(myData)
    {
        event->accept();
    }
    else
        event->ignore();
        */
}

void DropArea::dragLeaveEvent(QDragLeaveEvent *event)
{
    //setColor(m_normalColor);
    //event->accept();
}

void DropArea::dragMoveEvent(QDragMoveEvent *event)
{
    /*
    const ElementEditorMimeData *myData = qobject_cast<const ElementEditorMimeData *>(event->mimeData());
    if(myData)
    {
        setColor(m_highlightColor);

        event->setDropAction(Qt::MoveAction);
        event->accept();
    }
    else
    {
        event->ignore();
    }
    */
}

void DropArea::dropEvent(QDropEvent *event)
{
    /*
    const ElementEditorMimeData *myData = qobject_cast<const ElementEditorMimeData *>(event->mimeData());
    if (myData)
    {
        ColumnEditor *ce = myData->getData();
        m_container->insertWidget(0, ce);
        ce->setContainer(m_container);
        ce->show();
        setColor(m_normalColor);
        event->setDropAction(Qt::MoveAction);
        event->accept();
    }
    else
    {
        event->ignore();
    }
    */
}