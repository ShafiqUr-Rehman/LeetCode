/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let counter = 0;
    let i = s.length - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] === ' ') {
        i--;
    }

    // Count the length of the last word
    while (i >= 0 && s[i] !== ' ') {
        counter++;
        i--;
    }

    return counter;
};
