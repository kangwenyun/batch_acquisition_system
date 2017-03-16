#ifndef WORK_H
#define WORK_H
#include<dbhelper.h>
#include<filedata.h>
#include <QThread>

class work : public QThread
{
    Q_OBJECT
public:
    explicit work(QObject *parent = 0);
    void run();
    void refresh();
private:
    FileData all;

signals:
  void log(QString s);
public slots:

};

#endif // WORK_H
