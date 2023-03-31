QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    maindlg.cpp \
    testdialog.cpp \
    testshowform.cpp

HEADERS += \
    maindlg.h \
    testdialog.h \
    testshowform.h

FORMS += \
    maindlg.ui \
    testdialog.ui \
    testshowform.ui

INCLUDEPATH += \
    ../YtFrameLessWidgetLib

LIBS += \
    ../BIN/YtFrameLessWidgetLib.lib \

DESTDIR= ../BIN

# Default rules for deployment.
