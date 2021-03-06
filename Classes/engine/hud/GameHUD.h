//
//  GameHUD.h
//

#import <Foundation/Foundation.h>
#import "GoText.h"
#import "Joypad.h"
#import "BitmapFont.h"
#import "Image.h"
#import "Animation.h"
#import "BatteryLevel.h"

@interface GameHUD : NSObject
{    
    GoText *go;
    
    BatteryLevel* life;
    
    int scoreValue;
    
	BitmapFont *scoreDisplay;
    
    Image *pauseLabel;
    
    Image *scorePanel;
    
    Animation *scoreArrow;
    
    Image *pauseButton;
    CGRect pauseButtonBounds;
    
    Image *shootButton;
    CGRect shootButtonBounds;
    
    Joypad *joypad;
    
    NSNumberFormatter *numberFormatter;
}

@property (nonatomic, getter = getPauseButtonBounds) CGRect pauseButtonBounds;
@property (nonatomic, getter = getShootButtonBounds) CGRect shootButtonBounds;

- (id)init;

- (void)update:(float)delta score:(int)scoreValue kill:(bool)hasKilled left:(int)batteriesLeft;

- (void)render:(uint)state;

- (CGPoint)getJoypadCenter;

- (CGRect)getJoypadBounds;

- (void)dealloc;

@end
