#include "closecurve.h"

CloseCurve::CloseCurve()
{
    name="CloseCurve";
}

//void CloseCurve::draw(QPainter &painter, qreal zoomRatio)
//{
//    painter.setPen(pen);
//    painter.setBrush(brush);
//    //qDebug()<<brush.color();
//    //painter.setBrush(Qt::red);

//    double left=minx;
//    double right=maxx;
//    double top=miny;
//    double bottom=maxy;

//    painter.translate((left+right)/2*zoomRatio, (top+bottom)/2*zoomRatio);
//    painter.rotate( Rotationangle );

//    CloseCurve *tmp=new CloseCurve;
//    tmp->points=points;
//    tmp->drag(QPointF(-(left+right)/2,-(top+bottom)/2));
//    tmp->zoom(zoomRatio*sx,zoomRatio*sy);

//    painter.drawPolygon(QPolygonF(tmp->points));
//    painter.rotate( -Rotationangle );
//    painter.translate(-((left+right)/2)*zoomRatio, -((top+bottom)/2)*zoomRatio);


//}
