project('goblin-guide', 'cpp',
  version : '0.2',
  default_options : ['warning_level=3'])

# Executable, add nCurses
exe = executable('goblin_guide', 'src/main.cpp', 'src/stdafx.h',
  'src/window/Window.cpp', 'src/window/MainWindow.cpp',
  'src/Settings.cpp', 'src/Settings.cpp',
  install : true, link_args : '-lncurses')

# Run test cases
test('basic', exe)

# add_global_arguments('-lncurses', language : 'cpp')
# curses = dependency('ncurses', required: true, disabler: false)
