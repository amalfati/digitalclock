#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QWidget>
#include<QTimerEvent>
#include<QLCDNumber>
#include<QTime>
#include<QEvent>
class digitalclock : public QWidget
{
    Q_OBJECT
public:
    explicit digitalclock(QWidget *parent = nullptr);

protected:
 void updatetime();
 void timerEvent(QTimerEvent *e)override;

     void createWidgets();
     void placeWidgets();
private:
QLCDNumber *hour;
QLCDNumber *minute;
QLCDNumber *second;
};
#endif // DIGITALCLOCK_H
