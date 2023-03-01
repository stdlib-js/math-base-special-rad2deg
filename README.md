<!--

@license Apache-2.0

Copyright (c) 2022 The Stdlib Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

-->

# rad2deg

[![NPM version][npm-image]][npm-url] [![Build Status][test-image]][test-url] [![Coverage Status][coverage-image]][coverage-url] <!-- [![dependencies][dependencies-image]][dependencies-url] -->

> Convert an angle from radians to degrees.



<section class="usage">

## Usage

To use in Observable,

```javascript
rad2deg = require( 'https://cdn.jsdelivr.net/gh/stdlib-js/math-base-special-rad2deg@umd/browser.js' )
```

To vendor stdlib functionality and avoid installing dependency trees for Node.js, you can use the UMD server build:

```javascript
var rad2deg = require( 'path/to/vendor/umd/math-base-special-rad2deg/index.js' )
```

To include the bundle in a webpage,

```html
<script type="text/javascript" src="https://cdn.jsdelivr.net/gh/stdlib-js/math-base-special-rad2deg@umd/browser.js"></script>
```

If no recognized module system is present, access bundle contents via the global scope:

```html
<script type="text/javascript">
(function () {
    window.rad2deg;
})();
</script>
```

#### rad2deg( x )

Converts an angle from radians to degrees.

```javascript
var d = rad2deg( 3.141592653589793/2.0 );
// returns 90.0

d = rad2deg( -3.141592653589793/4.0 );
// returns -45.0

d = rad2deg( NaN );
// returns NaN
```

</section>

<!-- /.usage -->

<section class="notes">

## Notes

-   Due to finite precision, canonical values may not be returned. For example,

    ```javascript
    var d = rad2deg( 3.141592653589793/6.0 );
    // returns 29.999999999999996
    ```

</section>

<!-- /.notes -->

<section class="examples">

## Examples

<!-- eslint no-undef: "error" -->

```html
<!DOCTYPE html>
<html lang="en">
<body>
<script type="text/javascript" src="https://cdn.jsdelivr.net/gh/stdlib-js/random-base-randu@umd/browser.js"></script>
<script type="text/javascript" src="https://cdn.jsdelivr.net/gh/stdlib-js/constants-float64-two-pi@umd/browser.js"></script>
<script type="text/javascript" src="https://cdn.jsdelivr.net/gh/stdlib-js/math-base-special-rad2deg@umd/browser.js"></script>
<script type="text/javascript">
(function () {

var r;
var d;
var i;

for ( i = 0; i < 100; i++ ) {
    r = randu() * TWO_PI;
    d = rad2deg( r );
    console.log( 'radians: %d => degrees: %d', r, d );
}

})();
</script>
</body>
</html>
```

</section>

<!-- /.examples -->

<!-- C interface documentation. -->



<!-- Section for related `stdlib` packages. Do not manually edit this section, as it is automatically populated. -->

<section class="related">

* * *

## See Also

-   <span class="package-name">[`@stdlib/math-base/special/deg2rad`][@stdlib/math/base/special/deg2rad]</span><span class="delimiter">: </span><span class="description">convert an angle from degrees to radians.</span>

</section>

<!-- /.related -->

<!-- Section for all links. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->


<section class="main-repo" >

* * *

## Notice

This package is part of [stdlib][stdlib], a standard library for JavaScript and Node.js, with an emphasis on numerical and scientific computing. The library provides a collection of robust, high performance libraries for mathematics, statistics, streams, utilities, and more.

For more information on the project, filing bug reports and feature requests, and guidance on how to develop [stdlib][stdlib], see the main project [repository][stdlib].

#### Community

[![Chat][chat-image]][chat-url]

---

## License

See [LICENSE][stdlib-license].


## Copyright

Copyright &copy; 2016-2023. The Stdlib [Authors][stdlib-authors].

</section>

<!-- /.stdlib -->

<!-- Section for all links. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->

<section class="links">

[npm-image]: http://img.shields.io/npm/v/@stdlib/math-base-special-rad2deg.svg
[npm-url]: https://npmjs.org/package/@stdlib/math-base-special-rad2deg

[test-image]: https://github.com/stdlib-js/math-base-special-rad2deg/actions/workflows/test.yml/badge.svg?branch=main
[test-url]: https://github.com/stdlib-js/math-base-special-rad2deg/actions/workflows/test.yml?query=branch:main

[coverage-image]: https://img.shields.io/codecov/c/github/stdlib-js/math-base-special-rad2deg/main.svg
[coverage-url]: https://codecov.io/github/stdlib-js/math-base-special-rad2deg?branch=main

<!--

[dependencies-image]: https://img.shields.io/david/stdlib-js/math-base-special-rad2deg.svg
[dependencies-url]: https://david-dm.org/stdlib-js/math-base-special-rad2deg/main

-->

[chat-image]: https://img.shields.io/gitter/room/stdlib-js/stdlib.svg
[chat-url]: https://gitter.im/stdlib-js/stdlib/

[stdlib]: https://github.com/stdlib-js/stdlib

[stdlib-authors]: https://github.com/stdlib-js/stdlib/graphs/contributors

[umd]: https://github.com/umdjs/umd
[es-module]: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Modules

[deno-url]: https://github.com/stdlib-js/math-base-special-rad2deg/tree/deno
[umd-url]: https://github.com/stdlib-js/math-base-special-rad2deg/tree/umd
[esm-url]: https://github.com/stdlib-js/math-base-special-rad2deg/tree/esm
[branches-url]: https://github.com/stdlib-js/math-base-special-rad2deg/blob/main/branches.md

[stdlib-license]: https://raw.githubusercontent.com/stdlib-js/math-base-special-rad2deg/main/LICENSE

<!-- <related-links> -->

[@stdlib/math/base/special/deg2rad]: https://github.com/stdlib-js/math-base-special-deg2rad/tree/umd

<!-- </related-links> -->

</section>

<!-- /.links -->
