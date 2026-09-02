QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    endpanel.cpp \
    main.cpp \
    mainwindow.cpp \
    playerpanel.cpp \
    propdialog.cpp \
    resultdialog.cpp

HEADERS += \
    endpanel.h \
    mainwindow.h \
    playerpanel.h \
    propdialog.h \
    resultdialog.h

FORMS += \
    endpanel.ui \
    mainwindow.ui \
    playerpanel.ui \
    propdialog.ui \
    resultdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    游戏背景.qrc
