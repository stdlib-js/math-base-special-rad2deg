<!--

@license Apache-2.0

Copyright (c) 2018 The Stdlib Authors.

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

> Convert an angle from radians to degrees.

<section class="installation">

## Installation

```bash
npm install @stdlib/math-base-special-rad2deg
```

</section>

<section class="usage">

## Usage

```javascript
var rad2deg = require( '@stdlib/math-base-special-rad2deg' );
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

```javascript
var randu = require( '@stdlib/random-base-randu' );
var TWO_PI = require( '@stdlib/constants-float64-two-pi' );
var rad2deg = require( '@stdlib/math-base-special-rad2deg' );

var r;
var d;
var i;

for ( i = 0; i < 100; i++ ) {
    r = randu() * TWO_PI;
    d = rad2deg( r );
    console.log( 'radians: %d => degrees: %d', r, d );
}
```

</section>

<!-- /.examples -->


<section class="main-repo" >

* * *

## Notice

This package is part of [stdlib][stdlib], a standard library for JavaScript and Node.js, with an emphasis on numerical and scientific computing. The library provides a collection of robust, high performance libraries for mathematics, statistics, streams, utilities, and more.

For more information on the project, filing bug reports and feature requests, and guidance on how to develop [stdlib][stdlib], see the main project [repository][stdlib].

---

## License

See [LICENSE][stdlib-license].


## Copyright

Copyright &copy; 2016-2021. The Stdlib [Authors][stdlib-authors].

</section>

<!-- /.stdlib -->

<!-- Section for all links. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->

<section class="links">

[stdlib]: https://github.com/stdlib-js/stdlib

[stdlib-authors]: https://github.com/stdlib-js/stdlib/graphs/contributors

[stdlib-license]: https://raw.githubusercontent.com/stdlib-js/math-base-special-rad2deg/main/LICENSE

</section>

<!-- /.links -->
