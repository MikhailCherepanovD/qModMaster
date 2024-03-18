/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../QModMaster/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[35];
    char stringdata0[490];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "resetCounters"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "showSettingsModbusRTU"
QT_MOC_LITERAL(4, 48, 21), // "showSettingsModbusTCP"
QT_MOC_LITERAL(5, 70, 12), // "showSettings"
QT_MOC_LITERAL(6, 83, 14), // "showBusMonitor"
QT_MOC_LITERAL(7, 98, 9), // "showTools"
QT_MOC_LITERAL(8, 108, 17), // "changedModbusMode"
QT_MOC_LITERAL(9, 126, 9), // "currIndex"
QT_MOC_LITERAL(10, 136, 19), // "changedFunctionCode"
QT_MOC_LITERAL(11, 156, 11), // "changedFrmt"
QT_MOC_LITERAL(12, 168, 14), // "changedDecSign"
QT_MOC_LITERAL(13, 183, 5), // "value"
QT_MOC_LITERAL(14, 189, 20), // "changedStartAddrBase"
QT_MOC_LITERAL(15, 210, 15), // "changedScanRate"
QT_MOC_LITERAL(16, 226, 14), // "changedConnect"
QT_MOC_LITERAL(17, 241, 19), // "changedStartAddress"
QT_MOC_LITERAL(18, 261, 15), // "changedNoOfRegs"
QT_MOC_LITERAL(19, 277, 14), // "changedSlaveID"
QT_MOC_LITERAL(20, 292, 21), // "changedFloatPrecision"
QT_MOC_LITERAL(21, 314, 9), // "precision"
QT_MOC_LITERAL(22, 324, 16), // "changedEndianess"
QT_MOC_LITERAL(23, 341, 6), // "endian"
QT_MOC_LITERAL(24, 348, 8), // "addItems"
QT_MOC_LITERAL(25, 357, 10), // "clearItems"
QT_MOC_LITERAL(26, 368, 11), // "openLogFile"
QT_MOC_LITERAL(27, 380, 15), // "modbusScanCycle"
QT_MOC_LITERAL(28, 396, 13), // "modbusRequest"
QT_MOC_LITERAL(29, 410, 11), // "refreshView"
QT_MOC_LITERAL(30, 422, 14), // "changeLanguage"
QT_MOC_LITERAL(31, 437, 16), // "openModbusManual"
QT_MOC_LITERAL(32, 454, 11), // "loadSession"
QT_MOC_LITERAL(33, 466, 11), // "saveSession"
QT_MOC_LITERAL(34, 478, 11) // "showHeaders"

    },
    "MainWindow\0resetCounters\0\0"
    "showSettingsModbusRTU\0showSettingsModbusTCP\0"
    "showSettings\0showBusMonitor\0showTools\0"
    "changedModbusMode\0currIndex\0"
    "changedFunctionCode\0changedFrmt\0"
    "changedDecSign\0value\0changedStartAddrBase\0"
    "changedScanRate\0changedConnect\0"
    "changedStartAddress\0changedNoOfRegs\0"
    "changedSlaveID\0changedFloatPrecision\0"
    "precision\0changedEndianess\0endian\0"
    "addItems\0clearItems\0openLogFile\0"
    "modbusScanCycle\0modbusRequest\0refreshView\0"
    "changeLanguage\0openModbusManual\0"
    "loadSession\0saveSession\0showHeaders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  160,    2, 0x08 /* Private */,
       4,    0,  161,    2, 0x08 /* Private */,
       5,    0,  162,    2, 0x08 /* Private */,
       6,    0,  163,    2, 0x08 /* Private */,
       7,    0,  164,    2, 0x08 /* Private */,
       8,    1,  165,    2, 0x08 /* Private */,
      10,    1,  168,    2, 0x08 /* Private */,
      11,    1,  171,    2, 0x08 /* Private */,
      12,    1,  174,    2, 0x08 /* Private */,
      14,    1,  177,    2, 0x08 /* Private */,
      15,    1,  180,    2, 0x08 /* Private */,
      16,    1,  183,    2, 0x08 /* Private */,
      17,    1,  186,    2, 0x08 /* Private */,
      18,    1,  189,    2, 0x08 /* Private */,
      19,    1,  192,    2, 0x08 /* Private */,
      20,    1,  195,    2, 0x08 /* Private */,
      22,    1,  198,    2, 0x08 /* Private */,
      24,    0,  201,    2, 0x08 /* Private */,
      25,    0,  202,    2, 0x08 /* Private */,
      26,    0,  203,    2, 0x08 /* Private */,
      27,    1,  204,    2, 0x08 /* Private */,
      28,    0,  207,    2, 0x08 /* Private */,
      29,    0,  208,    2, 0x08 /* Private */,
      30,    0,  209,    2, 0x08 /* Private */,
      31,    0,  210,    2, 0x08 /* Private */,
      32,    0,  211,    2, 0x08 /* Private */,
      33,    0,  212,    2, 0x08 /* Private */,
      34,    1,  213,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetCounters(); break;
        case 1: _t->showSettingsModbusRTU(); break;
        case 2: _t->showSettingsModbusTCP(); break;
        case 3: _t->showSettings(); break;
        case 4: _t->showBusMonitor(); break;
        case 5: _t->showTools(); break;
        case 6: _t->changedModbusMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changedFunctionCode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changedFrmt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->changedDecSign((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->changedStartAddrBase((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->changedScanRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->changedConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->changedStartAddress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->changedNoOfRegs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->changedSlaveID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->changedFloatPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->changedEndianess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->addItems(); break;
        case 19: _t->clearItems(); break;
        case 20: _t->openLogFile(); break;
        case 21: _t->modbusScanCycle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->modbusRequest(); break;
        case 23: _t->refreshView(); break;
        case 24: _t->changeLanguage(); break;
        case 25: _t->openModbusManual(); break;
        case 26: _t->loadSession(); break;
        case 27: _t->saveSession(); break;
        case 28: _t->showHeaders((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::resetCounters)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::resetCounters()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
