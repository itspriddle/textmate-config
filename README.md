Installation
============

    if [ -d Library/Application\ Support/TextMate ]; then mv Library/Application\ Support/TextMate{,.backup}; fi
    git clone git://github.com/itspriddle/textmate-config.git Library/Application\ Support/TextMate
    cd Library/Application\ Support/TextMate
    git submodule init
    git submodule update

Restart TextMate