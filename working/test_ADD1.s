

#start declaring a function
.global	f
.ent	f
.type	f,  @function
#finishing declaring a function

#start a function
f:
addiu	$sp,	$sp,	-168
sw	$31,	164($sp)
#printing out ParameterDeclare
sw	$4,	4($sp)
lw	$t1,	4($sp)
sw	$t1,	8($sp)
li	$t1,	10
sw	$t1,	12($sp)
lw	$t0,	8($sp)
lw	$t1,	12($sp)
add	$t1,	$t0,	$t1
move	$t0,	$t1
move	$2,	$t0


#stacksize is168
lw	$31,	164($sp)
addiu	$sp,	$sp,	168
j	$ra
nop
#finishing a function




#stacksize is168
addiu	$sp,	$sp,	168
j	$ra
nop
.end	f
#finishing a function


#finishing

