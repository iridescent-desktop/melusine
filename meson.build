project('melusine',
  'c',
  'cpp',
  version: '0.1',
  meson_version: '>=0.50')

qt5 = import('qt5')

qt			= dependency('qt5', modules: ['Core', 'Gui', 'Widgets'])
qtwaylandshellhelpers	= dependency('QtWaylandShellHelpers')

subdir('src')