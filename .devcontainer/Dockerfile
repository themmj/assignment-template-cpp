FROM mcr.microsoft.com/vscode/devcontainers/cpp:debian

COPY ./hooks /assignment/git-hooks
RUN chmod +x /assignment/git-hooks/post-commit
COPY .gitconfig /home/vscode/.gitconfig

