const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('String: ', function (s) {
    var i=0;
    var r="";
    for(i=s.length-1;i>-1;i--){
        r+=s[i];
    }
    console.log(`${r}`);
    rl.close();
});

rl.on('close', function () {
    // console.log('');
    process.exit(0);
});