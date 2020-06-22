project('goblin-guide', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

# add_global_arguments('-lncurses', language : 'cpp')

exe = executable('goblin_guide', 'src/main.cpp', 'src/stdafx.h',
  'src/window/Window.cpp', 'src/window/MainWindow.cpp',
  install : true, link_args : '-lncurses')

test('basic', exe)

# curses = dependency('ncurses', required: true, disabler: false)
