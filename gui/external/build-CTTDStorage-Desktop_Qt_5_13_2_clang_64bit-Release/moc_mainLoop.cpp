/****************************************************************************
** Meta object code from reading C++ file 'mainLoop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CTTDStorage/include/mainLoop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainLoop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMailListModel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMailListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMailListModel_t qt_meta_stringdata_QMailListModel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QMailListModel"

    },
    "QMailListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMailListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QMailListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QMailListModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_QMailListModel.data,
    qt_meta_data_QMailListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QMailListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMailListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMailListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QMailListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MainLoop_t {
    QByteArrayData data[144];
    char stringdata0[2120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainLoop_t qt_meta_stringdata_MainLoop = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainLoop"
QT_MOC_LITERAL(1, 9, 15), // "accountsChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "count"
QT_MOC_LITERAL(4, 32, 11), // "lockChanged"
QT_MOC_LITERAL(5, 44, 4), // "lock"
QT_MOC_LITERAL(6, 49, 20), // "connectedServChanged"
QT_MOC_LITERAL(7, 70, 19), // "serviceStateChanged"
QT_MOC_LITERAL(8, 90, 15), // "uiStatusChanged"
QT_MOC_LITERAL(9, 106, 9), // "newStatus"
QT_MOC_LITERAL(10, 116, 23), // "currAgentAccountChanged"
QT_MOC_LITERAL(11, 140, 23), // "currAgentPaymentChanged"
QT_MOC_LITERAL(12, 164, 22), // "currAgentTStartChanged"
QT_MOC_LITERAL(13, 187, 21), // "currAgentTStopChanged"
QT_MOC_LITERAL(14, 209, 20), // "currAgentFlowChanged"
QT_MOC_LITERAL(15, 230, 26), // "currAgentFlowRemainChanged"
QT_MOC_LITERAL(16, 257, 14), // "accountChanged"
QT_MOC_LITERAL(17, 272, 7), // "account"
QT_MOC_LITERAL(18, 280, 14), // "balanceChanged"
QT_MOC_LITERAL(19, 295, 7), // "balance"
QT_MOC_LITERAL(20, 303, 19), // "mainWinStateChanged"
QT_MOC_LITERAL(21, 323, 17), // "totalSpaceChanged"
QT_MOC_LITERAL(22, 341, 10), // "spaceTotal"
QT_MOC_LITERAL(23, 352, 16), // "usedSpaceChanged"
QT_MOC_LITERAL(24, 369, 9), // "spaceUsed"
QT_MOC_LITERAL(25, 379, 19), // "currentSpaceChanged"
QT_MOC_LITERAL(26, 399, 14), // "currSpaceIndex"
QT_MOC_LITERAL(27, 414, 21), // "currentFileIdxChanged"
QT_MOC_LITERAL(28, 436, 19), // "transmittingChanged"
QT_MOC_LITERAL(29, 456, 8), // "category"
QT_MOC_LITERAL(30, 465, 19), // "transmitRateChanged"
QT_MOC_LITERAL(31, 485, 4), // "rate"
QT_MOC_LITERAL(32, 490, 18), // "sharingCodeChanged"
QT_MOC_LITERAL(33, 509, 24), // "sharingInfoSharerChanged"
QT_MOC_LITERAL(34, 534, 26), // "sharingInfoFileNameChanged"
QT_MOC_LITERAL(35, 561, 27), // "sharingInfoStartTimeChanged"
QT_MOC_LITERAL(36, 589, 26), // "sharingInfoStopTimeChanged"
QT_MOC_LITERAL(37, 616, 23), // "sharingInfoPriceChanged"
QT_MOC_LITERAL(38, 640, 21), // "currentMailIdxChanged"
QT_MOC_LITERAL(39, 662, 13), // "showMsgBoxSig"
QT_MOC_LITERAL(40, 676, 3), // "msg"
QT_MOC_LITERAL(41, 680, 7), // "dlgType"
QT_MOC_LITERAL(42, 688, 14), // "closeMsgBoxSig"
QT_MOC_LITERAL(43, 703, 15), // "refreshFilesSig"
QT_MOC_LITERAL(44, 719, 5), // "space"
QT_MOC_LITERAL(45, 725, 15), // "showTranmitRate"
QT_MOC_LITERAL(46, 741, 19), // "refreshFilesSigConn"
QT_MOC_LITERAL(47, 761, 17), // "updateTranmitRate"
QT_MOC_LITERAL(48, 779, 11), // "setLanguage"
QT_MOC_LITERAL(49, 791, 8), // "language"
QT_MOC_LITERAL(50, 800, 11), // "getLanguage"
QT_MOC_LITERAL(51, 812, 10), // "showMsgBox"
QT_MOC_LITERAL(52, 823, 11), // "closeMsgBox"
QT_MOC_LITERAL(53, 835, 19), // "showAgentConnWindow"
QT_MOC_LITERAL(54, 855, 16), // "autoConnectAgent"
QT_MOC_LITERAL(55, 872, 2), // "ip"
QT_MOC_LITERAL(56, 875, 14), // "showMainWindow"
QT_MOC_LITERAL(57, 890, 12), // "initAccounts"
QT_MOC_LITERAL(58, 903, 10), // "newAccount"
QT_MOC_LITERAL(59, 914, 6), // "passwd"
QT_MOC_LITERAL(60, 921, 17), // "setDefaultAccount"
QT_MOC_LITERAL(61, 939, 15), // "copyToClipboard"
QT_MOC_LITERAL(62, 955, 4), // "text"
QT_MOC_LITERAL(63, 960, 12), // "getAgentInfo"
QT_MOC_LITERAL(64, 973, 14), // "verifyPassword"
QT_MOC_LITERAL(65, 988, 8), // "password"
QT_MOC_LITERAL(66, 997, 23), // "getAutoConnectAgentServ"
QT_MOC_LITERAL(67, 1021, 23), // "setAutoConnectAgentServ"
QT_MOC_LITERAL(68, 1045, 25), // "unsetAutoConnectAgentServ"
QT_MOC_LITERAL(69, 1071, 16), // "connectAgentServ"
QT_MOC_LITERAL(70, 1088, 7), // "agentIP"
QT_MOC_LITERAL(71, 1096, 10), // "getAgentIP"
QT_MOC_LITERAL(72, 1107, 5), // "index"
QT_MOC_LITERAL(73, 1113, 15), // "getAgentAccount"
QT_MOC_LITERAL(74, 1129, 9), // "shortMode"
QT_MOC_LITERAL(75, 1139, 24), // "getAgentAvailablePayment"
QT_MOC_LITERAL(76, 1164, 19), // "getCurrAgentAccount"
QT_MOC_LITERAL(77, 1184, 20), // "getSignedAgentDetail"
QT_MOC_LITERAL(78, 1205, 21), // "agentConnectedAccount"
QT_MOC_LITERAL(79, 1227, 20), // "getSpaceLabelByIndex"
QT_MOC_LITERAL(80, 1248, 12), // "showFileList"
QT_MOC_LITERAL(81, 1261, 10), // "spaceLabel"
QT_MOC_LITERAL(82, 1272, 14), // "updateFileList"
QT_MOC_LITERAL(83, 1287, 15), // "sendTransaction"
QT_MOC_LITERAL(84, 1303, 8), // "receiver"
QT_MOC_LITERAL(85, 1312, 6), // "amount"
QT_MOC_LITERAL(86, 1319, 20), // "applyForAgentService"
QT_MOC_LITERAL(87, 1340, 12), // "agentAccount"
QT_MOC_LITERAL(88, 1353, 18), // "cancelAgentService"
QT_MOC_LITERAL(89, 1372, 11), // "createSpace"
QT_MOC_LITERAL(90, 1384, 9), // "spaceSize"
QT_MOC_LITERAL(91, 1394, 15), // "showDownloadDlg"
QT_MOC_LITERAL(92, 1410, 7), // "isShare"
QT_MOC_LITERAL(93, 1418, 11), // "getSpaceIdx"
QT_MOC_LITERAL(94, 1430, 18), // "getFileNameByIndex"
QT_MOC_LITERAL(95, 1449, 9), // "fileIndex"
QT_MOC_LITERAL(96, 1459, 18), // "getFileSizeByIndex"
QT_MOC_LITERAL(97, 1478, 10), // "spaceIndex"
QT_MOC_LITERAL(98, 1489, 19), // "downloadFileByIndex"
QT_MOC_LITERAL(99, 1509, 8), // "filePath"
QT_MOC_LITERAL(100, 1518, 17), // "getDirPathFromUrl"
QT_MOC_LITERAL(101, 1536, 3), // "url"
QT_MOC_LITERAL(102, 1540, 17), // "uploadFileByIndex"
QT_MOC_LITERAL(103, 1558, 18), // "shareFileToAccount"
QT_MOC_LITERAL(104, 1577, 9), // "startTime"
QT_MOC_LITERAL(105, 1587, 8), // "stopTime"
QT_MOC_LITERAL(106, 1596, 5), // "price"
QT_MOC_LITERAL(107, 1602, 14), // "getSharingInfo"
QT_MOC_LITERAL(108, 1617, 11), // "sharingCode"
QT_MOC_LITERAL(109, 1629, 13), // "payforSharing"
QT_MOC_LITERAL(110, 1643, 12), // "refreshMails"
QT_MOC_LITERAL(111, 1656, 12), // "getMailTitle"
QT_MOC_LITERAL(112, 1669, 13), // "getMailSender"
QT_MOC_LITERAL(113, 1683, 16), // "getMailTimeStamp"
QT_MOC_LITERAL(114, 1700, 14), // "getMailContent"
QT_MOC_LITERAL(115, 1715, 11), // "sendNewMail"
QT_MOC_LITERAL(116, 1727, 5), // "title"
QT_MOC_LITERAL(117, 1733, 7), // "content"
QT_MOC_LITERAL(118, 1741, 15), // "fileSharingCode"
QT_MOC_LITERAL(119, 1757, 8), // "accounts"
QT_MOC_LITERAL(120, 1766, 9), // "lockState"
QT_MOC_LITERAL(121, 1776, 13), // "connectedServ"
QT_MOC_LITERAL(122, 1790, 9), // "atService"
QT_MOC_LITERAL(123, 1800, 7), // "busying"
QT_MOC_LITERAL(124, 1808, 16), // "currAgentAccount"
QT_MOC_LITERAL(125, 1825, 16), // "currAgentPayment"
QT_MOC_LITERAL(126, 1842, 15), // "currAgentTStart"
QT_MOC_LITERAL(127, 1858, 14), // "currAgentTStop"
QT_MOC_LITERAL(128, 1873, 13), // "currAgentFlow"
QT_MOC_LITERAL(129, 1887, 19), // "currAgentFlowRemain"
QT_MOC_LITERAL(130, 1907, 10), // "mainShowed"
QT_MOC_LITERAL(131, 1918, 10), // "totalSpace"
QT_MOC_LITERAL(132, 1929, 9), // "usedSpace"
QT_MOC_LITERAL(133, 1939, 12), // "currentSpace"
QT_MOC_LITERAL(134, 1952, 15), // "currentSpaceIdx"
QT_MOC_LITERAL(135, 1968, 14), // "currentFileIdx"
QT_MOC_LITERAL(136, 1983, 12), // "transmitting"
QT_MOC_LITERAL(137, 1996, 12), // "transmitRate"
QT_MOC_LITERAL(138, 2009, 17), // "sharingInfoSharer"
QT_MOC_LITERAL(139, 2027, 19), // "sharingInfoFileName"
QT_MOC_LITERAL(140, 2047, 20), // "sharingInfoStartTime"
QT_MOC_LITERAL(141, 2068, 19), // "sharingInfoStopTime"
QT_MOC_LITERAL(142, 2088, 16), // "sharingInfoPrice"
QT_MOC_LITERAL(143, 2105, 14) // "currentMailIdx"

    },
    "MainLoop\0accountsChanged\0\0count\0"
    "lockChanged\0lock\0connectedServChanged\0"
    "serviceStateChanged\0uiStatusChanged\0"
    "newStatus\0currAgentAccountChanged\0"
    "currAgentPaymentChanged\0currAgentTStartChanged\0"
    "currAgentTStopChanged\0currAgentFlowChanged\0"
    "currAgentFlowRemainChanged\0accountChanged\0"
    "account\0balanceChanged\0balance\0"
    "mainWinStateChanged\0totalSpaceChanged\0"
    "spaceTotal\0usedSpaceChanged\0spaceUsed\0"
    "currentSpaceChanged\0currSpaceIndex\0"
    "currentFileIdxChanged\0transmittingChanged\0"
    "category\0transmitRateChanged\0rate\0"
    "sharingCodeChanged\0sharingInfoSharerChanged\0"
    "sharingInfoFileNameChanged\0"
    "sharingInfoStartTimeChanged\0"
    "sharingInfoStopTimeChanged\0"
    "sharingInfoPriceChanged\0currentMailIdxChanged\0"
    "showMsgBoxSig\0msg\0dlgType\0closeMsgBoxSig\0"
    "refreshFilesSig\0space\0showTranmitRate\0"
    "refreshFilesSigConn\0updateTranmitRate\0"
    "setLanguage\0language\0getLanguage\0"
    "showMsgBox\0closeMsgBox\0showAgentConnWindow\0"
    "autoConnectAgent\0ip\0showMainWindow\0"
    "initAccounts\0newAccount\0passwd\0"
    "setDefaultAccount\0copyToClipboard\0"
    "text\0getAgentInfo\0verifyPassword\0"
    "password\0getAutoConnectAgentServ\0"
    "setAutoConnectAgentServ\0"
    "unsetAutoConnectAgentServ\0connectAgentServ\0"
    "agentIP\0getAgentIP\0index\0getAgentAccount\0"
    "shortMode\0getAgentAvailablePayment\0"
    "getCurrAgentAccount\0getSignedAgentDetail\0"
    "agentConnectedAccount\0getSpaceLabelByIndex\0"
    "showFileList\0spaceLabel\0updateFileList\0"
    "sendTransaction\0receiver\0amount\0"
    "applyForAgentService\0agentAccount\0"
    "cancelAgentService\0createSpace\0spaceSize\0"
    "showDownloadDlg\0isShare\0getSpaceIdx\0"
    "getFileNameByIndex\0fileIndex\0"
    "getFileSizeByIndex\0spaceIndex\0"
    "downloadFileByIndex\0filePath\0"
    "getDirPathFromUrl\0url\0uploadFileByIndex\0"
    "shareFileToAccount\0startTime\0stopTime\0"
    "price\0getSharingInfo\0sharingCode\0"
    "payforSharing\0refreshMails\0getMailTitle\0"
    "getMailSender\0getMailTimeStamp\0"
    "getMailContent\0sendNewMail\0title\0"
    "content\0fileSharingCode\0accounts\0"
    "lockState\0connectedServ\0atService\0"
    "busying\0currAgentAccount\0currAgentPayment\0"
    "currAgentTStart\0currAgentTStop\0"
    "currAgentFlow\0currAgentFlowRemain\0"
    "mainShowed\0totalSpace\0usedSpace\0"
    "currentSpace\0currentSpaceIdx\0"
    "currentFileIdx\0transmitting\0transmitRate\0"
    "sharingInfoSharer\0sharingInfoFileName\0"
    "sharingInfoStartTime\0sharingInfoStopTime\0"
    "sharingInfoPrice\0currentMailIdx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainLoop[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      85,   14, // methods
      28,  664, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  439,    2, 0x06 /* Public */,
       4,    1,  442,    2, 0x06 /* Public */,
       6,    0,  445,    2, 0x06 /* Public */,
       7,    0,  446,    2, 0x06 /* Public */,
       8,    1,  447,    2, 0x06 /* Public */,
      10,    0,  450,    2, 0x06 /* Public */,
      11,    0,  451,    2, 0x06 /* Public */,
      12,    0,  452,    2, 0x06 /* Public */,
      13,    0,  453,    2, 0x06 /* Public */,
      14,    0,  454,    2, 0x06 /* Public */,
      15,    0,  455,    2, 0x06 /* Public */,
      16,    1,  456,    2, 0x06 /* Public */,
      18,    1,  459,    2, 0x06 /* Public */,
      20,    0,  462,    2, 0x06 /* Public */,
      21,    1,  463,    2, 0x06 /* Public */,
      23,    1,  466,    2, 0x06 /* Public */,
      25,    1,  469,    2, 0x06 /* Public */,
      27,    0,  472,    2, 0x06 /* Public */,
      28,    1,  473,    2, 0x06 /* Public */,
      30,    1,  476,    2, 0x06 /* Public */,
      32,    0,  479,    2, 0x06 /* Public */,
      33,    0,  480,    2, 0x06 /* Public */,
      34,    0,  481,    2, 0x06 /* Public */,
      35,    0,  482,    2, 0x06 /* Public */,
      36,    0,  483,    2, 0x06 /* Public */,
      37,    0,  484,    2, 0x06 /* Public */,
      38,    0,  485,    2, 0x06 /* Public */,
      39,    2,  486,    2, 0x06 /* Public */,
      42,    0,  491,    2, 0x06 /* Public */,
      43,    1,  492,    2, 0x06 /* Public */,
      43,    0,  495,    2, 0x26 /* Public | MethodCloned */,
      45,    1,  496,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      46,    1,  499,    2, 0x08 /* Private */,
      47,    1,  502,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      48,    1,  505,    2, 0x02 /* Public */,
      50,    0,  508,    2, 0x02 /* Public */,
      51,    2,  509,    2, 0x02 /* Public */,
      52,    0,  514,    2, 0x02 /* Public */,
      53,    0,  515,    2, 0x02 /* Public */,
      54,    1,  516,    2, 0x02 /* Public */,
      56,    0,  519,    2, 0x02 /* Public */,
      57,    0,  520,    2, 0x02 /* Public */,
      58,    1,  521,    2, 0x02 /* Public */,
      60,    1,  524,    2, 0x02 /* Public */,
      61,    1,  527,    2, 0x02 /* Public */,
      63,    0,  530,    2, 0x02 /* Public */,
      64,    2,  531,    2, 0x02 /* Public */,
      66,    0,  536,    2, 0x02 /* Public */,
      67,    1,  537,    2, 0x02 /* Public */,
      68,    0,  540,    2, 0x02 /* Public */,
      69,    1,  541,    2, 0x02 /* Public */,
      71,    1,  544,    2, 0x02 /* Public */,
      73,    2,  547,    2, 0x02 /* Public */,
      73,    1,  552,    2, 0x22 /* Public | MethodCloned */,
      75,    1,  555,    2, 0x02 /* Public */,
      76,    0,  558,    2, 0x02 /* Public */,
      77,    1,  559,    2, 0x02 /* Public */,
      77,    0,  562,    2, 0x22 /* Public | MethodCloned */,
      79,    1,  563,    2, 0x02 /* Public */,
      80,    1,  566,    2, 0x02 /* Public */,
      80,    0,  569,    2, 0x22 /* Public | MethodCloned */,
      82,    1,  570,    2, 0x02 /* Public */,
      82,    0,  573,    2, 0x22 /* Public | MethodCloned */,
      83,    3,  574,    2, 0x02 /* Public */,
      86,    1,  581,    2, 0x02 /* Public */,
      88,    1,  584,    2, 0x02 /* Public */,
      89,    2,  587,    2, 0x02 /* Public */,
      91,    1,  592,    2, 0x02 /* Public */,
      91,    0,  595,    2, 0x22 /* Public | MethodCloned */,
      93,    1,  596,    2, 0x02 /* Public */,
      93,    0,  599,    2, 0x22 /* Public | MethodCloned */,
      94,    1,  600,    2, 0x02 /* Public */,
      96,    2,  603,    2, 0x02 /* Public */,
      98,    3,  608,    2, 0x02 /* Public */,
     100,    1,  615,    2, 0x02 /* Public */,
     102,    2,  618,    2, 0x02 /* Public */,
     103,    6,  623,    2, 0x02 /* Public */,
     107,    1,  636,    2, 0x02 /* Public */,
     109,    1,  639,    2, 0x02 /* Public */,
     110,    0,  642,    2, 0x02 /* Public */,
     111,    1,  643,    2, 0x02 /* Public */,
     112,    1,  646,    2, 0x02 /* Public */,
     113,    1,  649,    2, 0x02 /* Public */,
     114,    1,  652,    2, 0x02 /* Public */,
     115,    4,  655,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   22,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   40,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::Int,   31,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   17,   65,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,   70,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::Int, QMetaType::Bool,   72,   74,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   78,
    QMetaType::QString,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::QString,   81,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   81,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   84,   85,   59,
    QMetaType::QString, QMetaType::QString,   87,
    QMetaType::QString, QMetaType::QString,   87,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   81,   90,
    QMetaType::Void, QMetaType::Bool,   92,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   81,
    QMetaType::Int,
    QMetaType::QString, QMetaType::Int,   95,
    QMetaType::QString, QMetaType::Int, QMetaType::Int,   97,   95,
    QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   99,   97,   95,
    QMetaType::QString, QMetaType::QString,  101,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   99,   97,
    QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   97,   95,   84,  104,  105,  106,
    QMetaType::QString, QMetaType::QString,  108,
    QMetaType::QString, QMetaType::QString,  108,
    QMetaType::QString,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::Int,   72,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  116,   84,  117,  118,

 // properties: name, type, flags
     119, QMetaType::QStringList, 0x00495003,
     120, QMetaType::Bool, 0x00495003,
     121, QMetaType::Bool, 0x00495003,
     122, QMetaType::Bool, 0x00495003,
     123, QMetaType::Bool, 0x00495003,
     124, QMetaType::QString, 0x00495001,
     125, QMetaType::QString, 0x00495001,
     126, QMetaType::QString, 0x00495001,
     127, QMetaType::QString, 0x00495001,
     128, QMetaType::QString, 0x00495001,
     129, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495003,
      19, QMetaType::QString, 0x00495003,
     130, QMetaType::Bool, 0x00495003,
     131, QMetaType::QString, 0x00495003,
     132, QMetaType::QString, 0x00495003,
     133, QMetaType::QString, 0x00495003,
     134, QMetaType::Int, 0x00095103,
     135, QMetaType::Int, 0x00495103,
     136, QMetaType::Bool, 0x00495003,
     137, QMetaType::Bool, 0x00495001,
     108, QMetaType::QString, 0x00495003,
     138, QMetaType::QString, 0x00495003,
     139, QMetaType::QString, 0x00495003,
     140, QMetaType::QString, 0x00495003,
     141, QMetaType::QString, 0x00495003,
     142, QMetaType::QString, 0x00495003,
     143, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
       0,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,

       0        // eod
};

void MainLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainLoop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->lockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->connectedServChanged(); break;
        case 3: _t->serviceStateChanged(); break;
        case 4: _t->uiStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->currAgentAccountChanged(); break;
        case 6: _t->currAgentPaymentChanged(); break;
        case 7: _t->currAgentTStartChanged(); break;
        case 8: _t->currAgentTStopChanged(); break;
        case 9: _t->currAgentFlowChanged(); break;
        case 10: _t->currAgentFlowRemainChanged(); break;
        case 11: _t->accountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->balanceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->mainWinStateChanged(); break;
        case 14: _t->totalSpaceChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 15: _t->usedSpaceChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 16: _t->currentSpaceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->currentFileIdxChanged(); break;
        case 18: _t->transmittingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->transmitRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->sharingCodeChanged(); break;
        case 21: _t->sharingInfoSharerChanged(); break;
        case 22: _t->sharingInfoFileNameChanged(); break;
        case 23: _t->sharingInfoStartTimeChanged(); break;
        case 24: _t->sharingInfoStopTimeChanged(); break;
        case 25: _t->sharingInfoPriceChanged(); break;
        case 26: _t->currentMailIdxChanged(); break;
        case 27: _t->showMsgBoxSig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->closeMsgBoxSig(); break;
        case 29: _t->refreshFilesSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->refreshFilesSig(); break;
        case 31: _t->showTranmitRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->refreshFilesSigConn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->updateTranmitRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->setLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: { QString _r = _t->getLanguage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->showMsgBox((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->closeMsgBox(); break;
        case 38: _t->showAgentConnWindow(); break;
        case 39: _t->autoConnectAgent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->showMainWindow(); break;
        case 41: { QString _r = _t->initAccounts();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 42: { QString _r = _t->newAccount((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setDefaultAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->copyToClipboard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: { QString _r = _t->getAgentInfo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->verifyPassword((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->getAutoConnectAgentServ();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->setAutoConnectAgentServ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->unsetAutoConnectAgentServ(); break;
        case 50: { QString _r = _t->connectAgentServ((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: { QString _r = _t->getAgentIP((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 52: { QString _r = _t->getAgentAccount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 53: { QString _r = _t->getAgentAccount((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 54: { QString _r = _t->getAgentAvailablePayment((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 55: { QString _r = _t->getCurrAgentAccount();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 56: { QString _r = _t->getSignedAgentDetail((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 57: { QString _r = _t->getSignedAgentDetail();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 58: { QString _r = _t->getSpaceLabelByIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 59: { QString _r = _t->showFileList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 60: { QString _r = _t->showFileList();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 61: { QString _r = _t->updateFileList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 62: { QString _r = _t->updateFileList();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { QString _r = _t->sendTransaction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->applyForAgentService((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: { QString _r = _t->cancelAgentService((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->createSpace((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->showDownloadDlg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->showDownloadDlg(); break;
        case 69: { int _r = _t->getSpaceIdx((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 70: { int _r = _t->getSpaceIdx();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: { QString _r = _t->getFileNameByIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 72: { QString _r = _t->getFileSizeByIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 73: { QString _r = _t->downloadFileByIndex((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->getDirPathFromUrl((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { QString _r = _t->uploadFileByIndex((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 76: { QString _r = _t->shareFileToAccount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 77: { QString _r = _t->getSharingInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 78: { QString _r = _t->payforSharing((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 79: { QString _r = _t->refreshMails();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 80: { QString _r = _t->getMailTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 81: { QString _r = _t->getMailSender((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 82: { QString _r = _t->getMailTimeStamp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 83: { QString _r = _t->getMailContent((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 84: { QString _r = _t->sendNewMail((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainLoop::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::accountsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::lockChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::connectedServChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::serviceStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::uiStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currAgentAccountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currAgentPaymentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currAgentTStartChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currAgentTStopChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currAgentFlowChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currAgentFlowRemainChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::accountChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::balanceChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::mainWinStateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::totalSpaceChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::usedSpaceChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currentSpaceChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currentFileIdxChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::transmittingChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::transmitRateChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::sharingCodeChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::sharingInfoSharerChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::sharingInfoFileNameChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::sharingInfoStartTimeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::sharingInfoStopTimeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::sharingInfoPriceChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::currentMailIdxChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::showMsgBoxSig)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::closeMsgBoxSig)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::refreshFilesSig)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MainLoop::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLoop::showTranmitRate)) {
                *result = 31;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainLoop *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->m_QAccounts; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->m_LockFlag; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->m_HasConnFlag; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->m_AtServiceFlag; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->m_Busying; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getCurrAgentAccount(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getCurrAgentPayment(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getCurrAgentTStart(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getCurrAgentTStop(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getCurrAgentFlow(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getCurrAgentFlowRemain(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->m_AccountInUse; break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->m_AccBalance; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->m_MainWindowShowedFlag; break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->m_TotalSpace; break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->m_UsedSpace; break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->m_CurrentSpace; break;
        case 17: *reinterpret_cast< int*>(_v) = _t->getSpaceIdx(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->m_CurrentFileIdx; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->m_TransmittingFlag; break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getTransmitRate(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->m_SharingCode; break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->m_SharingInfoSharer; break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->m_SharingInfoFileName; break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->m_SharingInfoStartTime; break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->m_SharingInfoStopTime; break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->m_SharingInfoPrice; break;
        case 27: *reinterpret_cast< int*>(_v) = _t->m_CurrentMailIdx; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainLoop *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_QAccounts != *reinterpret_cast< QStringList*>(_v)) {
                _t->m_QAccounts = *reinterpret_cast< QStringList*>(_v);
            }
            break;
        case 1:
            if (_t->m_LockFlag != *reinterpret_cast< bool*>(_v)) {
                _t->m_LockFlag = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->lockChanged(_t->m_LockFlag);
            }
            break;
        case 2:
            if (_t->m_HasConnFlag != *reinterpret_cast< bool*>(_v)) {
                _t->m_HasConnFlag = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->connectedServChanged();
            }
            break;
        case 3:
            if (_t->m_AtServiceFlag != *reinterpret_cast< bool*>(_v)) {
                _t->m_AtServiceFlag = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->serviceStateChanged();
            }
            break;
        case 4:
            if (_t->m_Busying != *reinterpret_cast< bool*>(_v)) {
                _t->m_Busying = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 11:
            if (_t->m_AccountInUse != *reinterpret_cast< QString*>(_v)) {
                _t->m_AccountInUse = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->accountChanged(_t->m_AccountInUse);
            }
            break;
        case 12:
            if (_t->m_AccBalance != *reinterpret_cast< QString*>(_v)) {
                _t->m_AccBalance = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->balanceChanged(_t->m_AccBalance);
            }
            break;
        case 13:
            if (_t->m_MainWindowShowedFlag != *reinterpret_cast< bool*>(_v)) {
                _t->m_MainWindowShowedFlag = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->mainWinStateChanged();
            }
            break;
        case 14:
            if (_t->m_TotalSpace != *reinterpret_cast< QString*>(_v)) {
                _t->m_TotalSpace = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 15:
            if (_t->m_UsedSpace != *reinterpret_cast< QString*>(_v)) {
                _t->m_UsedSpace = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 16:
            if (_t->m_CurrentSpace != *reinterpret_cast< QString*>(_v)) {
                _t->m_CurrentSpace = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 17: _t->setCurrentSpaceIdx(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->setCurrentFileIdx(*reinterpret_cast< int*>(_v)); break;
        case 19:
            if (_t->m_TransmittingFlag != *reinterpret_cast< bool*>(_v)) {
                _t->m_TransmittingFlag = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 21:
            if (_t->m_SharingCode != *reinterpret_cast< QString*>(_v)) {
                _t->m_SharingCode = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sharingCodeChanged();
            }
            break;
        case 22:
            if (_t->m_SharingInfoSharer != *reinterpret_cast< QString*>(_v)) {
                _t->m_SharingInfoSharer = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sharingInfoSharerChanged();
            }
            break;
        case 23:
            if (_t->m_SharingInfoFileName != *reinterpret_cast< QString*>(_v)) {
                _t->m_SharingInfoFileName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sharingInfoFileNameChanged();
            }
            break;
        case 24:
            if (_t->m_SharingInfoStartTime != *reinterpret_cast< QString*>(_v)) {
                _t->m_SharingInfoStartTime = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sharingInfoStartTimeChanged();
            }
            break;
        case 25:
            if (_t->m_SharingInfoStopTime != *reinterpret_cast< QString*>(_v)) {
                _t->m_SharingInfoStopTime = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sharingInfoStopTimeChanged();
            }
            break;
        case 26:
            if (_t->m_SharingInfoPrice != *reinterpret_cast< QString*>(_v)) {
                _t->m_SharingInfoPrice = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->sharingInfoPriceChanged();
            }
            break;
        case 27: _t->setCurrentMailIdx(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MainLoop::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MainLoop.data,
    qt_meta_data_MainLoop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainLoop.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 85)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 85;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 28;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainLoop::accountsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainLoop::lockChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainLoop::connectedServChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainLoop::serviceStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainLoop::uiStatusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainLoop::currAgentAccountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainLoop::currAgentPaymentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainLoop::currAgentTStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainLoop::currAgentTStopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainLoop::currAgentFlowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainLoop::currAgentFlowRemainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainLoop::accountChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainLoop::balanceChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainLoop::mainWinStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainLoop::totalSpaceChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainLoop::usedSpaceChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainLoop::currentSpaceChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainLoop::currentFileIdxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MainLoop::transmittingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainLoop::transmitRateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MainLoop::sharingCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MainLoop::sharingInfoSharerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainLoop::sharingInfoFileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MainLoop::sharingInfoStartTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MainLoop::sharingInfoStopTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MainLoop::sharingInfoPriceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void MainLoop::currentMailIdxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MainLoop::showMsgBoxSig(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MainLoop::closeMsgBoxSig()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void MainLoop::refreshFilesSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 31
void MainLoop::showTranmitRate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
