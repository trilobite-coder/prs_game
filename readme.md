# C Application

## overview

* * *

Please add relevant information about your application.

## preview

* * *

Please add an image for the user to see.

## tooling

* * *

The targeted audience we are building for is **Windows 10**, **Mac OSX**, **ChromeOS**, and **Linux**
users. This project uses [Meson](https://mesonbuild.com/) `1.0.0` and newer.

This project is using *Meson build system*, so be sure to review
[The Absolute Beginner's Guide to Installing and Using Meson](https://mesonbuild.com/SimpleStart.html)
then see if you can build this project to prove that everything is all
setup and ready to go. :)

## Setup, Compile and Install

* * *

Firstly the users should set up a project build
directory before compiling:

```console
meson setup builddir
```

The next step is to compile the target of the
configured Meson project the app in this case:

```console
meson compile -C builddir
```

Then we install the application on the host system
just like so:

```console
meson install -C builddir
```

And finally we run this cool application, just
as easy as typing the following, and for a list
of supported commands pass the `--help` option
to the program.

```console
prog
```

## contact

* * *

If you want to contact me and have a few questions
regarding the solutions in the programming you can
find a method on my [website](https://troglodytes.code.blog/contact/).
