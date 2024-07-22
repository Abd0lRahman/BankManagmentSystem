QT = core network sql

CONFIG += c++17 cmdline

QDEP_DEPENDS += QCtrlSignals
#!load(qdep):error("Failed to load qdep feature! Run 'qdep.py prfgen --qmake $$QMAKE_QMAKE' to create it.")


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        AdminViewTransactionHistoryCommand.cpp \
        CheckUserDataCommand.cpp \
        Command.cpp \
        CreateUserCommand.cpp \
        DataBase.cpp \
        DataBaseExecutor.cpp \
        DeleteUserCommand.cpp \
        Encrypter.cpp \
        ForgetPasswordCommand.cpp \
        GetAccIDCommand.cpp \
        GetAccountIDAndBalance.cpp \
        GetBalanceCommand.cpp \
        Invoker.cpp \
        LogFile.cpp \
        LoginCommand.cpp \
        MIPFile.cpp \
        Server.cpp \
        ServerHandler.cpp \
        SignUpCommand.cpp \
        TransactionCommand.cpp \
        TransactionHistoryCommand.cpp \
        TransferCommand.cpp \
        UpdateUserDataCommand.cpp \
        ViewDataBaseCommand.cpp \
        email.cpp \
        main.cpp \
        smtp.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    AdminViewTransactionHistoryCommand.h \
    CheckUserDataCommand.h \
    Command.h \
    CreateUserCommand.h \
    DataBase.h \
    DataBaseExecutor.h \
    DeleteUserCommand.h \
    Encrypter.h \
    ForgetPasswordCommand.h \
    GetAccIDCommand.h \
    GetAccountIDAndBalance.h \
    GetBalanceCommand.h \
    Invoker.h \
    LogFile.h \
    LoginCommand.h \
    MIPFile.h \
    Server.h \
    ServerHandler.h \
    SignUpCommand.h \
    TransactionCommand.h \
    TransactionHistoryCommand.h \
    TransferCommand.h \
    UpdateUserDataCommand.h \
    ViewDataBaseCommand.h \
    email.h \
    mainHelper.h \
    smtp.h

win32:LIBS += -ladvapi32 #Service windows lib

SUBDIRS += \
    QtService/service.pro \
    QtService/service.pro \
    Service/service.pro
