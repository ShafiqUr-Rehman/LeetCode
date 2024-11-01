/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
  let presentCount = init;

  function increment() {
    return ++presentCount;
  }

  function decrement() {
      return --presentCount;
  }

  function reset() {
      return (presentCount = init);
  }

  return { increment, decrement, reset };
};

