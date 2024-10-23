# 日本語
## 概要
このリポジトリは，以下に記述されるような内容で作成したものです．

- 個人的なプログラミングの練習
- Git/GitHubなどの使い方
- 個人的な開発

作成者 : tomoneko  
ご質問 : <tomoneko.inc@gmail.com>  

## 使用技術
- Docker
- C言語
- Java
- Python

### 使用方法

使用方法の簡単な解説です．

前提条件として，以下を要求します．  
VSCode と Docker のダウンロード，およびインストール  

#### リポジトリ取得

以下のコードを任意のディレクトリで実行します．

```
git clone this-repository-link
```

すると，以下のようなフォルダ構成になっていると思います．

```
└─ex_dev
    │  docker-compose.yml
    │  README.md
    │  
    ├─.devcontainer
    │  │  Dockerfile
    │  │  
    │  ├─dev_win
    │  │      .env
    │  │      devcontainer.json
    │  │      
    │  ├─ex_c
    │  │      devcontainer.json
    │  │      
    │  ├─ex_java
    │  │      devcontainer.json
    │  │      
    │  └─ex_python
    │          .env
    │          devcontainer.json
    │
    ├─dev_win
    │  ├─.vscode
    │  │      c_cpp_properties.json
    │  │      
    │  ├─ex
    │  │      msbox.c
    │  │      
    │  └─settings
    │          32bit-set.sh
    │          64bit-set.sh
    │
    ├─ex_c
    │      README.md
    │
    ├─ex_java
    │      README.md
    │
    └─ex_py
            README.md
```
#### VSCode の拡張機能のインストール

以下の拡張機能のインストールをお願いします．  
必須 
- Dev Containers  
任意
- Docker
- Japanese Language Pack for Visual Studio Code
- Remote - SSH
- Remote - SSH: Editing Configuration Files
- Remote - Tunnels
- Remote Development
- Remote Explorer
- Remote Repositories
- Remote Repositories

#### Docker + DevcontainerでDockerコンテナ内に入る

左上の *「ファイル(F)」* をクリックして，*「フォルダを開く...」*をクリック．  
次に，このクローンしたリポジトリ *「ex_dev」*に入ります．  
そして，*「Ctrl+Shift+P」*を押して，*「開発コンテナー：コンテナーで再度開く」*をクリックして，入りたいファイル名を選択します．  


# English
## Outline
This repository is created with the contents described below.

- Practicing Programing.
- Learning how to use Git/GitHub and so on.
- Developing personaly.

Made By  : tomoneko  
Question : <tomoneko.inc@gmail.com>  

## Technology
- Docker
- C_lang
- Java
- Python

### How To Use

A simple explanation of how to use it．

As prerequisites, you will need the following:
Download and install VSCode and Docker.  

#### Get This Repository

以下のコードを任意のディレクトリで実行します．

```
git clone this-repository-link
```

Then you should have a folder structure like the one below.  

```
└─ex_dev
    │  docker-compose.yml
    │  README.md
    │  
    ├─.devcontainer
    │  │  Dockerfile
    │  │  
    │  ├─dev_win
    │  │      .env
    │  │      devcontainer.json
    │  │      
    │  ├─ex_c
    │  │      devcontainer.json
    │  │      
    │  ├─ex_java
    │  │      devcontainer.json
    │  │      
    │  └─ex_python
    │          .env
    │          devcontainer.json
    │
    ├─dev_win
    │  ├─.vscode
    │  │      c_cpp_properties.json
    │  │      
    │  ├─ex
    │  │      msbox.c
    │  │      
    │  └─settings
    │          32bit-set.sh
    │          64bit-set.sh
    │
    ├─ex_c
    │      README.md
    │
    ├─ex_java
    │      README.md
    │
    └─ex_py
            README.md
```
#### VSCode の拡張機能のインストール

Please install the following extensions.  
Required  
- Dev Containers
Optional  
- Docker
- Japanese Language Pack for Visual Studio Code
- Remote - SSH
- Remote - SSH: Editing Configuration Files
- Remote - Tunnels
- Remote Development
- Remote Explorer
- Remote Repositories

####　Entering the Docker container with using Docker + Devcontainer

Click *"File (F)"* in the upper left, then click *"Open Folder..."*.
Next, enter this cloned repository *"ex_dev"*.
Then press *"Ctrl+Shift+P"*, click *"Development Container: Reopen in Container"*, and select the file name you want to enter.

Once selected, it will start up automatically. (It will take some time only the first time.)
