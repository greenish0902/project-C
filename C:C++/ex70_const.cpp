#include <stdio.h>

enum EGameState {
  GAMESTATE_GAMEOVER,
  GAMESTATE_MAINMENU,
  GAMESTATE_PLAYING,
  GAMESTATE_PAUSED,
};

int main() {
  EGameState currState = GAMESTATE_MAINMENU;

  while (true) {
    switch (currState) {
      case GAMESTATE_MAINMENU:
        break;
      case GAMESTATE_PLAYING:
        break;
      case GAMESTATE_PAUSED:
        break;
      case GAMESTATE_GAMEOVER:
        break;
    }
  }
}