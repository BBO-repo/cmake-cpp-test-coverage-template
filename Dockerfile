FROM debian:bookworm-slim

WORKDIR /workspace

RUN apt update \
  && apt -y dist-upgrade && apt install -y \
  build-essential cmake gdb git lcov nano software-properties-common wget \
  && rm -rf /var/lib/apt/lists/*

RUN git config --global --add safe.directory '*'