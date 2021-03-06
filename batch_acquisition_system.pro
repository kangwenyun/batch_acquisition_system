#------------------------------------------------
#
# Project created by QtCreator 2017-02-09T16:09:42
#
#-------------------------------------------------

QT       += core gui widgets
QT +=  sql
UI_DIR=./UI

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = batch_acquisition_system
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    login.cpp \
    registered.cpp \
    getpasswd.cpp \
    changepasswd.cpp \
    authentication.cpp \
    registrationinfo.cpp \
    getlog.cpp \
    viewbatch.cpp \
    setpermissions.cpp \
    viewproline.cpp \
    serverservice.cpp \
    dbhelper.cpp \
    qres.cpp \
    quser.cpp \
    product.cpp \
    qbatch.cpp \
    saveproduct.cpp \
    loger.cpp \
    maintaindata.cpp \
    viewdata.cpp \
    addbatch.cpp \
    filedata.cpp \
    qtray.cpp \
    qpnglineedit.cpp \
    userinfo.cpp \
    changepermision.cpp \
    test.cpp \
    mainwds.cpp \
    mainwdsforonepage.cpp \
    mainwdsfortwopage.cpp \
    mainwdsforthreepage.cpp \
    mainwdsforfivepage.cpp \
    mainwdsforfourpage.cpp \
    iconhelper.cpp \
    frmmessagebox.cpp \
    frmmain.cpp \
    mainwindowsforall.cpp \
    work.cpp \
    viewallbatch.cpp \
    session.cpp \
    checkbatch.cpp \
    finishbatch.cpp

HEADERS  += \
    login.h \
    registered.h \
    getpasswd.h \
    changepasswd.h \
    authentication.h \
    registrationinfo.h \
    getlog.h \
    viewbatch.h \
    setpermissions.h \
    viewproline.h \
    session.h \
    serverservice.h \
    dbhelper.h \
    qres.h \
    quser.h \
    product.h \
    qbatch.h \
    qtray.h \
    saveproduct.h \
    loger.h \
    maintaindata.h \
    viewdata.h \
    addbatch.h \
    filedata.h \
    qpnglineedit.h \
    userinfo.h \
    changepermision.h \
    test.h \
    mainwds.h \
    mainwdsforonepage.h \
    mainwdsfortwopage.h \
    mainwdsforthreepage.h \
    mainwdsforfivepage.h \
    mainwdsforfourpage.h \
    iconhelper.h \
    myhelper.h \
    frmmessagebox.h \
    frmmain.h \
    mainwindowsforall.h \
    work.h \
    myproxystyle.h \
    viewallbatch.h \
    checkbatch.h \
    finishbatch.h

FORMS    += \
    login.ui \
    registered.ui \
    getpasswd.ui \
    changepasswd.ui \
    authentication.ui \
    registrationinfo.ui \
    getlog.ui \
    viewbatch.ui \
    setpermissions.ui \
    viewproline.ui \
    saveproduct.ui \
    maintaindata.ui \
    viewdata.ui \
    addbatch.ui \
    changepermision.ui \
    test.ui \
    mainwds.ui \
    mainwdsforonepage.ui \
    mainwdsfortwopage.ui \
    mainwdsforthreepage.ui \
    mainwdsforfivepage.ui \
    mainwdsforfourpage.ui \
    frmmessagebox.ui \
    frmmain.ui \
    mainwindowsforall.ui \
    viewallbatch.ui \
    checkbatch.ui \
    finishbatch.ui

RESOURCES += \
    rc.qrc \
    icons.qrc

