//
// Created by zbb on 11/20/15.
//

#ifndef HANGMAN_HANGMANGRAPHICS_H
#define HANGMAN_HANGMANGRAPHICS_H


#include "Man.h"
#include <string>
#include <vector>
#include <QObject>

class HangMan : public QObject {
  Q_OBJECT
public:
   HangMan(Man mn, int difficulty);
  void displayPlatform();
  std::string getSecretWord();
  void guess(char guess);
  bool victory();

public slots: 
  void guessSlot(char guess);

signals:
  void updateDisplay();
    
private:
    Man man;
    std::string secretWord;
    bool* foundChars;
    std::vector<char> guessesSoFar;
    std::string selectWord(int difficulty);
    bool isGuessValid(char guess);
};


#endif //HANGMAN_HANGMANGRAPHICS_H
