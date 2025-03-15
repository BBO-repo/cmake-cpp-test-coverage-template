FROM debian:bookworm-slim

WORKDIR /workspace

RUN apt update \
  && apt -y dist-upgrade && DEBIAN_FRONTEND=noninteractive apt install -y \
  build-essential cmake gdb git lcov locales nano software-properties-common wget \
  && rm -rf /var/lib/apt/lists/*

RUN git config --global --add safe.directory '*'

RUN sed -i '/en_US.UTF-8/s/^# //g' /etc/locale.gen && locale-gen
ENV LANG en_US.UTF-8  
ENV LANGUAGE en_US:en  
ENV LC_ALL en_US.UTF-8   
