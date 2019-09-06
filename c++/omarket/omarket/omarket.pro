#-------------------------------------------------
#
# Project created by QtCreator 2019-09-04T00:23:59
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = omarket
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        caixaform.cpp \
        logindialog.cpp \
        main.cpp \
        mainframe.cpp \
        produtosdialog.cpp

HEADERS += \
        caixaform.h \
        logindialog.h \
        mainframe.h \
        produtosdialog.h

FORMS += \
        caixaform.ui \
        logindialog.ui \
        mainframe.ui \
        produtosdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    omarket.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../usuarios/release/ -lusuarios
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../usuarios/debug/ -lusuarios
else:unix: LIBS += -L$$OUT_PWD/../usuarios/ -lusuarios

INCLUDEPATH += $$PWD/../usuarios
DEPENDPATH += $$PWD/../usuarios

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../produtos/release/ -lprodutos
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../produtos/debug/ -lprodutos
else:unix: LIBS += -L$$OUT_PWD/../produtos/ -lprodutos

INCLUDEPATH += $$PWD/../produtos
DEPENDPATH += $$PWD/../produtos

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../recibos/release/ -lrecibos
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../recibos/debug/ -lrecibos
else:unix: LIBS += -L$$OUT_PWD/../recibos/ -lrecibos

INCLUDEPATH += $$PWD/../recibos
DEPENDPATH += $$PWD/../recibos
