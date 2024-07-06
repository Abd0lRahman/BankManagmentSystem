/****************************************************************************
** Meta object code from reading C++ file 'MainUserWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MainUserWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainUserWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainUserWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainUserWindowENDCLASS = QtMocHelpers::stringData(
    "MainUserWindow",
    "OnDisConnect",
    "",
    "OnErrorOccurred",
    "QAbstractSocket::SocketError",
    "error",
    "OnStateChange",
    "QAbstractSocket::SocketState",
    "state",
    "OnConnect",
    "on_PB_GetAccountNumber_clicked",
    "on_PB_ViewAccountBalance_clicked",
    "on_PB_ViewTransactionHistory_clicked",
    "on_PB_MakeTransaction_clicked",
    "on_PB_TransferAmount_clicked",
    "on_PB_Withdraw_clicked",
    "on_PB_Deposit_clicked",
    "on_PB_Transfer_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainUserWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    1,   87,    2, 0x0a,    2 /* Public */,
       6,    1,   90,    2, 0x0a,    4 /* Public */,
       9,    0,   93,    2, 0x0a,    6 /* Public */,
      10,    0,   94,    2, 0x08,    7 /* Private */,
      11,    0,   95,    2, 0x08,    8 /* Private */,
      12,    0,   96,    2, 0x08,    9 /* Private */,
      13,    0,   97,    2, 0x08,   10 /* Private */,
      14,    0,   98,    2, 0x08,   11 /* Private */,
      15,    0,   99,    2, 0x08,   12 /* Private */,
      16,    0,  100,    2, 0x08,   13 /* Private */,
      17,    0,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainUserWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainUserWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainUserWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainUserWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainUserWindow, std::true_type>,
        // method 'OnDisConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnErrorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'OnStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'OnConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_GetAccountNumber_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_ViewAccountBalance_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_ViewTransactionHistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_MakeTransaction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_TransferAmount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_Withdraw_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_Deposit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_Transfer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainUserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainUserWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OnDisConnect(); break;
        case 1: _t->OnErrorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 2: _t->OnStateChange((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 3: _t->OnConnect(); break;
        case 4: _t->on_PB_GetAccountNumber_clicked(); break;
        case 5: _t->on_PB_ViewAccountBalance_clicked(); break;
        case 6: _t->on_PB_ViewTransactionHistory_clicked(); break;
        case 7: _t->on_PB_MakeTransaction_clicked(); break;
        case 8: _t->on_PB_TransferAmount_clicked(); break;
        case 9: _t->on_PB_Withdraw_clicked(); break;
        case 10: _t->on_PB_Deposit_clicked(); break;
        case 11: _t->on_PB_Transfer_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainUserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainUserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainUserWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainUserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
