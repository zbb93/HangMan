import QtQuick 2.3

Rectangle {
  id: guessButton
  color: "white"
  width: 70; height: 35

  Text {
    id: buttonLabel
    anchors.centerIn: parent
    text: "guess"
  }
}
