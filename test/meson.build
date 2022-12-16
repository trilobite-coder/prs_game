if get_option('with_tests').enabled()
    trog_utest_dep = dependency('troglo-utest-c')

    test_exe = executable('test-prog',
        'test_cases.c',
        dependencies : [trog_utest_dep, code_dep])

    test('Execute project tests', test_exe)
endif
