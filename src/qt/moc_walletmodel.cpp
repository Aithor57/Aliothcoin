/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletModel_t {
    QByteArrayData data[54];
    char stringdata0[774];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletModel_t qt_meta_stringdata_WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletModel"
QT_MOC_LITERAL(1, 12, 14), // "balanceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "CAmount"
QT_MOC_LITERAL(4, 36, 7), // "balance"
QT_MOC_LITERAL(5, 44, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(6, 63, 15), // "immatureBalance"
QT_MOC_LITERAL(7, 79, 15), // "zerocoinBalance"
QT_MOC_LITERAL(8, 95, 26), // "unconfirmedZerocoinBalance"
QT_MOC_LITERAL(9, 122, 23), // "immatureZerocoinBalance"
QT_MOC_LITERAL(10, 146, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(11, 163, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(12, 182, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(13, 203, 16), // "delegatedBalance"
QT_MOC_LITERAL(14, 220, 18), // "coldStakingBalance"
QT_MOC_LITERAL(15, 239, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(16, 263, 6), // "status"
QT_MOC_LITERAL(17, 270, 13), // "requireUnlock"
QT_MOC_LITERAL(18, 284, 28), // "AskPassphraseDialog::Context"
QT_MOC_LITERAL(19, 313, 7), // "context"
QT_MOC_LITERAL(20, 321, 7), // "message"
QT_MOC_LITERAL(21, 329, 5), // "title"
QT_MOC_LITERAL(22, 335, 5), // "style"
QT_MOC_LITERAL(23, 341, 9), // "coinsSent"
QT_MOC_LITERAL(24, 351, 8), // "CWallet*"
QT_MOC_LITERAL(25, 360, 6), // "wallet"
QT_MOC_LITERAL(26, 367, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(27, 386, 9), // "recipient"
QT_MOC_LITERAL(28, 396, 11), // "transaction"
QT_MOC_LITERAL(29, 408, 12), // "showProgress"
QT_MOC_LITERAL(30, 421, 9), // "nProgress"
QT_MOC_LITERAL(31, 431, 22), // "notifyWatchonlyChanged"
QT_MOC_LITERAL(32, 454, 14), // "fHaveWatchonly"
QT_MOC_LITERAL(33, 469, 21), // "notifyMultiSigChanged"
QT_MOC_LITERAL(34, 491, 13), // "fHaveMultiSig"
QT_MOC_LITERAL(35, 505, 27), // "notifyReceiveAddressChanged"
QT_MOC_LITERAL(36, 533, 12), // "updateStatus"
QT_MOC_LITERAL(37, 546, 17), // "updateTransaction"
QT_MOC_LITERAL(38, 564, 17), // "updateAddressBook"
QT_MOC_LITERAL(39, 582, 7), // "address"
QT_MOC_LITERAL(40, 590, 5), // "label"
QT_MOC_LITERAL(41, 596, 6), // "isMine"
QT_MOC_LITERAL(42, 603, 7), // "purpose"
QT_MOC_LITERAL(43, 611, 7), // "pubCoin"
QT_MOC_LITERAL(44, 619, 6), // "isUsed"
QT_MOC_LITERAL(45, 626, 19), // "updateWatchOnlyFlag"
QT_MOC_LITERAL(46, 646, 18), // "updateMultiSigFlag"
QT_MOC_LITERAL(47, 665, 18), // "pollBalanceChanged"
QT_MOC_LITERAL(48, 684, 23), // "updateAddressBookLabels"
QT_MOC_LITERAL(49, 708, 14), // "CTxDestination"
QT_MOC_LITERAL(50, 723, 11), // "std::string"
QT_MOC_LITERAL(51, 735, 7), // "strName"
QT_MOC_LITERAL(52, 743, 10), // "strPurpose"
QT_MOC_LITERAL(53, 754, 19) // "checkBalanceChanged"

    },
    "WalletModel\0balanceChanged\0\0CAmount\0"
    "balance\0unconfirmedBalance\0immatureBalance\0"
    "zerocoinBalance\0unconfirmedZerocoinBalance\0"
    "immatureZerocoinBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "delegatedBalance\0coldStakingBalance\0"
    "encryptionStatusChanged\0status\0"
    "requireUnlock\0AskPassphraseDialog::Context\0"
    "context\0message\0title\0style\0coinsSent\0"
    "CWallet*\0wallet\0SendCoinsRecipient\0"
    "recipient\0transaction\0showProgress\0"
    "nProgress\0notifyWatchonlyChanged\0"
    "fHaveWatchonly\0notifyMultiSigChanged\0"
    "fHaveMultiSig\0notifyReceiveAddressChanged\0"
    "updateStatus\0updateTransaction\0"
    "updateAddressBook\0address\0label\0isMine\0"
    "purpose\0pubCoin\0isUsed\0updateWatchOnlyFlag\0"
    "updateMultiSigFlag\0pollBalanceChanged\0"
    "updateAddressBookLabels\0CTxDestination\0"
    "std::string\0strName\0strPurpose\0"
    "checkBalanceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   11,  104,    2, 0x06 /* Public */,
      15,    1,  127,    2, 0x06 /* Public */,
      17,    1,  130,    2, 0x06 /* Public */,
      20,    3,  133,    2, 0x06 /* Public */,
      23,    3,  140,    2, 0x06 /* Public */,
      29,    2,  147,    2, 0x06 /* Public */,
      31,    1,  152,    2, 0x06 /* Public */,
      33,    1,  155,    2, 0x06 /* Public */,
      35,    0,  158,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    0,  159,    2, 0x0a /* Public */,
      37,    0,  160,    2, 0x0a /* Public */,
      38,    5,  161,    2, 0x0a /* Public */,
      38,    3,  172,    2, 0x0a /* Public */,
      45,    1,  179,    2, 0x0a /* Public */,
      46,    1,  182,    2, 0x0a /* Public */,
      47,    0,  185,    2, 0x0a /* Public */,
      48,    3,  186,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      53,    0,  193,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   21,   20,   22,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, QMetaType::QByteArray,   25,   27,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   21,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   39,   40,   41,   42,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   43,   44,   16,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 49, 0x80000000 | 50, 0x80000000 | 50,   39,   51,   52,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletModel *_t = static_cast<WalletModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->balanceChanged((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9])),(*reinterpret_cast< const CAmount(*)>(_a[10])),(*reinterpret_cast< const CAmount(*)>(_a[11]))); break;
        case 1: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->requireUnlock((*reinterpret_cast< AskPassphraseDialog::Context(*)>(_a[1]))); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->coinsSent((*reinterpret_cast< CWallet*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->notifyWatchonlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->notifyMultiSigChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->notifyReceiveAddressChanged(); break;
        case 9: _t->updateStatus(); break;
        case 10: _t->updateTransaction(); break;
        case 11: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 12: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->updateWatchOnlyFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updateMultiSigFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->pollBalanceChanged(); break;
        case 16: { bool _r = _t->updateAddressBookLabels((*reinterpret_cast< const CTxDestination(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->checkBalanceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletModel::*_t)(const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & , const CAmount & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::balanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::encryptionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(AskPassphraseDialog::Context );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::requireUnlock)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::message)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(CWallet * , SendCoinsRecipient , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::coinsSent)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::showProgress)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyWatchonlyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyMultiSigChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyReceiveAddressChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject WalletModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletModel.data,
      qt_meta_data_WalletModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void WalletModel::balanceChanged(const CAmount & _t1, const CAmount & _t2, const CAmount & _t3, const CAmount & _t4, const CAmount & _t5, const CAmount & _t6, const CAmount & _t7, const CAmount & _t8, const CAmount & _t9, const CAmount & _t10, const CAmount & _t11)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::encryptionStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletModel::requireUnlock(AskPassphraseDialog::Context _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletModel::coinsSent(CWallet * _t1, SendCoinsRecipient _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletModel::notifyWatchonlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletModel::notifyMultiSigChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletModel::notifyReceiveAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
