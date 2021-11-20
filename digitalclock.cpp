#include "digitalclock.h"
#include<QHBoxLayout>
#include<QTime>

digitalclock::digitalclock(QWidget *parent) : QWidget(parent)
{
 createWidgets();
 placeWidgets();
 startTimer(1);
}
void digitalclock::createWidgets(){
    hour=new QLCDNumber;
    hour->setDigitCount(2);
    minute=new QLCDNumber;
    minute->setDigitCount(2);
    second=new QLCDNumber;
    second->setDigitCount(2);

    updatetime();
}
void digitalclock::placeWidgets(){
    QLayout *layout = new QHBoxLayout;
    setLayout(layout);
    layout->addWidget(hour);
    layout->addWidget(minute);
    layout->addWidget(second);
    }
void digitalclock::updatetime(){
auto T= QTime::currentTime();
hour->display(T.hour());
minute->display(T.minute());
second->display(T.second());
}
void digitalclock::timerEvent(QTimerEvent *e) {
    updatetime();
}
