QT       += core gui network sql qml quick widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ClientGUIAbstract.cpp \
    Encrypter.cpp \
    LoginPage.cpp \
    MainAdminWin.cpp \
    MainUserWindow.cpp \
    client.cpp \
    main.cpp

HEADERS += \
    ClientGUIAbstract.h \
    Encrypter.h \
    LoginPage.h \
    MainAdminWin.h \
    MainUserWindow.h \
    client.h

FORMS += \
    ClientGUIAbstract.ui \
    LoginPage.ui \
    MainAdminWin.ui \
    MainUserWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    EmailVerification.qml

RESOURCES += \
    resources.qrc
