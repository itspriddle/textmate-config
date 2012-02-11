# Josh's TextMate Config

My former TextMate config. This is no longer maintained. I use Vim now, and
keep a Vim config at <https://github.com/itspriddle/vim-config>


## Included

### KeyBindings.dict

This file specifies custom keymappings for TextMate. I've defined **&#8963;d**
as `nextCompletion`, instead of **&#8963;+Escape**.


### Themes

The web preview window is sexified by Kyle Neath's
[github textmate preview](http://github.com/kneath/github_textmate_preview).


### Plugins

[AckMate](http://github.com/protocool/AckMate) is included for project-wide
searching. The [PeepOpen](http://peepcode.com/products/peepopen) plugin
for TextMate is installed. Note that PeepOpen is a paid program, but it
is well worth the money.


### Bundles

* [Android](http://github.com/peon/Android.tmbundle)
* [Bundler](http://github.com/drnic/Bundler.tmbundle.git)
* [CoffeeScript](http://github.com/jashkenas/coffee-script-tmbundle)
* [Formtastic](http://github.com/grimen/formtastic_tmbundle)
* [Git](http://github.com/timcharper/git-tmbundle)
* [GitHub](http://github.com/drnic/github-tmbundle)
* [HTML5](http://github.com/johnmuhl/html5.tmbundle)
* [Javascript Appcelerator Titanium Mobile](http://github.com/subtleGradient/JavaScript-Appcelerator-Titanium-Mobile.tmbundle)
* [JavaScript Tools](http://github.com/johnmuhl/javascript-tools-tmbundle)
* [jQuery](http://github.com/kswedberg/jquery-tmbundle)
* [LESS](http://github.com/appden/less.tmbundle)
* [mCSS](http://github.com/minimaldesign/mCSS.tmbundle)
* [rsync](http://github.com/itspriddle/tm-rsync)
* [Ruby](http://github.com/drnic/ruby-tmbundle)
* [Ruby On Rails](http://github.com/drnic/ruby-on-rails-tmbundle)
* [Shoulda](http://github.com/drnic/ruby-shoulda-tmbundle)
* [Sinatra](http://github.com/foca/sinatra-tmbundle)
* [Josh's Bundle](http://github.com/itspriddle/my-textmate-bundle) includes random
snippets and macros I've collected


## Installation

    if [ -d ~/Library/Application\ Support/TextMate ]; then mv ~/Library/Application\ Support/TextMate{,.backup}; fi
    git clone --recursive git://github.com/itspriddle/textmate-config.git ~/Library/Application\ Support/TextMate


Restart TextMate.


## Updating Submodules

    cd ~/Library/Application\ Support/TextMate
    rake update


Restart TextMate

