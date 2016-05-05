RPIFW_SRCREV ?= "6832d9a431a98b640accb2b76eac38a420d7c680"
RPIFW_DATE ?= "20160503"
RPIFW_SRC_URI ?= "git://github.com/raspberrypi/firmware.git;protocol=git;branch=master"
RPIFW_S ?= "${WORKDIR}/git"

SRC_URI = "${RPIFW_SRC_URI}"
SRCREV = "${RPIFW_SRCREV}"
PV = "${RPIFW_DATE}"
