/* Generated by           cobc 3.2.0 */
/* Generated from         second_test.cbl */
/* Generated at           Mar 08 2025 17:01:45 */
/* GnuCOBOL build date    Jul 28 2023 18:42:18 */
/* GnuCOBOL package date  Jul 28 2023 17:02:56 UTC */
/* Compile command        cobc -C second_test.cbl */

/* Program local variables for 'sec' */

/* Module initialization indicator */
static unsigned int	initialized = 0;

/* Module structure pointer */
static cob_module	*module = NULL;

/* Global variable pointer */
cob_global		*cob_glob_ptr;

/* Decimal structures */
cob_decimal	*d_0 = NULL;


/* LINKAGE SECTION (Items not referenced by USING clause) */
static unsigned char	*b_9 = NULL;  /* XML-NAMESPACE */
static unsigned char	*b_10 = NULL;  /* XML-NAMESPACE-PREFIX */
static unsigned char	*b_11 = NULL;  /* XML-NNAMESPACE */
static unsigned char	*b_12 = NULL;  /* XML-NNAMESPACE-PREFIX */
static unsigned char	*b_13 = NULL;  /* XML-NTEXT */
static unsigned char	*b_14 = NULL;  /* XML-TEXT */


/* Call pointers */
static cob_call_union	call_hello_world;

/* Call parameters */
cob_field		*cob_procedure_params[1];

/* Perform frame stack */
struct cob_frame	*frame_ptr;
struct cob_frame	frame_stack[255];


/* Data storage */
static int	b_2;	/* RETURN-CODE */
static cob_u8_t	b_17[1] __attribute__((aligned));	/* DEF-X */
static cob_u8_t	b_18[2] __attribute__((aligned));	/* DEF-NUM */

/* End of local data storage */


/* Fields (local) */
static cob_field f_17	= {1, b_17, &a_4};	/* DEF-X */
static cob_field f_18	= {2, b_18, &a_3};	/* DEF-NUM */

/* End of fields */

