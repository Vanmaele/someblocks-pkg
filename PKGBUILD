# Maintainer: Xorell <xorell@protonmail.com>
pkgname=someblocks-xorell-git
pkgver=0.4.r5.f8373cc
pkgrel=1
pkgdesc="Modular status bar blocks for somebar written in c."
arch=('x86_64')
url="https://git.sr.ht/~raphi/someblocks"
license=('GPL')
depends=('wlroots>=0.15')
makedepends=('git' 'wayland-protocols')
optdepends=('xorg-xwayland: for XWayland support')
provides=("${pkgname%-xorell-git}")
conflicts=("${pkgname%-xorell-git}")
# append #branch=wlroots-next to build against wlvroots-git
source=('git+https://git.sr.ht/~raphi/someblocks'
)

sha256sums=('SKIP'
)

prepare() {
	cd "$srcdir/${pkgname%-xorell-git}"

	# This package provides a mechanism to provide a custom config.h. Multiple
	# configuration states are determined by the presence of two files in
	# $BUILDDIR:
	#
	# config.h  config.def.h  state
	# ========  ============  =====
	# absent    absent        Initial state. The user receives a message on how
	#                         to configure this package.
	# absent    present       The user was previously made aware of the
	#                         configuration options and has not made any
	#                         configuration changes. The package is built using
	#                         default values.
	# present                 The user has supplied his or her configuration. The
	#                         file will be copied to $srcdir and used during
	#                         build.
	#
	# After this test, config.def.h is copied from $srcdir to $BUILDDIR to
	# provide an up to date template for the user.
	if [ -e "$BUILDDIR/blocks.h" ]; then
		cp "$BUILDDIR/blocks.h" .
	elif [ ! -e "$BUILDDIR/blocks.def.h" ]; then
		msg='This package can be configured in config.h. Copy the config.def.h '
		msg+='that was just placed into the package directory to config.h and '
		msg+='modify it to change the configuration. Or just leave it alone to '
		msg+='continue to use default values.'
		echo "$msg"
	fi
	cp blocks.def.h "$BUILDDIR"
}

pkgver() {
	cd "$srcdir/${pkgname%-xorell-git}"
	printf "%s" "$(git describe --long | sed 's/^v//;s/\([^-]*-\)g/r\1/;s/-/./g')"
}

build() {
	cd "$srcdir/${pkgname%-xorell-git}"
	make
}

package() {
	cd "$srcdir/${pkgname%-xorell-git}"
	make PREFIX="$pkgdir/usr/" install
}
