#ifndef THREAD_H
#define THREAD_H

#endif // THREAD_H

#include <QWidget>
#include <QThread>
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
class WorkerThread : public QThread
{
    Q_OBJECT
    void run() Q_DECL_OVERRIDE {
        QString result="asd";
        /* expensive or blocking operation  */
        emit resultReady(result);
    }
signals:
    void resultReady(const QString &s);
};
