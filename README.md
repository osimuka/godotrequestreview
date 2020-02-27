# GodotRequestReview
Godot module for prompting users to leave a review for your app in the App Store

__How to use in your project__

Place this module within the modules folder inside your godot source directory

_initialise variable_

```
var iphoneRequestReview
if OS.get_name() == 'iOS':
    iphoneRequestReview = GodotRequestReview.new()
```

_request review within your app logic_

```
iphoneRequestReview.requestReview()
```
