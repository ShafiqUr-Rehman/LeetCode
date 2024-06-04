/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {

let counter = 0;
let i = s.length -1;
while( i>=0 && s[i] == ' '){
i--;
};

while (i>=0  && s[i]!== " "){
counter++;
i--;
};

return counter;
    
};