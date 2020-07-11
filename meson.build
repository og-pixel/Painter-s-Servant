project('goblin-guide', 'cpp',
  version : '0.2',
  default_options : ['warning_level=3'])

gnome = import('gnome')

# Executable, add nCurses
exe = executable('goblin-guide', 'src/main.cpp', 'src/stdafx.h',
                 'src/window/Window.cpp', 'src/window/MainWindow.cpp',
                 'src/window/TickTackToeWindow.cpp',
                 'src/Settings.cpp',
                 install : true, link_args : '-lncurses')

# Test using Catch2
test_exe = executable('goblin-guide-tests', 'src/stdafx.h',
                      'src/window/Window.cpp', 'src/window/MainWindow.cpp',
                      'src/window/TickTackToeWindow.cpp',
                      'src/Settings.cpp', 
                      'tests/main.cpp','tests/catch.hpp',
                      install : true, link_args : '-lncurses')

# Run test cases
test('basic test', test_exe)

# add_global_arguments('-lncurses', language : 'cpp')
# curses = dependency('ncurses', required: true, disabler: false)
