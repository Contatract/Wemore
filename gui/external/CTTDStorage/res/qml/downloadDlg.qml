import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Controls 2.10
import QtQuick.Controls.Styles 1.4
import QtQuick.Dialogs 1.2
import ctt.GUIString 1.0

Window {
    id: downloadDlg
    width: 520
    height: 210
    flags: Qt.FramelessWindowHint | Qt.Window
    modality: Qt.ApplicationModal
    visible: false
    title: qsTr("选择下载文件 ")

    property int currentSpaceIdx: 0
    property int currentFileIdx: 0

//    MouseArea {
//        anchors.fill: parent
//        acceptedButtons: Qt.LeftButton
//        property point clickPosSetting: "0, 0"
//        onPressed: {
//            clickPosSetting = Qt.point(mouse.x, mouse.y)
//        }
//        onPositionChanged: {
//            if (pressed) {
//                var delta = Qt.point(mouse.x-clickPosSetting.x, mouse.y-clickPosSetting.y)

//                downloadDlg.setX(downloadDlg.x+delta.x)
//                downloadDlg.setY(downloadDlg.y+delta.y)
//            }
//        }
//    }

//    Component.onCompleted: {
//        fileName.text = main.getFileNameByIndex(main.currentFileIdx)
//        fileSize.text = main.getFileSizeByIndex(main.currentSpaceIdx, main.currentFileIdx)
//    }

    Rectangle {
        x: 0
        y: 0
        width: downloadDlg.width
        height: downloadDlg.height

        gradient: Gradient {
            GradientStop{ position: 0; color: "#B4F5C9" }
            GradientStop{ position: 1; color: "#79E89A" }
        }

        Rectangle {
            id: titleAreaDlg
            color: "#BB000000"
            border.color: "transparent"
            x: 0
            y: 0
            width: downloadDlg.width
            height: 40

            Button {
                id: closeDownloadDlg

                x: downloadDlg.width - 35
                y: 5
                width: 25
                height: 25

                background: Rectangle {
                    implicitHeight: closeDownloadDlg.height
                    implicitWidth:  closeDownloadDlg.width

                    color: "transparent"  //transparent background

                    BorderImage {
                        property string nomerPic: "qrc:/images/login/icon-close.png"
                        property string hoverPic: "qrc:/images/login/icon-close.png"
                        property string pressPic: "qrc:/images/login/icon-close.png"

                        anchors.fill: parent
                        source: closeDownloadDlg.hovered ? (closeDownloadDlg.pressed ? pressPic : hoverPic) : nomerPic;
                    }
                }

                onClicked: downloadDlg.hide()
            }

            Image {
                x: 15
                y: 10
                width: 20
                height: 20
                source: "qrc:/images/main/icon-space.png"
                fillMode: Image.PreserveAspectFit
            }

            Text {
                id: downloadTitle
                x: 50
                y: 5
                width: 120
                height: 30
                text: qsTr("设置下载存储路径")
                font.italic: false
                style: Text.Sunken
                font.family: "Times New Roman"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 14
                color: "lightsteelblue"
            }
        }

        Image {
            x: 20
            y: 60
            width: 50
            height: 50
            source: "qrc:/images/download/icon-file.png"
            fillMode: Image.PreserveAspectFit
        }

        Text {
            id: fileName
            objectName: "fileNameText"
            x: 65
            y: 62
            width: 200
            height: 20
            text: "fileName"
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignLeft
            font.pixelSize: 13
        }

        Row {
            x: 65
            y: 88
            Text {
                width: 65
                height: 20
                text: qsTr("文件大小:")
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
                font.pixelSize: 13
            }

            Text {
                id: fileSize
                objectName: "fileSizeText"
                width: 200
                height: 20
                text: "fileSize"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
                font.pixelSize: 13
            }
        }

        Text {
            x: 20
            y: 120
            width: 40
            height: 24
            text: qsTr("下载到 ")
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignLeft
            font.pixelSize: 13
        }

        Rectangle {
            id: downloadPathBox
            x: 65
            y: 120
            width: 335
            height: 24
            color: "transparent"
            border.color: "#55000000"
            Text {
                id: downloadPath
                text: ""
                font.pointSize: 10
                anchors.left: parent.left
                anchors.leftMargin: 5
                width: parent.width - 10
                height: parent.height
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
            }
        }

        Button {
            id: browseBtn
            x: 410
            y: 120
            width: 80
            height: 24

            Text {
                text: qsTr("浏览")
                font.pointSize: 10
                anchors.fill: parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                color: browseBtn.hovered ? "white" : "black"
            }

            background: Rectangle {
                color: "transparent"
                border.color:"#747589"
            }

            onClicked: downloadFds.open()
        }

        Rectangle {
            color: "#747589"
            border.color: "transparent"
            x: 1
            y: downloadDlg.height - titleAreaDlg.height
            width: titleAreaDlg.width - 1
            height: 1
        }

        Button {
            id: downloadConfirmBtn
            x: 320
            y: downloadDlg.height - titleAreaDlg.height + 8
            width: 80
            height: 24

            Text {
                text: qsTr("下载")
                font.pointSize: 10
                anchors.fill: parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                color: downloadConfirmBtn.hovered ? "white" : "black"
            }

            background: Rectangle {
                color: "transparent"
                border.color:"#747589"
            }

            onClicked: downloadFile()
        }

        Button {
            id: downloadCancelBtn
            x: 410
            y: downloadDlg.height - titleAreaDlg.height + 8
            width: 80
            height: 24

            Text {
                text: qsTr("取消")
                font.pointSize: 10
                anchors.fill: parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                color: downloadCancelBtn.hovered ? "white" : "black"
            }

            background: Rectangle {
                color: "transparent"
                border.color:"#747589"
            }

            onClicked: downloadDlg.hide()
        }
    }

    FileDialog {
        id: downloadFds
        modality: Qt.ApplicationModal
        title: qsTr("设置下载存储路径")
        folder: shortcuts.desktop
        selectExisting: true
        selectFolder: true
        selectMultiple: false
        //nameFilters: ["json文件 (*.json)"]
        onAccepted: {
            downloadPath.text = main.getDirPathFromUrl(downloadFds.fileUrl)
        }
    }

    function downloadFile() {
        if (downloadPath.text !== "") {
            downloadDlg.hide()
            var ret = main.downloadFileByIndex(downloadPath.text, downloadDlg.currentSpaceIdx, downloadDlg.currentFileIdx)

            downloadDlg.hide()
            downloadPath.text = ""
            if (ret !== guiString.sysMsgs(GUIString.OkMsg)) {
                main.showMsgBox(ret, GUIString.HintDlg)
            }
        }
    }
}
