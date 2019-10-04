LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	access.c \
	acls.c \
	authenticate.c \
	backup.c \
	batch.c \
	checksum.c \
	chmod.c \
	cleanup.c \
	clientname.c \
	clientserver.c \
	compat.c \
	connection.c \
	delete.c \
	exclude.c \
	fileio.c \
	flist.c \
	generator.c \
	hashtable.c \
	hlink.c \
	io.c \
	loadparm.c \
	log.c \
	main.c \
	match.c \
	options.c \
	params.c \
	pipe.c \
	progress.c \
	receiver.c \
	rsync.c \
	sender.c \
	socket.c \
	syscall.c \
	token.c \
	uidlist.c \
	usage.c \
	util.c \
	util2.c \
	xattrs.c \
	lib/compat.c \
	lib/getaddrinfo.c \
	lib/getpass.c \
	lib/inet_ntop.c \
	lib/inet_pton.c \
	lib/md5.c \
	lib/mdfour.c \
	lib/permstring.c \
	lib/pool_alloc.c \
	lib/snprintf.c \
	lib/sysacls.c \
	lib/sysxattrs.c \
	lib/wildmatch.c \
	popt/findme.c \
	popt/popt.c \
	popt/poptconfig.c \
	popt/popthelp.c \
	popt/poptparse.c \
	zlib/adler32.c \
	zlib/compress.c \
	zlib/crc32.c \
	zlib/deflate.c \
	zlib/inffast.c \
	zlib/inflate.c \
	zlib/inftrees.c \
	zlib/trees.c \
	zlib/zutil.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/popt $(LOCAL_PATH)/zlib

LOCAL_CFLAGS := -DHAVE_CONFIG_H
LOCAL_CFLAGS += \
	-Wno-deprecated-declarations \
	-Wno-implicit-function-declaration \
	-Wno-incompatible-pointer-types \
	-Wno-int-conversion \
	-Wno-unused-variable

LOCAL_MODULE := rsync
LOCAL_MODULE_PATH := $(TARGET_OUT_OPTIONAL_EXECUTABLES)
LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)
