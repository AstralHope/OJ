/**
 * @param {string} s
 * @return {string}
 */
var replaceSpace = function(s) {
    if (typeof s == "string" && s.length >= 0) {
        return s.split(' ').join('%20');
      }
      return '';
};
