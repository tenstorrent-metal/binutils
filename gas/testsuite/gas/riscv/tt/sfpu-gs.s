	.attribute arch, "rv32i2p0_xttgs"

	# sfpload	"Jd1,Jn,Jm1"
	sfpload L0,0,0
	sfpload L3,8191,15

	# sfploadi	"Jd1,Jn,Jm1"
	sfploadi L0,-32768,0
	sfploadi L3,-8192,4

	# sfpstore	"Jn,Jd2,Jm2"
	sfpstore -4096,L0,0
	sfpstore 8191,L15,2

	# sfplut	"Jd1,Jm3"
	sfplut L0,0
	sfplut L3,4

	# sfpmuli	"Jh,Jj,Ji3"
	sfpmuli L0,0,0
	sfpmuli L3,65535,0

	# sfpaddi	"Jh,Jj,Ji3"
	sfpaddi L0,0,0
	sfpaddi L3,65535,0

	# sfpdivp2	"Jh,Jg,Jf,Ji2"
	sfpdivp2 L0,L0,-16384,0
	sfpdivp2 L3,L15,16383,0
	sfpdivp2 L0,L0,-2048,1
	sfpdivp2 L3,L15,2047,1

	# sfpexexp	"Jh,Jg,Ji4"
	sfpexexp L0,L0,0
	sfpexexp L3,L7,3

	# sfpexman	"Jh,Jg,Ji2"
	sfpexman L0,L0,0
	sfpexman L3,L15,1

	# sfpiadd	"Jh,Jg,Jf,Ji5"
	sfpiadd L0,L0,0,0
	sfpiadd L1,L2,4095,2
	sfpiadd L2,L4,-2048,4
	sfpiadd L3,L6,2047,6

	# sfpshft	"Jh,Jg,Jf,Ji2"
	sfpshft L0,L0,0,0
	sfpshft L3,L7,4095,0

	# sfpabs	"Jh,Jg,Ji2"
	sfpabs L0,L0,0
	sfpabs L3,L15,1

	# sfpand	"Jh,Jg"
	sfpand L0,L15

	# sfpor	"Jh,Jg"
	sfpor L3,L0

	# sfpnot	"Jh,Jg"
	sfpnot L2,L8

	# sfplz	"Jh,Jg,Ji6"
	sfplz L0,L0,0
	sfplz L3,L15,10

	# sfpsetexp	"Jh,Jg,Jf,Ji2"
	sfpsetexp L0,L0,0,0
	sfpsetexp L3,L7,4095,0

	# sfpsetman	"Jh,Jg,Jf,Ji2"
	sfpsetman L0,L0,0,0
	sfpsetman L3,L7,4095,0

	# sfpsetsgn	"Jh,Jg,Jf,Ji2"
	sfpsetsgn L0,L0,0,0
	sfpsetsgn L3,L7,4095,0

	# sfpmad	"Je,Ja,Jb,Jc,Jo"
	sfpmad L0,L0,L15,L0,0
	sfpmad L3,L15,L0,L15,0

	# sfpadd	"Je,Ja,Jb,Jc,Jo"
	sfpadd L0,L0,L15,L0,0
	sfpadd L3,L15,L0,L15,0

	# sfpmul	"Je,Ja,Jb,Jc,Jo"
	sfpmul L0,L0,L15,L0,0
	sfpmul L3,L15,L0,L15,0

	# sfpencc	"Jf,Ji6"
	sfpencc 4095,0
	sfpencc 4095,2
	sfpencc 4095,8
	sfpencc 4095,10

	# sfpcompc	""
	sfpcompc

	# sfppushc	""
	sfppushc

	# sfppopc	""
	sfppopc

	# sfpsetcc	"Jg,Jf,Ji1"
	sfpsetcc L0,4095,0
	sfpsetcc L15,4095,15

	# sfpmov	"Jh,Jg,Ji2"
	sfpmov L0,L0,0
	sfpmov L3,L15,1

	# ttnop		""
	ttnop

	# ttincrwc	"Jk1,Jk2,Jk3,Jk4"
	ttincrwc 0,0,0,0
	ttincrwc 63,15,15,15

	# ttadddmareg	"Js4,Js3,Js2,Js1"
	ttadddmareg 0,0,0,0
	ttadddmareg 1,63,63,63

	# ttsubdmareg	"Js4,Js3,Js2,Js1"
	ttsubdmareg 0,0,0,0
	ttsubdmareg 1,63,63,63

	# ttmuldmareg	"Js4,Js3,Js2,Js1"
	ttmuldmareg 0,0,0,0
	ttmuldmareg 1,63,63,63

	# ttsetdmareg	"Js6,Js7,Js8,Js9"
	ttsetdmareg 0,0,0,0
	ttsetdmareg 3,16383,1,127

	# ttshiftdmareg	"Js4,Js5,Js3,Js2,Js1"
	ttshiftdmareg 0,0,0,0,0
	ttshiftdmareg 1,31,63,63,63

	# ttcmpdmareg	"Js4,Js5,Js3,Js2,Js1"
	ttcmpdmareg 0,0,0,0,0
	ttcmpdmareg 1,31,63,63,63

	# ttbitwopdmareg	"Js4,Js5,Js3,Js2,Js1"
	ttbitwopdmareg 0,0,0,0,0
	ttbitwopdmareg 1,31,63,63,63

	# ttaddrcrxy	"Jsa,Jsb,Jsc,Jsd,Jse,Jsf"
	ttaddrcrxy 0,0,0,0,0,0
	ttaddrcrxy 7,63,7,7,7,63

	# ttaddrcrzw	"Jsa,Jsb,Jsc,Jsd,Jse,Jsf"
	ttaddrcrzw 0,0,0,0,0,0
	ttaddrcrzw 7,63,7,7,7,63

	# ttapool3s1	"Jss,Jsh,Jsj"
	ttapool3s1 0,0,0
	ttapool3s1 3,127,16383

	# ttapool3s2	"Jss,Jsh,Jsj"
	ttapool3s2 0,0,0
	ttapool3s2 3,127,16383

	# ttatcas	"Jsk,Jsl,Jw1,Jsn,Jso,Jsp"
	ttatcas 0,0,0,0,0,0
	ttatcas 1,15,511,3,63,63

	# ttatgetm	"Jsr"
	ttatgetm 0
	ttatgetm 16777215

	# ttatincget	"Jsk,Jsm,Jsn,Jso,Jsp"
	ttatincget 0,0,0,0,0
	ttatincget 1,15,3,63,63

	# ttatincgetptr	"Jsk,Jsq,Jsl,Jw1,Jsn,Jso,Jsp"
	ttatincgetptr 0,0,0,0,0,0,0
	ttatincgetptr 1,1,15,511,3,63,63

	# ttatrelm	"Jsr"
	ttatrelm 0
	ttatrelm 16777215

	# ttatswap	"Jsk,Jsm,Jso,Jsp"
	ttatswap 0,0,0,0
	ttatswap 1,15,63,63

	# ttcleardvalid	"Jss,Jst"
	ttcleardvalid 0,0
	ttcleardvalid 3,4194303

	# ttclrexphist	""
	ttclrexphist

	# ttconv3s1	"Jss,Jsu,Jsv,Jsw"
	ttconv3s1 0,0,0,0
	ttconv3s1 3,63,3,16383

	# ttconv3s2	"Jss,Jsu,Jsv,Jsw"
	ttconv3s2 0,0,0,0
	ttconv3s2 3,63,3,16383

	# ttdmanop	""
	ttdmanop

	# ttdotpv	"Jss,Jt1,Jsz,Jsw"
	ttdotpv 0,0,0,0
	ttdotpv 3,3,15,16383

	# ttelwadd	"Jss,Jt1,Jsz,Jsw"
	ttelwadd 0,0,0,0
	ttelwadd 3,3,15,16383

	# ttelwmul	"Jss,Jt1,Jsz,Jsw"
	ttelwmul 0,0,0,0
	ttelwmul 3,3,15,16383

	# ttelwsub	"Jss,Jt1,Jsz,Jsw"
	ttelwsub 0,0,0,0
	ttelwsub 3,3,15,16383

	# ttflushdma	"Jt0"
	ttflushdma 0
	ttflushdma 16777215

	# ttgapool	"Jss,Jt1,Jw8,Jsj"
	ttgapool 0,0,0,0
	ttgapool 3,7,7,16383

	# ttgatesrcrst	"Jt3,Jt4"
	ttgatesrcrst 0,0
	ttgatesrcrst 8388607,1

	# ttgmpool	"Jss,Jt1,Jw8,Jsw"
	ttgmpool 0,0,0,0
	ttgmpool 3,7,7,16383

	# ttincadcxy	"Jsa,Jsb,Jsc,Jsd,Jse"
	ttincadcxy 0,0,0,0,0
	ttincadcxy 7,63,7,7,7

	# ttincadczw	"Jsa,Jsb,Jsc,Jsd,Jse"
	ttincadczw 0,0,0,0,0
	ttincadczw 7,63,7,7,7

	# ttloadind	"Jt9,Jta,Jtb,Jso,Jsp"
	ttloadind 0,0,0,0,0
	ttloadind 3,255,3,63,63

	# ttloadreg	"Jtc,Jtd"
	ttloadreg 0,0
	ttloadreg 15,16383

	# ttmop	"Jtf,Jtg,Jth"
	ttmop 0,0,0
	ttmop 1,127,32767

	# ttmopcfg	"Jti"
	ttmopcfg 0
	ttmopcfg 16777215

	# ttmova2d	"Jw3,Jsz,Jw4,Jw5"
	ttmova2d 0,0,0,0
	ttmova2d 1,15,3,1023

	# ttmovb2a	"Jtn,Jsv,Jtl,Jto"
	ttmovb2a 0,0,0,0
	ttmovb2a 7,3,3,4095

	# ttmovb2d	"Jw3,Jsz,Jw4,Jw5"
	ttmovb2d 0,0,0,0
	ttmovb2d 1,15,3,1023

	# ttmovd2a	"Jw3,Jsz,Jw4,Jw5"
	ttmovd2a 0,0,0,0
	ttmovd2a 1,15,3,3

	# ttmovd2b	"Jw3,Jsz,Jw4,Jw5"
	ttmovd2b 0,0,0,0
	ttmovd2b 1,15,3,3

	# ttmovdbga2d	"Jw3,Jsz,Jw4,Jw5"
	ttmovdbga2d 0,0,0,0
	ttmovdbga2d 1,15,3,7

	# ttmpool3s1	"Jss,Jsh,Jsj"
	ttmpool3s1 0,0,0
	ttmpool3s1 3,127,16383

	# ttmpool3s2	"Jss,Jsh,Jsw"
	ttmpool3s2 0,0,0
	ttmpool3s2 3,127,16383

	# ttmvmul	"Jss,Jt1,Jsz,Jsw"
	ttmvmul 0,0,0,0
	ttmvmul 3,7,15,16383

	# ttpacr	"Jtp,Jtq,Jty,Jtr,Jts,Jtt,Jtu"
	ttpacr 0,0,0,0,0,0,0
	ttpacr 7,7,1,1,1,1,1

	# ttrareb	""
	ttrareb

	# ttrdcfg	"Ju1,Ju2"
	ttrdcfg 0,0
	ttrdcfg 255,32767

	# ttreg2flop	"Jt9,Ju3,Ju4,Ju5,Ju6,Ju7"
	ttreg2flop 0,0,0,0,0,0
	ttreg2flop 3,3,3,3,767,63

	# ttrstdma	""
	ttrstdma

	# ttsemget	"Juf"
	ttsemget 0
	ttsemget 3145727

	# ttseminit	"Jug,Juh,Jui"
	ttseminit 0,0,0
	ttseminit 63,63,12287

	# ttsempost	"Juf"
	ttsempost 0
	ttsempost 3145727

	# ttsemwait	"Jw6,Jw7,Jul"
	ttsemwait 0,0,0
	ttsemwait 511,4095,3

	# ttsetadc	"Jsa,Jum,Jun,Juo"
	ttsetadc 0,0,0,0
	ttsetadc 7,1,3,16383

	# ttsetadcxx	"Jsa,Jup,Juq"
	ttsetadcxx 0,0,0
	ttsetadcxx 7,2047,1023

	# ttsetadcxy	"Jsa,Jsb,Jsc,Jsd,Jse,Jur"
	ttsetadcxy 0,0,0,0,0,0
	ttsetadcxy 7,63,7,7,7,63

	# ttsetadczw	"Jsa,Jsb,Jsc,Jsd,Jse,Jur"
	ttsetadczw 0,0,0,0,0,0
	ttsetadczw 7,63,7,7,7,63

	# ttsetashrmh	"Jus,Jut"
	ttsetashrmh 0,0
	ttsetashrmh 8388607,1

	# ttsetashrmh0	"Jus,Jut"
	ttsetashrmh0 0,0
	ttsetashrmh0 8388607,1

	# ttsetashrmh1	"Jus,Jut"
	ttsetashrmh1 0,0
	ttsetashrmh1 8388607,1

	# ttsetashrmv	"Juu"
	ttsetashrmv 0
	ttsetashrmv 16777215

	# ttsetc16	"Juv,Juw"
	ttsetc16 0,0
	ttsetc16 255,65535

	# ttsetdvalid	"Juw"
	ttsetdvalid 0
	ttsetdvalid 65535

	# ttsetpkedgof	"Jv0,Jv1,Jv2,Jw2"
	ttsetpkedgof 0,0,0,0
	ttsetpkedgof 4095,15,15,15

	# ttsetrwc	"Jv3,Jt5,Jt6,Jt7,Jt8,Jur"
	ttsetrwc 0,0,0,0,0,0
	ttsetrwc 3,15,15,15,15,63

	# ttshiftxa	"Jv8,Jv9"
	ttshiftxa 0,0
	ttshiftxa 262143,3

	# ttstallwait	"Jw6,Jsg"
	ttstallwait 0,0
	ttstallwait 511,255

	# ttstoreind	"Jsk,Jvd,Jve,Jvf,Jtb,Jso,Jsp"
	ttstoreind 0,0,0,0,0,0,0
	ttstoreind 1,1,1,127,3,63,63

	# ttstorereg	"Jtc,Jtd"
	ttstorereg 0,0
	ttstorereg 15,16383

	# tttrnspsrca	""
	tttrnspsrca

	# ttunpacr	"Jvg,Jvh,Jvi,Jvj,Jvk,Jtr,Jvl,Jvm,Jvn,Jvo,Jvp,Jvq,Jt4"
	ttunpacr 0,0,0,0,0,0,0,0,0,0,0,0,0
 	ttunpacr 1,255,3,7,3,1,1,1,1,1,1,1,1

	# ttunpacrnop	"Jvg,Jvr"
	ttunpacrnop 0,0
	ttunpacrnop 1,1023

	# ttwrcfg	"Ju1,Jvs,Jvt"
	ttwrcfg 0,0,0
	ttwrcfg 255,1,32767

	# ttxmov	"Jvu,Jvv"
	ttxmov 0,0
	ttxmov 1,8388607

	# ttzeroacc	"Jvw,Jsz,Jsw"
	ttzeroacc 0,0,0
	ttzeroacc 31,7,16383

	# ttzerosrc	"Jvx,Jvy,Jvz,Jw0"
	ttzerosrc 0,0,0,0
	ttzerosrc 1048575,1,1,3
