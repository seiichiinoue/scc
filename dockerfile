#利用するUbuntuのイメージ
FROM ubuntu:14.04　

# gcc諸々をインストール
RUN sudo apt-get update
RUN sudo apt-get -y install gcc make git binutils libc6-dev

# vimをインストール
RUN sudo apt-get -y install vim

# locale
RUN apt-get -y install language-pack-ja-base language-pack-ja

# env
ENV LANG ja_JP.UTF-8 

WORKDIR /workspace/

