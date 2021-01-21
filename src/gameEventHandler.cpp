#include "gameEventHandler.hpp"

#define MOUSE_OFFSET 1024
void GameEventHandler::onKeyDown(uint32 keyCode, bool isRepeat) {
    IApplicationEventHandler::onKeyDown(keyCode, isRepeat);
}

void GameEventHandler::onKeyUp(uint32 keycode, bool isRepeat) {
    IApplicationEventHandler::onKeyUp(keycode, isRepeat);
}

void GameEventHandler::onMouseDown(uint32 mouseButton, uint8 numClicks) {
    IApplicationEventHandler::onMouseDown(mouseButton, numClicks);
}

void GameEventHandler::onMouseUp(uint32 mouseButton, uint8 numClicks) {
    IApplicationEventHandler::onMouseUp(mouseButton, numClicks);
}

void GameEventHandler::addKeyControl(uint32 keyCode, InputControl &inputControl, float weight)
{
    inputs[keyCode].push_back(std::pair<float, InputControl&>(weight,inputControl));
}

void GameEventHandler::addMouseControl(uint32 mouseButton, InputControl &inputControl, float weight)
{
    inputs[MOUSE_OFFSET+mouseButton].push_back(std::pair<float,InputControl&>(weight,inputControl));
}

