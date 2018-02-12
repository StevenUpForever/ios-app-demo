# ios-app-demo

## Introduction
This is an iOS App demo mainly about social feed, focus on code structure and Cocoa Touch framework implementation. It's for my code training on programming language side `Objective-C` and iOS development side.

The main purpose of this repo is sort out knowledges mainly about:

* CocoaTouch API
* Code structure
* Objective-C knowledge
* Some advanced 3rd frameworks knowledges
* Project structure/Xcode knowledge (like Xcode config and debug, package manager etc.)

Some folders will contain their own README that explain an overview and links to knowledge points, Table of contents is:

## Get started

Clone this repo
``` bash
git clone https://github.com/StevenUpForever/iOS_App_Demo.git
```
Open it in Xcode and build by UI or `command + b`

### How to create a new repo and put in remote GitHub repo?

1. Create remote GitHub repo -> Clone to local -> create new iOS project in the cloned folder -> commit and push to Github

In this case, the repo structure is like

```
cloned_folder
    |
    ------ {YOUR_PROJECT_FOLDER}
    |            |
    |            ------{YOUR_PROJECT}
    |            |
    |            ------{YOUR_PROJECT}.xcworkspace
    |
    |
    ------ other files (README, .gitignore etc.)
```
In this case, it will have duplicate folders of cloned folder and local folder, a little bit redundancy, so an alternative solution 2 should be better

2. 
```
create local repo -> run git scripts------------> combined repo
                                    |
            create Github repo ------
```
the git command example:
``` bash
git init
git remote add origin {GITHUB_REPO}.git
git add .
git commit -am 'initial upload'
git push -u origin master
```

Project structure is like:
```
{YOUR_PROJECT_FOLDER} (also is cloned folder)
    |
    ------{YOUR_PROJECT}
    |            
    ------{YOUR_PROJECT}.xcworkspace
    |            
    ------ other files (README, .gitignore etc.)
```

