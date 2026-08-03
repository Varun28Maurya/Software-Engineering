# Git & GitHub Complete Cheat Sheet

A comprehensive reference for Git and GitHub commands.

---

# Table of Contents

1. Git Configuration
2. Repository Initialization
3. Clone Repository
4. Check Status
5. Staging Files
6. Commit Changes
7. Branching
8. Merging
9. Remote Repository
10. Push & Pull
11. Stash
12. Undo Changes
13. Tags
14. Logs & History
15. Git Diff
16. Git Reset
17. Git Revert
18. Git Clean
19. Git Ignore
20. GitHub Commands
21. SSH Setup
22. Useful Shortcuts

---

# 1. Git Configuration

Check Git version

```bash
git --version
```

Set username

```bash
git config --global user.name "Your Name"
```

Set email

```bash
git config --global user.email "your@email.com"
```

View configuration

```bash
git config --list
```

Edit configuration

```bash
git config --global --edit
```

---

# 2. Repository Initialization

Initialize a repository

```bash
git init
```

Initialize with branch

```bash
git init -b main
```

---

# 3. Clone Repository

HTTPS

```bash
git clone https://github.com/user/repository.git
```

SSH

```bash
git clone git@github.com:user/repository.git
```

Clone into folder

```bash
git clone <url> folder_name
```

---

# 4. Check Status

```bash
git status
```

Short status

```bash
git status -s
```

---

# 5. Staging Files

Stage one file

```bash
git add filename
```

Stage all files

```bash
git add .
```

Stage everything

```bash
git add -A
```

Interactive add

```bash
git add -p
```

---


Stage and commit tracked files

```bash
git commit -am "message"
```

Amend last commit

```bash
git commit --amend
```

---

# 7. Branching

List branches

```bash
git branch
```

Create branch

```bash
git branch feature
```

Switch branch

```bash
git checkout feature
```

OR

```bash
git switch feature
```

Create & switch

```bash
git checkout -b feature
```

OR

```bash
git switch -c feature
```

Rename branch

```bash
git branch -m new-name
```

Delete branch

```bash
git branch -d feature
```

Force delete

```bash
git branch -D feature
```

---

# 8. Merging

Merge branch

```bash
git merge feature
```

Abort merge

```bash
git merge --abort
```

---

# 9. Remote Repository

View remotes

```bash
git remote -v
```

Add remote

```bash
git remote add origin https://github.com/user/repository.git
```

Change remote URL

```bash
git remote set-url origin NEW_URL
```

Remove remote

```bash
git remote remove origin
```

---

# 10. Push & Pull

First push

```bash
git push -u origin main
```

Push

```bash
git push
```

Push specific branch

```bash
git push origin feature
```

Pull

```bash
git pull
```

Fetch

```bash
git fetch
```

Fetch all

```bash
git fetch --all
```

---

# 11. Stash

Save work

```bash
git stash
```

Save with message

```bash
git stash push -m "work"
```

List stash

```bash
git stash list
```

Apply stash

```bash
git stash apply
```

Pop stash

```bash
git stash pop
```

Delete stash

```bash
git stash drop
```

Clear stash

```bash
git stash clear
```

---

# 12. Undo Changes

Discard file changes

```bash
git restore file.txt
```

Restore staged file

```bash
git restore --staged file.txt
```

Checkout previous version

```bash
git checkout HEAD file.txt
```

---

# 13. Tags

Create tag

```bash
git tag v1.0
```

Annotated tag

```bash
git tag -a v1.0 -m "Release"
```

List tags

```bash
git tag
```

Push tag

```bash
git push origin v1.0
```

Push all tags

```bash
git push origin --tags
```

Delete tag

```bash
git tag -d v1.0
```

---

# 14. Logs & History

View history

```bash
git log
```

One line

```bash
git log --oneline
```

Graph

```bash
git log --graph
```

Graph with branches

```bash
git log --oneline --graph --all
```

Last commit

```bash
git log -1
```

---

# 15. Git Diff

Working directory

```bash
git diff
```

Staged changes

```bash
git diff --staged
```

Between commits

```bash
git diff COMMIT1 COMMIT2
```

---

# 16. Git Reset

Soft reset

```bash
git reset --soft HEAD~1
```

Mixed reset

```bash
git reset HEAD~1
```

Hard reset

```bash
git reset --hard HEAD~1
```

Reset to commit

```bash
git reset --hard COMMIT_ID
```

---

# 17. Git Revert

Revert commit

```bash
git revert COMMIT_ID
```

---

# 18. Git Clean

Preview

```bash
git clean -n
```

Delete untracked files

```bash
git clean -f
```

Delete directories

```bash
git clean -fd
```

---

# 19. Git Ignore

Create

```
.gitignore
```

Example

```
node_modules/
.env
dist/
*.log
*.tmp
.vscode/
.idea/
```

---

# 20. GitHub Commands

Create repository using Git

```bash
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin https://github.com/user/repository.git
git push -u origin main
```

Clone

```bash
git clone URL
```

Fork

Use GitHub website.

Sync fork

```bash
git remote add upstream URL
git fetch upstream
git merge upstream/main
```

---

# 21. SSH Setup

Generate SSH key

```bash
ssh-keygen -t ed25519 -C "your@email.com"
```

Start SSH agent

```bash
eval "$(ssh-agent -s)"
```

Add key

```bash
ssh-add ~/.ssh/id_ed25519
```

Copy public key

Linux

```bash
cat ~/.ssh/id_ed25519.pub
```

Test connection

```bash
ssh -T git@github.com
```

---

# 22. Useful Shortcuts

Current branch

```bash
git branch --show-current
```

Who changed a line

```bash
git blame file.txt
```

Search commit

```bash
git log --grep="message"
```

List tracked files

```bash
git ls-files
```

Show commit

```bash
git show COMMIT_ID
```

Remove tracked file

```bash
git rm file.txt
```

Move file

```bash
git mv old.txt new.txt
```

Cherry-pick commit

```bash
git cherry-pick COMMIT_ID
```

Bisect

```bash
git bisect start
```

Archive repository

```bash
git archive --format=zip HEAD > project.zip
```

Count commits

```bash
git rev-list --count HEAD
```

Show remote info

```bash
git remote show origin
```

---

# Common Git Workflow

```bash
git clone URL

git checkout -b feature

git add .

git commit -m "Added feature"

git push origin feature

git checkout main

git pull origin main

git merge feature

git push origin main
```

---

# Git Command Summary

| Task | Command |
|------|----------|
| Initialize | `git init` |
| Clone | `git clone URL` |
| Status | `git status` |
| Add | `git add .` |
| Commit | `git commit -m "msg"` |
| Push | `git push` |
| Pull | `git pull` |
| Fetch | `git fetch` |
| Branch | `git branch` |
| Switch | `git switch branch` |
| Merge | `git merge branch` |
| Log | `git log --oneline` |
| Diff | `git diff` |
| Stash | `git stash` |
| Reset | `git reset --hard` |
| Revert | `git revert` |
| Tag | `git tag` |
| Remote | `git remote -v` |

---

# License

This cheat sheet is free to use and modify.
