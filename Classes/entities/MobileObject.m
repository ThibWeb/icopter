#import "MobileObject.h"


@implementation MobileObject
@synthesize xCoord;
@synthesize yCoord;
@synthesize width;
@synthesize height;
@synthesize speed;
@synthesize direction;

- (id) init
{
	self= [super init];
    sharedExplosionManager = [ExplosionManager sharedExplosionManager];
    sharedFmodSoundManager = [FmodSoundManager sharedFmodSoundManager];
    screenBounds= [[UIScreen mainScreen] bounds];
    return self;
}

- (void) move//fait avancer l'engin dans sa direction
{
}

- (void) die//explosion de l'engin (animation) et suppression de l'instance
{
     [skin release]; //Image de base
	 [animation release]; //Animation
     [self dealloc];
}


- (void) render//rendu de l'engin
{
    //
}

- (void)updateSceneWithDelta:(GLfloat)aDelta {}
- (void)renderScene {}
@end
