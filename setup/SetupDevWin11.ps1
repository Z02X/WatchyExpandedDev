# To Enable ps1 files.
# set-executionpolicy remotesigned
winget install Microsoft.VisualStudioCode
winget install --id Git.Git -e --source winget
Update-SessionEnvironment
code --install-extension platformio.platformio-ide
git clone https://github.com/Z02X/WatchyExpandedDev.git
pause
