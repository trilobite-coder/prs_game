code_src = files(
    'app.c')

code_lib = static_library('code_lib',
    code_src,
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('prog',
    'main.c',
    dependencies: [code_dep],
    install: true)
