@echo off
chcp 65001 >nul
title Army3 - Push Xcode Build & Trigger IPA Compile

echo =======================================================
echo   ARMY3 - TỰ ĐỘNG ĐÈ CODE LÊN GITHUB & BUILD IPA
echo =======================================================

echo [1/5] Kiem tra Git repository...
if not exist ".git" (
    git init
    git branch -M main
    git remote add origin https://github.com/huydqph53310/iosbuild
) else (
    git remote set-url origin https://github.com/huydqph53310/iosbuild 2>nul || git remote add origin https://github.com/huydqph53310/iosbuild
    git branch -M main
)

echo [2/5] Cau hinh Git LFS...
git lfs install

echo [3/5] Stage toan bo file moi xuat tu Unity...
git add -A

echo [4/5] Tao Commit moi...
git commit -m "Auto Update iOS Xcode Build & Trigger IPA Compile"

echo [5/5] Push de code moi 100% len GitHub (Force Push)...
git push -u origin main --force

if %ERRORLEVEL% equ 0 (
    echo =======================================================
    echo   [THANH CONG] DA DAY VA DE CODE MOI LEN GITHUB!
    echo   Dang mo trinh duyet theo doi build IPA tai GitHub Actions...
    echo =======================================================
    start https://github.com/huydqph53310/iosbuild/actions
) else (
    echo =======================================================
    echo   [LOI] Push that bai! Vui long kiem tra ket noi mang hoac token.
    echo =======================================================
)
pause
