cmake_minimum_required(VERSION 3.7)
project(BridgeGame)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Game.cpp Game.h Player.cpp Player.h Team.cpp Team.h HumanPlayer.cpp HumanPlayer.h Card.cpp Card.h Trick.cpp Trick.h ComputerPlayer.cpp ComputerPlayer.h Color.h Contract.h Contract.cpp Deal.cpp Deal.h CardValue.h json.hh Serializable.h Memento.cpp Memento.h misc.cpp misc.h advconsole/advconsole.unix.cpp advconsole/advconsole.h advconsole/advconsole.cpp)
add_executable(BridgeGame ${SOURCE_FILES})