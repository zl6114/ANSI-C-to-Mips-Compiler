

#start declaring a function
.global	f
.ent	f
.type	f,  @function
#finishing declaring a function

#start a function
f:
addiu	$sp,	$sp,	-256
sw	$31,	252($sp)
sw	$zero,	4($sp)
li	$t1,	10
sw	$t1,	4($sp)
sw	$zero,	8($sp)
li	$t1,	1000
sw	$t1,	8($sp)
sw	$zero,	12($sp)
li	$t1,	100
sw	$t1,	12($sp)
lw	$t1,	4($sp)
lw	$t1,	4($sp)
sw	$t1,	16($sp)
lw	$t1,	8($sp)
sw	$t1,	20($sp)
lw	$t0,	16($sp)
lw	$t1,	20($sp)
add	$t1,	$t0,	$t1
sw	$t1,	24($sp)
lw	$t1,	12($sp)
sw	$t1,	28($sp)
lw	$t0,	24($sp)
lw	$t1,	28($sp)
add	$t1,	$t0,	$t1
sw	$t1,	32($sp)
li	$t1,	1
sw	$t1,	36($sp)
lw	$t0,	32($sp)
lw	$t1,	36($sp)
add	$t1,	$t0,	$t1
sw	$t1,	4($sp)
lw	$t0,	4($sp)
move	$2,	$t0


#stacksize is256
lw	$31,	252($sp)
addiu	$sp,	$sp,	256
j	$ra
nop
#finishing a function


.end	f
#finishing

