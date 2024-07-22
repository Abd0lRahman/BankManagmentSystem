import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow
{
    id: app
    visible: true
    width: 240
    height: 180
    title: qsTr("Email Verification")
    modality: Qt.ApplicationModal
    flags: Qt.Dialog | Qt.WindowStaysOnTopHint
    Column
    {
        id:cols
        anchors.fill: parent
        anchors.margins: 5
        spacing: 3
        Rectangle
        {
            id:frame
            width:parent.width
            height:25
            Text
            {
                text: qsTr("Please enter the verfication code.")
                anchors.centerIn: parent
            }
        }
        Rectangle
        {
            id:frame2
            width:parent.width
            height:25
            border.width:1
            TextInput
            {
                id: verficationCode
                anchors.fill: parent
                anchors.margins: 4
            }
        }
        Rectangle
        {
            id:frame3
            width:parent.width
            height:25
            border.width:1
            Row
            {
                id: row1
                spacing: 3
                width:parent.width
                Button
                {
                    id: verifyButton
                    text: "verify"
                    width: (parent.width - 3) / 2
                    onClicked:
                    {
                        MainAdminWin.emailVerfication(verficationCode.text)
                        app.close()
                    }
                }
                Button
                {
                    id: cancelButton
                    text: "cancel"
                    width: (parent.width - 3) / 2
                    onClicked: app.close()
                }
            }

        }
    }
}

