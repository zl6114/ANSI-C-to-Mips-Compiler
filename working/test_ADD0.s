

#start declaring a function
.global	f
.ent	f
.type	f,  @function
#finishing declaring a function

#start a function
f:
addiu	$sp,	$sp,	-180
sw	$31,	176($sp)
#printing out ParameterDeclare
sw	$4,	4($sp)
sw	$5,	8($sp)
lw	$t1,	4($sp)
sw	$t1,	12($sp)
lw	$t1,	8($sp)
sw	$t1,	16($sp)
lw	$t0,	12($sp)
lw	$t1,	16($sp)
add	$t1,	$t0,	$t1
move	$t0,	$t1
move	$2,	$t0


#stacksize is180
lw	$31,	176($sp)
addiu	$sp,	$sp,	180
j	$ra
nop
#finishing a function




#stacksize is180
addiu	$sp,	$sp,	180
j	$ra
nop
.end	f
#finishing a function


#finishing

